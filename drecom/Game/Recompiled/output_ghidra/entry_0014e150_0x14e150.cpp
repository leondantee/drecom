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

// Function: entry_0014e150
// Address: 0x14e150 - 0x14e160
void entry_0014e150_0x14e150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e150_0x14e150");
#endif

    ctx->pc = 0x14e150u;

    // 0x14e150: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14e150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14e154: 0xa20213a7  sb          $v0, 0x13A7($s0)
    ctx->pc = 0x14e154u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5031), (uint8_t)GPR_U32(ctx, 2));
    // 0x14e158: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14E158u;
    {
        const bool branch_taken_0x14e158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e158) {
            ctx->pc = 0x14E168u;
            return;
        }
    }
    ctx->pc = 0x14E160u;
}
