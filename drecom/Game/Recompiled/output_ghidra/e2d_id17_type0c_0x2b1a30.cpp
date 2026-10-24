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

// Function: e2d_id17_type0c
// Address: 0x2b1a30 - 0x2b1ab8
void e2d_id17_type0c_0x2b1a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type0c_0x2b1a30");
#endif

    ctx->pc = 0x2b1a30u;

    // 0x2b1a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b1a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b1a34: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b1a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b1a38: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x2b1a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x2b1a3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1a3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1a40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1a44: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b1a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b1a48: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b1a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b1a4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1a4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1a50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1a54: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b1a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b1a58: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b1a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b1a5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1a5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1a60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1a64: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b1a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b1a68: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b1a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b1a6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1a70: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1a74: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b1a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b1a78: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2b1a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2b1a7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1a7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1a80: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1a84: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b1a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b1a88: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b1a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b1a8c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1a90: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b1a90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b1a94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b1a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1a98: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1a9c: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b1a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b1aa0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b1aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1aa4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1aa8: 0xa0640142  sb          $a0, 0x142($v1)
    ctx->pc = 0x2b1aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 322), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b1aac: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b1aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b1ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1AB8u;
}
