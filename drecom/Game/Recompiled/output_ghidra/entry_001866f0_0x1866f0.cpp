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

// Function: entry_001866f0
// Address: 0x1866f0 - 0x186718
void entry_001866f0_0x1866f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001866f0_0x1866f0");
#endif

    ctx->pc = 0x1866f0u;

label_1866f0:
    // 0x1866f0: 0x2e410007  sltiu       $at, $s2, 0x7
    ctx->pc = 0x1866f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1866f4:
    // 0x1866f4: 0x1020016a  beqz        $at, . + 4 + (0x16A << 2)
label_1866f8:
    if (ctx->pc == 0x1866F8u) {
        ctx->pc = 0x1866FCu;
        goto label_1866fc;
    }
    ctx->pc = 0x1866F4u;
    {
        const bool branch_taken_0x1866f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1866f4) {
            ctx->pc = 0x186CA0u;
            return;
        }
    }
    ctx->pc = 0x1866FCu;
label_1866fc:
    // 0x1866fc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1866fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_186700:
    // 0x186700: 0x2464ed60  addiu       $a0, $v1, -0x12A0
    ctx->pc = 0x186700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962528));
label_186704:
    // 0x186704: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x186704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_186708:
    // 0x186708: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x186708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18670c:
    // 0x18670c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_186710:
    // 0x186710: 0x600008  jr          $v1
label_186714:
    if (ctx->pc == 0x186714u) {
        ctx->pc = 0x186718u;
        goto label_fallthrough_0x186710;
    }
    ctx->pc = 0x186710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186710u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x186710:
    ctx->pc = 0x186718u;
}
