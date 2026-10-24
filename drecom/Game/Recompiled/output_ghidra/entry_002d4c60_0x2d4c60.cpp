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

// Function: entry_002d4c60
// Address: 0x2d4c60 - 0x2d4cd0
void entry_002d4c60_0x2d4c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d4c60_0x2d4c60");
#endif

    switch (ctx->pc) {
        case 0x2d4c70u: goto label_2d4c70;
        case 0x2d4c7cu: goto label_2d4c7c;
        case 0x2d4c8cu: goto label_2d4c8c;
        case 0x2d4c98u: goto label_2d4c98;
        default: break;
    }

    ctx->pc = 0x2d4c60u;

    // 0x2d4c60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4c64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4c64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4c68: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D4C68u;
    SET_GPR_U32(ctx, 31, 0x2D4C70u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D4C68u, 0x2D4C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C70u;
label_2d4c70:
    // 0x2d4c70: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4c74: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D4C74u;
    SET_GPR_U32(ctx, 31, 0x2D4C7Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D4C74u, 0x2D4C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C7Cu;
label_2d4c7c:
    // 0x2d4c7c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4c80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4c80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4c84: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D4C84u;
    SET_GPR_U32(ctx, 31, 0x2D4C8Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D4C84u, 0x2D4C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C8Cu;
label_2d4c8c:
    // 0x2d4c8c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4c90: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D4C90u;
    SET_GPR_U32(ctx, 31, 0x2D4C98u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D4C90u, 0x2D4C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C98u;
label_2d4c98:
    // 0x2d4c98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4c9c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d4c9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d4ca0: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x2D4CA0u;
    {
        const bool branch_taken_0x2d4ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4ca0) {
            ctx->pc = 0x2D4E54u;
            return;
        }
    }
    ctx->pc = 0x2D4CA8u;
    // 0x2d4ca8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4cac: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2d4cacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d4cb0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D4CB0u;
    {
        const bool branch_taken_0x2d4cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4cb0) {
            ctx->pc = 0x2D4CD0u;
            return;
        }
    }
    ctx->pc = 0x2D4CB8u;
    // 0x2d4cb8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4cbc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2d4cbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2d4cc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d4cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d4cc4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2d4cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d4cc8: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2D4CC8u;
    {
        const bool branch_taken_0x2d4cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4cc8) {
            ctx->pc = 0x2D4E54u;
            return;
        }
    }
    ctx->pc = 0x2D4CD0u;
}
