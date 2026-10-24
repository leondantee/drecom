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

// Function: entry_0019e348
// Address: 0x19e348 - 0x19e368
void entry_0019e348_0x19e348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e348_0x19e348");
#endif

    switch (ctx->pc) {
        case 0x19e360u: goto label_19e360;
        default: break;
    }

    ctx->pc = 0x19e348u;

label_19e348:
    // 0x19e348: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x19e348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x19e34c: 0x2444ee90  addiu       $a0, $v0, -0x1170
    ctx->pc = 0x19e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962832));
    // 0x19e350: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19e350u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e354: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x19e354u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e358: 0xc085dde  jal         func_217778
    ctx->pc = 0x19E358u;
    SET_GPR_U32(ctx, 31, 0x19E360u);
    ctx->pc = 0x217778u;
    {
        ctx->pc = 0x19E360u;
        ps2_syscalls::sceSifLoadModule(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19E360u) { return; }
    ctx->pc = 0x19E360u;
label_19e360:
    // 0x19e360: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19E360u;
    {
        const bool branch_taken_0x19e360 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19e360) {
            ctx->pc = 0x19E348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e348;
        }
    }
    ctx->pc = 0x19E368u;
}
