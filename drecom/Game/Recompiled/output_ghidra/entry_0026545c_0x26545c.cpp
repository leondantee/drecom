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

// Function: entry_0026545c
// Address: 0x26545c - 0x265478
void entry_0026545c_0x26545c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026545c_0x26545c");
#endif

    ctx->pc = 0x26545cu;

    // 0x26545c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26545cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x265460: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x265460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x265464: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x265464u;
    {
        const bool branch_taken_0x265464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265464) {
            ctx->pc = 0x265478u;
            return;
        }
    }
    ctx->pc = 0x26546Cu;
    // 0x26546c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x26546cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x265470: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x265470u;
    SET_GPR_U32(ctx, 31, 0x265478u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x265470u, 0x265478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265478u;
}
