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

// Function: Vram_info_init
// Address: 0x165ec0 - 0x1660c0
void Vram_info_init_0x165ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Vram_info_init_0x165ec0");
#endif

    switch (ctx->pc) {
        case 0x165f08u: goto label_165f08;
        case 0x165f7cu: goto label_165f7c;
        case 0x165ff4u: goto label_165ff4;
        case 0x16606cu: goto label_16606c;
        default: break;
    }

    ctx->pc = 0x165ec0u;

    // 0x165ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165ec4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x165ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x165ec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165ecc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x165eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x165ed0: 0x2450ec58  addiu       $s0, $v0, -0x13A8
    ctx->pc = 0x165ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x165ed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165ed8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x165ed8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47EC58u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47EC58u, _value); } while (0);
    // 0x165edc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x165edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x165ee0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x165ee0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47EC59u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47EC59u, _value); } while (0);
    // 0x165ee4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x165ee4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47EC5Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47EC5Au, _value); } while (0);
    // 0x165ee8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x165ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x165eec: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x165eecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47EC5Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47EC5Cu, _value); } while (0);
    // 0x165ef0: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x165ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x165ef4: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x165ef4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47EC5Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47EC5Eu, _value); } while (0);
    // 0x165ef8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x165ef8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47EC60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47EC60u, _value); } while (0);
    // 0x165efc: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x165efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x165f00: 0xc05e774  jal         func_179DD0
    ctx->pc = 0x165F00u;
    SET_GPR_U32(ctx, 31, 0x165F08u);
    ctx->pc = 0x179DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179DD0u, 0x165F00u, 0x165F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F08u;
label_165f08:
    // 0x165f08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x165f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x165f0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x165f0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x165f10: 0x21eb8  dsll        $v1, $v0, 26
    ctx->pc = 0x165f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 26);
    // 0x165f14: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x165f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x165f18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x165f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x165f1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x165f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165f20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x165f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x165f24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x165f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x165f28: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x165f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x165f2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x165f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x165f30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x165f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x165f34: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x165f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x165f38: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x165f38u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x165f3c: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x165f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x165f40: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x165f40u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x165f44: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x165f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x165f48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165f4c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x165f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x165f50: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x165f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x165f54: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x165f54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x165f58: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x165f58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x165f5c: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x165f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x165f60: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x165f60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x165f64: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x165f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x165f68: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x165f68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x165f6c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x165f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x165f70: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x165f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x165f74: 0xc05e774  jal         func_179DD0
    ctx->pc = 0x165F74u;
    SET_GPR_U32(ctx, 31, 0x165F7Cu);
    ctx->pc = 0x179DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179DD0u, 0x165F74u, 0x165F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F7Cu;
label_165f7c:
    // 0x165f7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x165f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x165f80: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x165f80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x165f84: 0x21eb8  dsll        $v1, $v0, 26
    ctx->pc = 0x165f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 26);
    // 0x165f88: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x165f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x165f8c: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x165f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x165f90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x165f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x165f94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x165f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165f98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x165f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x165f9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x165f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x165fa0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x165fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x165fa4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x165fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x165fa8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x165fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x165fac: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x165facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x165fb0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x165fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x165fb4: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x165fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x165fb8: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x165fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x165fbc: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x165fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x165fc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165fc4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x165fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x165fc8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x165fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x165fcc: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x165fccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x165fd0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x165fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x165fd4: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x165fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x165fd8: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x165fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x165fdc: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x165fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x165fe0: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x165fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x165fe4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x165fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x165fe8: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x165fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x165fec: 0xc05e774  jal         func_179DD0
    ctx->pc = 0x165FECu;
    SET_GPR_U32(ctx, 31, 0x165FF4u);
    ctx->pc = 0x179DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179DD0u, 0x165FECu, 0x165FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165FF4u;
label_165ff4:
    // 0x165ff4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x165ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x165ff8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x165ff8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x165ffc: 0x21eb8  dsll        $v1, $v0, 26
    ctx->pc = 0x165ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 26);
    // 0x166000: 0x3c0200a2  lui         $v0, 0xA2
    ctx->pc = 0x166000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)162 << 16));
    // 0x166004: 0x34420e00  ori         $v0, $v0, 0xE00
    ctx->pc = 0x166004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3584);
    // 0x166008: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x166008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16600c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16600cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166010: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x166010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x166014: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x166014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x166018: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x166018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16601c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x16601cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x166020: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x166020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x166024: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x166024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x166028: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166028u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x16602c: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x16602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x166030: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x166030u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x166034: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x166034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x166038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16603c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x16603cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x166040: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x166040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x166044: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x166044u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x166048: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x166048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x16604c: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x16604cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x166050: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x166050u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x166054: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x166054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x166058: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x166058u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x16605c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x16605cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x166060: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x166060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x166064: 0xc05e774  jal         func_179DD0
    ctx->pc = 0x166064u;
    SET_GPR_U32(ctx, 31, 0x16606Cu);
    ctx->pc = 0x179DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179DD0u, 0x166064u, 0x16606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16606Cu;
label_16606c:
    // 0x16606c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x16606cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x166070: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x166070u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x166074: 0x326b8  dsll        $a0, $v1, 26
    ctx->pc = 0x166074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 26);
    // 0x166078: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x166078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x16607c: 0x34631400  ori         $v1, $v1, 0x1400
    ctx->pc = 0x16607cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5120);
    // 0x166080: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x166080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x166084: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x166084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x166088: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x166088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x16608c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x16608cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x166090: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x166090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x166094: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x166094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x166098: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x166098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16609c: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x16609cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1660a0: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1660a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1660a4: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1660a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1660a8: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x1660a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x1660ac: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1660acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1660b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1660b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1660b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1660b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1660b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1660B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1660B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1660C0u;
}
