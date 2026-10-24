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

// Function: entry_001a2c28
// Address: 0x1a2c28 - 0x1a2c80
void entry_001a2c28_0x1a2c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2c28_0x1a2c28");
#endif

    switch (ctx->pc) {
        case 0x1a2c34u: goto label_1a2c34;
        case 0x1a2c68u: goto label_1a2c68;
        default: break;
    }

    ctx->pc = 0x1a2c28u;

    // 0x1a2c28: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2c28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2c2c: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1A2C2Cu;
    SET_GPR_U32(ctx, 31, 0x1A2C34u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1A2C2Cu, 0x1A2C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C34u;
label_1a2c34:
    // 0x1a2c34: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a2c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a2c38: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1A2C38u;
    {
        const bool branch_taken_0x1a2c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c38) {
            ctx->pc = 0x1A2D04u;
            return;
        }
    }
    ctx->pc = 0x1A2C40u;
    // 0x1a2c40: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2c40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2c44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a2c44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2c48: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a2c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2c4c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a2c4cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2c50: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1a2c50u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2c54: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a2c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a2c58: 0x34490040  ori         $t1, $v0, 0x40
    ctx->pc = 0x1a2c58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1a2c5c: 0x240a0046  addiu       $t2, $zero, 0x46
    ctx->pc = 0x1a2c5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1a2c60: 0xc059190  jal         func_164640
    ctx->pc = 0x1A2C60u;
    SET_GPR_U32(ctx, 31, 0x1A2C68u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A2C60u, 0x1A2C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C68u;
label_1a2c68:
    // 0x1a2c68: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2c6c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a2c6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a2c70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a2c74: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1a2c74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a2c78: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1A2C78u;
    {
        const bool branch_taken_0x1a2c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c78) {
            ctx->pc = 0x1A2D04u;
            return;
        }
    }
    ctx->pc = 0x1A2C80u;
}
