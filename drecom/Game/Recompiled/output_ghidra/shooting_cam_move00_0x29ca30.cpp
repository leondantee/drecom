#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: shooting_cam_move00
// Address: 0x29ca30 - 0x29cce4
void shooting_cam_move00_0x29ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("shooting_cam_move00_0x29ca30");
#endif

    switch (ctx->pc) {
        case 0x29cb84u: goto label_29cb84;
        case 0x29cba0u: goto label_29cba0;
        case 0x29cbacu: goto label_29cbac;
        case 0x29cbf4u: goto label_29cbf4;
        case 0x29cc0cu: goto label_29cc0c;
        case 0x29cc24u: goto label_29cc24;
        case 0x29cc6cu: goto label_29cc6c;
        case 0x29cc84u: goto label_29cc84;
        case 0x29cc9cu: goto label_29cc9c;
        case 0x29cca8u: goto label_29cca8;
        case 0x29ccb8u: goto label_29ccb8;
        case 0x29ccccu: goto label_29cccc;
        default: break;
    }

    ctx->pc = 0x29ca30u;

    // 0x29ca30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29ca30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29ca34: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x29ca34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x29ca38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29ca38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29ca3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29ca40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29ca40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29ca44: 0x8c310af0  lw          $s1, 0xAF0($at)
    ctx->pc = 0x29ca44u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x29ca48: 0x3c024490  lui         $v0, 0x4490
    ctx->pc = 0x29ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17552 << 16));
    // 0x29ca4c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x29ca4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x29ca50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ca50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ca54: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x29ca54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x29ca58: 0xe420adb0  swc1        $f0, -0x5250($at)
    ctx->pc = 0x29ca58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85ADB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85ADB0u, _value); } while (0); }
    // 0x29ca5c: 0x3c024554  lui         $v0, 0x4554
    ctx->pc = 0x29ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17748 << 16));
    // 0x29ca60: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x29ca60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x29ca64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ca64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ca68: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x29ca68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x29ca6c: 0xe420adb4  swc1        $f0, -0x524C($at)
    ctx->pc = 0x29ca6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85ADB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85ADB4u, _value); } while (0); }
    // 0x29ca70: 0x3c02c45c  lui         $v0, 0xC45C
    ctx->pc = 0x29ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50268 << 16));
    // 0x29ca74: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x29ca74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x29ca78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ca78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ca7c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x29ca7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x29ca80: 0xe420adb8  swc1        $f0, -0x5248($at)
    ctx->pc = 0x29ca80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85ADB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85ADB8u, _value); } while (0); }
    // 0x29ca84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29ca84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ca88: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x29ca88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x29ca8c: 0xe420adbc  swc1        $f0, -0x5244($at)
    ctx->pc = 0x29ca8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85ADBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85ADBCu, _value); } while (0); }
    // 0x29ca90: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x29ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x29ca94: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x29ca94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x29ca98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ca98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ca9c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x29ca9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x29caa0: 0xe420adc0  swc1        $f0, -0x5240($at)
    ctx->pc = 0x29caa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85ADC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85ADC0u, _value); } while (0); }
    // 0x29caa4: 0x3c024563  lui         $v0, 0x4563
    ctx->pc = 0x29caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17763 << 16));
    // 0x29caa8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x29caa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x29caac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29caacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cab0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x29cab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x29cab4: 0xe420adc4  swc1        $f0, -0x523C($at)
    ctx->pc = 0x29cab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85ADC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85ADC4u, _value); } while (0); }
    // 0x29cab8: 0x3c024508  lui         $v0, 0x4508
    ctx->pc = 0x29cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17672 << 16));
    // 0x29cabc: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x29cabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x29cac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cac4: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x29cac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x29cac8: 0xe420adc8  swc1        $f0, -0x5238($at)
    ctx->pc = 0x29cac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85ADC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85ADC8u, _value); } while (0); }
    // 0x29cacc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29caccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cad0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x29cad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x29cad4: 0xe420adcc  swc1        $f0, -0x5234($at)
    ctx->pc = 0x29cad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85ADCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85ADCCu, _value); } while (0); }
    // 0x29cad8: 0x3c024485  lui         $v0, 0x4485
    ctx->pc = 0x29cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17541 << 16));
    // 0x29cadc: 0x34429852  ori         $v0, $v0, 0x9852
    ctx->pc = 0x29cadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38994);
    // 0x29cae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cae4: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x29cae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x29cae8: 0xe420ad90  swc1        $f0, -0x5270($at)
    ctx->pc = 0x29cae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85AD90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AD90u, _value); } while (0); }
    // 0x29caec: 0x3c024541  lui         $v0, 0x4541
    ctx->pc = 0x29caecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17729 << 16));
    // 0x29caf0: 0x34427800  ori         $v0, $v0, 0x7800
    ctx->pc = 0x29caf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30720);
    // 0x29caf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29caf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29caf8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x29caf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x29cafc: 0xe420ad94  swc1        $f0, -0x526C($at)
    ctx->pc = 0x29cafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85AD94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AD94u, _value); } while (0); }
    // 0x29cb00: 0x3c02c5bd  lui         $v0, 0xC5BD
    ctx->pc = 0x29cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50621 << 16));
    // 0x29cb04: 0x3442d03d  ori         $v0, $v0, 0xD03D
    ctx->pc = 0x29cb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53309);
    // 0x29cb08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cb08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cb0c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x29cb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x29cb10: 0xe420ad98  swc1        $f0, -0x5268($at)
    ctx->pc = 0x29cb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85AD98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AD98u, _value); } while (0); }
    // 0x29cb14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29cb14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cb18: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x29cb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x29cb1c: 0xe420ad9c  swc1        $f0, -0x5264($at)
    ctx->pc = 0x29cb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85AD9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AD9Cu, _value); } while (0); }
    // 0x29cb20: 0x3c02447b  lui         $v0, 0x447B
    ctx->pc = 0x29cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17531 << 16));
    // 0x29cb24: 0x344213d8  ori         $v0, $v0, 0x13D8
    ctx->pc = 0x29cb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5080);
    // 0x29cb28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cb2c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x29cb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x29cb30: 0xe420ada0  swc1        $f0, -0x5260($at)
    ctx->pc = 0x29cb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85ADA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85ADA0u, _value); } while (0); }
    // 0x29cb34: 0x3c02456a  lui         $v0, 0x456A
    ctx->pc = 0x29cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17770 << 16));
    // 0x29cb38: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x29cb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x29cb3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cb3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cb40: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x29cb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x29cb44: 0xe420ada4  swc1        $f0, -0x525C($at)
    ctx->pc = 0x29cb44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85ADA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85ADA4u, _value); } while (0); }
    // 0x29cb48: 0x3c02c58d  lui         $v0, 0xC58D
    ctx->pc = 0x29cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50573 << 16));
    // 0x29cb4c: 0x34426af6  ori         $v0, $v0, 0x6AF6
    ctx->pc = 0x29cb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27382);
    // 0x29cb50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cb54: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x29cb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x29cb58: 0xe420ada8  swc1        $f0, -0x5258($at)
    ctx->pc = 0x29cb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85ADA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85ADA8u, _value); } while (0); }
    // 0x29cb5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29cb5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cb60: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x29cb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x29cb64: 0xe420adac  swc1        $f0, -0x5254($at)
    ctx->pc = 0x29cb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85ADACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85ADACu, _value); } while (0); }
    // 0x29cb68: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x29cb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29cb6c: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x29cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x29cb70: 0x2445ad90  addiu       $a1, $v0, -0x5270
    ctx->pc = 0x29cb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946192));
    // 0x29cb74: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x29cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x29cb78: 0x2446adb0  addiu       $a2, $v0, -0x5250
    ctx->pc = 0x29cb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946224));
    // 0x29cb7c: 0xc040c80  jal         func_103200
    ctx->pc = 0x29CB7Cu;
    SET_GPR_U32(ctx, 31, 0x29CB84u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x29CB84u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29CB84u) { return; }
    ctx->pc = 0x29CB84u;
