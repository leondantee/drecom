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

// Function: entry_001a1c28
// Address: 0x1a1c28 - 0x1a1c60
void entry_001a1c28_0x1a1c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1c28_0x1a1c28");
#endif

    switch (ctx->pc) {
        case 0x1a1c4cu: goto label_1a1c4c;
        default: break;
    }

    ctx->pc = 0x1a1c28u;

    // 0x1a1c28: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a1c28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1c2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a1c2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1c30: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a1c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1c34: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a1c34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1c38: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1a1c38u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1c3c: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1a1c3cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x1a1c40: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x1a1c40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a1c44: 0xc059190  jal         func_164640
    ctx->pc = 0x1A1C44u;
    SET_GPR_U32(ctx, 31, 0x1A1C4Cu);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A1C44u, 0x1A1C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C4Cu;
label_1a1c4c:
    // 0x1a1c4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1c50: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a1c50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a1c54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1c58: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1a1c58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a1c5c: 0x0  nop
    ctx->pc = 0x1a1c5cu;
    // NOP
    ctx->pc = 0x1a1c60u;
}
