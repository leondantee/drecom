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

// Function: entry_001ab324
// Address: 0x1ab324 - 0x1ab354
void entry_001ab324_0x1ab324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab324_0x1ab324");
#endif

    ctx->pc = 0x1ab324u;

    // 0x1ab324: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1ab324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1ab328: 0x24709240  addiu       $s0, $v1, -0x6DC0
    ctx->pc = 0x1ab328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939200));
    // 0x1ab32c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ab32cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E9248u));
    // 0x1ab330: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ab330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ab334: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB334u;
    {
        const bool branch_taken_0x1ab334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab334) {
            ctx->pc = 0x1AB354u;
            return;
        }
    }
    ctx->pc = 0x1AB33Cu;
    // 0x1ab33c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ab33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ab340: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ab340u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ab344: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1ab344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ab348: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ab348u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ab34c: 0xc06ace8  jal         func_1AB3A0
    ctx->pc = 0x1AB34Cu;
    SET_GPR_U32(ctx, 31, 0x1AB354u);
    ctx->pc = 0x1AB3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3A0u, 0x1AB34Cu, 0x1AB354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB354u;
}
