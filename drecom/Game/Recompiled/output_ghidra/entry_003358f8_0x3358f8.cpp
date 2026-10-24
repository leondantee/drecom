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

// Function: entry_003358f8
// Address: 0x3358f8 - 0x335910
void entry_003358f8_0x3358f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003358f8_0x3358f8");
#endif

    ctx->pc = 0x3358f8u;

    // 0x3358f8: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x3358f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x3358fc: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x3358fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x335900: 0xd1082a  slt         $at, $a2, $s1
    ctx->pc = 0x335900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x335904: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x335904u;
    {
        const bool branch_taken_0x335904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x335904) {
            ctx->pc = 0x335910u;
            return;
        }
    }
    ctx->pc = 0x33590Cu;
    // 0x33590c: 0x2328823  subu        $s1, $s1, $s2
    ctx->pc = 0x33590cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    ctx->pc = 0x335910u;
}
