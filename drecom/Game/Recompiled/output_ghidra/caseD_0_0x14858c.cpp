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

// Function: caseD_0
// Address: 0x14858c - 0x1485dc
void caseD_0_0x14858c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x14858c");
#endif

    switch (ctx->pc) {
        case 0x14859cu: goto label_14859c;
        case 0x1485d4u: goto label_1485d4;
        default: break;
    }

    ctx->pc = 0x14858cu;

    // 0x14858c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14858cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148590: 0xac4013f0  sw          $zero, 0x13F0($v0)
    ctx->pc = 0x148590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5104), GPR_U32(ctx, 0));
    // 0x148594: 0xc057bac  jal         func_15EEB0
    ctx->pc = 0x148594u;
    SET_GPR_U32(ctx, 31, 0x14859Cu);
    ctx->pc = 0x15EEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EEB0u, 0x148594u, 0x14859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14859Cu;
label_14859c:
    // 0x14859c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1485a0: 0xac621b60  sw          $v0, 0x1B60($v1)
    ctx->pc = 0x1485a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 2));
    // 0x1485a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1485a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1485a8: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x1485a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x1485ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1485ACu;
    {
        const bool branch_taken_0x1485ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1485ac) {
            ctx->pc = 0x1485DCu;
            return;
        }
    }
    ctx->pc = 0x1485B4u;
    // 0x1485b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1485b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1485b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1485b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1485bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1485bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1485c0: 0x24060a19  addiu       $a2, $zero, 0xA19
    ctx->pc = 0x1485c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2585));
    // 0x1485c4: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x1485c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1485c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1485c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1485cc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1485CCu;
    SET_GPR_U32(ctx, 31, 0x1485D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1485CCu, 0x1485D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1485D4u;
label_1485d4:
    // 0x1485d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1485D4u;
    {
        const bool branch_taken_0x1485d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1485d4) {
            ctx->pc = 0x1485FCu;
            return;
        }
    }
    ctx->pc = 0x1485DCu;
}
