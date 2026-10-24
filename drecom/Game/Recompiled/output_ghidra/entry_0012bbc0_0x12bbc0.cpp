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

// Function: entry_0012bbc0
// Address: 0x12bbc0 - 0x12bbf8
void entry_0012bbc0_0x12bbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bbc0_0x12bbc0");
#endif

    switch (ctx->pc) {
        case 0x12bbc8u: goto label_12bbc8;
        default: break;
    }

    ctx->pc = 0x12bbc0u;

    // 0x12bbc0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12BBC0u;
    SET_GPR_U32(ctx, 31, 0x12BBC8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12BBC0u, 0x12BBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BBC8u;
label_12bbc8:
    // 0x12bbc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12bbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12bbcc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x12bbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x12bbd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12bbd4: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x12BBD4u;
    {
        const bool branch_taken_0x12bbd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12bbd4) {
            ctx->pc = 0x12BC58u;
            return;
        }
    }
    ctx->pc = 0x12BBDCu;
    // 0x12bbdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bbe0: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12BBE0u;
    {
        const bool branch_taken_0x12bbe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12bbe0) {
            ctx->pc = 0x12BC28u;
            return;
        }
    }
    ctx->pc = 0x12BBE8u;
    // 0x12bbe8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12BBE8u;
    {
        const bool branch_taken_0x12bbe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bbe8) {
            ctx->pc = 0x12BBF8u;
            return;
        }
    }
    ctx->pc = 0x12BBF0u;
    // 0x12bbf0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12BBF0u;
    {
        const bool branch_taken_0x12bbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bbf0) {
            ctx->pc = 0x12BBF8u;
            return;
        }
    }
    ctx->pc = 0x12BBF8u;
}
