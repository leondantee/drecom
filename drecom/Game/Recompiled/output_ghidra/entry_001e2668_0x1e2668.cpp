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

// Function: entry_001e2668
// Address: 0x1e2668 - 0x1e2688
void entry_001e2668_0x1e2668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2668_0x1e2668");
#endif

    switch (ctx->pc) {
        case 0x1e2680u: goto label_1e2680;
        default: break;
    }

    ctx->pc = 0x1e2668u;

    // 0x1e2668: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1e2668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e266c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e266cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e2670: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e2670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e2674: 0x72c03628  paddub      $a2, $s6, $zero
    ctx->pc = 0x1e2674u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e2678: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E2678u;
    SET_GPR_U32(ctx, 31, 0x1E2680u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E2678u, 0x1E2680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2680u;
label_1e2680:
    // 0x1e2680: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1E2680u;
    {
        const bool branch_taken_0x1e2680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2680) {
            ctx->pc = 0x1E2850u;
            return;
        }
    }
    ctx->pc = 0x1E2688u;
}
