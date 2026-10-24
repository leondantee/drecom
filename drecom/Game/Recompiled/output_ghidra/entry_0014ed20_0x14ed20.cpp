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

// Function: entry_0014ed20
// Address: 0x14ed20 - 0x14ed5c
void entry_0014ed20_0x14ed20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ed20_0x14ed20");
#endif

    switch (ctx->pc) {
        case 0x14ed2cu: goto label_14ed2c;
        case 0x14ed4cu: goto label_14ed4c;
        case 0x14ed54u: goto label_14ed54;
        default: break;
    }

    ctx->pc = 0x14ed20u;

    // 0x14ed20: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14ed24: 0xc05c04c  jal         func_170130
    ctx->pc = 0x14ED24u;
    SET_GPR_U32(ctx, 31, 0x14ED2Cu);
    ctx->pc = 0x170130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170130u, 0x14ED24u, 0x14ED2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED2Cu;
label_14ed2c:
    // 0x14ed2c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x14ed2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14ed30: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x14ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x14ed34: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14ed34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14ed38: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14ED38u;
    {
        const bool branch_taken_0x14ed38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed38) {
            ctx->pc = 0x14ED5Cu;
            return;
        }
    }
    ctx->pc = 0x14ED40u;
    // 0x14ed40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14ed44: 0xc095df0  jal         func_2577C0
    ctx->pc = 0x14ED44u;
    SET_GPR_U32(ctx, 31, 0x14ED4Cu);
    ctx->pc = 0x2577C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2577C0u, 0x14ED44u, 0x14ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED4Cu;
label_14ed4c:
    // 0x14ed4c: 0xc054158  jal         func_150560
    ctx->pc = 0x14ED4Cu;
    SET_GPR_U32(ctx, 31, 0x14ED54u);
    ctx->pc = 0x150560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150560u, 0x14ED4Cu, 0x14ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED54u;
label_14ed54:
    // 0x14ed54: 0xc06c658  jal         func_1B1960
    ctx->pc = 0x14ED54u;
    SET_GPR_U32(ctx, 31, 0x14ED5Cu);
    ctx->pc = 0x1B1960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1960u, 0x14ED54u, 0x14ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED5Cu;
}
