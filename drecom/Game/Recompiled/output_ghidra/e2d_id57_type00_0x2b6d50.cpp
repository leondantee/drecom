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

// Function: e2d_id57_type00
// Address: 0x2b6d50 - 0x2b6db4
void e2d_id57_type00_0x2b6d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id57_type00_0x2b6d50");
#endif

    ctx->pc = 0x2b6d50u;

    // 0x2b6d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b6d54: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b6d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b6d58: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b6d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b6d5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6d60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6d64: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b6d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b6d68: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2b6d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2b6d6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6d70: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6d74: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b6d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b6d78: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b6d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2b6d7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6d7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6d80: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6d84: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b6d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b6d88: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2b6d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2b6d8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6d90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6d94: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b6d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b6d98: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2b6d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2b6d9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6da0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6da4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b6da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b6da8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b6da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b6dac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6DB4u;
}
