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

// Function: entry_00275c78
// Address: 0x275c78 - 0x275c90
void entry_00275c78_0x275c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275c78_0x275c78");
#endif

    ctx->pc = 0x275c78u;

    // 0x275c78: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x275c78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x275c7c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x275C7Cu;
    {
        const bool branch_taken_0x275c7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x275c7c) {
            ctx->pc = 0x275C90u;
            return;
        }
    }
    ctx->pc = 0x275C84u;
    // 0x275c84: 0x241e001d  addiu       $fp, $zero, 0x1D
    ctx->pc = 0x275c84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x275c88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x275C88u;
    {
        const bool branch_taken_0x275c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275c88) {
            ctx->pc = 0x275C98u;
            return;
        }
    }
    ctx->pc = 0x275C90u;
}
