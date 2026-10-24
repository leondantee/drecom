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

// Function: entry_0030e4c8
// Address: 0x30e4c8 - 0x30e51c
void entry_0030e4c8_0x30e4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030e4c8_0x30e4c8");
#endif

    switch (ctx->pc) {
        case 0x30e4e8u: goto label_30e4e8;
        default: break;
    }

    ctx->pc = 0x30e4c8u;

    // 0x30e4c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e4cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e4d0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30e4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30e4d4: 0x24062813  addiu       $a2, $zero, 0x2813
    ctx->pc = 0x30e4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10259));
    // 0x30e4d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30e4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e4dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30e4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30e4e0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30E4E0u;
    SET_GPR_U32(ctx, 31, 0x30E4E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30E4E0u, 0x30E4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E4E8u;
label_30e4e8:
    // 0x30e4e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e4ec: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30e4f0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x30e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x30e4f4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30e4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e4f8: 0xac821338  sw          $v0, 0x1338($a0)
    ctx->pc = 0x30e4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 2));
    // 0x30e4fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e500: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30e500u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e504: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e508: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30e508u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e50c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e510: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30e510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30e514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30e514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30e518: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30e518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30e51cu;
}
