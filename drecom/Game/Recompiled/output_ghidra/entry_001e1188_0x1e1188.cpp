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

// Function: entry_001e1188
// Address: 0x1e1188 - 0x1e11d0
void entry_001e1188_0x1e1188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1188_0x1e1188");
#endif

    switch (ctx->pc) {
        case 0x1e119cu: goto label_1e119c;
        default: break;
    }

    ctx->pc = 0x1e1188u;

    // 0x1e1188: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1e1188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e118c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e118cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e1190: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e1190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1194: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E1194u;
    SET_GPR_U32(ctx, 31, 0x1E119Cu);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E1194u, 0x1E119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E119Cu;
label_1e119c:
    // 0x1e119c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1e119cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e11a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e11a4: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e11a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e11a8: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e11a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e11ac: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E11ACu;
    {
        const bool branch_taken_0x1e11ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e11ac) {
            ctx->pc = 0x1E11D0u;
            return;
        }
    }
    ctx->pc = 0x1E11B4u;
    // 0x1e11b4: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1e11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1e11b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e11b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e11bc: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e11bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e11c0: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e11c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e11c4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E11C4u;
    {
        const bool branch_taken_0x1e11c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e11c4) {
            ctx->pc = 0x1E11D8u;
            return;
        }
    }
    ctx->pc = 0x1E11CCu;
    // 0x1e11cc: 0x0  nop
    ctx->pc = 0x1e11ccu;
    // NOP
    ctx->pc = 0x1e11d0u;
}
