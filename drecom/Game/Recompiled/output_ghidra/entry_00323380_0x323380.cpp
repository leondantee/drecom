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

// Function: entry_00323380
// Address: 0x323380 - 0x323390
void entry_00323380_0x323380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00323380_0x323380");
#endif

    ctx->pc = 0x323380u;

    // 0x323380: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x323380u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323384: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x323384u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323388: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x323388u;
    {
        const bool branch_taken_0x323388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323388) {
            ctx->pc = 0x3233B4u;
            return;
        }
    }
    ctx->pc = 0x323390u;
}
