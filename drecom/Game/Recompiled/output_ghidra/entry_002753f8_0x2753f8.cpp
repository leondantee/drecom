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

// Function: entry_002753f8
// Address: 0x2753f8 - 0x275410
void entry_002753f8_0x2753f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002753f8_0x2753f8");
#endif

    ctx->pc = 0x2753f8u;

    // 0x2753f8: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x2753f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2753fc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2753FCu;
    {
        const bool branch_taken_0x2753fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2753fc) {
            ctx->pc = 0x275410u;
            return;
        }
    }
    ctx->pc = 0x275404u;
    // 0x275404: 0x2415001d  addiu       $s5, $zero, 0x1D
    ctx->pc = 0x275404u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x275408: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x275408u;
    {
        const bool branch_taken_0x275408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275408) {
            ctx->pc = 0x275418u;
            return;
        }
    }
    ctx->pc = 0x275410u;
}
