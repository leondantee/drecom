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

// Function: entry_001ab2f4
// Address: 0x1ab2f4 - 0x1ab324
void entry_001ab2f4_0x1ab2f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab2f4_0x1ab2f4");
#endif

    ctx->pc = 0x1ab2f4u;

    // 0x1ab2f4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1ab2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1ab2f8: 0x2470a4a0  addiu       $s0, $v1, -0x5B60
    ctx->pc = 0x1ab2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x1ab2fc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ab2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA4A8u));
    // 0x1ab300: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ab300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ab304: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB304u;
    {
        const bool branch_taken_0x1ab304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab304) {
            ctx->pc = 0x1AB324u;
            return;
        }
    }
    ctx->pc = 0x1AB30Cu;
    // 0x1ab30c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ab30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ab310: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ab310u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ab314: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1ab314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ab318: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ab318u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ab31c: 0xc06ace8  jal         func_1AB3A0
    ctx->pc = 0x1AB31Cu;
    SET_GPR_U32(ctx, 31, 0x1AB324u);
    ctx->pc = 0x1AB3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3A0u, 0x1AB31Cu, 0x1AB324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB324u;
}
