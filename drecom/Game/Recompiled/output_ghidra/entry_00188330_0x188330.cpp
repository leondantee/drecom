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

// Function: entry_00188330
// Address: 0x188330 - 0x188340
void entry_00188330_0x188330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188330_0x188330");
#endif

    ctx->pc = 0x188330u;

    // 0x188330: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x188330u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x188334: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x188334u;
    {
        const bool branch_taken_0x188334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188334) {
            ctx->pc = 0x1882E8u;
            return;
        }
    }
    ctx->pc = 0x18833Cu;
    // 0x18833c: 0x0  nop
    ctx->pc = 0x18833cu;
    // NOP
    ctx->pc = 0x188340u;
}
