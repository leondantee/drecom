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

// Function: entry_001a2554
// Address: 0x1a2554 - 0x1a2580
void entry_001a2554_0x1a2554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2554_0x1a2554");
#endif

    switch (ctx->pc) {
        case 0x1a2560u: goto label_1a2560;
        default: break;
    }

    ctx->pc = 0x1a2554u;

    // 0x1a2554: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2554u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2558: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1A2558u;
    SET_GPR_U32(ctx, 31, 0x1A2560u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1A2558u, 0x1A2560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2560u;
label_1a2560:
    // 0x1a2560: 0x144000c0  bnez        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x1A2560u;
    {
        const bool branch_taken_0x1a2560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2560) {
            ctx->pc = 0x1A2864u;
            return;
        }
    }
    ctx->pc = 0x1A2568u;
    // 0x1a2568: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1a2568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a256c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x1a256cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1a2570: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a2570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a2574: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1a2574u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a2578: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x1A2578u;
    {
        const bool branch_taken_0x1a2578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2578) {
            ctx->pc = 0x1A2864u;
            return;
        }
    }
    ctx->pc = 0x1A2580u;
}
