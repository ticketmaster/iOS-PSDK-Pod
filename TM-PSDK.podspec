#
# Be sure to run `pod lib lint PSDKPod.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'TM-PSDK'
  s.version          = '5.1.0'
  s.summary          = 'PresenceSDK is the ticket management SDK supplied by Ticketmaster.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
Ticket management SDK provided by Ticketmaster. Used to manage tickets for your team accounts or ticketmaster accounts!
                       DESC

  s.homepage         = 'https://developer.ticketmaster.com/products-and-docs/sdks/presence-sdk/'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'TylerHartzheim' => 'Tyler.Hartzheim@Ticketmaster.com' }
  s.source           = { :git => 'https://github.com/ticketmaster/iOS-PSDK-Pod.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '11.0'
  s.swift_version = '5.1'

  s.vendored_frameworks = 'vendor/*.framework'
end
