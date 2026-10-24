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

// Function: entry_0018e1e4
// Address: 0x18e1e4 - 0x18e21c
void entry_0018e1e4_0x18e1e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e1e4_0x18e1e4");
#endif

    switch (ctx->pc) {
        case 0x18e210u: goto label_18e210;
        default: break;
    }

    ctx->pc = 0x18e1e4u;

    // 0x18e1e4: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x18e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x18e1e8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18E1E8u;
    {
        const bool branch_taken_0x18e1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e1e8) {
            ctx->pc = 0x18E21Cu;
            return;
        }
    }
    ctx->pc = 0x18E1F0u;
    // 0x18e1f0: 0x8e4301f8  lw          $v1, 0x1F8($s2)
    ctx->pc = 0x18e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
    // 0x18e1f4: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x18e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x18e1f8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x18e1f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18e1fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E1FCu;
    {
        const bool branch_taken_0x18e1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e1fc) {
            ctx->pc = 0x18E21Cu;
            return;
        }
    }
    ctx->pc = 0x18E204u;
    // 0x18e204: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x18e204u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x18e208: 0xc063b08  jal         func_18EC20
    ctx->pc = 0x18E208u;
    SET_GPR_U32(ctx, 31, 0x18E210u);
    ctx->pc = 0x18EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC20u, 0x18E208u, 0x18E210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E210u;
label_18e210:
    // 0x18e210: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x18e210u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18e214: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x18E214u;
    {
        const bool branch_taken_0x18e214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e214) {
            ctx->pc = 0x18E2A8u;
            return;
        }
    }
    ctx->pc = 0x18E21Cu;
}
