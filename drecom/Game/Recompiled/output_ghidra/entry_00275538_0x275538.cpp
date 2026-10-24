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

// Function: entry_00275538
// Address: 0x275538 - 0x275550
void entry_00275538_0x275538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275538_0x275538");
#endif

    ctx->pc = 0x275538u;

    // 0x275538: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x275538u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27553c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x27553Cu;
    {
        const bool branch_taken_0x27553c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27553c) {
            ctx->pc = 0x275550u;
            return;
        }
    }
    ctx->pc = 0x275544u;
    // 0x275544: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x275544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x275548: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x275548u;
    {
        const bool branch_taken_0x275548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275548) {
            ctx->pc = 0x275558u;
            return;
        }
    }
    ctx->pc = 0x275550u;
}
