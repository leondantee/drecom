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

// Function: entry_0019b6f0
// Address: 0x19b6f0 - 0x19b720
void entry_0019b6f0_0x19b6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b6f0_0x19b6f0");
#endif

    switch (ctx->pc) {
        case 0x19b710u: goto label_19b710;
        default: break;
    }

    ctx->pc = 0x19b6f0u;

    // 0x19b6f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b6f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b6f8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19b6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19b6fc: 0x24066428  addiu       $a2, $zero, 0x6428
    ctx->pc = 0x19b6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25640));
    // 0x19b700: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19b700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b704: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19b704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19b708: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19B708u;
    SET_GPR_U32(ctx, 31, 0x19B710u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19B708u, 0x19B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B710u;
label_19b710:
    // 0x19b710: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b714: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x19b714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19b718: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b71c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x19b71cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x19b720u;
}
