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

// Function: entry_00149c84
// Address: 0x149c84 - 0x149cb4
void entry_00149c84_0x149c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149c84_0x149c84");
#endif

    switch (ctx->pc) {
        case 0x149c90u: goto label_149c90;
        default: break;
    }

    ctx->pc = 0x149c84u;

    // 0x149c84: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x149c84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x149c88: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x149C88u;
    SET_GPR_U32(ctx, 31, 0x149C90u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x149C88u, 0x149C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C90u;
label_149c90:
    // 0x149c90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149c94: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x149c94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x149c98: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x149C98u;
    {
        const bool branch_taken_0x149c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149c98) {
            ctx->pc = 0x149E10u;
            return;
        }
    }
    ctx->pc = 0x149CA0u;
    // 0x149ca0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x149ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x149ca4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149ca8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x149ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x149cac: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x149CACu;
    {
        const bool branch_taken_0x149cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149cac) {
            ctx->pc = 0x149E10u;
            return;
        }
    }
    ctx->pc = 0x149CB4u;
}
