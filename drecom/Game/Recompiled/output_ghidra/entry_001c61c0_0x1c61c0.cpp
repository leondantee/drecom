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

// Function: entry_001c61c0
// Address: 0x1c61c0 - 0x1c6214
void entry_001c61c0_0x1c61c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c61c0_0x1c61c0");
#endif

    switch (ctx->pc) {
        case 0x1c61e0u: goto label_1c61e0;
        case 0x1c61f8u: goto label_1c61f8;
        default: break;
    }

    ctx->pc = 0x1c61c0u;

    // 0x1c61c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c61c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c61c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c61c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c61c8: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c61c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c61cc: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1c61ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1c61d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c61d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c61d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c61d8: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C61D8u;
    SET_GPR_U32(ctx, 31, 0x1C61E0u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C61D8u, 0x1C61E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61E0u;
label_1c61e0:
    // 0x1c61e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c61e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c61e4: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c61e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c61e8: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1c61e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1c61ec: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x1c61ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c61f0: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C61F0u;
    SET_GPR_U32(ctx, 31, 0x1C61F8u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C61F0u, 0x1C61F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61F8u;
label_1c61f8:
    // 0x1c61f8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c61f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c61fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c61fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6200: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c6200u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c6204: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c6204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6208: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c6208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c620c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c620cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c6210: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c6210u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c6214u;
}
