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

// Function: entry_0018e0c0
// Address: 0x18e0c0 - 0x18e0f8
void entry_0018e0c0_0x18e0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e0c0_0x18e0c0");
#endif

    switch (ctx->pc) {
        case 0x18e0ecu: goto label_18e0ec;
        default: break;
    }

    ctx->pc = 0x18e0c0u;

    // 0x18e0c0: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x18e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x18e0c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18E0C4u;
    {
        const bool branch_taken_0x18e0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e0c4) {
            ctx->pc = 0x18E0F8u;
            return;
        }
    }
    ctx->pc = 0x18E0CCu;
    // 0x18e0cc: 0x8e2301f8  lw          $v1, 0x1F8($s1)
    ctx->pc = 0x18e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x18e0d0: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x18e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x18e0d4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x18e0d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18e0d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E0D8u;
    {
        const bool branch_taken_0x18e0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e0d8) {
            ctx->pc = 0x18E0F8u;
            return;
        }
    }
    ctx->pc = 0x18E0E0u;
    // 0x18e0e0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e0e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x18e0e4: 0xc063ab8  jal         func_18EAE0
    ctx->pc = 0x18E0E4u;
    SET_GPR_U32(ctx, 31, 0x18E0ECu);
    ctx->pc = 0x18EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EAE0u, 0x18E0E4u, 0x18E0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E0ECu;
label_18e0ec:
    // 0x18e0ec: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18e0ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18e0f0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x18E0F0u;
    {
        const bool branch_taken_0x18e0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e0f0) {
            ctx->pc = 0x18E198u;
            return;
        }
    }
    ctx->pc = 0x18E0F8u;
}
