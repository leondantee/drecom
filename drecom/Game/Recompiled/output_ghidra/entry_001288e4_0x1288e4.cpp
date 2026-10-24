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

// Function: entry_001288e4
// Address: 0x1288e4 - 0x12891c
void entry_001288e4_0x1288e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001288e4_0x1288e4");
#endif

    switch (ctx->pc) {
        case 0x1288ecu: goto label_1288ec;
        default: break;
    }

    ctx->pc = 0x1288e4u;

label_1288e4:
    // 0x1288e4: 0xc067694  jal         func_19DA50
label_1288e8:
    if (ctx->pc == 0x1288E8u) {
        ctx->pc = 0x1288ECu;
        goto label_1288ec;
    }
    ctx->pc = 0x1288E4u;
    SET_GPR_U32(ctx, 31, 0x1288ECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1288E4u, 0x1288ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1288ECu;
label_1288ec:
    // 0x1288ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1288ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1288f0:
    // 0x1288f0: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x1288f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1288f4:
    // 0x1288f4: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x1288f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1288f8:
    // 0x1288f8: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
label_1288fc:
    if (ctx->pc == 0x1288FCu) {
        ctx->pc = 0x128900u;
        goto label_128900;
    }
    ctx->pc = 0x1288F8u;
    {
        const bool branch_taken_0x1288f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1288f8) {
            ctx->pc = 0x1289C8u;
            return;
        }
    }
    ctx->pc = 0x128900u;
label_128900:
    // 0x128900: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x128900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_128904:
    // 0x128904: 0x2464e380  addiu       $a0, $v1, -0x1C80
    ctx->pc = 0x128904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960000));
label_128908:
    // 0x128908: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x128908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_12890c:
    // 0x12890c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12890cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_128910:
    // 0x128910: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x128910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_128914:
    // 0x128914: 0x600008  jr          $v1
label_128918:
    if (ctx->pc == 0x128918u) {
        ctx->pc = 0x12891Cu;
        goto label_fallthrough_0x128914;
    }
    ctx->pc = 0x128914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128914u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x128914:
    ctx->pc = 0x12891Cu;
}
