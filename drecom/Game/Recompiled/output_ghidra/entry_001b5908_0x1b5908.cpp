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

// Function: entry_001b5908
// Address: 0x1b5908 - 0x1b5940
void entry_001b5908_0x1b5908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5908_0x1b5908");
#endif

    switch (ctx->pc) {
        case 0x1b593cu: goto label_1b593c;
        default: break;
    }

    ctx->pc = 0x1b5908u;

    // 0x1b5908: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b590c: 0x904413a5  lbu         $a0, 0x13A5($v0)
    ctx->pc = 0x1b590cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5029)));
    // 0x1b5910: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x1b5910u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b5914: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x1b5914u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b5918: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5918u;
    {
        const bool branch_taken_0x1b5918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5918) {
            ctx->pc = 0x1B5940u;
            return;
        }
    }
    ctx->pc = 0x1B5920u;
    // 0x1b5920: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b5920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5924: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1b5924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b5928: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1b5928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1b592c: 0x652025  or          $a0, $v1, $a1
    ctx->pc = 0x1b592cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1b5930: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1b5930u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x1b5934: 0xc0c51c4  jal         func_314710
    ctx->pc = 0x1B5934u;
    SET_GPR_U32(ctx, 31, 0x1B593Cu);
    ctx->pc = 0x314710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314710u, 0x1B5934u, 0x1B593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B593Cu;
label_1b593c:
    // 0x1b593c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b593cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b5940u;
}
