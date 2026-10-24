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

// Function: entry_00120f94
// Address: 0x120f94 - 0x121014
void entry_00120f94_0x120f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120f94_0x120f94");
#endif

    switch (ctx->pc) {
        case 0x120fd4u: goto label_120fd4;
        default: break;
    }

    ctx->pc = 0x120f94u;

    // 0x120f94: 0x9204009e  lbu         $a0, 0x9E($s0)
    ctx->pc = 0x120f94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 158)));
    // 0x120f98: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x120f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x120f9c: 0x28640006  slti        $a0, $v1, 0x6
    ctx->pc = 0x120f9cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x120fa0: 0x14800035  bnez        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x120FA0u;
    {
        const bool branch_taken_0x120fa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x120fa0) {
            ctx->pc = 0x121078u;
            return;
        }
    }
    ctx->pc = 0x120FA8u;
    // 0x120fa8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120fac: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x120facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x120fb0: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x120fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x120fb4: 0x34864000  ori         $a2, $a0, 0x4000
    ctx->pc = 0x120fb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x120fb8: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x120fb8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x120fbc: 0x24050522  addiu       $a1, $zero, 0x522
    ctx->pc = 0x120fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x120fc0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x120fc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x120fc4: 0x246505b0  addiu       $a1, $v1, 0x5B0
    ctx->pc = 0x120fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x120fc8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x120fc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x120fcc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x120FCCu;
    SET_GPR_U32(ctx, 31, 0x120FD4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x120FCCu, 0x120FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120FD4u;
label_120fd4:
    // 0x120fd4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x120fd4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x120fd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x120fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120fdc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120fe0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x120fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x120fe4: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x120fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x120fe8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x120fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120fec: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x120fecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x120ff0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120ff4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x120ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x120ff8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120ffc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x120ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x121000: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121004: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x121004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x121008: 0xa200009e  sb          $zero, 0x9E($s0)
    ctx->pc = 0x121008u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 158), (uint8_t)GPR_U32(ctx, 0));
    // 0x12100c: 0x10000748  b           . + 4 + (0x748 << 2)
    ctx->pc = 0x12100Cu;
    {
        const bool branch_taken_0x12100c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12100c) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x121014u;
}
