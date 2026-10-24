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

// Function: entry_00121ac4
// Address: 0x121ac4 - 0x121ae4
void entry_00121ac4_0x121ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121ac4_0x121ac4");
#endif

    switch (ctx->pc) {
        case 0x121ad8u: goto label_121ad8;
        default: break;
    }

    ctx->pc = 0x121ac4u;

    // 0x121ac4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121ac8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x121ac8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x121acc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x121accu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x121ad0: 0xc047ff4  jal         func_11FFD0
    ctx->pc = 0x121AD0u;
    SET_GPR_U32(ctx, 31, 0x121AD8u);
    ctx->pc = 0x11FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FFD0u, 0x121AD0u, 0x121AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AD8u;
label_121ad8:
    // 0x121ad8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x121ad8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121adc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x121ADCu;
    {
        const bool branch_taken_0x121adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121adc) {
            ctx->pc = 0x121C48u;
            return;
        }
    }
    ctx->pc = 0x121AE4u;
}
