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

// Function: entry_001c4390
// Address: 0x1c4390 - 0x1c43dc
void entry_001c4390_0x1c4390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4390_0x1c4390");
#endif

    switch (ctx->pc) {
        case 0x1c43c8u: goto label_1c43c8;
        default: break;
    }

    ctx->pc = 0x1c4390u;

label_1c4390:
    // 0x1c4390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4394:
    // 0x1c4394: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c4394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_1c4398:
    // 0x1c4398: 0xac22b970  sw          $v0, -0x4690($at)
    ctx->pc = 0x1c4398u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949232), GPR_U32(ctx, 2));
label_1c439c:
    // 0x1c439c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c439cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c43a0:
    // 0x1c43a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c43a4:
    // 0x1c43a4: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1c43a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1c43a8:
    // 0x1c43a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c43a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c43ac:
    // 0x1c43ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c43acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c43b0:
    // 0x1c43b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1c43b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1c43b4:
    // 0x1c43b4: 0x24429190  addiu       $v0, $v0, -0x6E70
    ctx->pc = 0x1c43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939024));
label_1c43b8:
    // 0x1c43b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c43bc:
    // 0x1c43bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c43c0:
    // 0x1c43c0: 0x40f809  jalr        $v0
label_1c43c4:
    if (ctx->pc == 0x1C43C4u) {
        ctx->pc = 0x1C43C8u;
        goto label_1c43c8;
    }
    ctx->pc = 0x1C43C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C43C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C43C0u, 0x1C43C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C43C8u;
label_1c43c8:
    // 0x1c43c8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c43c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c43cc:
    // 0x1c43cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c43ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c43d0:
    // 0x1c43d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c43d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c43d4:
    // 0x1c43d4: 0x3e00008  jr          $ra
label_1c43d8:
    if (ctx->pc == 0x1C43D8u) {
        ctx->pc = 0x1C43DCu;
        goto label_fallthrough_0x1c43d4;
    }
    ctx->pc = 0x1C43D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C43D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c43d4:
    ctx->pc = 0x1C43DCu;
}