label_29cb84:
    // 0x29cb84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x29cb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29cb88: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x29cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x29cb8c: 0x2445ada0  addiu       $a1, $v0, -0x5260
    ctx->pc = 0x29cb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946208));
    // 0x29cb90: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x29cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x29cb94: 0x2446adc0  addiu       $a2, $v0, -0x5240
    ctx->pc = 0x29cb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946240));
    // 0x29cb98: 0xc040c80  jal         func_103200
    ctx->pc = 0x29CB98u;
    SET_GPR_U32(ctx, 31, 0x29CBA0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x29CBA0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29CBA0u) { return; }
    ctx->pc = 0x29CBA0u;
label_29cba0:
    // 0x29cba0: 0x241000c8  addiu       $s0, $zero, 0xC8
    ctx->pc = 0x29cba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x29cba4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x29CBA4u;
    {
        const bool branch_taken_0x29cba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cba4) {
            ctx->pc = 0x29CCB8u;
            goto label_29ccb8;
        }
    }
    ctx->pc = 0x29CBACu;
label_29cbac:
    // 0x29cbac: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29CBACu;
    {
        const bool branch_taken_0x29cbac = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x29cbac) {
            ctx->pc = 0x29CBC8u;
            goto label_29cbc8;
        }
    }
    ctx->pc = 0x29CBB4u;
    // 0x29cbb4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x29cbb4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cbb8: 0x0  nop
    ctx->pc = 0x29cbb8u;
    // NOP
    // 0x29cbbc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x29cbbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x29cbc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29CBC0u;
    {
        const bool branch_taken_0x29cbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cbc0) {
            ctx->pc = 0x29CBE4u;
            goto label_29cbe4;
        }
    }
    ctx->pc = 0x29CBC8u;
