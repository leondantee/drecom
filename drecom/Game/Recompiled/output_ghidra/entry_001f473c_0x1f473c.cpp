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

// Function: entry_001f473c
// Address: 0x1f473c - 0x1f476c
void entry_001f473c_0x1f473c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f473c_0x1f473c");
#endif

    switch (ctx->pc) {
        case 0x1f4754u: goto label_1f4754;
        default: break;
    }

    ctx->pc = 0x1f473cu;

label_1f473c:
    // 0x1f473c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1f473cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f4740: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f4740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4744: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f4744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f4748: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x1f4748u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1f474c: 0xc0961d0  jal         func_258740
    ctx->pc = 0x1F474Cu;
    SET_GPR_U32(ctx, 31, 0x1F4754u);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x1F474Cu, 0x1F4754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4754u;
label_1f4754:
    // 0x1f4754: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1f4754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1f4758: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f4758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f475c: 0x1620fff7  bnez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F475Cu;
    {
        const bool branch_taken_0x1f475c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f475c) {
            ctx->pc = 0x1F473Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f473c;
        }
    }
    ctx->pc = 0x1F4764u;
    // 0x1f4764: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1F4764u;
    {
        const bool branch_taken_0x1f4764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4764) {
            ctx->pc = 0x1F487Cu;
            return;
        }
    }
    ctx->pc = 0x1F476Cu;
}
