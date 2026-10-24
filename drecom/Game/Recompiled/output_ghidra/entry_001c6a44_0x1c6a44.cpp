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

// Function: entry_001c6a44
// Address: 0x1c6a44 - 0x1c6a78
void entry_001c6a44_0x1c6a44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6a44_0x1c6a44");
#endif

    ctx->pc = 0x1c6a44u;

label_1c6a44:
    // 0x1c6a44: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c6a44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1c6a48:
    // 0x1c6a48: 0x90e80002  lbu         $t0, 0x2($a3)
    ctx->pc = 0x1c6a48u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_1c6a4c:
    // 0x1c6a4c: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x1c6a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_1c6a50:
    // 0x1c6a50: 0x2c610012  sltiu       $at, $v1, 0x12
    ctx->pc = 0x1c6a50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_1c6a54:
    // 0x1c6a54: 0x10200643  beqz        $at, . + 4 + (0x643 << 2)
label_1c6a58:
    if (ctx->pc == 0x1C6A58u) {
        ctx->pc = 0x1C6A5Cu;
        goto label_1c6a5c;
    }
    ctx->pc = 0x1C6A54u;
    {
        const bool branch_taken_0x1c6a54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6a54) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C6A5Cu;
label_1c6a5c:
    // 0x1c6a5c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x1c6a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_1c6a60:
    // 0x1c6a60: 0x24a4f3f0  addiu       $a0, $a1, -0xC10
    ctx->pc = 0x1c6a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964208));
label_1c6a64:
    // 0x1c6a64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c6a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1c6a68:
    // 0x1c6a68: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1c6a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c6a6c:
    // 0x1c6a6c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c6a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c6a70:
    // 0x1c6a70: 0x600008  jr          $v1
label_1c6a74:
    if (ctx->pc == 0x1C6A74u) {
        ctx->pc = 0x1C6A78u;
        goto label_fallthrough_0x1c6a70;
    }
    ctx->pc = 0x1C6A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6A70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1c6a70:
    ctx->pc = 0x1C6A78u;
}
