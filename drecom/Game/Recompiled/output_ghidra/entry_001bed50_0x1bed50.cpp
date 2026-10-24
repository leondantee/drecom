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

// Function: entry_001bed50
// Address: 0x1bed50 - 0x1beda0
void entry_001bed50_0x1bed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bed50_0x1bed50");
#endif

    switch (ctx->pc) {
        case 0x1bed80u: goto label_1bed80;
        case 0x1bed98u: goto label_1bed98;
        default: break;
    }

    ctx->pc = 0x1bed50u;

    // 0x1bed50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bed54: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1bed54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1bed58: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BED58u;
    {
        const bool branch_taken_0x1bed58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bed58) {
            ctx->pc = 0x1BEDA0u;
            return;
        }
    }
    ctx->pc = 0x1BED60u;
    // 0x1bed60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bed60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bed64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bed64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bed68: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bed68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bed6c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1bed6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bed70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bed70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bed74: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bed74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bed78: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BED78u;
    SET_GPR_U32(ctx, 31, 0x1BED80u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BED78u, 0x1BED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED80u;
label_1bed80:
    // 0x1bed80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bed80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bed84: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1bed84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bed88: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bed88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bed8c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1bed8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1bed90: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1BED90u;
    SET_GPR_U32(ctx, 31, 0x1BED98u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1BED90u, 0x1BED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED98u;
label_1bed98:
    // 0x1bed98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BED98u;
    {
        const bool branch_taken_0x1bed98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bed98) {
            ctx->pc = 0x1BEDD8u;
            return;
        }
    }
    ctx->pc = 0x1BEDA0u;
}
