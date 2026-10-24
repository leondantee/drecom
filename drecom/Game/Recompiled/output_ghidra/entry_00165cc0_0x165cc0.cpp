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

// Function: entry_00165cc0
// Address: 0x165cc0 - 0x165cfc
void entry_00165cc0_0x165cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165cc0_0x165cc0");
#endif

    switch (ctx->pc) {
        case 0x165cccu: goto label_165ccc;
        case 0x165ce0u: goto label_165ce0;
        case 0x165ce8u: goto label_165ce8;
        default: break;
    }

    ctx->pc = 0x165cc0u;

label_165cc0:
    // 0x165cc0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x165cc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165cc4: 0xc043abc  jal         func_10EAF0
    ctx->pc = 0x165CC4u;
    SET_GPR_U32(ctx, 31, 0x165CCCu);
    ctx->pc = 0x10EAF0u;
    {
        ctx->pc = 0x165CCCu;
        ps2_stubs::sceCdInit(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165CCCu) { return; }
    ctx->pc = 0x165CCCu;
label_165ccc:
    // 0x165ccc: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x165CCCu;
    {
        const bool branch_taken_0x165ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165ccc) {
            ctx->pc = 0x165CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165cc0;
        }
    }
    ctx->pc = 0x165CD4u;
    // 0x165cd4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x165cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165cd8: 0xc043d0c  jal         func_10F430
    ctx->pc = 0x165CD8u;
    SET_GPR_U32(ctx, 31, 0x165CE0u);
    ctx->pc = 0x10F430u;
    {
        ctx->pc = 0x165CE0u;
        ps2_stubs::sceCdMmode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165CE0u) { return; }
    ctx->pc = 0x165CE0u;
label_165ce0:
    // 0x165ce0: 0xc059ad4  jal         func_166B50
    ctx->pc = 0x165CE0u;
    SET_GPR_U32(ctx, 31, 0x165CE8u);
    ctx->pc = 0x166B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166B50u, 0x165CE0u, 0x165CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165CE8u;
label_165ce8:
    // 0x165ce8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165cec: 0x8c221a40  lw          $v0, 0x1A40($at)
    ctx->pc = 0x165cecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x165cf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x165cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x165cf4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x165CF4u;
    {
        const bool branch_taken_0x165cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165cf4) {
            ctx->pc = 0x165D5Cu;
            return;
        }
    }
    ctx->pc = 0x165CFCu;
}
