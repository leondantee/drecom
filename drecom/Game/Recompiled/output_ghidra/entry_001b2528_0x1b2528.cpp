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

// Function: entry_001b2528
// Address: 0x1b2528 - 0x1b256c
void entry_001b2528_0x1b2528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2528_0x1b2528");
#endif

    switch (ctx->pc) {
        case 0x1b2548u: goto label_1b2548;
        default: break;
    }

    ctx->pc = 0x1b2528u;

    // 0x1b2528: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1b2528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b252c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2530: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b2530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2534: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1b2534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2538: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b2538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b253c: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x1b253cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x1b2540: 0xc059e1c  jal         func_167870
    ctx->pc = 0x1B2540u;
    SET_GPR_U32(ctx, 31, 0x1B2548u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1B2540u, 0x1B2548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2548u;
label_1b2548:
    // 0x1b2548: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x1b2548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x1b254c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x1b254cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1b2550: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2550u;
    {
        const bool branch_taken_0x1b2550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2550) {
            ctx->pc = 0x1B256Cu;
            return;
        }
    }
    ctx->pc = 0x1B2558u;
    // 0x1b2558: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b255c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b255cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2560: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b2560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b2564: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B2564u;
    SET_GPR_U32(ctx, 31, 0x1B256Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B256Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B256Cu) { return; }
    ctx->pc = 0x1B256Cu;
}
