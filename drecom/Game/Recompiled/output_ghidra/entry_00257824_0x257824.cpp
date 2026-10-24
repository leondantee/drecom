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

// Function: entry_00257824
// Address: 0x257824 - 0x257834
void entry_00257824_0x257824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257824_0x257824");
#endif

    ctx->pc = 0x257824u;

    // 0x257824: 0x2a2100ff  slti        $at, $s1, 0xFF
    ctx->pc = 0x257824u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x257828: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x257828u;
    {
        const bool branch_taken_0x257828 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x257828) {
            ctx->pc = 0x257834u;
            return;
        }
    }
    ctx->pc = 0x257830u;
    // 0x257830: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x257830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x257834u;
}
