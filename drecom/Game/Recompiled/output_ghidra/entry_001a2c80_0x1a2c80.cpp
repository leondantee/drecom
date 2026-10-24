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

// Function: entry_001a2c80
// Address: 0x1a2c80 - 0x1a2cd8
void entry_001a2c80_0x1a2c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2c80_0x1a2c80");
#endif

    switch (ctx->pc) {
        case 0x1a2c8cu: goto label_1a2c8c;
        case 0x1a2cc0u: goto label_1a2cc0;
        default: break;
    }

    ctx->pc = 0x1a2c80u;

    // 0x1a2c80: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2c80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2c84: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1A2C84u;
    SET_GPR_U32(ctx, 31, 0x1A2C8Cu);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1A2C84u, 0x1A2C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C8Cu;
label_1a2c8c:
    // 0x1a2c8c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a2c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a2c90: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A2C90u;
    {
        const bool branch_taken_0x1a2c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c90) {
            ctx->pc = 0x1A2D04u;
            return;
        }
    }
    ctx->pc = 0x1A2C98u;
    // 0x1a2c98: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2c98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2c9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a2c9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2ca0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a2ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2ca4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a2ca4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2ca8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a2cac: 0x34480040  ori         $t0, $v0, 0x40
    ctx->pc = 0x1a2cacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1a2cb0: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1a2cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x1a2cb4: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x1a2cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a2cb8: 0xc059190  jal         func_164640
    ctx->pc = 0x1A2CB8u;
    SET_GPR_U32(ctx, 31, 0x1A2CC0u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A2CB8u, 0x1A2CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2CC0u;
label_1a2cc0:
    // 0x1a2cc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2cc4: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a2cc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a2cc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a2ccc: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1a2cccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a2cd0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A2CD0u;
    {
        const bool branch_taken_0x1a2cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2cd0) {
            ctx->pc = 0x1A2D04u;
            return;
        }
    }
    ctx->pc = 0x1A2CD8u;
}
