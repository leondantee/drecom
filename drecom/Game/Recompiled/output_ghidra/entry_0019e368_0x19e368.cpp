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

// Function: entry_0019e368
// Address: 0x19e368 - 0x19e388
void entry_0019e368_0x19e368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e368_0x19e368");
#endif

    switch (ctx->pc) {
        case 0x19e380u: goto label_19e380;
        default: break;
    }

    ctx->pc = 0x19e368u;

label_19e368:
    // 0x19e368: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x19e368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x19e36c: 0x2444eec0  addiu       $a0, $v0, -0x1140
    ctx->pc = 0x19e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962880));
    // 0x19e370: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19e370u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e374: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x19e374u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e378: 0xc085dde  jal         func_217778
    ctx->pc = 0x19E378u;
    SET_GPR_U32(ctx, 31, 0x19E380u);
    ctx->pc = 0x217778u;
    {
        ctx->pc = 0x19E380u;
        ps2_syscalls::sceSifLoadModule(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19E380u) { return; }
    ctx->pc = 0x19E380u;
label_19e380:
    // 0x19e380: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19E380u;
    {
        const bool branch_taken_0x19e380 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19e380) {
            ctx->pc = 0x19E368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e368;
        }
    }
    ctx->pc = 0x19E388u;
}
