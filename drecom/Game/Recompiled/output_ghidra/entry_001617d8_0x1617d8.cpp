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

// Function: entry_001617d8
// Address: 0x1617d8 - 0x1617fc
void entry_001617d8_0x1617d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001617d8_0x1617d8");
#endif

    switch (ctx->pc) {
        case 0x1617e0u: goto label_1617e0;
        default: break;
    }

    ctx->pc = 0x1617d8u;

    // 0x1617d8: 0xc057acc  jal         func_15EB30
    ctx->pc = 0x1617D8u;
    SET_GPR_U32(ctx, 31, 0x1617E0u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x1617D8u, 0x1617E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1617E0u;
label_1617e0:
    // 0x1617e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1617E0u;
    {
        const bool branch_taken_0x1617e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1617e0) {
            ctx->pc = 0x1617FCu;
            return;
        }
    }
    ctx->pc = 0x1617E8u;
    // 0x1617e8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1617e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1617ec: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1617ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1617f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1617f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1617f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1617F4u;
    {
        const bool branch_taken_0x1617f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1617f4) {
            ctx->pc = 0x161800u;
            return;
        }
    }
    ctx->pc = 0x1617FCu;
}
