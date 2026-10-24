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

// Function: entry_0020643c
// Address: 0x20643c - 0x20646c
void entry_0020643c_0x20643c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020643c_0x20643c");
#endif

    switch (ctx->pc) {
        case 0x20645cu: goto label_20645c;
        default: break;
    }

    ctx->pc = 0x20643cu;

    // 0x20643c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20643cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206440: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x206440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206444: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x206444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x206448: 0x24065a1e  addiu       $a2, $zero, 0x5A1E
    ctx->pc = 0x206448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23070));
    // 0x20644c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20644cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206450: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x206450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x206454: 0xc0965d0  jal         func_259740
    ctx->pc = 0x206454u;
    SET_GPR_U32(ctx, 31, 0x20645Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x206454u, 0x20645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20645Cu;
label_20645c:
    // 0x20645c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20645cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206460: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x206460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x206464: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x206464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x206468: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x206468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20646cu;
}
