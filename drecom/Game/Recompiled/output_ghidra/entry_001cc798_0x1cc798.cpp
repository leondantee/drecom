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

// Function: entry_001cc798
// Address: 0x1cc798 - 0x1cc7cc
void entry_001cc798_0x1cc798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc798_0x1cc798");
#endif

    ctx->pc = 0x1cc798u;

label_1cc798:
    // 0x1cc798: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cc798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1cc79c:
    // 0x1cc79c: 0x90c50002  lbu         $a1, 0x2($a2)
    ctx->pc = 0x1cc79cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_1cc7a0:
    // 0x1cc7a0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1cc7a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1cc7a4:
    // 0x1cc7a4: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x1cc7a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1cc7a8:
    // 0x1cc7a8: 0x102004f1  beqz        $at, . + 4 + (0x4F1 << 2)
label_1cc7ac:
    if (ctx->pc == 0x1CC7ACu) {
        ctx->pc = 0x1CC7B0u;
        goto label_1cc7b0;
    }
    ctx->pc = 0x1CC7A8u;
    {
        const bool branch_taken_0x1cc7a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc7a8) {
            ctx->pc = 0x1CDB70u;
            return;
        }
    }
    ctx->pc = 0x1CC7B0u;
label_1cc7b0:
    // 0x1cc7b0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1cc7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1cc7b4:
    // 0x1cc7b4: 0x2463f510  addiu       $v1, $v1, -0xAF0
    ctx->pc = 0x1cc7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964496));
label_1cc7b8:
    // 0x1cc7b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cc7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cc7bc:
    // 0x1cc7bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1cc7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1cc7c0:
    // 0x1cc7c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1cc7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc7c4:
    // 0x1cc7c4: 0x600008  jr          $v1
label_1cc7c8:
    if (ctx->pc == 0x1CC7C8u) {
        ctx->pc = 0x1CC7CCu;
        goto label_fallthrough_0x1cc7c4;
    }
    ctx->pc = 0x1CC7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC7C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1cc7c4:
    ctx->pc = 0x1CC7CCu;
}
