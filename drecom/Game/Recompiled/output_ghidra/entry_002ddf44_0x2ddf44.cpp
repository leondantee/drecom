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

// Function: entry_002ddf44
// Address: 0x2ddf44 - 0x2ddfa4
void entry_002ddf44_0x2ddf44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ddf44_0x2ddf44");
#endif

    switch (ctx->pc) {
        case 0x2ddf54u: goto label_2ddf54;
        case 0x2ddf60u: goto label_2ddf60;
        case 0x2ddf70u: goto label_2ddf70;
        case 0x2ddf7cu: goto label_2ddf7c;
        default: break;
    }

    ctx->pc = 0x2ddf44u;

    // 0x2ddf44: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2ddf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddf48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ddf48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ddf4c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DDF4Cu;
    SET_GPR_U32(ctx, 31, 0x2DDF54u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DDF4Cu, 0x2DDF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF54u;
label_2ddf54:
    // 0x2ddf54: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2ddf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddf58: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DDF58u;
    SET_GPR_U32(ctx, 31, 0x2DDF60u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DDF58u, 0x2DDF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF60u;
label_2ddf60:
    // 0x2ddf60: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2ddf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddf64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ddf64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ddf68: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DDF68u;
    SET_GPR_U32(ctx, 31, 0x2DDF70u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DDF68u, 0x2DDF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF70u;
label_2ddf70:
    // 0x2ddf70: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2ddf70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddf74: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DDF74u;
    SET_GPR_U32(ctx, 31, 0x2DDF7Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DDF74u, 0x2DDF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF7Cu;
label_2ddf7c:
    // 0x2ddf7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2ddf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddf80: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2ddf80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2ddf84: 0x10600135  beqz        $v1, . + 4 + (0x135 << 2)
    ctx->pc = 0x2DDF84u;
    {
        const bool branch_taken_0x2ddf84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddf84) {
            ctx->pc = 0x2DE45Cu;
            return;
        }
    }
    ctx->pc = 0x2DDF8Cu;
    // 0x2ddf8c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2ddf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddf90: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2ddf90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2ddf94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ddf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ddf98: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2ddf98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ddf9c: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x2DDF9Cu;
    {
        const bool branch_taken_0x2ddf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddf9c) {
            ctx->pc = 0x2DE45Cu;
            return;
        }
    }
    ctx->pc = 0x2DDFA4u;
}
