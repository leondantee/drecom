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

// Function: entry_001dcf78
// Address: 0x1dcf78 - 0x1dcf90
void entry_001dcf78_0x1dcf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcf78_0x1dcf78");
#endif

    ctx->pc = 0x1dcf78u;

    // 0x1dcf78: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCF78u;
    {
        const bool branch_taken_0x1dcf78 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1dcf78) {
            ctx->pc = 0x1DCF90u;
            return;
        }
    }
    ctx->pc = 0x1DCF80u;
    // 0x1dcf80: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1dcf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1dcf84: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x1dcf84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x1dcf88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DCF88u;
    {
        const bool branch_taken_0x1dcf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcf88) {
            ctx->pc = 0x1DCF94u;
            return;
        }
    }
    ctx->pc = 0x1DCF90u;
}
