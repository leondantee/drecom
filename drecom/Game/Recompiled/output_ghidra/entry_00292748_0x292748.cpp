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

// Function: entry_00292748
// Address: 0x292748 - 0x292788
void entry_00292748_0x292748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292748_0x292748");
#endif

    switch (ctx->pc) {
        case 0x292750u: goto label_292750;
        case 0x29275cu: goto label_29275c;
        case 0x29277cu: goto label_29277c;
        default: break;
    }

    ctx->pc = 0x292748u;

    // 0x292748: 0xc0a5c44  jal         func_297110
    ctx->pc = 0x292748u;
    SET_GPR_U32(ctx, 31, 0x292750u);
    ctx->pc = 0x297110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297110u, 0x292748u, 0x292750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292750u;
label_292750:
    // 0x292750: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x292750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x292754: 0xc05dbf4  jal         func_176FD0
    ctx->pc = 0x292754u;
    SET_GPR_U32(ctx, 31, 0x29275Cu);
    ctx->pc = 0x176FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FD0u, 0x292754u, 0x29275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29275Cu;
label_29275c:
    // 0x29275c: 0x8e026870  lw          $v0, 0x6870($s0)
    ctx->pc = 0x29275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26736)));
    // 0x292760: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x292760u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x292764: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x292764u;
    {
        const bool branch_taken_0x292764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292764) {
            ctx->pc = 0x292788u;
            return;
        }
    }
    ctx->pc = 0x29276Cu;
    // 0x29276c: 0x240400ad  addiu       $a0, $zero, 0xAD
    ctx->pc = 0x29276cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x292770: 0x26050520  addiu       $a1, $s0, 0x520
    ctx->pc = 0x292770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    // 0x292774: 0xc0a4a44  jal         func_292910
    ctx->pc = 0x292774u;
    SET_GPR_U32(ctx, 31, 0x29277Cu);
    ctx->pc = 0x292910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292910u, 0x292774u, 0x29277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29277Cu;
label_29277c:
    // 0x29277c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x29277cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x292780: 0xc05dbf4  jal         func_176FD0
    ctx->pc = 0x292780u;
    SET_GPR_U32(ctx, 31, 0x292788u);
    ctx->pc = 0x176FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FD0u, 0x292780u, 0x292788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292788u;
}
