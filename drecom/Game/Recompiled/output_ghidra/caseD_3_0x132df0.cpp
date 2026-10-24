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
// Address: 0x132df0 - 0x132e44
void caseD_3_0x132df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x132df0");
#endif

    switch (ctx->pc) {
        case 0x132e00u: goto label_132e00;
        case 0x132e10u: goto label_132e10;
        case 0x132e1cu: goto label_132e1c;
        default: break;
    }

    ctx->pc = 0x132df0u;

    // 0x132df0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132df4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x132df4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x132df8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x132DF8u;
    SET_GPR_U32(ctx, 31, 0x132E00u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x132DF8u, 0x132E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E00u;
label_132e00:
    // 0x132e00: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132e04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x132e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132e08: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x132E08u;
    SET_GPR_U32(ctx, 31, 0x132E10u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x132E08u, 0x132E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E10u;
label_132e10:
    // 0x132e10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132e14: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x132E14u;
    SET_GPR_U32(ctx, 31, 0x132E1Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x132E14u, 0x132E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E1Cu;
label_132e1c:
    // 0x132e1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132e20: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x132e20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x132e24: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x132E24u;
    {
        const bool branch_taken_0x132e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132e24) {
            ctx->pc = 0x133054u;
            return;
        }
    }
    ctx->pc = 0x132E2Cu;
    // 0x132e2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132e30: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x132e30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x132e34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x132e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x132e38: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x132e38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x132e3c: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x132E3Cu;
    {
        const bool branch_taken_0x132e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132e3c) {
            ctx->pc = 0x133054u;
            return;
        }
    }
    ctx->pc = 0x132E44u;
}
