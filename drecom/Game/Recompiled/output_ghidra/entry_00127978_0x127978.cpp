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

// Function: entry_00127978
// Address: 0x127978 - 0x1279b0
void entry_00127978_0x127978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127978_0x127978");
#endif

    switch (ctx->pc) {
        case 0x127980u: goto label_127980;
        default: break;
    }

    ctx->pc = 0x127978u;

label_127978:
    // 0x127978: 0xc067694  jal         func_19DA50
label_12797c:
    if (ctx->pc == 0x12797Cu) {
        ctx->pc = 0x127980u;
        goto label_127980;
    }
    ctx->pc = 0x127978u;
    SET_GPR_U32(ctx, 31, 0x127980u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x127978u, 0x127980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127980u;
label_127980:
    // 0x127980: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x127980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_127984:
    // 0x127984: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x127984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_127988:
    // 0x127988: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x127988u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_12798c:
    // 0x12798c: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
label_127990:
    if (ctx->pc == 0x127990u) {
        ctx->pc = 0x127994u;
        goto label_127994;
    }
    ctx->pc = 0x12798Cu;
    {
        const bool branch_taken_0x12798c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12798c) {
            ctx->pc = 0x127A18u;
            return;
        }
    }
    ctx->pc = 0x127994u;
label_127994:
    // 0x127994: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x127994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_127998:
    // 0x127998: 0x2464e2e0  addiu       $a0, $v1, -0x1D20
    ctx->pc = 0x127998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959840));
label_12799c:
    // 0x12799c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x12799cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1279a0:
    // 0x1279a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1279a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1279a4:
    // 0x1279a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1279a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1279a8:
    // 0x1279a8: 0x600008  jr          $v1
label_1279ac:
    if (ctx->pc == 0x1279ACu) {
        ctx->pc = 0x1279B0u;
        goto label_fallthrough_0x1279a8;
    }
    ctx->pc = 0x1279A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1279A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1279a8:
    ctx->pc = 0x1279B0u;
}
