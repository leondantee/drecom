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

// Function: entry_00298278
// Address: 0x298278 - 0x2982b0
void entry_00298278_0x298278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298278_0x298278");
#endif

    switch (ctx->pc) {
        case 0x298290u: goto label_298290;
        default: break;
    }

    ctx->pc = 0x298278u;

    // 0x298278: 0x2e02000e  sltiu       $v0, $s0, 0xE
    ctx->pc = 0x298278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x29827c: 0x1440fecf  bnez        $v0, . + 4 + (-0x131 << 2)
    ctx->pc = 0x29827Cu;
    {
        const bool branch_taken_0x29827c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29827c) {
            ctx->pc = 0x297DBCu;
            return;
        }
    }
    ctx->pc = 0x298284u;
    // 0x298284: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x298284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x298288: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x298288u;
    SET_GPR_U32(ctx, 31, 0x298290u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x298288u, 0x298290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298290u;
label_298290:
    // 0x298290: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x298290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x298294: 0x8c631330  lw          $v1, 0x1330($v1)
    ctx->pc = 0x298294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
    // 0x298298: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x298298u;
    {
        const bool branch_taken_0x298298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298298) {
            ctx->pc = 0x2982B0u;
            return;
        }
    }
    ctx->pc = 0x2982A0u;
    // 0x2982a0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2982a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2982a4: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x2982a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
    // 0x2982a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2982a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2982ac: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x2982acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
    ctx->pc = 0x2982b0u;
}
