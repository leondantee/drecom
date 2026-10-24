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

// Function: entry_001e3e48
// Address: 0x1e3e48 - 0x1e3e90
void entry_001e3e48_0x1e3e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3e48_0x1e3e48");
#endif

    switch (ctx->pc) {
        case 0x1e3e5cu: goto label_1e3e5c;
        default: break;
    }

    ctx->pc = 0x1e3e48u;

    // 0x1e3e48: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1e3e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e3e4c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e3e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e3e50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3e54: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E3E54u;
    SET_GPR_U32(ctx, 31, 0x1E3E5Cu);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E3E54u, 0x1E3E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3E5Cu;
label_1e3e5c:
    // 0x1e3e5c: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x1e3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e3e60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3e64: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3e64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3e68: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e3e68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3e6c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E3E6Cu;
    {
        const bool branch_taken_0x1e3e6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3e6c) {
            ctx->pc = 0x1E3E90u;
            return;
        }
    }
    ctx->pc = 0x1E3E74u;
    // 0x1e3e74: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1e3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1e3e78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3e7c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3e7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3e80: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e3e80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3e84: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3E84u;
    {
        const bool branch_taken_0x1e3e84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3e84) {
            ctx->pc = 0x1E3E98u;
            return;
        }
    }
    ctx->pc = 0x1E3E8Cu;
    // 0x1e3e8c: 0x0  nop
    ctx->pc = 0x1e3e8cu;
    // NOP
    ctx->pc = 0x1e3e90u;
}
