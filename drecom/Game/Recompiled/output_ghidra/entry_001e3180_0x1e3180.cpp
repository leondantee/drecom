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

// Function: entry_001e3180
// Address: 0x1e3180 - 0x1e31c8
void entry_001e3180_0x1e3180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3180_0x1e3180");
#endif

    switch (ctx->pc) {
        case 0x1e3194u: goto label_1e3194;
        default: break;
    }

    ctx->pc = 0x1e3180u;

    // 0x1e3180: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1e3180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e3184: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e3184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e3188: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e318c: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E318Cu;
    SET_GPR_U32(ctx, 31, 0x1E3194u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E318Cu, 0x1E3194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3194u;
label_1e3194:
    // 0x1e3194: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x1e3194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e3198: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e319c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e319cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e31a0: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e31a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e31a4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E31A4u;
    {
        const bool branch_taken_0x1e31a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e31a4) {
            ctx->pc = 0x1E31C8u;
            return;
        }
    }
    ctx->pc = 0x1E31ACu;
    // 0x1e31ac: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1e31acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1e31b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e31b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e31b4: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e31b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e31b8: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e31b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e31bc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E31BCu;
    {
        const bool branch_taken_0x1e31bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e31bc) {
            ctx->pc = 0x1E31D0u;
            return;
        }
    }
    ctx->pc = 0x1E31C4u;
    // 0x1e31c4: 0x0  nop
    ctx->pc = 0x1e31c4u;
    // NOP
    ctx->pc = 0x1e31c8u;
}
