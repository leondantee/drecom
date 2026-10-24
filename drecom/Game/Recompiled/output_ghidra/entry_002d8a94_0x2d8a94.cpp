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

// Function: entry_002d8a94
// Address: 0x2d8a94 - 0x2d8adc
void entry_002d8a94_0x2d8a94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8a94_0x2d8a94");
#endif

    switch (ctx->pc) {
        case 0x2d8aa0u: goto label_2d8aa0;
        default: break;
    }

    ctx->pc = 0x2d8a94u;

    // 0x2d8a94: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a98: 0xc0b63e8  jal         func_2D8FA0
    ctx->pc = 0x2D8A98u;
    SET_GPR_U32(ctx, 31, 0x2D8AA0u);
    ctx->pc = 0x2D8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FA0u, 0x2D8A98u, 0x2D8AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8AA0u;
label_2d8aa0:
    // 0x2d8aa0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d8aa0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8aa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8aa8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d8aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8aac: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2d8aacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d8ab0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ab4: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x2d8ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8ab8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8abc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8abcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8ac0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ac4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8ac8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8acc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d8accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d8ad0: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8ad4: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x2D8AD4u;
    {
        const bool branch_taken_0x2d8ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8ad4) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D8ADCu;
}
