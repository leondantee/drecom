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

// Function: entry_00335910
// Address: 0x335910 - 0x335928
void entry_00335910_0x335910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335910_0x335910");
#endif

    ctx->pc = 0x335910u;

    // 0x335910: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x335910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x335914: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x335914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x335918: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x335918u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x33591c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x33591Cu;
    {
        const bool branch_taken_0x33591c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33591c) {
            ctx->pc = 0x335928u;
            return;
        }
    }
    ctx->pc = 0x335924u;
    // 0x335924: 0x2328823  subu        $s1, $s1, $s2
    ctx->pc = 0x335924u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    ctx->pc = 0x335928u;
}
