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

// Function: e2d_id45_type01
// Address: 0x2b53e0 - 0x2b5440
void e2d_id45_type01_0x2b53e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id45_type01_0x2b53e0");
#endif

    ctx->pc = 0x2b53e0u;

    // 0x2b53e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b53e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b53e4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b53e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b53e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b53e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b53ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b53ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b53f0: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b53f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b53f4: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2b53f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2b53f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b53f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b53fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b53fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5400: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b5400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b5404: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2b5404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2b5408: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b5408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b540c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b540cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5410: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5414: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b5414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b5418: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b541c: 0xa060011d  sb          $zero, 0x11D($v1)
    ctx->pc = 0x2b541cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5420: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2b5420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2b5424: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b5424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b5428: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b542c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b542cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5430: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b5430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b5434: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b5434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b5438: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5440u;
}
