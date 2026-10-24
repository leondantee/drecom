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

// Function: entry_00366c6c
// Address: 0x366c6c - 0x366cd0
void entry_00366c6c_0x366c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00366c6c_0x366c6c");
#endif

    switch (ctx->pc) {
        case 0x366c7cu: goto label_366c7c;
        case 0x366c88u: goto label_366c88;
        default: break;
    }

    ctx->pc = 0x366c6cu;

    // 0x366c6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366c70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366c70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x366c74: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x366C74u;
    SET_GPR_U32(ctx, 31, 0x366C7Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366C74u, 0x366C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366C7Cu;
label_366c7c:
    // 0x366c7c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366c80: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x366C80u;
    SET_GPR_U32(ctx, 31, 0x366C88u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x366C80u, 0x366C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366C88u;
label_366c88:
    // 0x366c88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366c8c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x366c8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x366c90: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x366C90u;
    {
        const bool branch_taken_0x366c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366c90) {
            ctx->pc = 0x366CD0u;
            return;
        }
    }
    ctx->pc = 0x366C98u;
    // 0x366c98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x366c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366c9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366ca0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x366ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x366ca4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x366ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366ca8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366cac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x366cacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x366cb0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366cb4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x366cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x366cb8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366cbc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x366cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x366cc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366cc4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x366cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x366cc8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366ccc: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x366cccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x366cd0u;
}
