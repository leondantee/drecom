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

// Function: entry_002d8348
// Address: 0x2d8348 - 0x2d8394
void entry_002d8348_0x2d8348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8348_0x2d8348");
#endif

    switch (ctx->pc) {
        case 0x2d835cu: goto label_2d835c;
        default: break;
    }

    ctx->pc = 0x2d8348u;

    // 0x2d8348: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d8348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d834c: 0xa20300d9  sb          $v1, 0xD9($s0)
    ctx->pc = 0x2d834cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 217), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d8350: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8354: 0xc0b63e8  jal         func_2D8FA0
    ctx->pc = 0x2D8354u;
    SET_GPR_U32(ctx, 31, 0x2D835Cu);
    ctx->pc = 0x2D8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FA0u, 0x2D8354u, 0x2D835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D835Cu;
label_2d835c:
    // 0x2d835c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d835cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8360: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d8360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d8364: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8368: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2d8368u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d836c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d836cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8370: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d8370u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8374: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8378: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8378u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d837c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d837cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8380: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8384: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8388: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2d8388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2d838c: 0x100002fc  b           . + 4 + (0x2FC << 2)
    ctx->pc = 0x2D838Cu;
    {
        const bool branch_taken_0x2d838c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d838c) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D8394u;
}
