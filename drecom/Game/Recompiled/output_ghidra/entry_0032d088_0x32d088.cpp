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

// Function: entry_0032d088
// Address: 0x32d088 - 0x32d0a4
void entry_0032d088_0x32d088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d088_0x32d088");
#endif

    ctx->pc = 0x32d088u;

    // 0x32d088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d08c: 0x12a20099  beq         $s5, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x32D08Cu;
    {
        const bool branch_taken_0x32d08c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x32d08c) {
            ctx->pc = 0x32D2F4u;
            return;
        }
    }
    ctx->pc = 0x32D094u;
    // 0x32d094: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D094u;
    {
        const bool branch_taken_0x32d094 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d094) {
            ctx->pc = 0x32D0A4u;
            return;
        }
    }
    ctx->pc = 0x32D09Cu;
    // 0x32d09c: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x32D09Cu;
    {
        const bool branch_taken_0x32d09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d09c) {
            ctx->pc = 0x32D3D0u;
            return;
        }
    }
    ctx->pc = 0x32D0A4u;
}
