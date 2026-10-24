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

// Function: entry_00222090
// Address: 0x222090 - 0x2220a0
void entry_00222090_0x222090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222090_0x222090");
#endif

    ctx->pc = 0x222090u;

    // 0x222090: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x222090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x222094: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x222094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x222098: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222098u;
    {
        const bool branch_taken_0x222098 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x222098) {
            ctx->pc = 0x2220B0u;
            return;
        }
    }
    ctx->pc = 0x2220A0u;
}
