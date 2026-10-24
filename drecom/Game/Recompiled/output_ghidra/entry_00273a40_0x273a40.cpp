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

// Function: entry_00273a40
// Address: 0x273a40 - 0x273a58
void entry_00273a40_0x273a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273a40_0x273a40");
#endif

    ctx->pc = 0x273a40u;

    // 0x273a40: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x273a40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x273a44: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x273A44u;
    {
        const bool branch_taken_0x273a44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x273a44) {
            ctx->pc = 0x273A58u;
            return;
        }
    }
    ctx->pc = 0x273A4Cu;
    // 0x273a4c: 0x2415001d  addiu       $s5, $zero, 0x1D
    ctx->pc = 0x273a4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x273a50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x273A50u;
    {
        const bool branch_taken_0x273a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273a50) {
            ctx->pc = 0x273A60u;
            return;
        }
    }
    ctx->pc = 0x273A58u;
}
