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

// Function: e2d_id61_type09
// Address: 0x2b9380 - 0x2b9410
void e2d_id61_type09_0x2b9380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id61_type09_0x2b9380");
#endif

    ctx->pc = 0x2b9380u;

    // 0x2b9380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b9384: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b9384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b9388: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b9388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b938c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b938cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9390: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b9390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9394: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2b9394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2b9398: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b939c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b939cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b93a0: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b93a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b93a4: 0x3c034313  lui         $v1, 0x4313
    ctx->pc = 0x2b93a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17171 << 16));
    // 0x2b93a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b93a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b93ac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b93acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b93b0: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b93b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b93b4: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b93b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b93b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b93b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b93bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b93bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b93c0: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b93c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b93c4: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b93c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b93c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b93c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b93cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b93ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b93d0: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b93d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b93d4: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x2b93d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x2b93d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b93d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b93dc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b93dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b93e0: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b93e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b93e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b93e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b93e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b93e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b93ec: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b93ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b93f0: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2b93f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2b93f4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b93f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b93f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b93f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b93fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b93fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9400: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b9400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b9404: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b9404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b9408: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9410u;
}
