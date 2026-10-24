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

// Function: entry_001a2bd0
// Address: 0x1a2bd0 - 0x1a2c28
void entry_001a2bd0_0x1a2bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2bd0_0x1a2bd0");
#endif

    switch (ctx->pc) {
        case 0x1a2bdcu: goto label_1a2bdc;
        case 0x1a2c10u: goto label_1a2c10;
        default: break;
    }

    ctx->pc = 0x1a2bd0u;

    // 0x1a2bd0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2bd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2bd4: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1A2BD4u;
    SET_GPR_U32(ctx, 31, 0x1A2BDCu);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1A2BD4u, 0x1A2BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2BDCu;
label_1a2bdc:
    // 0x1a2bdc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a2bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a2be0: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1A2BE0u;
    {
        const bool branch_taken_0x1a2be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2be0) {
            ctx->pc = 0x1A2D04u;
            return;
        }
    }
    ctx->pc = 0x1A2BE8u;
    // 0x1a2be8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2be8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2bec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a2becu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2bf0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a2bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2bf4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a2bf4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2bf8: 0x3c028002  lui         $v0, 0x8002
    ctx->pc = 0x1a2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32770 << 16));
    // 0x1a2bfc: 0x34480184  ori         $t0, $v0, 0x184
    ctx->pc = 0x1a2bfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)388);
    // 0x1a2c00: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x1a2c00u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2c04: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x1a2c04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a2c08: 0xc059190  jal         func_164640
    ctx->pc = 0x1A2C08u;
    SET_GPR_U32(ctx, 31, 0x1A2C10u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A2C08u, 0x1A2C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C10u;
label_1a2c10:
    // 0x1a2c10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2c14: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a2c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a2c18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a2c1c: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1a2c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a2c20: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1A2C20u;
    {
        const bool branch_taken_0x1a2c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c20) {
            ctx->pc = 0x1A2D04u;
            return;
        }
    }
    ctx->pc = 0x1A2C28u;
}
