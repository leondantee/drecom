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

// Function: entry_001f4954
// Address: 0x1f4954 - 0x1f4984
void entry_001f4954_0x1f4954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4954_0x1f4954");
#endif

    switch (ctx->pc) {
        case 0x1f496cu: goto label_1f496c;
        default: break;
    }

    ctx->pc = 0x1f4954u;

label_1f4954:
    // 0x1f4954: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1f4954u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f4958: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f4958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f495c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f495cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f4960: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x1f4960u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1f4964: 0xc096254  jal         func_258950
    ctx->pc = 0x1F4964u;
    SET_GPR_U32(ctx, 31, 0x1F496Cu);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x1F4964u, 0x1F496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F496Cu;
label_1f496c:
    // 0x1f496c: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1f496cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1f4970: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f4970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f4974: 0x1620fff7  bnez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F4974u;
    {
        const bool branch_taken_0x1f4974 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4974) {
            ctx->pc = 0x1F4954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4954;
        }
    }
    ctx->pc = 0x1F497Cu;
    // 0x1f497c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1F497Cu;
    {
        const bool branch_taken_0x1f497c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f497c) {
            ctx->pc = 0x1F4B14u;
            return;
        }
    }
    ctx->pc = 0x1F4984u;
}
