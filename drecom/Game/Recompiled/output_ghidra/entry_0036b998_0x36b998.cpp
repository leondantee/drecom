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

// Function: entry_0036b998
// Address: 0x36b998 - 0x36ba10
void entry_0036b998_0x36b998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036b998_0x36b998");
#endif

    switch (ctx->pc) {
        case 0x36b9a8u: goto label_36b9a8;
        case 0x36b9b4u: goto label_36b9b4;
        case 0x36b9c4u: goto label_36b9c4;
        case 0x36b9d0u: goto label_36b9d0;
        default: break;
    }

    ctx->pc = 0x36b998u;

    // 0x36b998: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b99c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36b99cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36b9a0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36B9A0u;
    SET_GPR_U32(ctx, 31, 0x36B9A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36B9A0u, 0x36B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B9A8u;
label_36b9a8:
    // 0x36b9a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b9ac: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36B9ACu;
    SET_GPR_U32(ctx, 31, 0x36B9B4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36B9ACu, 0x36B9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B9B4u;
label_36b9b4:
    // 0x36b9b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b9b8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36b9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36b9bc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x36B9BCu;
    SET_GPR_U32(ctx, 31, 0x36B9C4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36B9BCu, 0x36B9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B9C4u;
label_36b9c4:
    // 0x36b9c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b9c8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36B9C8u;
    SET_GPR_U32(ctx, 31, 0x36B9D0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36B9C8u, 0x36B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B9D0u;
label_36b9d0:
    // 0x36b9d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b9d4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36b9d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36b9d8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36B9D8u;
    {
        const bool branch_taken_0x36b9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b9d8) {
            ctx->pc = 0x36BA10u;
            return;
        }
    }
    ctx->pc = 0x36B9E0u;
    // 0x36b9e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b9e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b9e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36b9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36b9ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b9f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b9f4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36b9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36b9f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36b9fc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36b9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ba00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ba04: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36ba04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ba08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ba0c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36ba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x36ba10u;
}
