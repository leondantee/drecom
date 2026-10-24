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

// Function: entry_001ab2b0
// Address: 0x1ab2b0 - 0x1ab2f4
void entry_001ab2b0_0x1ab2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab2b0_0x1ab2b0");
#endif

    ctx->pc = 0x1ab2b0u;

    // 0x1ab2b0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ab2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ab2b4: 0x8c23bb40  lw          $v1, -0x44C0($at)
    ctx->pc = 0x1ab2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47BB40u));
    // 0x1ab2b8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1ab2b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ab2bc: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1AB2BCu;
    {
        const bool branch_taken_0x1ab2bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab2bc) {
            ctx->pc = 0x1AB26Cu;
            return;
        }
    }
    ctx->pc = 0x1AB2C4u;
    // 0x1ab2c4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1ab2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1ab2c8: 0x2470b700  addiu       $s0, $v1, -0x4900
    ctx->pc = 0x1ab2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948608));
    // 0x1ab2cc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ab2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EB708u));
    // 0x1ab2d0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ab2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ab2d4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB2D4u;
    {
        const bool branch_taken_0x1ab2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab2d4) {
            ctx->pc = 0x1AB2F4u;
            return;
        }
    }
    ctx->pc = 0x1AB2DCu;
    // 0x1ab2dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ab2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ab2e0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ab2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ab2e4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1ab2e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ab2e8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ab2e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ab2ec: 0xc06ace8  jal         func_1AB3A0
    ctx->pc = 0x1AB2ECu;
    SET_GPR_U32(ctx, 31, 0x1AB2F4u);
    ctx->pc = 0x1AB3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3A0u, 0x1AB2ECu, 0x1AB2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB2F4u;
}
