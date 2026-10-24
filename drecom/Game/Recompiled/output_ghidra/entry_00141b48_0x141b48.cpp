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

// Function: entry_00141b48
// Address: 0x141b48 - 0x141b78
void entry_00141b48_0x141b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141b48_0x141b48");
#endif

    ctx->pc = 0x141b48u;

    // 0x141b48: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x141b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x141b4c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x141b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x141b50: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x141b50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x141b54: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x141b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x141b58: 0x2463c100  addiu       $v1, $v1, -0x3F00
    ctx->pc = 0x141b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951168));
    // 0x141b5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x141b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x141b60: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x141b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x141b64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x141B64u;
    {
        const bool branch_taken_0x141b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141b64) {
            ctx->pc = 0x141B78u;
            return;
        }
    }
    ctx->pc = 0x141B6Cu;
    // 0x141b6c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x141b6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x141b70: 0xc0d7594  jal         func_35D650
    ctx->pc = 0x141B70u;
    SET_GPR_U32(ctx, 31, 0x141B78u);
    ctx->pc = 0x35D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D650u, 0x141B70u, 0x141B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B78u;
}
