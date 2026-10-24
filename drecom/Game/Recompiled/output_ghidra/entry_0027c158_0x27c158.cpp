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

// Function: entry_0027c158
// Address: 0x27c158 - 0x27c190
void entry_0027c158_0x27c158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c158_0x27c158");
#endif

    ctx->pc = 0x27c158u;

label_27c158:
    // 0x27c158: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27c15c:
    // 0x27c15c: 0x90221b49  lbu         $v0, 0x1B49($at)
    ctx->pc = 0x27c15cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6985)));
label_27c160:
    // 0x27c160: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x27c160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27c164:
    // 0x27c164: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x27c164u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_27c168:
    // 0x27c168: 0x1020008c  beqz        $at, . + 4 + (0x8C << 2)
label_27c16c:
    if (ctx->pc == 0x27C16Cu) {
        ctx->pc = 0x27C170u;
        goto label_27c170;
    }
    ctx->pc = 0x27C168u;
    {
        const bool branch_taken_0x27c168 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c168) {
            ctx->pc = 0x27C39Cu;
            return;
        }
    }
    ctx->pc = 0x27C170u;
label_27c170:
    // 0x27c170: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27c170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_27c174:
    // 0x27c174: 0x244315c0  addiu       $v1, $v0, 0x15C0
    ctx->pc = 0x27c174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5568));
label_27c178:
    // 0x27c178: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x27c178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_27c17c:
    // 0x27c17c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27c180:
    // 0x27c180: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27c184:
    // 0x27c184: 0x400008  jr          $v0
label_27c188:
    if (ctx->pc == 0x27C188u) {
        ctx->pc = 0x27C18Cu;
        goto label_27c18c;
    }
    ctx->pc = 0x27C184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C184u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27C18Cu;
label_27c18c:
    // 0x27c18c: 0x0  nop
    ctx->pc = 0x27c18cu;
    // NOP
    ctx->pc = 0x27c190u;
}
