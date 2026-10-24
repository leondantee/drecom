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

// Function: entry_00338b34
// Address: 0x338b34 - 0x338b6c
void entry_00338b34_0x338b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338b34_0x338b34");
#endif

    switch (ctx->pc) {
        case 0x338b48u: goto label_338b48;
        case 0x338b60u: goto label_338b60;
        default: break;
    }

    ctx->pc = 0x338b34u;

    // 0x338b34: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338b38: 0x24445300  addiu       $a0, $v0, 0x5300
    ctx->pc = 0x338b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21248));
    // 0x338b3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x338b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338b40: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x338B40u;
    SET_GPR_U32(ctx, 31, 0x338B48u);
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x338B40u, 0x338B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338B48u;
label_338b48:
    // 0x338b48: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x338B48u;
    {
        const bool branch_taken_0x338b48 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x338b48) {
            ctx->pc = 0x338B6Cu;
            return;
        }
    }
    ctx->pc = 0x338B50u;
    // 0x338b50: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x338b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x338b54: 0x24442270  addiu       $a0, $v0, 0x2270
    ctx->pc = 0x338b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8816));
    // 0x338b58: 0xc046760  jal         func_119D80
    ctx->pc = 0x338B58u;
    SET_GPR_U32(ctx, 31, 0x338B60u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x338B60u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338B60u) { return; }
    ctx->pc = 0x338B60u;
label_338b60:
    // 0x338b60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x338b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338b64: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x338B64u;
    {
        const bool branch_taken_0x338b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338b64) {
            ctx->pc = 0x338C40u;
            return;
        }
    }
    ctx->pc = 0x338B6Cu;
}
