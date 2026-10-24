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

// Function: entry_0020609c
// Address: 0x20609c - 0x2060b0
void entry_0020609c_0x20609c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020609c_0x20609c");
#endif

    ctx->pc = 0x20609cu;

    // 0x20609c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20609Cu;
    {
        const bool branch_taken_0x20609c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20609c) {
            ctx->pc = 0x2060B0u;
            return;
        }
    }
    ctx->pc = 0x2060A4u;
    // 0x2060a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2060a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2060a8: 0x16030018  bne         $s0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2060A8u;
    {
        const bool branch_taken_0x2060a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2060a8) {
            ctx->pc = 0x20610Cu;
            return;
        }
    }
    ctx->pc = 0x2060B0u;
}
