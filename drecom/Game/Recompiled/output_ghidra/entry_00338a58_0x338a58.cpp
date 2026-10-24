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

// Function: entry_00338a58
// Address: 0x338a58 - 0x338a98
void entry_00338a58_0x338a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338a58_0x338a58");
#endif

    switch (ctx->pc) {
        case 0x338a78u: goto label_338a78;
        case 0x338a84u: goto label_338a84;
        default: break;
    }

    ctx->pc = 0x338a58u;

    // 0x338a58: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x338a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338a5c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x338a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x338a60: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x338A60u;
    {
        const bool branch_taken_0x338a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x338a60) {
            ctx->pc = 0x338AA8u;
            return;
        }
    }
    ctx->pc = 0x338A68u;
    // 0x338a68: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x338a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x338a6c: 0x24442210  addiu       $a0, $v0, 0x2210
    ctx->pc = 0x338a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
    // 0x338a70: 0xc046760  jal         func_119D80
    ctx->pc = 0x338A70u;
    SET_GPR_U32(ctx, 31, 0x338A78u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x338A78u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338A78u) { return; }
    ctx->pc = 0x338A78u;
label_338a78:
    // 0x338a78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x338a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338a7c: 0xc0ce234  jal         func_3388D0
    ctx->pc = 0x338A7Cu;
    SET_GPR_U32(ctx, 31, 0x338A84u);
    ctx->pc = 0x3388D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3388D0u, 0x338A7Cu, 0x338A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338A84u;
label_338a84:
    // 0x338a84: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338A84u;
    {
        const bool branch_taken_0x338a84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x338a84) {
            ctx->pc = 0x338A98u;
            return;
        }
    }
    ctx->pc = 0x338A8Cu;
    // 0x338a8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x338a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338a90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x338A90u;
    {
        const bool branch_taken_0x338a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338a90) {
            ctx->pc = 0x338AACu;
            return;
        }
    }
    ctx->pc = 0x338A98u;
}
