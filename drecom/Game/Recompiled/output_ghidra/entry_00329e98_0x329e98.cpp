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

// Function: entry_00329e98
// Address: 0x329e98 - 0x329eb4
void entry_00329e98_0x329e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329e98_0x329e98");
#endif

    ctx->pc = 0x329e98u;

    // 0x329e98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329e9c: 0x12230010  beq         $s1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x329E9Cu;
    {
        const bool branch_taken_0x329e9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x329e9c) {
            ctx->pc = 0x329EE0u;
            return;
        }
    }
    ctx->pc = 0x329EA4u;
    // 0x329ea4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x329EA4u;
    {
        const bool branch_taken_0x329ea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x329ea4) {
            ctx->pc = 0x329EB4u;
            return;
        }
    }
    ctx->pc = 0x329EACu;
    // 0x329eac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x329EACu;
    {
        const bool branch_taken_0x329eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329eac) {
            ctx->pc = 0x329F18u;
            return;
        }
    }
    ctx->pc = 0x329EB4u;
}
