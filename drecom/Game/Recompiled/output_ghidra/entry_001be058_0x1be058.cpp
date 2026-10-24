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

// Function: entry_001be058
// Address: 0x1be058 - 0x1be08c
void entry_001be058_0x1be058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be058_0x1be058");
#endif

    switch (ctx->pc) {
        case 0x1be064u: goto label_1be064;
        default: break;
    }

    ctx->pc = 0x1be058u;

    // 0x1be058: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1be058u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1be05c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BE05Cu;
    SET_GPR_U32(ctx, 31, 0x1BE064u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BE05Cu, 0x1BE064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE064u;
label_1be064:
    // 0x1be064: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1be064u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1be068: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be06c: 0x8ca31b60  lw          $v1, 0x1B60($a1)
    ctx->pc = 0x1be06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7008)));
    // 0x1be070: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE070u;
    {
        const bool branch_taken_0x1be070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be070) {
            ctx->pc = 0x1BE08Cu;
            return;
        }
    }
    ctx->pc = 0x1BE078u;
    // 0x1be078: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1be078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1be07c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be080: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1be080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be084: 0x100001a1  b           . + 4 + (0x1A1 << 2)
    ctx->pc = 0x1BE084u;
    {
        const bool branch_taken_0x1be084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be084) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BE08Cu;
}
