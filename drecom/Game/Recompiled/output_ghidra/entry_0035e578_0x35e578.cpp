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

// Function: entry_0035e578
// Address: 0x35e578 - 0x35e590
void entry_0035e578_0x35e578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035e578_0x35e578");
#endif

    ctx->pc = 0x35e578u;

    // 0x35e578: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x35e578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x35e57c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35E57Cu;
    {
        const bool branch_taken_0x35e57c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x35e57c) {
            ctx->pc = 0x35E590u;
            return;
        }
    }
    ctx->pc = 0x35E584u;
    // 0x35e584: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x35e584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e588: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35E588u;
    {
        const bool branch_taken_0x35e588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e588) {
            ctx->pc = 0x35E598u;
            return;
        }
    }
    ctx->pc = 0x35E590u;
}
