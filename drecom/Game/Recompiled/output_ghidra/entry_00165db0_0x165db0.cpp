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

// Function: entry_00165db0
// Address: 0x165db0 - 0x165dd8
void entry_00165db0_0x165db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165db0_0x165db0");
#endif

    switch (ctx->pc) {
        case 0x165dccu: goto label_165dcc;
        default: break;
    }

    ctx->pc = 0x165db0u;

label_165db0:
    // 0x165db0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165db4: 0x2444eb70  addiu       $a0, $v0, -0x1490
    ctx->pc = 0x165db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x165db8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x165db8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165dbc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165dc0: 0x2446eb68  addiu       $a2, $v0, -0x1498
    ctx->pc = 0x165dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962024));
    // 0x165dc4: 0xc085dde  jal         func_217778
    ctx->pc = 0x165DC4u;
    SET_GPR_U32(ctx, 31, 0x165DCCu);
    ctx->pc = 0x217778u;
    {
        ctx->pc = 0x165DCCu;
        ps2_syscalls::sceSifLoadModule(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165DCCu) { return; }
    ctx->pc = 0x165DCCu;
label_165dcc:
    // 0x165dcc: 0x440fff8  bltz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x165DCCu;
    {
        const bool branch_taken_0x165dcc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x165dcc) {
            ctx->pc = 0x165DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165db0;
        }
    }
    ctx->pc = 0x165DD4u;
    // 0x165dd4: 0x0  nop
    ctx->pc = 0x165dd4u;
    // NOP
    ctx->pc = 0x165dd8u;
}
