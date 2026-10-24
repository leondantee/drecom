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

// Function: entry_001b96fc
// Address: 0x1b96fc - 0x1b974c
void entry_001b96fc_0x1b96fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b96fc_0x1b96fc");
#endif

    switch (ctx->pc) {
        case 0x1b970cu: goto label_1b970c;
        case 0x1b9734u: goto label_1b9734;
        default: break;
    }

    ctx->pc = 0x1b96fcu;

    // 0x1b96fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b96fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9700: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x1b9700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1b9704: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x1B9704u;
    SET_GPR_U32(ctx, 31, 0x1B970Cu);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1B9704u, 0x1B970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B970Cu;
label_1b970c:
    // 0x1b970c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B970Cu;
    {
        const bool branch_taken_0x1b970c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b970c) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B9714u;
    // 0x1b9714: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9718: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x1b9718u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1b971c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1b971cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b9720: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1b9720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1b9724: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9724u;
    {
        const bool branch_taken_0x1b9724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9724) {
            ctx->pc = 0x1B974Cu;
            return;
        }
    }
    ctx->pc = 0x1B972Cu;
    // 0x1b972c: 0xc0585dc  jal         func_161770
    ctx->pc = 0x1B972Cu;
    SET_GPR_U32(ctx, 31, 0x1B9734u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1B972Cu, 0x1B9734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9734u;
label_1b9734:
    // 0x1b9734: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9734u;
    {
        const bool branch_taken_0x1b9734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9734) {
            ctx->pc = 0x1B974Cu;
            return;
        }
    }
    ctx->pc = 0x1B973Cu;
    // 0x1b973c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b973cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9740: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1b9740u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b9744: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B9744u;
    {
        const bool branch_taken_0x1b9744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9744) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B974Cu;
}
