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

// Function: entry_0020b718
// Address: 0x20b718 - 0x20b728
void entry_0020b718_0x20b718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b718_0x20b718");
#endif

    ctx->pc = 0x20b718u;

    // 0x20b718: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x20b718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20b71c: 0x1440ff8a  bnez        $v0, . + 4 + (-0x76 << 2)
    ctx->pc = 0x20B71Cu;
    {
        const bool branch_taken_0x20b71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b71c) {
            ctx->pc = 0x20B548u;
            return;
        }
    }
    ctx->pc = 0x20B724u;
    // 0x20b724: 0x0  nop
    ctx->pc = 0x20b724u;
    // NOP
    ctx->pc = 0x20b728u;
}
