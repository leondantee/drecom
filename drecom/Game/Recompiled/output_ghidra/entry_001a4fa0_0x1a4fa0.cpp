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

// Function: entry_001a4fa0
// Address: 0x1a4fa0 - 0x1a4fb8
void entry_001a4fa0_0x1a4fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4fa0_0x1a4fa0");
#endif

    ctx->pc = 0x1a4fa0u;

    // 0x1a4fa0: 0x92030315  lbu         $v1, 0x315($s0)
    ctx->pc = 0x1a4fa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 789)));
    // 0x1a4fa4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4FA4u;
    {
        const bool branch_taken_0x1a4fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4fa4) {
            ctx->pc = 0x1A4FB8u;
            return;
        }
    }
    ctx->pc = 0x1A4FACu;
    // 0x1a4fac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a4facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a4fb0: 0xc069cf8  jal         func_1A73E0
    ctx->pc = 0x1A4FB0u;
    SET_GPR_U32(ctx, 31, 0x1A4FB8u);
    ctx->pc = 0x1A73E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A73E0u, 0x1A4FB0u, 0x1A4FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4FB8u;
}
