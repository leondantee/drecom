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

// Function: entry_00165dd8
// Address: 0x165dd8 - 0x165e00
void entry_00165dd8_0x165dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165dd8_0x165dd8");
#endif

    switch (ctx->pc) {
        case 0x165df4u: goto label_165df4;
        default: break;
    }

    ctx->pc = 0x165dd8u;

label_165dd8:
    // 0x165dd8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165ddc: 0x2444eba0  addiu       $a0, $v0, -0x1460
    ctx->pc = 0x165ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962080));
    // 0x165de0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x165de0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165de4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165de8: 0x2446eb68  addiu       $a2, $v0, -0x1498
    ctx->pc = 0x165de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962024));
    // 0x165dec: 0xc085dde  jal         func_217778
    ctx->pc = 0x165DECu;
    SET_GPR_U32(ctx, 31, 0x165DF4u);
    ctx->pc = 0x217778u;
    {
        ctx->pc = 0x165DF4u;
        ps2_syscalls::sceSifLoadModule(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165DF4u) { return; }
    ctx->pc = 0x165DF4u;
label_165df4:
    // 0x165df4: 0x440fff8  bltz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x165DF4u;
    {
        const bool branch_taken_0x165df4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x165df4) {
            ctx->pc = 0x165DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165dd8;
        }
    }
    ctx->pc = 0x165DFCu;
    // 0x165dfc: 0x0  nop
    ctx->pc = 0x165dfcu;
    // NOP
    ctx->pc = 0x165e00u;
}