label_29cbc8:
    // 0x29cbc8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x29cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x29cbcc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x29cbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x29cbd0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29cbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29cbd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29cbd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cbd8: 0x0  nop
    ctx->pc = 0x29cbd8u;
    // NOP
    // 0x29cbdc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x29cbdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x29cbe0: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x29cbe0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_29cbe4:
    // 0x29cbe4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x29cbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29cbe8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x29cbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29cbec: 0xc040c8c  jal         func_103230
    ctx->pc = 0x29CBECu;
    SET_GPR_U32(ctx, 31, 0x29CBF4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x29CBF4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29CBF4u) { return; }
    ctx->pc = 0x29CBF4u;
label_29cbf4:
    // 0x29cbf4: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x29cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x29cbf8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29cbf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29cbfc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x29cbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29cc00: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x29cc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29cc04: 0xc040c60  jal         func_103180
    ctx->pc = 0x29CC04u;
    SET_GPR_U32(ctx, 31, 0x29CC0Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29CC0Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29CC0Cu) { return; }
    ctx->pc = 0x29CC0Cu;
label_29cc0c:
    // 0x29cc0c: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x29cc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x29cc10: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x29cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x29cc14: 0x2445adb0  addiu       $a1, $v0, -0x5250
    ctx->pc = 0x29cc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946224));
    // 0x29cc18: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x29cc18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29cc1c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29CC1Cu;
    SET_GPR_U32(ctx, 31, 0x29CC24u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29CC24u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29CC24u) { return; }
    ctx->pc = 0x29CC24u;
label_29cc24:
    // 0x29cc24: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29CC24u;
    {
        const bool branch_taken_0x29cc24 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x29cc24) {
            ctx->pc = 0x29CC40u;
            goto label_29cc40;
        }
    }
    ctx->pc = 0x29CC2Cu;
    // 0x29cc2c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x29cc2cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cc30: 0x0  nop
    ctx->pc = 0x29cc30u;
    // NOP
    // 0x29cc34: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x29cc34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x29cc38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29CC38u;
    {
        const bool branch_taken_0x29cc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cc38) {
            ctx->pc = 0x29CC5Cu;
            goto label_29cc5c;
        }
    }
    ctx->pc = 0x29CC40u;
label_29cc40:
    // 0x29cc40: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x29cc40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x29cc44: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x29cc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x29cc48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29cc48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29cc4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29cc4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cc50: 0x0  nop
    ctx->pc = 0x29cc50u;
    // NOP
    // 0x29cc54: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x29cc54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x29cc58: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x29cc58u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_29cc5c:
    // 0x29cc5c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x29cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29cc60: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x29cc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29cc64: 0xc040c8c  jal         func_103230
    ctx->pc = 0x29CC64u;
    SET_GPR_U32(ctx, 31, 0x29CC6Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x29CC6Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29CC6Cu) { return; }
    ctx->pc = 0x29CC6Cu;
label_29cc6c:
    // 0x29cc6c: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x29cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x29cc70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29cc70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29cc74: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x29cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29cc78: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x29cc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29cc7c: 0xc040c60  jal         func_103180
    ctx->pc = 0x29CC7Cu;
    SET_GPR_U32(ctx, 31, 0x29CC84u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29CC84u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29CC84u) { return; }
    ctx->pc = 0x29CC84u;
label_29cc84:
    // 0x29cc84: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x29cc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x29cc88: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x29cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x29cc8c: 0x2445adc0  addiu       $a1, $v0, -0x5240
    ctx->pc = 0x29cc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946240));
    // 0x29cc90: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x29cc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29cc94: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29CC94u;
    SET_GPR_U32(ctx, 31, 0x29CC9Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29CC9Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29CC9Cu) { return; }
    ctx->pc = 0x29CC9Cu;
label_29cc9c:
    // 0x29cc9c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x29cc9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x29cca0: 0xc056518  jal         func_159460
    ctx->pc = 0x29CCA0u;
    SET_GPR_U32(ctx, 31, 0x29CCA8u);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x29CCA0u, 0x29CCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CCA8u;
label_29cca8:
    // 0x29cca8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29cca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29ccac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29ccacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ccb0: 0xc084964  jal         func_212590
    ctx->pc = 0x29CCB0u;
    SET_GPR_U32(ctx, 31, 0x29CCB8u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x29CCB0u, 0x29CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CCB8u;
label_29ccb8:
    // 0x29ccb8: 0x2e020320  sltiu       $v0, $s0, 0x320
    ctx->pc = 0x29ccb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)800) ? 1 : 0);
    // 0x29ccbc: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x29CCBCu;
    {
        const bool branch_taken_0x29ccbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ccbc) {
            ctx->pc = 0x29CBACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29cbac;
        }
    }
    ctx->pc = 0x29CCC4u;
    // 0x29ccc4: 0xc084934  jal         func_2124D0
    ctx->pc = 0x29CCC4u;
    SET_GPR_U32(ctx, 31, 0x29CCCCu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x29CCC4u, 0x29CCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CCCCu;
label_29cccc:
    // 0x29cccc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x29ccccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ccd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29ccd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ccd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ccd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ccd8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x29ccd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29ccdc: 0x3e00008  jr          $ra
    ctx->pc = 0x29CCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CCE4u;
}
