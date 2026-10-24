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

// Function: entry_001e4410
// Address: 0x1e4410 - 0x1e4458
void entry_001e4410_0x1e4410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4410_0x1e4410");
#endif

    switch (ctx->pc) {
        case 0x1e4424u: goto label_1e4424;
        default: break;
    }

    ctx->pc = 0x1e4410u;

    // 0x1e4410: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1e4410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e4414: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e4414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e4418: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e4418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e441c: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E441Cu;
    SET_GPR_U32(ctx, 31, 0x1E4424u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E441Cu, 0x1E4424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4424u;
label_1e4424:
    // 0x1e4424: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1e4424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e4428: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e442c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e442cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e4430: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e4430u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e4434: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E4434u;
    {
        const bool branch_taken_0x1e4434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4434) {
            ctx->pc = 0x1E4458u;
            return;
        }
    }
    ctx->pc = 0x1E443Cu;
    // 0x1e443c: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1e443cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1e4440: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4444: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e4444u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e4448: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e4448u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e444c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E444Cu;
    {
        const bool branch_taken_0x1e444c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e444c) {
            ctx->pc = 0x1E4460u;
            return;
        }
    }
    ctx->pc = 0x1E4454u;
    // 0x1e4454: 0x0  nop
    ctx->pc = 0x1e4454u;
    // NOP
    ctx->pc = 0x1e4458u;
}
