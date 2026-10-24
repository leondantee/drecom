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

// Function: entry_0033bb90
// Address: 0x33bb90 - 0x33bbc0
void entry_0033bb90_0x33bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033bb90_0x33bb90");
#endif

    ctx->pc = 0x33bb90u;

label_33bb90:
    // 0x33bb90: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x33bb90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_33bb94:
    // 0x33bb94: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x33bb94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_33bb98:
    // 0x33bb98: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x33bb98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_33bb9c:
    // 0x33bb9c: 0x102001b3  beqz        $at, . + 4 + (0x1B3 << 2)
label_33bba0:
    if (ctx->pc == 0x33BBA0u) {
        ctx->pc = 0x33BBA4u;
        goto label_33bba4;
    }
    ctx->pc = 0x33BB9Cu;
    {
        const bool branch_taken_0x33bb9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bb9c) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33BBA4u;
label_33bba4:
    // 0x33bba4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x33bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_33bba8:
    // 0x33bba8: 0x24642930  addiu       $a0, $v1, 0x2930
    ctx->pc = 0x33bba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_33bbac:
    // 0x33bbac: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x33bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_33bbb0:
    // 0x33bbb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33bbb4:
    // 0x33bbb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33bbb8:
    // 0x33bbb8: 0x600008  jr          $v1
label_33bbbc:
    if (ctx->pc == 0x33BBBCu) {
        ctx->pc = 0x33BBC0u;
        goto label_fallthrough_0x33bbb8;
    }
    ctx->pc = 0x33BBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BBB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x33bbb8:
    ctx->pc = 0x33BBC0u;
}
