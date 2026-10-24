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

// Function: entry_0028e2a4
// Address: 0x28e2a4 - 0x28e2cc
void entry_0028e2a4_0x28e2a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e2a4_0x28e2a4");
#endif

    switch (ctx->pc) {
        case 0x28e2c0u: goto label_28e2c0;
        default: break;
    }

    ctx->pc = 0x28e2a4u;

    // 0x28e2a4: 0x92066624  lbu         $a2, 0x6624($s0)
    ctx->pc = 0x28e2a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e2a8: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28e2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28e2ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e2b0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E2B0u;
    {
        const bool branch_taken_0x28e2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28e2b0) {
            ctx->pc = 0x28E2CCu;
            return;
        }
    }
    ctx->pc = 0x28E2B8u;
    // 0x28e2b8: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28E2B8u;
    SET_GPR_U32(ctx, 31, 0x28E2C0u);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28E2B8u, 0x28E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E2C0u;
label_28e2c0:
    // 0x28e2c0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28e2c4: 0x2462e910  addiu       $v0, $v1, -0x16F0
    ctx->pc = 0x28e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961424));
    // 0x28e2c8: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x28e2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    ctx->pc = 0x28e2ccu;
}
