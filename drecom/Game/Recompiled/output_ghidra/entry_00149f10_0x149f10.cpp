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

// Function: entry_00149f10
// Address: 0x149f10 - 0x149f38
void entry_00149f10_0x149f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149f10_0x149f10");
#endif

    switch (ctx->pc) {
        case 0x149f30u: goto label_149f30;
        default: break;
    }

    ctx->pc = 0x149f10u;

    // 0x149f10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149f14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149f18: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x149f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x149f1c: 0x2406042b  addiu       $a2, $zero, 0x42B
    ctx->pc = 0x149f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
    // 0x149f20: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x149f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x149f24: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x149f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x149f28: 0xc0965d0  jal         func_259740
    ctx->pc = 0x149F28u;
    SET_GPR_U32(ctx, 31, 0x149F30u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x149F28u, 0x149F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149F30u;
label_149f30:
    // 0x149f30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149f34: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x149f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    ctx->pc = 0x149f38u;
}
