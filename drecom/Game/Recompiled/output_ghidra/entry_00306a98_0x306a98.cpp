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

// Function: entry_00306a98
// Address: 0x306a98 - 0x306adc
void entry_00306a98_0x306a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306a98_0x306a98");
#endif

    switch (ctx->pc) {
        case 0x306accu: goto label_306acc;
        default: break;
    }

    ctx->pc = 0x306a98u;

    // 0x306a98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a9c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x306a9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x306aa0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x306aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x306aa4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x306aa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x306aa8: 0x24500024  addiu       $s0, $v0, 0x24
    ctx->pc = 0x306aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x306aac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306ab0: 0x36063c00  ori         $a2, $s0, 0x3C00
    ctx->pc = 0x306ab0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)15360);
    // 0x306ab4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306ab8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x306ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x306abc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x306abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306ac0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x306ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x306ac4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x306AC4u;
    SET_GPR_U32(ctx, 31, 0x306ACCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x306AC4u, 0x306ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306ACCu;
label_306acc:
    // 0x306acc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306ad0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x306ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x306ad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x306ad8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x306ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x306adcu;
}
