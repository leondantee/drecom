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

// Function: entry_0018dd7c
// Address: 0x18dd7c - 0x18dd98
void entry_0018dd7c_0x18dd7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dd7c_0x18dd7c");
#endif

    ctx->pc = 0x18dd7cu;

    // 0x18dd7c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x18dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18dd80: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x18dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18dd84: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18DD84u;
    {
        const bool branch_taken_0x18dd84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18dd84) {
            ctx->pc = 0x18DD98u;
            return;
        }
    }
    ctx->pc = 0x18DD8Cu;
    // 0x18dd8c: 0xae1200f4  sw          $s2, 0xF4($s0)
    ctx->pc = 0x18dd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 18));
    // 0x18dd90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18DD90u;
    {
        const bool branch_taken_0x18dd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dd90) {
            ctx->pc = 0x18DDB0u;
            return;
        }
    }
    ctx->pc = 0x18DD98u;
}
