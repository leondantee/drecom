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

// Function: entry_00165b10
// Address: 0x165b10 - 0x165b40
void entry_00165b10_0x165b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165b10_0x165b10");
#endif

    switch (ctx->pc) {
        case 0x165b20u: goto label_165b20;
        case 0x165b38u: goto label_165b38;
        default: break;
    }

    ctx->pc = 0x165b10u;

    // 0x165b10: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x165b10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165b14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x165b14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165b18: 0xc04026a  jal         func_1009A8
    ctx->pc = 0x165B18u;
    SET_GPR_U32(ctx, 31, 0x165B20u);
    ctx->pc = 0x1009A8u;
    {
        ctx->pc = 0x165B20u;
        ps2_stubs::sceGsSyncPath(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165B20u) { return; }
    ctx->pc = 0x165B20u;
label_165b20:
    // 0x165b20: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165b24: 0x8c225a04  lw          $v0, 0x5A04($at)
    ctx->pc = 0x165b24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5A04u));
    // 0x165b28: 0x1040ff3a  beqz        $v0, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x165B28u;
    {
        const bool branch_taken_0x165b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165b28) {
            ctx->pc = 0x165814u;
            return;
        }
    }
    ctx->pc = 0x165B30u;
    // 0x165b30: 0xc05949c  jal         func_165270
    ctx->pc = 0x165B30u;
    SET_GPR_U32(ctx, 31, 0x165B38u);
    ctx->pc = 0x165270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165270u, 0x165B30u, 0x165B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B38u;
label_165b38:
    // 0x165b38: 0x1000ff36  b           . + 4 + (-0xCA << 2)
    ctx->pc = 0x165B38u;
    {
        const bool branch_taken_0x165b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165b38) {
            ctx->pc = 0x165814u;
            return;
        }
    }
    ctx->pc = 0x165B40u;
}
