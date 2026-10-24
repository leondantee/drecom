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

// Function: e2d_id4c_type01
// Address: 0x2b65a0 - 0x2b65f4
void e2d_id4c_type01_0x2b65a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id4c_type01_0x2b65a0");
#endif

    ctx->pc = 0x2b65a0u;

    // 0x2b65a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b65a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b65a4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b65a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b65a8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2b65a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2b65ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b65acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b65b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b65b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b65b4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b65b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b65b8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2b65b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2b65bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b65bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b65c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b65c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b65c4: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2b65c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2b65c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b65c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b65cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b65ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b65d0: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b65d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b65d4: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2b65d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2b65d8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2b65d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2b65dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b65dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b65e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b65e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b65e4: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x2b65e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x2b65e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b65e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b65ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B65ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B65ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B65F4u;
}
