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

// Function: entry_001bfd40
// Address: 0x1bfd40 - 0x1bfd78
void entry_001bfd40_0x1bfd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfd40_0x1bfd40");
#endif

    switch (ctx->pc) {
        case 0x1bfd60u: goto label_1bfd60;
        default: break;
    }

    ctx->pc = 0x1bfd40u;

    // 0x1bfd40: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bfd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfd44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bfd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfd48: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bfd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bfd4c: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1bfd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1bfd50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bfd50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfd54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bfd54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bfd58: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BFD58u;
    SET_GPR_U32(ctx, 31, 0x1BFD60u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BFD58u, 0x1BFD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD60u;
label_1bfd60:
    // 0x1bfd60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bfd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfd64: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1bfd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bfd68: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1bfd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1bfd6c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x1bfd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1bfd70: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1BFD70u;
    SET_GPR_U32(ctx, 31, 0x1BFD78u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1BFD70u, 0x1BFD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD78u;
}
