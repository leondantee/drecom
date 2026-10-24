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

// Function: entry_00336bd8
// Address: 0x336bd8 - 0x336bf4
void entry_00336bd8_0x336bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336bd8_0x336bd8");
#endif

    ctx->pc = 0x336bd8u;

    // 0x336bd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x336bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336bdc: 0x12620018  beq         $s3, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x336BDCu;
    {
        const bool branch_taken_0x336bdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x336bdc) {
            ctx->pc = 0x336C40u;
            return;
        }
    }
    ctx->pc = 0x336BE4u;
    // 0x336be4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x336BE4u;
    {
        const bool branch_taken_0x336be4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x336be4) {
            ctx->pc = 0x336BF4u;
            return;
        }
    }
    ctx->pc = 0x336BECu;
    // 0x336bec: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x336BECu;
    {
        const bool branch_taken_0x336bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336bec) {
            ctx->pc = 0x336C94u;
            return;
        }
    }
    ctx->pc = 0x336BF4u;
}
