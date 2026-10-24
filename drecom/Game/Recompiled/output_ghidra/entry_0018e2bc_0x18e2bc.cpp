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

// Function: entry_0018e2bc
// Address: 0x18e2bc - 0x18e308
void entry_0018e2bc_0x18e2bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e2bc_0x18e2bc");
#endif

    switch (ctx->pc) {
        case 0x18e2fcu: goto label_18e2fc;
        default: break;
    }

    ctx->pc = 0x18e2bcu;

    // 0x18e2bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18e2c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18e2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18e2c4: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x18E2C4u;
    {
        const bool branch_taken_0x18e2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e2c4) {
            ctx->pc = 0x18E418u;
            return;
        }
    }
    ctx->pc = 0x18E2CCu;
    // 0x18e2cc: 0x960201a8  lhu         $v0, 0x1A8($s0)
    ctx->pc = 0x18e2ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x18e2d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18e2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18e2d4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18e2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18e2d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18E2D8u;
    {
        const bool branch_taken_0x18e2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e2d8) {
            ctx->pc = 0x18E308u;
            return;
        }
    }
    ctx->pc = 0x18E2E0u;
    // 0x18e2e0: 0x8e02019c  lw          $v0, 0x19C($s0)
    ctx->pc = 0x18e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x18e2e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18e2e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E2E8u;
    {
        const bool branch_taken_0x18e2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e2e8) {
            ctx->pc = 0x18E308u;
            return;
        }
    }
    ctx->pc = 0x18E2F0u;
    // 0x18e2f0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e2f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18e2f4: 0xc063b4c  jal         func_18ED30
    ctx->pc = 0x18E2F4u;
    SET_GPR_U32(ctx, 31, 0x18E2FCu);
    ctx->pc = 0x18ED30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ED30u, 0x18E2F4u, 0x18E2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E2FCu;
label_18e2fc:
    // 0x18e2fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18e2fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18e300: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x18E300u;
    {
        const bool branch_taken_0x18e300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e300) {
            ctx->pc = 0x18E420u;
            return;
        }
    }
    ctx->pc = 0x18E308u;
}
