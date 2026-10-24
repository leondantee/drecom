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

// Function: entry_00282c0c
// Address: 0x282c0c - 0x282c20
void entry_00282c0c_0x282c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282c0c_0x282c0c");
#endif

    ctx->pc = 0x282c0cu;

    // 0x282c0c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282c10: 0x8c231b90  lw          $v1, 0x1B90($at)
    ctx->pc = 0x282c10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B90u));
    // 0x282c14: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x282C14u;
    {
        const bool branch_taken_0x282c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x282c14) {
            ctx->pc = 0x282C30u;
            return;
        }
    }
    ctx->pc = 0x282C1Cu;
    // 0x282c1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x282c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x282c20u;
}
