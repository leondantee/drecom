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

// Function: entry_002652c4
// Address: 0x2652c4 - 0x2652e0
void entry_002652c4_0x2652c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002652c4_0x2652c4");
#endif

    ctx->pc = 0x2652c4u;

    // 0x2652c4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2652c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2652c8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2652c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2652cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2652CCu;
    {
        const bool branch_taken_0x2652cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2652cc) {
            ctx->pc = 0x2652E0u;
            return;
        }
    }
    ctx->pc = 0x2652D4u;
    // 0x2652d4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2652d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2652d8: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2652D8u;
    SET_GPR_U32(ctx, 31, 0x2652E0u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2652D8u, 0x2652E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2652E0u;
}
