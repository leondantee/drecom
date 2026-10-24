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

// Function: entry_00195588
// Address: 0x195588 - 0x1955a8
void entry_00195588_0x195588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195588_0x195588");
#endif

    ctx->pc = 0x195588u;

    // 0x195588: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x195588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x19558c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195590: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x195590u;
    {
        const bool branch_taken_0x195590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x195590) {
            ctx->pc = 0x1955A8u;
            return;
        }
    }
    ctx->pc = 0x195598u;
    // 0x195598: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x195598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19559c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x19559cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1955a0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1955A0u;
    {
        const bool branch_taken_0x1955a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1955a0) {
            ctx->pc = 0x1955C4u;
            return;
        }
    }
    ctx->pc = 0x1955A8u;
}
