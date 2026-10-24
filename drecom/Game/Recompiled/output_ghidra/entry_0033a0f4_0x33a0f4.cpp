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

// Function: entry_0033a0f4
// Address: 0x33a0f4 - 0x33a12c
void entry_0033a0f4_0x33a0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a0f4_0x33a0f4");
#endif

    switch (ctx->pc) {
        case 0x33a10cu: goto label_33a10c;
        case 0x33a124u: goto label_33a124;
        default: break;
    }

    ctx->pc = 0x33a0f4u;

    // 0x33a0f4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x33a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33a0f8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a0fc: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x33a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x33a100: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x33a100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a104: 0xc0cead4  jal         func_33AB50
    ctx->pc = 0x33A104u;
    SET_GPR_U32(ctx, 31, 0x33A10Cu);
    ctx->pc = 0x33AB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB50u, 0x33A104u, 0x33A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A10Cu;
label_33a10c:
    // 0x33a10c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33A10Cu;
    {
        const bool branch_taken_0x33a10c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x33a10c) {
            ctx->pc = 0x33A12Cu;
            return;
        }
    }
    ctx->pc = 0x33A114u;
    // 0x33a114: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33a114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33a118: 0x24442790  addiu       $a0, $v0, 0x2790
    ctx->pc = 0x33a118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10128));
    // 0x33a11c: 0xc046760  jal         func_119D80
    ctx->pc = 0x33A11Cu;
    SET_GPR_U32(ctx, 31, 0x33A124u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x33A124u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A124u) { return; }
    ctx->pc = 0x33A124u;
label_33a124:
    // 0x33a124: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x33A124u;
    {
        const bool branch_taken_0x33a124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a124) {
            ctx->pc = 0x33A188u;
            return;
        }
    }
    ctx->pc = 0x33A12Cu;
}
