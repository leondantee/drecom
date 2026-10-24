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

// Function: entry_0015bf08
// Address: 0x15bf08 - 0x15bf18
void entry_0015bf08_0x15bf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bf08_0x15bf08");
#endif

    ctx->pc = 0x15bf08u;

    // 0x15bf08: 0x2fe102a  slt         $v0, $s7, $fp
    ctx->pc = 0x15bf08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x15bf0c: 0x1440ff91  bnez        $v0, . + 4 + (-0x6F << 2)
    ctx->pc = 0x15BF0Cu;
    {
        const bool branch_taken_0x15bf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bf0c) {
            ctx->pc = 0x15BD54u;
            return;
        }
    }
    ctx->pc = 0x15BF14u;
    // 0x15bf14: 0x0  nop
    ctx->pc = 0x15bf14u;
    // NOP
    ctx->pc = 0x15bf18u;
}
