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

// Function: entry_0020d6e4
// Address: 0x20d6e4 - 0x20d764
void entry_0020d6e4_0x20d6e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d6e4_0x20d6e4");
#endif

    switch (ctx->pc) {
        case 0x20d6f4u: goto label_20d6f4;
        case 0x20d700u: goto label_20d700;
        case 0x20d710u: goto label_20d710;
        case 0x20d71cu: goto label_20d71c;
        default: break;
    }

    ctx->pc = 0x20d6e4u;

    // 0x20d6e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d6e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20d6e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d6ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20D6ECu;
    SET_GPR_U32(ctx, 31, 0x20D6F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20D6ECu, 0x20D6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D6F4u;
label_20d6f4:
    // 0x20d6f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20d6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d6f8: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x20D6F8u;
    SET_GPR_U32(ctx, 31, 0x20D700u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20D6F8u, 0x20D700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D700u;
label_20d700:
    // 0x20d700: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20d700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d704: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20d704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20d708: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20D708u;
    SET_GPR_U32(ctx, 31, 0x20D710u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20D708u, 0x20D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D710u;
label_20d710:
    // 0x20d710: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20d710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d714: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20D714u;
    SET_GPR_U32(ctx, 31, 0x20D71Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20D714u, 0x20D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D71Cu;
label_20d71c:
    // 0x20d71c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d720: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20d720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20d724: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x20D724u;
    {
        const bool branch_taken_0x20d724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d724) {
            ctx->pc = 0x20D764u;
            return;
        }
    }
    ctx->pc = 0x20D72Cu;
    // 0x20d72c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d730: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x20d730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d734: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20d734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d738: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d73c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20d73cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d740: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20d740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20d744: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d748: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20d748u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d74c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d750: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20d750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d754: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d758: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20d758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d75c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d760: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20d760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x20d764u;
}
