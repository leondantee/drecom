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

// Function: entry_0016e848
// Address: 0x16e848 - 0x16e878
void entry_0016e848_0x16e848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e848_0x16e848");
#endif

    switch (ctx->pc) {
        case 0x16e870u: goto label_16e870;
        default: break;
    }

    ctx->pc = 0x16e848u;

    // 0x16e848: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x16e848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16e84c: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x16e84cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x16e850: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16E850u;
    {
        const bool branch_taken_0x16e850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e850) {
            ctx->pc = 0x16E878u;
            return;
        }
    }
    ctx->pc = 0x16E858u;
    // 0x16e858: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x16e858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16e85c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x16e85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16e860: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x16e860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e864: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x16e864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16e868: 0xc05ba0c  jal         func_16E830
    ctx->pc = 0x16E868u;
    SET_GPR_U32(ctx, 31, 0x16E870u);
    ctx->pc = 0x16E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E830u, 0x16E868u, 0x16E870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E870u;
label_16e870:
    // 0x16e870: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16E870u;
    {
        const bool branch_taken_0x16e870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e870) {
            ctx->pc = 0x16E8C8u;
            return;
        }
    }
    ctx->pc = 0x16E878u;
}
