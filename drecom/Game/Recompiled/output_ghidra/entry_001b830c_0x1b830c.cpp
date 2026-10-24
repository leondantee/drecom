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

// Function: entry_001b830c
// Address: 0x1b830c - 0x1b8330
void entry_001b830c_0x1b830c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b830c_0x1b830c");
#endif

    switch (ctx->pc) {
        case 0x1b832cu: goto label_1b832c;
        default: break;
    }

    ctx->pc = 0x1b830cu;

    // 0x1b830c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b830cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8310: 0x8c6513e8  lw          $a1, 0x13E8($v1)
    ctx->pc = 0x1b8310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1b8314: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8314u;
    {
        const bool branch_taken_0x1b8314 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8314) {
            ctx->pc = 0x1B8330u;
            return;
        }
    }
    ctx->pc = 0x1B831Cu;
    // 0x1b831c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b831cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8320: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1b8320u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1b8324: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1B8324u;
    SET_GPR_U32(ctx, 31, 0x1B832Cu);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1B8324u, 0x1B832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B832Cu;
label_1b832c:
    // 0x1b832c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1b832cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b8330u;
}
