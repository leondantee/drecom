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

// Function: caseD_5
// Address: 0x3531a4 - 0x3531d4
void caseD_5_0x3531a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x3531a4");
#endif

    switch (ctx->pc) {
        case 0x3531b4u: goto label_3531b4;
        default: break;
    }

    ctx->pc = 0x3531a4u;

    // 0x3531a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3531a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3531a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3531a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3531ac: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x3531ACu;
    SET_GPR_U32(ctx, 31, 0x3531B4u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x3531ACu, 0x3531B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3531B4u;
label_3531b4:
    // 0x3531b4: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x3531B4u;
    {
        const bool branch_taken_0x3531b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3531b4) {
            ctx->pc = 0x353328u;
            return;
        }
    }
    ctx->pc = 0x3531BCu;
    // 0x3531bc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3531bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3531c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3531c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3531c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3531c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3531c8: 0xa0640028  sb          $a0, 0x28($v1)
    ctx->pc = 0x3531c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x3531cc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x3531CCu;
    {
        const bool branch_taken_0x3531cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3531cc) {
            ctx->pc = 0x353328u;
            return;
        }
    }
    ctx->pc = 0x3531D4u;
}
