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

// Function: entry_00136c28
// Address: 0x136c28 - 0x136c60
void entry_00136c28_0x136c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136c28_0x136c28");
#endif

    switch (ctx->pc) {
        case 0x136c50u: goto label_136c50;
        default: break;
    }

    ctx->pc = 0x136c28u;

    // 0x136c28: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x136c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x136c2c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x136c2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x136c30: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x136c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x136c34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x136c34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x136c38: 0x4600202  bltz        $v1, . + 4 + (0x202 << 2)
    ctx->pc = 0x136C38u;
    {
        const bool branch_taken_0x136c38 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x136c38) {
            ctx->pc = 0x137444u;
            return;
        }
    }
    ctx->pc = 0x136C40u;
    // 0x136c40: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x136c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x136c44: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x136c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x136c48: 0xc057a9c  jal         func_15EA70
    ctx->pc = 0x136C48u;
    SET_GPR_U32(ctx, 31, 0x136C50u);
    ctx->pc = 0x15EA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA70u, 0x136C48u, 0x136C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C50u;
label_136c50:
    // 0x136c50: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x136c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x136c54: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x136c54u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136c58: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x136C58u;
    {
        const bool branch_taken_0x136c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136c58) {
            ctx->pc = 0x137438u;
            return;
        }
    }
    ctx->pc = 0x136C60u;
}
