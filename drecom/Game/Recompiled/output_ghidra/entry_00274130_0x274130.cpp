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

// Function: entry_00274130
// Address: 0x274130 - 0x274148
void entry_00274130_0x274130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274130_0x274130");
#endif

    ctx->pc = 0x274130u;

    // 0x274130: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x274130u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x274134: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x274134u;
    {
        const bool branch_taken_0x274134 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x274134) {
            ctx->pc = 0x274148u;
            return;
        }
    }
    ctx->pc = 0x27413Cu;
    // 0x27413c: 0x2417001d  addiu       $s7, $zero, 0x1D
    ctx->pc = 0x27413cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x274140: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x274140u;
    {
        const bool branch_taken_0x274140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274140) {
            ctx->pc = 0x274150u;
            return;
        }
    }
    ctx->pc = 0x274148u;
}
