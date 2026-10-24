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

// Function: entry_00340298
// Address: 0x340298 - 0x3402ac
void entry_00340298_0x340298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340298_0x340298");
#endif

    ctx->pc = 0x340298u;

    // 0x340298: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x340298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34029c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x34029cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3402a0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3402A0u;
    {
        const bool branch_taken_0x3402a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3402a0) {
            ctx->pc = 0x3402ACu;
            return;
        }
    }
    ctx->pc = 0x3402A8u;
    // 0x3402a8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3402a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x3402acu;
}
