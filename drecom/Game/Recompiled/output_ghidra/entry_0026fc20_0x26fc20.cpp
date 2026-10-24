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

// Function: entry_0026fc20
// Address: 0x26fc20 - 0x26fc58
void entry_0026fc20_0x26fc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026fc20_0x26fc20");
#endif

    switch (ctx->pc) {
        case 0x26fc2cu: goto label_26fc2c;
        default: break;
    }

    ctx->pc = 0x26fc20u;

    // 0x26fc20: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26fc20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26fc24: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26FC24u;
    SET_GPR_U32(ctx, 31, 0x26FC2Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26FC24u, 0x26FC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC2Cu;
label_26fc2c:
    // 0x26fc2c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26fc2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26fc30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fc34: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26fc34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x26fc38: 0x106001b5  beqz        $v1, . + 4 + (0x1B5 << 2)
    ctx->pc = 0x26FC38u;
    {
        const bool branch_taken_0x26fc38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fc38) {
            ctx->pc = 0x270310u;
            return;
        }
    }
    ctx->pc = 0x26FC40u;
    // 0x26fc40: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fc44: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x26fc44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x26fc48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26fc4c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x26fc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x26fc50: 0x100001af  b           . + 4 + (0x1AF << 2)
    ctx->pc = 0x26FC50u;
    {
        const bool branch_taken_0x26fc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fc50) {
            ctx->pc = 0x270310u;
            return;
        }
    }
    ctx->pc = 0x26FC58u;
}
