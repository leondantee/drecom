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

// Function: entry_001c6890
// Address: 0x1c6890 - 0x1c68e4
void entry_001c6890_0x1c6890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6890_0x1c6890");
#endif

    switch (ctx->pc) {
        case 0x1c68b0u: goto label_1c68b0;
        case 0x1c68c8u: goto label_1c68c8;
        default: break;
    }

    ctx->pc = 0x1c6890u;

    // 0x1c6890: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c6890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6894: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c6894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6898: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c6898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c689c: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1c689cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1c68a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c68a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c68a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c68a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c68a8: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C68A8u;
    SET_GPR_U32(ctx, 31, 0x1C68B0u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C68A8u, 0x1C68B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68B0u;
label_1c68b0:
    // 0x1c68b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c68b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c68b4: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c68b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c68b8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1c68b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c68bc: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x1c68bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1c68c0: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C68C0u;
    SET_GPR_U32(ctx, 31, 0x1C68C8u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C68C0u, 0x1C68C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68C8u;
label_1c68c8:
    // 0x1c68c8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c68c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c68cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c68ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c68d0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c68d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c68d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c68d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c68d8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c68d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c68dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c68dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c68e0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c68e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c68e4u;
}
