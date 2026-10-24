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

// Function: caseD_2
// Address: 0x149b1c - 0x149b54
void caseD_2_0x149b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x149b1c");
#endif

    switch (ctx->pc) {
        case 0x149b4cu: goto label_149b4c;
        default: break;
    }

    ctx->pc = 0x149b1cu;

    // 0x149b1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149b20: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x149b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x149b24: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x149B24u;
    {
        const bool branch_taken_0x149b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149b24) {
            ctx->pc = 0x149B54u;
            return;
        }
    }
    ctx->pc = 0x149B2Cu;
    // 0x149b2c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149b30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149b34: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x149b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x149b38: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x149b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x149b3c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x149b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x149b40: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x149b40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x149b44: 0xc0965d0  jal         func_259740
    ctx->pc = 0x149B44u;
    SET_GPR_U32(ctx, 31, 0x149B4Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x149B44u, 0x149B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149B4Cu;
label_149b4c:
    // 0x149b4c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x149B4Cu;
    {
        const bool branch_taken_0x149b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149b4c) {
            ctx->pc = 0x149B74u;
            return;
        }
    }
    ctx->pc = 0x149B54u;
}
