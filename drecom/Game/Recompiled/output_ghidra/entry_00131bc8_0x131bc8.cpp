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

// Function: entry_00131bc8
// Address: 0x131bc8 - 0x131c00
void entry_00131bc8_0x131bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131bc8_0x131bc8");
#endif

    switch (ctx->pc) {
        case 0x131bd0u: goto label_131bd0;
        default: break;
    }

    ctx->pc = 0x131bc8u;

    // 0x131bc8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x131BC8u;
    SET_GPR_U32(ctx, 31, 0x131BD0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x131BC8u, 0x131BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131BD0u;
label_131bd0:
    // 0x131bd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x131bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x131bd4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x131bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x131bd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x131bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x131bdc: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x131BDCu;
    {
        const bool branch_taken_0x131bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131bdc) {
            ctx->pc = 0x131C60u;
            return;
        }
    }
    ctx->pc = 0x131BE4u;
    // 0x131be4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131be8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x131BE8u;
    {
        const bool branch_taken_0x131be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131be8) {
            ctx->pc = 0x131C30u;
            return;
        }
    }
    ctx->pc = 0x131BF0u;
    // 0x131bf0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131BF0u;
    {
        const bool branch_taken_0x131bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131bf0) {
            ctx->pc = 0x131C00u;
            return;
        }
    }
    ctx->pc = 0x131BF8u;
    // 0x131bf8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x131BF8u;
    {
        const bool branch_taken_0x131bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131bf8) {
            ctx->pc = 0x131C00u;
            return;
        }
    }
    ctx->pc = 0x131C00u;
}
