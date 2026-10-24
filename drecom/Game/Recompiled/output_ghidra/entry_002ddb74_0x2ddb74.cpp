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

// Function: entry_002ddb74
// Address: 0x2ddb74 - 0x2ddb88
void entry_002ddb74_0x2ddb74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ddb74_0x2ddb74");
#endif

    ctx->pc = 0x2ddb74u;

    // 0x2ddb74: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2ddb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ddb78: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2ddb78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddb7c: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x2ddb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ddb80: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x2DDB80u;
    {
        const bool branch_taken_0x2ddb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddb80) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DDB88u;
}
