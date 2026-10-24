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

// Function: entry_00305e24
// Address: 0x305e24 - 0x305e60
void entry_00305e24_0x305e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00305e24_0x305e24");
#endif

    switch (ctx->pc) {
        case 0x305e44u: goto label_305e44;
        default: break;
    }

    ctx->pc = 0x305e24u;

    // 0x305e24: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305e28: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x305e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305e2c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x305e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x305e30: 0x2406283d  addiu       $a2, $zero, 0x283D
    ctx->pc = 0x305e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10301));
    // 0x305e34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x305e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305e38: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x305e38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x305e3c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x305E3Cu;
    SET_GPR_U32(ctx, 31, 0x305E44u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x305E3Cu, 0x305E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305E44u;
label_305e44:
    // 0x305e44: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x305e44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x305e48: 0x8fb200e8  lw          $s2, 0xE8($sp)
    ctx->pc = 0x305e48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305e4c: 0xa6401278  sh          $zero, 0x1278($s2)
    ctx->pc = 0x305e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x305e50: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x305e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305e54: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x305e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x305e58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x305e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x305e5c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x305e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x305e60u;
}
