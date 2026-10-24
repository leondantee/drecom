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

// Function: caseD_3
// Address: 0x146814 - 0x146854
void caseD_3_0x146814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x146814");
#endif

    ctx->pc = 0x146814u;

    // 0x146814: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146818: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x146818u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x14681c: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x14681Cu;
    {
        const bool branch_taken_0x14681c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14681c) {
            ctx->pc = 0x146854u;
            return;
        }
    }
    ctx->pc = 0x146824u;
    // 0x146824: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146828: 0x84441278  lh          $a0, 0x1278($v0)
    ctx->pc = 0x146828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x14682c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x14682cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x146830: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x146830u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x146834: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146838: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14683c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x14683cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146840: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x146840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x146844: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x146844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x146848: 0x24461b40  addiu       $a2, $v0, 0x1B40
    ctx->pc = 0x146848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x14684c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x14684Cu;
    SET_GPR_U32(ctx, 31, 0x146854u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x14684Cu, 0x146854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146854u;
}
