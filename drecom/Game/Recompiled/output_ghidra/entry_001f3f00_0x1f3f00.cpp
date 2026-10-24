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

// Function: entry_001f3f00
// Address: 0x1f3f00 - 0x1f3f28
void entry_001f3f00_0x1f3f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3f00_0x1f3f00");
#endif

    switch (ctx->pc) {
        case 0x1f3f18u: goto label_1f3f18;
        default: break;
    }

    ctx->pc = 0x1f3f00u;

label_1f3f00:
    // 0x1f3f00: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1f3f00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f3f04: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f3f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f3f08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f3f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f3f0c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x1f3f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1f3f10: 0xc096254  jal         func_258950
    ctx->pc = 0x1F3F10u;
    SET_GPR_U32(ctx, 31, 0x1F3F18u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x1F3F10u, 0x1F3F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F18u;
label_1f3f18:
    // 0x1f3f18: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1f3f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1f3f1c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f3f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f3f20: 0x1620fff7  bnez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F3F20u;
    {
        const bool branch_taken_0x1f3f20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3f20) {
            ctx->pc = 0x1F3F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3f00;
        }
    }
    ctx->pc = 0x1F3F28u;
}
