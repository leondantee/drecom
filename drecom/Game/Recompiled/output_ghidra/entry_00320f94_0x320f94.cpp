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

// Function: entry_00320f94
// Address: 0x320f94 - 0x320fc0
void entry_00320f94_0x320f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320f94_0x320f94");
#endif

    switch (ctx->pc) {
        case 0x320fa0u: goto label_320fa0;
        default: break;
    }

    ctx->pc = 0x320f94u;

    // 0x320f94: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320f98: 0xc0c9930  jal         func_3264C0
    ctx->pc = 0x320F98u;
    SET_GPR_U32(ctx, 31, 0x320FA0u);
    ctx->pc = 0x3264C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C0u, 0x320F98u, 0x320FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320FA0u;
label_320fa0:
    // 0x320fa0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320fa4: 0x246302b0  addiu       $v1, $v1, 0x2B0
    ctx->pc = 0x320fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x320fa8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x320fa8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320fac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320fb0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x320fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x320fb4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x320fb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x320fb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x320FB8u;
    {
        const bool branch_taken_0x320fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320fb8) {
            ctx->pc = 0x320FE0u;
            return;
        }
    }
    ctx->pc = 0x320FC0u;
}
