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

// Function: entry_00313190
// Address: 0x313190 - 0x3131d0
void entry_00313190_0x313190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313190_0x313190");
#endif

    switch (ctx->pc) {
        case 0x3131a8u: goto label_3131a8;
        default: break;
    }

    ctx->pc = 0x313190u;

    // 0x313190: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x313190u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x313194: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x313194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x313198: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x313198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31319c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x31319cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3131a0: 0xc06553c  jal         func_1954F0
    ctx->pc = 0x3131A0u;
    SET_GPR_U32(ctx, 31, 0x3131A8u);
    ctx->pc = 0x1954F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1954F0u, 0x3131A0u, 0x3131A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3131A8u;
label_3131a8:
    // 0x3131a8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3131a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3131ac: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3131acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x3131b0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x3131b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x3131b4: 0x1443ffaa  bne         $v0, $v1, . + 4 + (-0x56 << 2)
    ctx->pc = 0x3131B4u;
    {
        const bool branch_taken_0x3131b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3131b4) {
            ctx->pc = 0x313060u;
            return;
        }
    }
    ctx->pc = 0x3131BCu;
    // 0x3131bc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3131bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3131c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3131c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3131c4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3131c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3131c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3131C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3131C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3131D0u;
}
