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

// Function: entry_0018e748
// Address: 0x18e748 - 0x18e768
void entry_0018e748_0x18e748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e748_0x18e748");
#endif

    ctx->pc = 0x18e748u;

    // 0x18e748: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x18e748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x18e74c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x18e74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x18e750: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E750u;
    {
        const bool branch_taken_0x18e750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e750) {
            ctx->pc = 0x18E768u;
            return;
        }
    }
    ctx->pc = 0x18E758u;
    // 0x18e758: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e758u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18e75c: 0x8e0501fc  lw          $a1, 0x1FC($s0)
    ctx->pc = 0x18e75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 508)));
    // 0x18e760: 0xc0c9838  jal         func_3260E0
    ctx->pc = 0x18E760u;
    SET_GPR_U32(ctx, 31, 0x18E768u);
    ctx->pc = 0x3260E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260E0u, 0x18E760u, 0x18E768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E768u;
}
