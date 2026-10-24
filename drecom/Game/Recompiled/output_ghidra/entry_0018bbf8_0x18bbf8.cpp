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

// Function: entry_0018bbf8
// Address: 0x18bbf8 - 0x18bc18
void entry_0018bbf8_0x18bbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bbf8_0x18bbf8");
#endif

    ctx->pc = 0x18bbf8u;

    // 0x18bbf8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x18bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x18bbfc: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x18bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x18bc00: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BC00u;
    {
        const bool branch_taken_0x18bc00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18bc00) {
            ctx->pc = 0x18BC18u;
            return;
        }
    }
    ctx->pc = 0x18BC08u;
    // 0x18bc08: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x18bc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x18bc0c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x18bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x18bc10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18BC10u;
    {
        const bool branch_taken_0x18bc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bc10) {
            ctx->pc = 0x18BC28u;
            return;
        }
    }
    ctx->pc = 0x18BC18u;
}
