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

// Function: entry_001bd8f8
// Address: 0x1bd8f8 - 0x1bd930
void entry_001bd8f8_0x1bd8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd8f8_0x1bd8f8");
#endif

    switch (ctx->pc) {
        case 0x1bd92cu: goto label_1bd92c;
        default: break;
    }

    ctx->pc = 0x1bd8f8u;

    // 0x1bd8f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd8fc: 0x906313a5  lbu         $v1, 0x13A5($v1)
    ctx->pc = 0x1bd8fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5029)));
    // 0x1bd900: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bd900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd904: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x1bd904u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1bd908: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD908u;
    {
        const bool branch_taken_0x1bd908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd908) {
            ctx->pc = 0x1BD930u;
            return;
        }
    }
    ctx->pc = 0x1BD910u;
    // 0x1bd910: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bd910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd914: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1bd914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1bd918: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1bd918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1bd91c: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1bd91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1bd920: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1bd920u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x1bd924: 0xc0c51c4  jal         func_314710
    ctx->pc = 0x1BD924u;
    SET_GPR_U32(ctx, 31, 0x1BD92Cu);
    ctx->pc = 0x314710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314710u, 0x1BD924u, 0x1BD92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD92Cu;
label_1bd92c:
    // 0x1bd92c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bd92cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1bd930u;
}
