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

// Function: entry_00131cc8
// Address: 0x131cc8 - 0x131d1c
void entry_00131cc8_0x131cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131cc8_0x131cc8");
#endif

    switch (ctx->pc) {
        case 0x131cd8u: goto label_131cd8;
        case 0x131ce8u: goto label_131ce8;
        case 0x131cf4u: goto label_131cf4;
        default: break;
    }

    ctx->pc = 0x131cc8u;

    // 0x131cc8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131ccc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x131cccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131cd0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x131CD0u;
    SET_GPR_U32(ctx, 31, 0x131CD8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x131CD0u, 0x131CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CD8u;
label_131cd8:
    // 0x131cd8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131cdc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x131cdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131ce0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x131CE0u;
    SET_GPR_U32(ctx, 31, 0x131CE8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x131CE0u, 0x131CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CE8u;
label_131ce8:
    // 0x131ce8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131cec: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x131CECu;
    SET_GPR_U32(ctx, 31, 0x131CF4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x131CECu, 0x131CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CF4u;
label_131cf4:
    // 0x131cf4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131cf8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x131cf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x131cfc: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x131CFCu;
    {
        const bool branch_taken_0x131cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131cfc) {
            ctx->pc = 0x131DD0u;
            return;
        }
    }
    ctx->pc = 0x131D04u;
    // 0x131d04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d08: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x131d08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x131d0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x131d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x131d10: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x131d10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x131d14: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x131D14u;
    {
        const bool branch_taken_0x131d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d14) {
            ctx->pc = 0x131DD0u;
            return;
        }
    }
    ctx->pc = 0x131D1Cu;
}
