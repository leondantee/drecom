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

// Function: entry_0026c324
// Address: 0x26c324 - 0x26c354
void entry_0026c324_0x26c324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c324_0x26c324");
#endif

    ctx->pc = 0x26c324u;

label_26c324:
    // 0x26c324: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c328:
    // 0x26c328: 0x8c651b64  lw          $a1, 0x1B64($v1)
    ctx->pc = 0x26c328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
label_26c32c:
    // 0x26c32c: 0x2ca1000b  sltiu       $at, $a1, 0xB
    ctx->pc = 0x26c32cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_26c330:
    // 0x26c330: 0x102001a7  beqz        $at, . + 4 + (0x1A7 << 2)
label_26c334:
    if (ctx->pc == 0x26C334u) {
        ctx->pc = 0x26C338u;
        goto label_26c338;
    }
    ctx->pc = 0x26C330u;
    {
        const bool branch_taken_0x26c330 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c330) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C338u;
label_26c338:
    // 0x26c338: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x26c338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_26c33c:
    // 0x26c33c: 0x246414a0  addiu       $a0, $v1, 0x14A0
    ctx->pc = 0x26c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5280));
label_26c340:
    // 0x26c340: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x26c340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_26c344:
    // 0x26c344: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26c344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_26c348:
    // 0x26c348: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x26c348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26c34c:
    // 0x26c34c: 0x600008  jr          $v1
label_26c350:
    if (ctx->pc == 0x26C350u) {
        ctx->pc = 0x26C354u;
        goto label_fallthrough_0x26c34c;
    }
    ctx->pc = 0x26C34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C34Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x26c34c:
    ctx->pc = 0x26C354u;
}
