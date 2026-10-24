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

// Function: entry_001aaf24
// Address: 0x1aaf24 - 0x1aaf8c
void entry_001aaf24_0x1aaf24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aaf24_0x1aaf24");
#endif

    switch (ctx->pc) {
        case 0x1aaf44u: goto label_1aaf44;
        default: break;
    }

    ctx->pc = 0x1aaf24u;

    // 0x1aaf24: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1aaf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaf28: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1aaf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaf2c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1aaf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1aaf30: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x1aaf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1aaf34: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x1aaf34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1aaf38: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x1aaf38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x1aaf3c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x1AAF3Cu;
    SET_GPR_U32(ctx, 31, 0x1AAF44u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1AAF3Cu, 0x1AAF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF44u;
label_1aaf44:
    // 0x1aaf44: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1aaf44u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1aaf48: 0x12000091  beqz        $s0, . + 4 + (0x91 << 2)
    ctx->pc = 0x1AAF48u;
    {
        const bool branch_taken_0x1aaf48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaf48) {
            ctx->pc = 0x1AB190u;
            return;
        }
    }
    ctx->pc = 0x1AAF50u;
    // 0x1aaf50: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1aaf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaf54: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1aaf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1aaf58: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1aaf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1aaf5c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AAF5Cu;
    {
        const bool branch_taken_0x1aaf5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaf5c) {
            ctx->pc = 0x1AAF8Cu;
            return;
        }
    }
    ctx->pc = 0x1AAF64u;
    // 0x1aaf64: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1aaf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aaf68: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1aaf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaf6c: 0xac640128  sw          $a0, 0x128($v1)
    ctx->pc = 0x1aaf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 4));
    // 0x1aaf70: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1aaf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaf74: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x1aaf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x1aaf78: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1aaf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1aaf7c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1aaf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1aaf80: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x1aaf80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x1aaf84: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x1AAF84u;
    {
        const bool branch_taken_0x1aaf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaf84) {
            ctx->pc = 0x1AB190u;
            return;
        }
    }
    ctx->pc = 0x1AAF8Cu;
}
