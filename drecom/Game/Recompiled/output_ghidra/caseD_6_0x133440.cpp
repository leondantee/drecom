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

// Function: caseD_6
// Address: 0x133440 - 0x133484
void caseD_6_0x133440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x133440");
#endif

    switch (ctx->pc) {
        case 0x133450u: goto label_133450;
        case 0x13345cu: goto label_13345c;
        default: break;
    }

    ctx->pc = 0x133440u;

    // 0x133440: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133444: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x133444u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x133448: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x133448u;
    SET_GPR_U32(ctx, 31, 0x133450u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x133448u, 0x133450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133450u;
label_133450:
    // 0x133450: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133454: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x133454u;
    SET_GPR_U32(ctx, 31, 0x13345Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x133454u, 0x13345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13345Cu;
label_13345c:
    // 0x13345c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13345cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133460: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x133460u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x133464: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x133464u;
    {
        const bool branch_taken_0x133464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133464) {
            ctx->pc = 0x133484u;
            return;
        }
    }
    ctx->pc = 0x13346Cu;
    // 0x13346c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13346cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133470: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x133470u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x133474: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x133474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x133478: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x133478u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x13347c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13347Cu;
    {
        const bool branch_taken_0x13347c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13347c) {
            ctx->pc = 0x1334B4u;
            return;
        }
    }
    ctx->pc = 0x133484u;
}
