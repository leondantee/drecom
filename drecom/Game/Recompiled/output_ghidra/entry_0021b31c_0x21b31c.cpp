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

// Function: entry_0021b31c
// Address: 0x21b31c - 0x21b358
void entry_0021b31c_0x21b31c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b31c_0x21b31c");
#endif

    switch (ctx->pc) {
        case 0x21b340u: goto label_21b340;
        case 0x21b34cu: goto label_21b34c;
        default: break;
    }

    ctx->pc = 0x21b31cu;

    // 0x21b31c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x21b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21b320: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x21B320u;
    {
        const bool branch_taken_0x21b320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b320) {
            ctx->pc = 0x21B358u;
            return;
        }
    }
    ctx->pc = 0x21B328u;
    // 0x21b328: 0x24041409  addiu       $a0, $zero, 0x1409
    ctx->pc = 0x21b328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x21b32c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21b32cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b330: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x21b330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21b334: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21b334u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b338: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21B338u;
    SET_GPR_U32(ctx, 31, 0x21B340u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21B338u, 0x21B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B340u;
label_21b340:
    // 0x21b340: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21b340u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b344: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21B344u;
    SET_GPR_U32(ctx, 31, 0x21B34Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21B344u, 0x21B34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B34Cu;
label_21b34c:
    // 0x21b34c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21b34cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b350: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x21B350u;
    {
        const bool branch_taken_0x21b350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b350) {
            ctx->pc = 0x21B3A8u;
            return;
        }
    }
    ctx->pc = 0x21B358u;
}
