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

// Function: caseD_4
// Address: 0x149cb4 - 0x149cec
void caseD_4_0x149cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x149cb4");
#endif

    switch (ctx->pc) {
        case 0x149ce4u: goto label_149ce4;
        default: break;
    }

    ctx->pc = 0x149cb4u;

    // 0x149cb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149cb8: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x149cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x149cbc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x149CBCu;
    {
        const bool branch_taken_0x149cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149cbc) {
            ctx->pc = 0x149CECu;
            return;
        }
    }
    ctx->pc = 0x149CC4u;
    // 0x149cc4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149cc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149ccc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x149cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x149cd0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x149cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x149cd4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x149cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x149cd8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x149cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x149cdc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x149CDCu;
    SET_GPR_U32(ctx, 31, 0x149CE4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x149CDCu, 0x149CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149CE4u;
label_149ce4:
    // 0x149ce4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x149CE4u;
    {
        const bool branch_taken_0x149ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149ce4) {
            ctx->pc = 0x149D0Cu;
            return;
        }
    }
    ctx->pc = 0x149CECu;
}
