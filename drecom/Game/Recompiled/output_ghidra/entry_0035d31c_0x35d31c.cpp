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

// Function: entry_0035d31c
// Address: 0x35d31c - 0x35d330
void entry_0035d31c_0x35d31c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d31c_0x35d31c");
#endif

    ctx->pc = 0x35d31cu;

    // 0x35d31c: 0x86420026  lh          $v0, 0x26($s2)
    ctx->pc = 0x35d31cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x35d320: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35D320u;
    {
        const bool branch_taken_0x35d320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d320) {
            ctx->pc = 0x35D330u;
            return;
        }
    }
    ctx->pc = 0x35D328u;
    // 0x35d328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d32c: 0xa6420026  sh          $v0, 0x26($s2)
    ctx->pc = 0x35d32cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x35d330u;
}
