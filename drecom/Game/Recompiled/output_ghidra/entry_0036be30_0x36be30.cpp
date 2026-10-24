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

// Function: entry_0036be30
// Address: 0x36be30 - 0x36bea8
void entry_0036be30_0x36be30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036be30_0x36be30");
#endif

    switch (ctx->pc) {
        case 0x36be40u: goto label_36be40;
        case 0x36be4cu: goto label_36be4c;
        case 0x36be5cu: goto label_36be5c;
        case 0x36be68u: goto label_36be68;
        default: break;
    }

    ctx->pc = 0x36be30u;

    // 0x36be30: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x36be30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36be34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36be34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36be38: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36BE38u;
    SET_GPR_U32(ctx, 31, 0x36BE40u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36BE38u, 0x36BE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE40u;
label_36be40:
    // 0x36be40: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x36be40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36be44: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36BE44u;
    SET_GPR_U32(ctx, 31, 0x36BE4Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36BE44u, 0x36BE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE4Cu;
label_36be4c:
    // 0x36be4c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x36be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36be50: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36be50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36be54: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x36BE54u;
    SET_GPR_U32(ctx, 31, 0x36BE5Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36BE54u, 0x36BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE5Cu;
label_36be5c:
    // 0x36be5c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x36be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36be60: 0xc0db4c0  jal         func_36D300
    ctx->pc = 0x36BE60u;
    SET_GPR_U32(ctx, 31, 0x36BE68u);
    ctx->pc = 0x36D300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D300u, 0x36BE60u, 0x36BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE68u;
label_36be68:
    // 0x36be68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36be68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36be6c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36be6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36be70: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36BE70u;
    {
        const bool branch_taken_0x36be70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36be70) {
            ctx->pc = 0x36BEA8u;
            return;
        }
    }
    ctx->pc = 0x36BE78u;
    // 0x36be78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36be78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36be7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36be7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36be80: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36be80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36be84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x36be84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36be88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36be88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36be8c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36be8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36be90: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36be90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36be94: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36be94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36be98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36be98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36be9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36be9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36bea0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bea4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36bea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x36bea8u;
}
