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

// Function: entry_00305694
// Address: 0x305694 - 0x3056d4
void entry_00305694_0x305694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00305694_0x305694");
#endif

    switch (ctx->pc) {
        case 0x3056b4u: goto label_3056b4;
        default: break;
    }

    ctx->pc = 0x305694u;

    // 0x305694: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305698: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30569c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30569cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3056a0: 0x24062813  addiu       $a2, $zero, 0x2813
    ctx->pc = 0x3056a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10259));
    // 0x3056a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3056a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3056a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3056a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3056ac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3056ACu;
    SET_GPR_U32(ctx, 31, 0x3056B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3056ACu, 0x3056B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3056B4u;
label_3056b4:
    // 0x3056b4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3056b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3056b8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x3056b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x3056bc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3056bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3056c0: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x3056c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x3056c4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3056c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3056c8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3056c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3056cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3056ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3056d0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3056d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3056d4u;
}
