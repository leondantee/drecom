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

// Function: entry_00195c54
// Address: 0x195c54 - 0x195c90
void entry_00195c54_0x195c54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195c54_0x195c54");
#endif

    switch (ctx->pc) {
        case 0x195c78u: goto label_195c78;
        default: break;
    }

    ctx->pc = 0x195c54u;

    // 0x195c54: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x195c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x195c58: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x195C58u;
    {
        const bool branch_taken_0x195c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195c58) {
            ctx->pc = 0x195C90u;
            return;
        }
    }
    ctx->pc = 0x195C60u;
    // 0x195c60: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x195c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195c64: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x195c64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x195c68: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x195c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x195c6c: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x195c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x195c70: 0xc06574c  jal         func_195D30
    ctx->pc = 0x195C70u;
    SET_GPR_U32(ctx, 31, 0x195C78u);
    ctx->pc = 0x195D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195D30u, 0x195C70u, 0x195C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C78u;
label_195c78:
    // 0x195c78: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x195c78u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x195c7c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x195C7Cu;
    {
        const bool branch_taken_0x195c7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x195c7c) {
            ctx->pc = 0x195C90u;
            return;
        }
    }
    ctx->pc = 0x195C84u;
    // 0x195c84: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x195c84u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x195c88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x195C88u;
    {
        const bool branch_taken_0x195c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195c88) {
            ctx->pc = 0x195CB0u;
            return;
        }
    }
    ctx->pc = 0x195C90u;
}
