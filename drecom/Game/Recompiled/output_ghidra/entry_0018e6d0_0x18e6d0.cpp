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

// Function: entry_0018e6d0
// Address: 0x18e6d0 - 0x18e708
void entry_0018e6d0_0x18e6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e6d0_0x18e6d0");
#endif

    switch (ctx->pc) {
        case 0x18e6fcu: goto label_18e6fc;
        default: break;
    }

    ctx->pc = 0x18e6d0u;

    // 0x18e6d0: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x18e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x18e6d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18E6D4u;
    {
        const bool branch_taken_0x18e6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e6d4) {
            ctx->pc = 0x18E708u;
            return;
        }
    }
    ctx->pc = 0x18E6DCu;
    // 0x18e6dc: 0x8e0301f8  lw          $v1, 0x1F8($s0)
    ctx->pc = 0x18e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x18e6e0: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x18e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x18e6e4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x18e6e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18e6e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E6E8u;
    {
        const bool branch_taken_0x18e6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e6e8) {
            ctx->pc = 0x18E708u;
            return;
        }
    }
    ctx->pc = 0x18E6F0u;
    // 0x18e6f0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e6f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18e6f4: 0xc063ab8  jal         func_18EAE0
    ctx->pc = 0x18E6F4u;
    SET_GPR_U32(ctx, 31, 0x18E6FCu);
    ctx->pc = 0x18EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EAE0u, 0x18E6F4u, 0x18E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6FCu;
label_18e6fc:
    // 0x18e6fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18e6fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18e700: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x18E700u;
    {
        const bool branch_taken_0x18e700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e700) {
            ctx->pc = 0x18E780u;
            return;
        }
    }
    ctx->pc = 0x18E708u;
}
