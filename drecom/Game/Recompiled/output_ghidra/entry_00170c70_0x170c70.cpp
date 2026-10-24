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

// Function: entry_00170c70
// Address: 0x170c70 - 0x170c88
void entry_00170c70_0x170c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170c70_0x170c70");
#endif

    ctx->pc = 0x170c70u;

    // 0x170c70: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x170C70u;
    {
        const bool branch_taken_0x170c70 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x170c70) {
            ctx->pc = 0x170C88u;
            return;
        }
    }
    ctx->pc = 0x170C78u;
    // 0x170c78: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x170c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x170c7c: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x170c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x170c80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x170C80u;
    {
        const bool branch_taken_0x170c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170c80) {
            ctx->pc = 0x170C90u;
            return;
        }
    }
    ctx->pc = 0x170C88u;
}
