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

// Function: entry_001a0654
// Address: 0x1a0654 - 0x1a0688
void entry_001a0654_0x1a0654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0654_0x1a0654");
#endif

    ctx->pc = 0x1a0654u;

label_1a0654:
    // 0x1a0654: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a0658:
    // 0x1a0658: 0x94222740  lhu         $v0, 0x2740($at)
    ctx->pc = 0x1a0658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 10048)));
label_1a065c:
    // 0x1a065c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1a065cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1a0660:
    // 0x1a0660: 0x2c81000a  sltiu       $at, $a0, 0xA
    ctx->pc = 0x1a0660u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1a0664:
    // 0x1a0664: 0x102000dd  beqz        $at, . + 4 + (0xDD << 2)
label_1a0668:
    if (ctx->pc == 0x1A0668u) {
        ctx->pc = 0x1A066Cu;
        goto label_1a066c;
    }
    ctx->pc = 0x1A0664u;
    {
        const bool branch_taken_0x1a0664 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0664) {
            ctx->pc = 0x1A09DCu;
            return;
        }
    }
    ctx->pc = 0x1A066Cu;
label_1a066c:
    // 0x1a066c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a066cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1a0670:
    // 0x1a0670: 0x2443ef90  addiu       $v1, $v0, -0x1070
    ctx->pc = 0x1a0670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963088));
label_1a0674:
    // 0x1a0674: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a0674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a0678:
    // 0x1a0678: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a0678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a067c:
    // 0x1a067c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a0680:
    // 0x1a0680: 0x400008  jr          $v0
label_1a0684:
    if (ctx->pc == 0x1A0684u) {
        ctx->pc = 0x1A0688u;
        goto label_fallthrough_0x1a0680;
    }
    ctx->pc = 0x1A0680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0680u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1a0680:
    ctx->pc = 0x1A0688u;
}
