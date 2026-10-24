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

// Function: entry_00165a20
// Address: 0x165a20 - 0x165a58
void entry_00165a20_0x165a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165a20_0x165a20");
#endif

    switch (ctx->pc) {
        case 0x165a28u: goto label_165a28;
        case 0x165a34u: goto label_165a34;
        case 0x165a54u: goto label_165a54;
        default: break;
    }

    ctx->pc = 0x165a20u;

    // 0x165a20: 0xc0762e4  jal         func_1D8B90
    ctx->pc = 0x165A20u;
    SET_GPR_U32(ctx, 31, 0x165A28u);
    ctx->pc = 0x1D8B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B90u, 0x165A20u, 0x165A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A28u;
label_165a28:
    // 0x165a28: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x165a28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x165a2c: 0xc068164  jal         func_1A0590
    ctx->pc = 0x165A2Cu;
    SET_GPR_U32(ctx, 31, 0x165A34u);
    ctx->pc = 0x1A0590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0590u, 0x165A2Cu, 0x165A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A34u;
label_165a34:
    // 0x165a34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165a38: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x165a38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x165a3c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x165a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x165a40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165a44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165A44u;
    {
        const bool branch_taken_0x165a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a44) {
            ctx->pc = 0x165A58u;
            return;
        }
    }
    ctx->pc = 0x165A4Cu;
    // 0x165a4c: 0xc059080  jal         func_164200
    ctx->pc = 0x165A4Cu;
    SET_GPR_U32(ctx, 31, 0x165A54u);
    ctx->pc = 0x164200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164200u, 0x165A4Cu, 0x165A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A54u;
label_165a54:
    // 0x165a54: 0x0  nop
    ctx->pc = 0x165a54u;
    // NOP
    ctx->pc = 0x165a58u;
}
