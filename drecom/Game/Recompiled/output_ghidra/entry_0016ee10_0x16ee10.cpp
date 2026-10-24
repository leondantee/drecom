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

// Function: entry_0016ee10
// Address: 0x16ee10 - 0x16ee40
void entry_0016ee10_0x16ee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ee10_0x16ee10");
#endif

    switch (ctx->pc) {
        case 0x16ee38u: goto label_16ee38;
        default: break;
    }

    ctx->pc = 0x16ee10u;

    // 0x16ee10: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x16ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x16ee14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16EE14u;
    {
        const bool branch_taken_0x16ee14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ee14) {
            ctx->pc = 0x16EE40u;
            return;
        }
    }
    ctx->pc = 0x16EE1Cu;
    // 0x16ee1c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x16ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x16ee20: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x16ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16ee24: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x16ee24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x16ee28: 0xae0201ec  sw          $v0, 0x1EC($s0)
    ctx->pc = 0x16ee28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
    // 0x16ee2c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x16ee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16ee30: 0xc0794b0  jal         func_1E52C0
    ctx->pc = 0x16EE30u;
    SET_GPR_U32(ctx, 31, 0x16EE38u);
    ctx->pc = 0x1E52C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E52C0u, 0x16EE30u, 0x16EE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EE38u;
label_16ee38:
    // 0x16ee38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16EE38u;
    {
        const bool branch_taken_0x16ee38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ee38) {
            ctx->pc = 0x16EE48u;
            return;
        }
    }
    ctx->pc = 0x16EE40u;
}
