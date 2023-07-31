#
# Be sure to run `pod lib lint TM-PSDK.podspec` to ensure this is a
# valid spec before submitting.
#
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |spec|
  spec.name             = 'TM-PSDK'
  spec.version          = '5.8.0-2.22.0'
  spec.summary          = 'PresenceSDK is the ticket management SDK supplied by Ticketmaster.'
  spec.description      = 'Ticket management SDK provided by Ticketmaster. Used to manage tickets for your team accounts or Ticketmaster account.'
  spec.homepage         = 'https://developer.ticketmaster.com/products-and-docs/sdks/presence-sdk/'
  spec.license          = { :type => 'MIT', :file => 'LICENSE' }
  spec.author           = 'Ticketmaster'
  spec.source           = { :git => 'https://github.com/ticketmaster/iOS-PSDK-Pod.git', :tag => spec.version.to_s }

  spec.platform = :ios
  spec.ios.deployment_target = '14.0'
  spec.swift_version = '5.8.0'

  spec.vendored_frameworks = 'vendor/*.xcframework'
end

