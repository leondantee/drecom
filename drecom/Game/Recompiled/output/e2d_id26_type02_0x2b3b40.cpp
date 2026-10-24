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

// Function: e2d_id26_type02
// Address: 0x2b3b40 - 0x2b3bb0
void e2d_id26_type02_0x2b3b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id26_type02_0x2b3b40");
#endif

    ctx->pc = 0x2b3b40u;

    // 0x2b3b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b3b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b3b44: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b3b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b3b48: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3b4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3b4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3b50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3b54: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b3b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b3b58: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3b5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3b60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3b64: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b3b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b3b68: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3b6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3b70: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3b74: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b3b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b3b78: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3b80: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3b84: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b3b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b3b88: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2b3b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2b3b8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3b90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3b94: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b3b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b3b98: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2b3b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b3b9c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3ba0: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b3ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3ba4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b3ba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b3ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3BB0u;
}
