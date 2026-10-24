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

// Function: entry_00165d88
// Address: 0x165d88 - 0x165db0
void entry_00165d88_0x165d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165d88_0x165d88");
#endif

    switch (ctx->pc) {
        case 0x165da4u: goto label_165da4;
        default: break;
    }

    ctx->pc = 0x165d88u;

label_165d88:
    // 0x165d88: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165d8c: 0x2444eb40  addiu       $a0, $v0, -0x14C0
    ctx->pc = 0x165d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961984));
    // 0x165d90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x165d90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165d94: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165d98: 0x2446eb68  addiu       $a2, $v0, -0x1498
    ctx->pc = 0x165d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962024));
    // 0x165d9c: 0xc085dde  jal         func_217778
    ctx->pc = 0x165D9Cu;
    SET_GPR_U32(ctx, 31, 0x165DA4u);
    ctx->pc = 0x217778u;
    {
        ctx->pc = 0x165DA4u;
        ps2_syscalls::sceSifLoadModule(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165DA4u) { return; }
    ctx->pc = 0x165DA4u;
label_165da4:
    // 0x165da4: 0x440fff8  bltz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x165DA4u;
    {
        const bool branch_taken_0x165da4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x165da4) {
            ctx->pc = 0x165D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165d88;
        }
    }
    ctx->pc = 0x165DACu;
    // 0x165dac: 0x0  nop
    ctx->pc = 0x165dacu;
    // NOP
    ctx->pc = 0x165db0u;
}
