
Pod::Spec.new do |s|
  s.name             = "XDJVendor"
  s.version          = "0.1.0"
  s.summary          = "A csh vendor"

  s.description      = <<-DESC

"just A csh vendor "
                       DESC

  s.homepage         = "https://github.com/kentchen1991/XDJVendor"
  # s.screenshots     = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
  s.license          = 'MIT'
  s.author           = { "kentchen1991" => "492122973@qq.com" }
  s.source           = { :git => "https://github.com/kentchen1991/XDJVendor.git", :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '7.0'

  s.source_files = 'XDJVendor/Classes/**/*'
  s.resource_bundles = {
    'XDJVendor' => ['XDJVendor/Assets/*.png']
  }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
end
