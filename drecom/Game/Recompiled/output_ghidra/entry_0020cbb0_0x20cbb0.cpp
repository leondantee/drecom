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

// Function: entry_0020cbb0
// Address: 0x20cbb0 - 0x20cbcc
void entry_0020cbb0_0x20cbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020cbb0_0x20cbb0");
#endif

    switch (ctx->pc) {
        case 0x20cbbcu: goto label_20cbbc;
        default: break;
    }

    ctx->pc = 0x20cbb0u;

    // 0x20cbb0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20cbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cbb4: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x20CBB4u;
    SET_GPR_U32(ctx, 31, 0x20CBBCu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20CBB4u, 0x20CBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CBBCu;
label_20cbbc:
    // 0x20cbbc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cbc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20cbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cbc4: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20CBC4u;
    SET_GPR_U32(ctx, 31, 0x20CBCCu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20CBC4u, 0x20CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CBCCu;
}
