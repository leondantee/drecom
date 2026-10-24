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

// Function: entry_0020c60c
// Address: 0x20c60c - 0x20c67c
void entry_0020c60c_0x20c60c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c60c_0x20c60c");
#endif

    switch (ctx->pc) {
        case 0x20c61cu: goto label_20c61c;
        case 0x20c628u: goto label_20c628;
        default: break;
    }

    ctx->pc = 0x20c60cu;

    // 0x20c60c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c610: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20c610u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20c614: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20C614u;
    SET_GPR_U32(ctx, 31, 0x20C61Cu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20C614u, 0x20C61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C61Cu;
label_20c61c:
    // 0x20c61c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c620: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20C620u;
    SET_GPR_U32(ctx, 31, 0x20C628u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20C620u, 0x20C628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C628u;
label_20c628:
    // 0x20c628: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c62c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20c62cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20c630: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20c630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20c634: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x20c634u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x20c638: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c63c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20c63cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20c640: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x20C640u;
    {
        const bool branch_taken_0x20c640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c640) {
            ctx->pc = 0x20C76Cu;
            return;
        }
    }
    ctx->pc = 0x20C648u;
    // 0x20c648: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20c648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c64c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c650: 0x8c631310  lw          $v1, 0x1310($v1)
    ctx->pc = 0x20c650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4880)));
    // 0x20c654: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x20c654u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x20c658: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c65c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x20c65cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x20c660: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C660u;
    {
        const bool branch_taken_0x20c660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c660) {
            ctx->pc = 0x20C67Cu;
            return;
        }
    }
    ctx->pc = 0x20C668u;
    // 0x20c668: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x20c668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x20c66c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c670: 0xac64134c  sw          $a0, 0x134C($v1)
    ctx->pc = 0x20c670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4940), GPR_U32(ctx, 4));
    // 0x20c674: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20C674u;
    {
        const bool branch_taken_0x20c674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c674) {
            ctx->pc = 0x20C688u;
            return;
        }
    }
    ctx->pc = 0x20C67Cu;
}
