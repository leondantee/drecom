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

// Function: entry_003100fc
// Address: 0x3100fc - 0x310164
void entry_003100fc_0x3100fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003100fc_0x3100fc");
#endif

    switch (ctx->pc) {
        case 0x31011cu: goto label_31011c;
        case 0x310128u: goto label_310128;
        case 0x310138u: goto label_310138;
        case 0x310144u: goto label_310144;
        default: break;
    }

    ctx->pc = 0x3100fcu;

    // 0x3100fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3100fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310100: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x310100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x310104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x310104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x310108: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x310108u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x31010c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31010cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310110: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x310110u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x310114: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x310114u;
    SET_GPR_U32(ctx, 31, 0x31011Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x310114u, 0x31011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31011Cu;
label_31011c:
    // 0x31011c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31011cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310120: 0xc05cd10  jal         func_173440
    ctx->pc = 0x310120u;
    SET_GPR_U32(ctx, 31, 0x310128u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x310120u, 0x310128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310128u;
label_310128:
    // 0x310128: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x310128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31012c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31012cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x310130: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x310130u;
    SET_GPR_U32(ctx, 31, 0x310138u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x310130u, 0x310138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310138u;
label_310138:
    // 0x310138: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x310138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31013c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x31013Cu;
    SET_GPR_U32(ctx, 31, 0x310144u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x31013Cu, 0x310144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310144u;
label_310144:
    // 0x310144: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310148: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x310148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x31014c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31014Cu;
    {
        const bool branch_taken_0x31014c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31014c) {
            ctx->pc = 0x310164u;
            return;
        }
    }
    ctx->pc = 0x310154u;
    // 0x310154: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x310154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310158: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x310158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x31015c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31015cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x310160: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x310160u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x310164u;
}
