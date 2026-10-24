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

// Function: entry_0030ad2c
// Address: 0x30ad2c - 0x30ad60
void entry_0030ad2c_0x30ad2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030ad2c_0x30ad2c");
#endif

    ctx->pc = 0x30ad2cu;

    // 0x30ad2c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30ad30: 0x8c431338  lw          $v1, 0x1338($v0)
    ctx->pc = 0x30ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x30ad34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x30ad38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30ad38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30ad3c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30AD3Cu;
    {
        const bool branch_taken_0x30ad3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ad3c) {
            ctx->pc = 0x30AD60u;
            return;
        }
    }
    ctx->pc = 0x30AD44u;
    // 0x30ad44: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30ad48: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30ad4c: 0x245106c0  addiu       $s1, $v0, 0x6C0
    ctx->pc = 0x30ad4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x30ad50: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30ad54: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x30ad54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x30ad58: 0xc079140  jal         func_1E4500
    ctx->pc = 0x30AD58u;
    SET_GPR_U32(ctx, 31, 0x30AD60u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x30AD58u, 0x30AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD60u;
}
