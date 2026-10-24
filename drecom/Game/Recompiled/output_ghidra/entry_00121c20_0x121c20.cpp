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

// Function: entry_00121c20
// Address: 0x121c20 - 0x121c48
void entry_00121c20_0x121c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121c20_0x121c20");
#endif

    switch (ctx->pc) {
        case 0x121c44u: goto label_121c44;
        default: break;
    }

    ctx->pc = 0x121c20u;

    // 0x121c20: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121c24: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x121c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121c28: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x121c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x121c2c: 0xc51825  or          $v1, $a2, $a1
    ctx->pc = 0x121c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x121c30: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x121c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x121c34: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121c38: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x121c38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x121c3c: 0xc048090  jal         func_120240
    ctx->pc = 0x121C3Cu;
    SET_GPR_U32(ctx, 31, 0x121C44u);
    ctx->pc = 0x120240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120240u, 0x121C3Cu, 0x121C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C44u;
label_121c44:
    // 0x121c44: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x121c44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x121c48u;
}
