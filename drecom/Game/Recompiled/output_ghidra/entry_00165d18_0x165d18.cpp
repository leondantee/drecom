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

// Function: entry_00165d18
// Address: 0x165d18 - 0x165d34
void entry_00165d18_0x165d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165d18_0x165d18");
#endif

    switch (ctx->pc) {
        case 0x165d20u: goto label_165d20;
        default: break;
    }

    ctx->pc = 0x165d18u;

label_165d18:
    // 0x165d18: 0xc085f04  jal         func_217C10
    ctx->pc = 0x165D18u;
    SET_GPR_U32(ctx, 31, 0x165D20u);
    ctx->pc = 0x217C10u;
    {
        ctx->pc = 0x165D20u;
        ps2_stubs::sceSifSyncIop(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165D20u) { return; }
    ctx->pc = 0x165D20u;
label_165d20:
    // 0x165d20: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x165D20u;
    {
        const bool branch_taken_0x165d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165d20) {
            ctx->pc = 0x165D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165d18;
        }
    }
    ctx->pc = 0x165D28u;
    // 0x165d28: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x165d28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165d2c: 0xc0854d2  jal         func_215348
    ctx->pc = 0x165D2Cu;
    SET_GPR_U32(ctx, 31, 0x165D34u);
    ctx->pc = 0x215348u;
    {
        ctx->pc = 0x165D34u;
        ps2_stubs::sceSifInitRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165D34u) { return; }
    ctx->pc = 0x165D34u;
}
