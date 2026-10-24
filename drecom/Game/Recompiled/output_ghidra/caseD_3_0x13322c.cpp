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

// Function: caseD_3
// Address: 0x13322c - 0x133278
void caseD_3_0x13322c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x13322c");
#endif

    switch (ctx->pc) {
        case 0x13323cu: goto label_13323c;
        case 0x13324cu: goto label_13324c;
        case 0x133258u: goto label_133258;
        default: break;
    }

    ctx->pc = 0x13322cu;

    // 0x13322c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13322cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133230: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x133230u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x133234: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x133234u;
    SET_GPR_U32(ctx, 31, 0x13323Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x133234u, 0x13323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13323Cu;
label_13323c:
    // 0x13323c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13323cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133240: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x133240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133244: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x133244u;
    SET_GPR_U32(ctx, 31, 0x13324Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x133244u, 0x13324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13324Cu;
label_13324c:
    // 0x13324c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13324cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133250: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x133250u;
    SET_GPR_U32(ctx, 31, 0x133258u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x133250u, 0x133258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133258u;
label_133258:
    // 0x133258: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x133258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13325c: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x13325cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x133260: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133260u;
    {
        const bool branch_taken_0x133260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133260) {
            ctx->pc = 0x133278u;
            return;
        }
    }
    ctx->pc = 0x133268u;
    // 0x133268: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x133268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13326c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13326cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x133270: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x133274: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x133274u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x133278u;
}
