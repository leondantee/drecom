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

// Function: e2d_id00_type0b
// Address: 0x2a9b80 - 0x2a9bfc
void e2d_id00_type0b_0x2a9b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type0b_0x2a9b80");
#endif

    ctx->pc = 0x2a9b80u;

    // 0x2a9b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a9b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a9b84: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2a9b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2a9b88: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2a9b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2a9b8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9b90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9b94: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2a9b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2a9b98: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a9b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a9b9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9ba0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9ba4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2a9ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2a9ba8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a9ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a9bac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9bacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9bb0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9bb4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2a9bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2a9bb8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a9bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a9bbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9bbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9bc0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9bc4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2a9bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2a9bc8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a9bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a9bcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9bccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9bd0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9bd4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2a9bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2a9bd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a9bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9bdc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9be0: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2a9be0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a9be4: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x2a9be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2a9be8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9bec: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2a9becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2a9bf0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2a9bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a9bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9BFCu;
}
