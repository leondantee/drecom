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

// Function: entry_0030e088
// Address: 0x30e088 - 0x30e0dc
void entry_0030e088_0x30e088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030e088_0x30e088");
#endif

    switch (ctx->pc) {
        case 0x30e0a8u: goto label_30e0a8;
        default: break;
    }

    ctx->pc = 0x30e088u;

    // 0x30e088: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e08c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e090: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30e090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30e094: 0x24062811  addiu       $a2, $zero, 0x2811
    ctx->pc = 0x30e094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10257));
    // 0x30e098: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30e098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e09c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30e09cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30e0a0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30E0A0u;
    SET_GPR_U32(ctx, 31, 0x30E0A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30E0A0u, 0x30E0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E0A8u;
label_30e0a8:
    // 0x30e0a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e0ac: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30e0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30e0b0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x30e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x30e0b4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30e0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e0b8: 0xac821338  sw          $v0, 0x1338($a0)
    ctx->pc = 0x30e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 2));
    // 0x30e0bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e0c0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30e0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e0c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e0c8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30e0c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e0cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e0d0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30e0d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30e0d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30e0d8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30e0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30e0dcu;
}
