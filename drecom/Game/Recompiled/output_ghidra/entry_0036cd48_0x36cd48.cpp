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

// Function: entry_0036cd48
// Address: 0x36cd48 - 0x36cdc0
void entry_0036cd48_0x36cd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036cd48_0x36cd48");
#endif

    switch (ctx->pc) {
        case 0x36cd58u: goto label_36cd58;
        case 0x36cd64u: goto label_36cd64;
        case 0x36cd74u: goto label_36cd74;
        case 0x36cd80u: goto label_36cd80;
        default: break;
    }

    ctx->pc = 0x36cd48u;

    // 0x36cd48: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cd4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36cd4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36cd50: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36CD50u;
    SET_GPR_U32(ctx, 31, 0x36CD58u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36CD50u, 0x36CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CD58u;
label_36cd58:
    // 0x36cd58: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36cd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cd5c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36CD5Cu;
    SET_GPR_U32(ctx, 31, 0x36CD64u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36CD5Cu, 0x36CD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CD64u;
label_36cd64:
    // 0x36cd64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36cd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cd68: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36cd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36cd6c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x36CD6Cu;
    SET_GPR_U32(ctx, 31, 0x36CD74u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36CD6Cu, 0x36CD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CD74u;
label_36cd74:
    // 0x36cd74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36cd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cd78: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36CD78u;
    SET_GPR_U32(ctx, 31, 0x36CD80u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36CD78u, 0x36CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CD80u;
label_36cd80:
    // 0x36cd80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cd84: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36cd84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36cd88: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36CD88u;
    {
        const bool branch_taken_0x36cd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cd88) {
            ctx->pc = 0x36CDC0u;
            return;
        }
    }
    ctx->pc = 0x36CD90u;
    // 0x36cd90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cd94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cd98: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36cd98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36cd9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x36cd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36cda0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cda4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36cda4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36cda8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cdac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36cdacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36cdb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cdb4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36cdb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36cdb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36cdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cdbc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36cdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x36cdc0u;
}
