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

// Function: e2d_id71_type00
// Address: 0x2bb4b0 - 0x2bb510
void e2d_id71_type00_0x2bb4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id71_type00_0x2bb4b0");
#endif

    ctx->pc = 0x2bb4b0u;

    // 0x2bb4b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bb4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bb4b4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2bb4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2bb4b8: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2bb4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2bb4bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bb4bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb4c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bb4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bb4c4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bb4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bb4c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bb4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb4cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bb4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bb4d0: 0xa064013f  sb          $a0, 0x13F($v1)
    ctx->pc = 0x2bb4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 319), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bb4d4: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x2bb4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x2bb4d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bb4d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb4dc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bb4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bb4e0: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2bb4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2bb4e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bb4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb4e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bb4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bb4ec: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2bb4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bb4f0: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x2bb4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x2bb4f4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2bb4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2bb4f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bb4f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb4fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bb4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bb500: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2bb500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2bb504: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bb504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bb508: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB510u;
}
