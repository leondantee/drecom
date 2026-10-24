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

// Function: entry_001e45fc
// Address: 0x1e45fc - 0x1e4628
void entry_001e45fc_0x1e45fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e45fc_0x1e45fc");
#endif

    ctx->pc = 0x1e45fcu;

label_1e45fc:
    // 0x1e45fc: 0x2e610008  sltiu       $at, $s3, 0x8
    ctx->pc = 0x1e45fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1e4600:
    // 0x1e4600: 0x10200067  beqz        $at, . + 4 + (0x67 << 2)
label_1e4604:
    if (ctx->pc == 0x1E4604u) {
        ctx->pc = 0x1E4608u;
        goto label_1e4608;
    }
    ctx->pc = 0x1E4600u;
    {
        const bool branch_taken_0x1e4600 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4600) {
            ctx->pc = 0x1E47A0u;
            return;
        }
    }
    ctx->pc = 0x1E4608u;
label_1e4608:
    // 0x1e4608: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1e4608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1e460c:
    // 0x1e460c: 0x24430c60  addiu       $v1, $v0, 0xC60
    ctx->pc = 0x1e460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3168));
label_1e4610:
    // 0x1e4610: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1e4610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1e4614:
    // 0x1e4614: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4618:
    // 0x1e4618: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e461c:
    // 0x1e461c: 0x400008  jr          $v0
label_1e4620:
    if (ctx->pc == 0x1E4620u) {
        ctx->pc = 0x1E4624u;
        goto label_1e4624;
    }
    ctx->pc = 0x1E461Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E461Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E4624u;
label_1e4624:
    // 0x1e4624: 0x0  nop
    ctx->pc = 0x1e4624u;
    // NOP
    ctx->pc = 0x1e4628u;
}
