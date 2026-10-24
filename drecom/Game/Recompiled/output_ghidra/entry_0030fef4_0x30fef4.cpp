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

// Function: entry_0030fef4
// Address: 0x30fef4 - 0x30ff54
void entry_0030fef4_0x30fef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030fef4_0x30fef4");
#endif

    switch (ctx->pc) {
        case 0x30ff04u: goto label_30ff04;
        case 0x30ff10u: goto label_30ff10;
        case 0x30ff20u: goto label_30ff20;
        case 0x30ff2cu: goto label_30ff2c;
        default: break;
    }

    ctx->pc = 0x30fef4u;

    // 0x30fef4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fef8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30fef8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30fefc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30FEFCu;
    SET_GPR_U32(ctx, 31, 0x30FF04u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30FEFCu, 0x30FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FF04u;
label_30ff04:
    // 0x30ff04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ff04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ff08: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30FF08u;
    SET_GPR_U32(ctx, 31, 0x30FF10u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30FF08u, 0x30FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FF10u;
label_30ff10:
    // 0x30ff10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ff14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30ff14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30ff18: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30FF18u;
    SET_GPR_U32(ctx, 31, 0x30FF20u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30FF18u, 0x30FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FF20u;
label_30ff20:
    // 0x30ff20: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ff20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ff24: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30FF24u;
    SET_GPR_U32(ctx, 31, 0x30FF2Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30FF24u, 0x30FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FF2Cu;
label_30ff2c:
    // 0x30ff2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ff30: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30ff30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30ff34: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x30FF34u;
    {
        const bool branch_taken_0x30ff34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ff34) {
            ctx->pc = 0x31001Cu;
            return;
        }
    }
    ctx->pc = 0x30FF3Cu;
    // 0x30ff3c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ff40: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x30ff40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x30ff44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30ff44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30ff48: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x30ff48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x30ff4c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x30FF4Cu;
    {
        const bool branch_taken_0x30ff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ff4c) {
            ctx->pc = 0x31001Cu;
            return;
        }
    }
    ctx->pc = 0x30FF54u;
}
