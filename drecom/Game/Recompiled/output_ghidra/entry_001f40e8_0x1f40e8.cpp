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

// Function: entry_001f40e8
// Address: 0x1f40e8 - 0x1f4118
void entry_001f40e8_0x1f40e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f40e8_0x1f40e8");
#endif

    switch (ctx->pc) {
        case 0x1f4100u: goto label_1f4100;
        default: break;
    }

    ctx->pc = 0x1f40e8u;

label_1f40e8:
    // 0x1f40e8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1f40e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f40ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f40ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f40f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f40f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f40f4: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x1f40f4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1f40f8: 0xc0961d0  jal         func_258740
    ctx->pc = 0x1F40F8u;
    SET_GPR_U32(ctx, 31, 0x1F4100u);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x1F40F8u, 0x1F4100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4100u;
label_1f4100:
    // 0x1f4100: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1f4100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1f4104: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f4104u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f4108: 0x1620fff7  bnez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F4108u;
    {
        const bool branch_taken_0x1f4108 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4108) {
            ctx->pc = 0x1F40E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f40e8;
        }
    }
    ctx->pc = 0x1F4110u;
    // 0x1f4110: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1F4110u;
    {
        const bool branch_taken_0x1f4110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4110) {
            ctx->pc = 0x1F4188u;
            return;
        }
    }
    ctx->pc = 0x1F4118u;
}
