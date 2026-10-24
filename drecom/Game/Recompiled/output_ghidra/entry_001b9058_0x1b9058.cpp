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

// Function: entry_001b9058
// Address: 0x1b9058 - 0x1b9088
void entry_001b9058_0x1b9058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9058_0x1b9058");
#endif

    switch (ctx->pc) {
        case 0x1b9064u: goto label_1b9064;
        default: break;
    }

    ctx->pc = 0x1b9058u;

    // 0x1b9058: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b9058u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b905c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1B905Cu;
    SET_GPR_U32(ctx, 31, 0x1B9064u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B905Cu, 0x1B9064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9064u;
label_1b9064:
    // 0x1b9064: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9068: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1b9068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1b906c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B906Cu;
    {
        const bool branch_taken_0x1b906c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b906c) {
            ctx->pc = 0x1B9088u;
            return;
        }
    }
    ctx->pc = 0x1B9074u;
    // 0x1b9074: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b9074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b9078: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b907c: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x1b907cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b9080: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x1B9080u;
    {
        const bool branch_taken_0x1b9080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9080) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B9088u;
}
