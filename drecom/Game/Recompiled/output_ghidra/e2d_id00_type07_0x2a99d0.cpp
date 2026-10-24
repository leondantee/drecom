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

// Function: e2d_id00_type07
// Address: 0x2a99d0 - 0x2a9aa8
void e2d_id00_type07_0x2a99d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type07_0x2a99d0");
#endif

    switch (ctx->pc) {
        case 0x2a99e4u: goto label_2a99e4;
        case 0x2a9a60u: goto label_2a9a60;
        default: break;
    }

    ctx->pc = 0x2a99d0u;

    // 0x2a99d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a99d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a99d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2a99d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2a99d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2a99d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2a99dc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2A99DCu;
    SET_GPR_U32(ctx, 31, 0x2A99E4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2A99DCu, 0x2A99E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A99E4u;
label_2a99e4:
    // 0x2a99e4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2a99e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2a99e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a99e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a99ec: 0x0  nop
    ctx->pc = 0x2a99ecu;
    // NOP
    // 0x2a99f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a99f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a99f4: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2a99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2a99f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a99f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a99fc: 0x0  nop
    ctx->pc = 0x2a99fcu;
    // NOP
    // 0x2a9a00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a9a04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9a08: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2a9a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2a9a0c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2a9a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a9a10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9a14: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2a9a14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a9a18: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2a9a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2a9a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9a20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9a24: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2a9a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2a9a28: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2a9a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2a9a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9a30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9a34: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2a9a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2a9a38: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a9a3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9a40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9a44: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2a9a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2a9a48: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2a9a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2a9a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9a50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9a54: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2a9a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2a9a58: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A9A58u;
    SET_GPR_U32(ctx, 31, 0x2A9A60u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A9A58u, 0x2A9A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9A60u;
label_2a9a60:
    // 0x2a9a60: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2a9a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2a9a64: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2a9a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2a9a68: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a9a68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9a6c: 0x0  nop
    ctx->pc = 0x2a9a6cu;
    // NOP
    // 0x2a9a70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a9a70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9a74: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a9a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9a78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9a78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9a7c: 0x0  nop
    ctx->pc = 0x2a9a7cu;
    // NOP
    // 0x2a9a80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a9a84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a9a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9a88: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2a9a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2a9a8c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a9a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9a90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a9a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9a94: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2a9a94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a9a98: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2a9a98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9a9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a9a9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a9aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9AA8u;
}
