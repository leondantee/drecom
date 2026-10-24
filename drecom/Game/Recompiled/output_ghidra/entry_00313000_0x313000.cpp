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

// Function: entry_00313000
// Address: 0x313000 - 0x313030
void entry_00313000_0x313000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313000_0x313000");
#endif

    switch (ctx->pc) {
        case 0x313018u: goto label_313018;
        default: break;
    }

    ctx->pc = 0x313000u;

    // 0x313000: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x313000u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x313004: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x313004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x313008: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x313008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31300c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x31300cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x313010: 0xc06553c  jal         func_1954F0
    ctx->pc = 0x313010u;
    SET_GPR_U32(ctx, 31, 0x313018u);
    ctx->pc = 0x1954F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1954F0u, 0x313010u, 0x313018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313018u;
label_313018:
    // 0x313018: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x313018u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31301c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x31301cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x313020: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x313020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x313024: 0x1443ffc6  bne         $v0, $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x313024u;
    {
        const bool branch_taken_0x313024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x313024) {
            ctx->pc = 0x312F40u;
            return;
        }
    }
    ctx->pc = 0x31302Cu;
    // 0x31302c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x31302cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x313030u;
}
