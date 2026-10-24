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

// Function: e2d_id62_type08
// Address: 0x2b9b70 - 0x2b9c00
void e2d_id62_type08_0x2b9b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id62_type08_0x2b9b70");
#endif

    ctx->pc = 0x2b9b70u;

    // 0x2b9b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b9b74: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b9b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b9b78: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2b9b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2b9b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9b80: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9b84: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b9b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b9b88: 0x3c034313  lui         $v1, 0x4313
    ctx->pc = 0x2b9b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17171 << 16));
    // 0x2b9b8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9b90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9b94: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b9b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b9b98: 0x3c0342be  lui         $v1, 0x42BE
    ctx->pc = 0x2b9b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17086 << 16));
    // 0x2b9b9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9ba0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9ba4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b9ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b9ba8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b9ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b9bac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9bacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9bb0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9bb4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b9bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b9bb8: 0x3c03432a  lui         $v1, 0x432A
    ctx->pc = 0x2b9bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17194 << 16));
    // 0x2b9bbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9bbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9bc0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9bc4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b9bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b9bc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9bcc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9bd0: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b9bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9bd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9bd8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9bdc: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b9bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9be0: 0x3c03bc23  lui         $v1, 0xBC23
    ctx->pc = 0x2b9be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48163 << 16));
    // 0x2b9be4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b9be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b9be8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9be8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9bec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9bf0: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b9bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b9bf4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b9bf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b9bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9C00u;
}
