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

// Function: entry_003069c0
// Address: 0x3069c0 - 0x306a28
void entry_003069c0_0x3069c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003069c0_0x3069c0");
#endif

    switch (ctx->pc) {
        case 0x3069d4u: goto label_3069d4;
        case 0x306a18u: goto label_306a18;
        default: break;
    }

    ctx->pc = 0x3069c0u;

    // 0x3069c0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3069c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3069c4: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x3069c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x3069c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3069c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3069cc: 0xc05cd90  jal         func_173640
    ctx->pc = 0x3069CCu;
    SET_GPR_U32(ctx, 31, 0x3069D4u);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x3069CCu, 0x3069D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3069D4u;
label_3069d4:
    // 0x3069d4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3069d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3069d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3069d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3069dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3069dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3069e0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x3069e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x3069e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3069e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3069e8: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x3069e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x3069ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3069ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3069f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3069f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3069f4: 0x24500018  addiu       $s0, $v0, 0x18
    ctx->pc = 0x3069f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x3069f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3069f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3069fc: 0x36063c00  ori         $a2, $s0, 0x3C00
    ctx->pc = 0x3069fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)15360);
    // 0x306a00: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a04: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x306a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x306a08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x306a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306a0c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x306a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x306a10: 0xc0965d0  jal         func_259740
    ctx->pc = 0x306A10u;
    SET_GPR_U32(ctx, 31, 0x306A18u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x306A10u, 0x306A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A18u;
label_306a18:
    // 0x306a18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a1c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x306a1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x306a20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x306a24: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x306a24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x306a28u;
}
