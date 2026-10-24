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

// Function: entry_001dd610
// Address: 0x1dd610 - 0x1dd628
void entry_001dd610_0x1dd610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd610_0x1dd610");
#endif

    ctx->pc = 0x1dd610u;

    // 0x1dd610: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD610u;
    {
        const bool branch_taken_0x1dd610 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1dd610) {
            ctx->pc = 0x1DD628u;
            return;
        }
    }
    ctx->pc = 0x1DD618u;
    // 0x1dd618: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1dd618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1dd61c: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x1dd61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x1dd620: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD620u;
    {
        const bool branch_taken_0x1dd620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd620) {
            ctx->pc = 0x1DD630u;
            return;
        }
    }
    ctx->pc = 0x1DD628u;
}
