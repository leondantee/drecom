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

// Function: entry_001a81d0
// Address: 0x1a81d0 - 0x1a81ec
void entry_001a81d0_0x1a81d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a81d0_0x1a81d0");
#endif

    switch (ctx->pc) {
        case 0x1a81e8u: goto label_1a81e8;
        default: break;
    }

    ctx->pc = 0x1a81d0u;

    // 0x1a81d0: 0x92080001  lbu         $t0, 0x1($s0)
    ctx->pc = 0x1a81d0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1a81d4: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A81D4u;
    {
        const bool branch_taken_0x1a81d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a81d4) {
            ctx->pc = 0x1A81ECu;
            return;
        }
    }
    ctx->pc = 0x1A81DCu;
    // 0x1a81dc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1a81dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a81e0: 0xc06a088  jal         func_1A8220
    ctx->pc = 0x1A81E0u;
    SET_GPR_U32(ctx, 31, 0x1A81E8u);
    ctx->pc = 0x1A8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8220u, 0x1A81E0u, 0x1A81E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A81E8u;
label_1a81e8:
    // 0x1a81e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a81e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1a81ecu;
}
