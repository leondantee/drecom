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

// Function: caseD_0
// Address: 0x12bf2c - 0x12bfa0
void caseD_0_0x12bf2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x12bf2c");
#endif

    switch (ctx->pc) {
        case 0x12bf4cu: goto label_12bf4c;
        case 0x12bf60u: goto label_12bf60;
        case 0x12bf6cu: goto label_12bf6c;
        default: break;
    }

    ctx->pc = 0x12bf2cu;

    // 0x12bf2c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12bf30: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12bf34: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12bf34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12bf38: 0x2406052f  addiu       $a2, $zero, 0x52F
    ctx->pc = 0x12bf38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1327));
    // 0x12bf3c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x12bf3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12bf40: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12bf40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12bf44: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12BF44u;
    SET_GPR_U32(ctx, 31, 0x12BF4Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12BF44u, 0x12BF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF4Cu;
label_12bf4c:
    // 0x12bf4c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12bf50: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12bf50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12bf54: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x12bf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x12bf58: 0xc096c60  jal         func_25B180
    ctx->pc = 0x12BF58u;
    SET_GPR_U32(ctx, 31, 0x12BF60u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x12BF58u, 0x12BF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF60u;
label_12bf60:
    // 0x12bf60: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12bf64: 0xc05ce54  jal         func_173950
    ctx->pc = 0x12BF64u;
    SET_GPR_U32(ctx, 31, 0x12BF6Cu);
    ctx->pc = 0x173950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173950u, 0x12BF64u, 0x12BF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF6Cu;
label_12bf6c:
    // 0x12bf6c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x12bf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12bf70: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12bf74: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x12bf74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x12bf78: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x12bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12bf7c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12bf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12bf80: 0xa08210a8  sb          $v0, 0x10A8($a0)
    ctx->pc = 0x12bf80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x12bf84: 0xae0013fc  sw          $zero, 0x13FC($s0)
    ctx->pc = 0x12bf84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5116), GPR_U32(ctx, 0));
    // 0x12bf88: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12bf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12bf8c: 0xa4a0127e  sh          $zero, 0x127E($a1)
    ctx->pc = 0x12bf8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x12bf90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12bf94: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x12bf94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x12bf98: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x12bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12bf9c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x12bf9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x12bfa0u;
}
