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

// Function: entry_00148828
// Address: 0x148828 - 0x148858
void entry_00148828_0x148828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148828_0x148828");
#endif

    switch (ctx->pc) {
        case 0x148834u: goto label_148834;
        default: break;
    }

    ctx->pc = 0x148828u;

    // 0x148828: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x148828u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14882c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14882Cu;
    SET_GPR_U32(ctx, 31, 0x148834u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14882Cu, 0x148834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148834u;
label_148834:
    // 0x148834: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148838: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x148838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14883c: 0x106000a5  beqz        $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x14883Cu;
    {
        const bool branch_taken_0x14883c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14883c) {
            ctx->pc = 0x148AD4u;
            return;
        }
    }
    ctx->pc = 0x148844u;
    // 0x148844: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x148844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x148848: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14884c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x14884cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x148850: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x148850u;
    {
        const bool branch_taken_0x148850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148850) {
            ctx->pc = 0x148AD4u;
            return;
        }
    }
    ctx->pc = 0x148858u;
}
