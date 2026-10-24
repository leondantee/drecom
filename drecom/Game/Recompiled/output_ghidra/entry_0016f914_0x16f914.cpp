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

// Function: entry_0016f914
// Address: 0x16f914 - 0x16f94c
void entry_0016f914_0x16f914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f914_0x16f914");
#endif

    switch (ctx->pc) {
        case 0x16f92cu: goto label_16f92c;
        default: break;
    }

    ctx->pc = 0x16f914u;

    // 0x16f914: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f918: 0xfc400a08  sd          $zero, 0xA08($v0)
    ctx->pc = 0x16f918u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 2568), GPR_U64(ctx, 0));
    // 0x16f91c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f920: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x16f920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x16f924: 0xc095c7c  jal         func_2571F0
    ctx->pc = 0x16F924u;
    SET_GPR_U32(ctx, 31, 0x16F92Cu);
    ctx->pc = 0x2571F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571F0u, 0x16F924u, 0x16F92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F92Cu;
label_16f92c:
    // 0x16f92c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x16f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f930: 0x8c6301f0  lw          $v1, 0x1F0($v1)
    ctx->pc = 0x16f930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 496)));
    // 0x16f934: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16F934u;
    {
        const bool branch_taken_0x16f934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f934) {
            ctx->pc = 0x16F94Cu;
            return;
        }
    }
    ctx->pc = 0x16F93Cu;
    // 0x16f93c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x16f93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f940: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x16f940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16f944: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x16f944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x16f948: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x16f948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x16f94cu;
}
