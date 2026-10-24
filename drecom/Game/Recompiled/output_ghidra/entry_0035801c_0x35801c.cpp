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

// Function: entry_0035801c
// Address: 0x35801c - 0x358034
void entry_0035801c_0x35801c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035801c_0x35801c");
#endif

    ctx->pc = 0x35801cu;

    // 0x35801c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35801cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358020: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x358020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x358024: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x358028: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x358028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x35802c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x35802Cu;
    {
        const bool branch_taken_0x35802c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35802c) {
            ctx->pc = 0x3580F4u;
            return;
        }
    }
    ctx->pc = 0x358034u;
}
