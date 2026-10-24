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

// Function: entry_0018e098
// Address: 0x18e098 - 0x18e0c0
void entry_0018e098_0x18e098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e098_0x18e098");
#endif

    switch (ctx->pc) {
        case 0x18e0b4u: goto label_18e0b4;
        default: break;
    }

    ctx->pc = 0x18e098u;

    // 0x18e098: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x18e098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x18e09c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18e09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18e0a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E0A0u;
    {
        const bool branch_taken_0x18e0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e0a0) {
            ctx->pc = 0x18E0C0u;
            return;
        }
    }
    ctx->pc = 0x18E0A8u;
    // 0x18e0a8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e0a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x18e0ac: 0xc063ab8  jal         func_18EAE0
    ctx->pc = 0x18E0ACu;
    SET_GPR_U32(ctx, 31, 0x18E0B4u);
    ctx->pc = 0x18EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EAE0u, 0x18E0ACu, 0x18E0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E0B4u;
label_18e0b4:
    // 0x18e0b4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18e0b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18e0b8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x18E0B8u;
    {
        const bool branch_taken_0x18e0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e0b8) {
            ctx->pc = 0x18E198u;
            return;
        }
    }
    ctx->pc = 0x18E0C0u;
}
