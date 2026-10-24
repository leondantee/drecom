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

// Function: entry_001d0aa0
// Address: 0x1d0aa0 - 0x1d0adc
void entry_001d0aa0_0x1d0aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0aa0_0x1d0aa0");
#endif

    switch (ctx->pc) {
        case 0x1d0accu: goto label_1d0acc;
        default: break;
    }

    ctx->pc = 0x1d0aa0u;

    // 0x1d0aa0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d0aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d0aa4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0aa8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1d0aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d0aac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0ab0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0ab4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1d0ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1d0ab8: 0x24061e89  addiu       $a2, $zero, 0x1E89
    ctx->pc = 0x1d0ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7817));
    // 0x1d0abc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d0abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0ac0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1d0ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d0ac4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1D0AC4u;
    SET_GPR_U32(ctx, 31, 0x1D0ACCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1D0AC4u, 0x1D0ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0ACCu;
label_1d0acc:
    // 0x1d0acc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0ad0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1d0ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1d0ad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d0ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d0ad8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1d0ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1d0adcu;
}
