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

// Function: entry_00368988
// Address: 0x368988 - 0x368a08
void entry_00368988_0x368988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00368988_0x368988");
#endif

    switch (ctx->pc) {
        case 0x3689bcu: goto label_3689bc;
        default: break;
    }

    ctx->pc = 0x368988u;

    // 0x368988: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x368988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36898c: 0xa0400010  sb          $zero, 0x10($v0)
    ctx->pc = 0x36898cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x368990: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x368990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368994: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x368994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x368998: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x368998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36899c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36899cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3689a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3689a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3689a4: 0x2442af10  addiu       $v0, $v0, -0x50F0
    ctx->pc = 0x3689a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946576));
    // 0x3689a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3689a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3689ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3689acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3689b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3689b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3689b4: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x3689B4u;
    SET_GPR_U32(ctx, 31, 0x3689BCu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x3689B4u, 0x3689BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3689BCu;
label_3689bc:
    // 0x3689bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3689bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3689c0: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x3689c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x3689c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3689c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3689c8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3689c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3689cc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3689ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x3689d0: 0x2463af20  addiu       $v1, $v1, -0x50E0
    ctx->pc = 0x3689d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946592));
    // 0x3689d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3689d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3689d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3689d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3689dc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3689dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3689e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3689e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3689e4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3689e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3689e8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3689e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3689ec: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3689ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3689f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3689f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3689f4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3689f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3689f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3689f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3689fc: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x3689fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x368a00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x368a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x368a04: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x368a04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x368a08u;
}
