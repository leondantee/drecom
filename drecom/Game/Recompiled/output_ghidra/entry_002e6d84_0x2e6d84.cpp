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

// Function: entry_002e6d84
// Address: 0x2e6d84 - 0x2e6e60
void entry_002e6d84_0x2e6d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e6d84_0x2e6d84");
#endif

    switch (ctx->pc) {
        case 0x2e6da8u: goto label_2e6da8;
        case 0x2e6dc0u: goto label_2e6dc0;
        case 0x2e6dd4u: goto label_2e6dd4;
        case 0x2e6de8u: goto label_2e6de8;
        case 0x2e6e04u: goto label_2e6e04;
        default: break;
    }

    ctx->pc = 0x2e6d84u;

    // 0x2e6d84: 0x3c043ec9  lui         $a0, 0x3EC9
    ctx->pc = 0x2e6d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16073 << 16));
    // 0x2e6d88: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x2e6d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x2e6d8c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2e6d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e6d90: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6d94: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6d98: 0xc46c11f8  lwc1        $f12, 0x11F8($v1)
    ctx->pc = 0x2e6d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e6d9c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2e6d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e6da0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2E6DA0u;
    SET_GPR_U32(ctx, 31, 0x2E6DA8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2E6DA0u, 0x2E6DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DA8u;
label_2e6da8:
    // 0x2e6da8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6dac: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e6dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2e6db0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6db4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e6db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e6db8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E6DB8u;
    SET_GPR_U32(ctx, 31, 0x2E6DC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E6DB8u, 0x2E6DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DC0u;
label_2e6dc0:
    // 0x2e6dc0: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e6dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6dc4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6dc8: 0xc4ac11f8  lwc1        $f12, 0x11F8($a1)
    ctx->pc = 0x2e6dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e6dcc: 0xc05cd58  jal         func_173560
    ctx->pc = 0x2E6DCCu;
    SET_GPR_U32(ctx, 31, 0x2E6DD4u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2E6DCCu, 0x2E6DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DD4u;
label_2e6dd4:
    // 0x2e6dd4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2e6dd4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e6dd8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6ddc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e6ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e6de0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E6DE0u;
    SET_GPR_U32(ctx, 31, 0x2E6DE8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E6DE0u, 0x2E6DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DE8u;
label_2e6de8:
    // 0x2e6de8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2e6de8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e6dec: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6df0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6df4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2e6df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2e6df8: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x2e6df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x2e6dfc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2E6DFCu;
    SET_GPR_U32(ctx, 31, 0x2E6E04u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2E6DFCu, 0x2E6E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E04u;
label_2e6e04:
    // 0x2e6e04: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2e6e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2e6e08: 0x8fb000e8  lw          $s0, 0xE8($sp)
    ctx->pc = 0x2e6e08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6e0c: 0xc6010184  lwc1        $f1, 0x184($s0)
    ctx->pc = 0x2e6e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6e10: 0x8fb100e8  lw          $s1, 0xE8($sp)
    ctx->pc = 0x2e6e10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6e14: 0xc6200124  lwc1        $f0, 0x124($s1)
    ctx->pc = 0x2e6e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6e18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e6e18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e6e1c: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x2e6e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x2e6e20: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6e24: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x2e6e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6e28: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2e6e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2e6e2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e6e2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e6e30: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2e6e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6e34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e6e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e6e38: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e6e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6e3c: 0x0  nop
    ctx->pc = 0x2e6e3cu;
    // NOP
    // 0x2e6e40: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2E6E40u;
    {
        const bool branch_taken_0x2e6e40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6e40) {
            ctx->pc = 0x2E6E60u;
            return;
        }
    }
    ctx->pc = 0x2E6E48u;
    // 0x2e6e48: 0x3c1042c8  lui         $s0, 0x42C8
    ctx->pc = 0x2e6e48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)17096 << 16));
    // 0x2e6e4c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2e6e4cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e6e50: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2e6e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6e54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e6e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e6e58: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6e5c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2e6e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x2e6e60u;
}
