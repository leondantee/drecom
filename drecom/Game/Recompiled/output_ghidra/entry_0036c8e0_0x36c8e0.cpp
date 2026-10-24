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

// Function: entry_0036c8e0
// Address: 0x36c8e0 - 0x36c958
void entry_0036c8e0_0x36c8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036c8e0_0x36c8e0");
#endif

    switch (ctx->pc) {
        case 0x36c8f0u: goto label_36c8f0;
        case 0x36c8fcu: goto label_36c8fc;
        case 0x36c90cu: goto label_36c90c;
        case 0x36c918u: goto label_36c918;
        default: break;
    }

    ctx->pc = 0x36c8e0u;

    // 0x36c8e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36c8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c8e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36c8e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36c8e8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36C8E8u;
    SET_GPR_U32(ctx, 31, 0x36C8F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36C8E8u, 0x36C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C8F0u;
label_36c8f0:
    // 0x36c8f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36c8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c8f4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36C8F4u;
    SET_GPR_U32(ctx, 31, 0x36C8FCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36C8F4u, 0x36C8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C8FCu;
label_36c8fc:
    // 0x36c8fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36c8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c900: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36c900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36c904: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x36C904u;
    SET_GPR_U32(ctx, 31, 0x36C90Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36C904u, 0x36C90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C90Cu;
label_36c90c:
    // 0x36c90c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36c90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c910: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36C910u;
    SET_GPR_U32(ctx, 31, 0x36C918u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36C910u, 0x36C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C918u;
label_36c918:
    // 0x36c918: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c91c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36c91cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36c920: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36C920u;
    {
        const bool branch_taken_0x36c920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c920) {
            ctx->pc = 0x36C958u;
            return;
        }
    }
    ctx->pc = 0x36C928u;
    // 0x36c928: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36c928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c92c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c930: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36c930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36c934: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x36c934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c938: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c93c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36c93cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36c940: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c944: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36c944u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c948: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c94c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36c94cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c950: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c954: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36c954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x36c958u;
}
