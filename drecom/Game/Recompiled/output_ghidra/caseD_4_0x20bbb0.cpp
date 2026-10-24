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

// Function: caseD_4
// Address: 0x20bbb0 - 0x20bc04
void caseD_4_0x20bbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x20bbb0");
#endif

    switch (ctx->pc) {
        case 0x20bbd0u: goto label_20bbd0;
        default: break;
    }

    ctx->pc = 0x20bbb0u;

    // 0x20bbb0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bbb4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bbb8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20bbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20bbbc: 0x24067807  addiu       $a2, $zero, 0x7807
    ctx->pc = 0x20bbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30727));
    // 0x20bbc0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20bbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bbc4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20bbc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20bbc8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20BBC8u;
    SET_GPR_U32(ctx, 31, 0x20BBD0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20BBC8u, 0x20BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BBD0u;
label_20bbd0:
    // 0x20bbd0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bbd4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20bbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20bbd8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bbdc: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x20bbdcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x20bbe0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x20bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x20bbe4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bbe8: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x20bbe8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x20bbec: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bbf0: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x20bbf0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x20bbf4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bbf8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20bbf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20bbfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20bc00: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20bc00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20bc04u;
}
