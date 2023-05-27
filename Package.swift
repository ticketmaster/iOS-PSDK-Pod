// swift-tools-version:5.8
import PackageDescription

let package = Package(
    name: "iOS-PSDK",
    products: [
        .library(
            name: "iOS-PSDK",
            targets: [
                "PresenceSDK",
                "TicketmasterFoundation",
                "TicketmasterSecureEntry"
            ]
        ),
    ],
    dependencies: [
        // none
    ],
    targets: [
        .binaryTarget(
            name: "PresenceSDK",
            path: "vendor/PresenceSDK.xcframework"
        ),
        .binaryTarget(
            name: "TicketmasterFoundation",
            path: "vendor/TicketmasterFoundation.xcframework"
        ),
        .binaryTarget(
            name: "TicketmasterSecureEntry",
            path: "vendor/TicketmasterSecureEntry.xcframework"
        ),
    ]
)
