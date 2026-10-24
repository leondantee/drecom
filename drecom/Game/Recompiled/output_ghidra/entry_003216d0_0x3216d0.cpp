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

// Function: entry_003216d0
// Address: 0x3216d0 - 0x32174c
void entry_003216d0_0x3216d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003216d0_0x3216d0");
#endif

    switch (ctx->pc) {
        case 0x32170cu: goto label_32170c;
        case 0x321724u: goto label_321724;
        case 0x321740u: goto label_321740;
        default: break;
    }

    ctx->pc = 0x3216d0u;

    // 0x3216d0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3216d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3216d4: 0x90420348  lbu         $v0, 0x348($v0)
    ctx->pc = 0x3216d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 840)));
    // 0x3216d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3216d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3216dc: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x3216dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3216e0: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3216E0u;
    {
        const bool branch_taken_0x3216e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3216e0) {
            ctx->pc = 0x321698u;
            return;
        }
    }
    ctx->pc = 0x3216E8u;
    // 0x3216e8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3216e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3216ec: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x3216ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x3216f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3216f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3216f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3216f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3216f8: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x3216F8u;
    {
        const bool branch_taken_0x3216f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3216f8) {
            ctx->pc = 0x3218ACu;
            return;
        }
    }
    ctx->pc = 0x321700u;
    // 0x321700: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x321700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x321704: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x321704u;
    SET_GPR_U32(ctx, 31, 0x32170Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x32170Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32170Cu) { return; }
    ctx->pc = 0x32170Cu;
label_32170c:
    // 0x32170c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x32170cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321710: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321714: 0x246403c0  addiu       $a0, $v1, 0x3C0
    ctx->pc = 0x321714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x321718: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x321718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x32171c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x32171Cu;
    SET_GPR_U32(ctx, 31, 0x321724u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x321724u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x321724u) { return; }
    ctx->pc = 0x321724u;
label_321724:
    // 0x321724: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321728: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32172c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x32172cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x321730: 0x246503c0  addiu       $a1, $v1, 0x3C0
    ctx->pc = 0x321730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x321734: 0x24460310  addiu       $a2, $v0, 0x310
    ctx->pc = 0x321734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 784));
    // 0x321738: 0xc040d62  jal         func_103588
    ctx->pc = 0x321738u;
    SET_GPR_U32(ctx, 31, 0x321740u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x321740u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x321740u) { return; }
    ctx->pc = 0x321740u;
label_321740:
    // 0x321740: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x321740u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321744: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x321744u;
    {
        const bool branch_taken_0x321744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321744) {
            ctx->pc = 0x321780u;
            return;
        }
    }
    ctx->pc = 0x32174Cu;
}
