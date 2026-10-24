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

// Function: entry_001342dc
// Address: 0x1342dc - 0x134378
void entry_001342dc_0x1342dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001342dc_0x1342dc");
#endif

    switch (ctx->pc) {
        case 0x1342e4u: goto label_1342e4;
        default: break;
    }

    ctx->pc = 0x1342dcu;

    // 0x1342dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1342DCu;
    SET_GPR_U32(ctx, 31, 0x1342E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1342DCu, 0x1342E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1342E4u;
label_1342e4:
    // 0x1342e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1342e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1342e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1342e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1342ec: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1342ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1342f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1342f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1342f4: 0xa2030095  sb          $v1, 0x95($s0)
    ctx->pc = 0x1342f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 149), (uint8_t)GPR_U32(ctx, 3));
    // 0x1342f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1342f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1342fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1342fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134300: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134304: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x134304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x134308: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13430c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13430cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134310: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134314: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x134314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x134318: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13431c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x13431cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134320: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x134320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x134324: 0xe46002b4  swc1        $f0, 0x2B4($v1)
    ctx->pc = 0x134324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 692), bits); }
    // 0x134328: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13432c: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x13432cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134330: 0x948302d0  lhu         $v1, 0x2D0($a0)
    ctx->pc = 0x134330u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x134334: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x134334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x134338: 0xa48302d0  sh          $v1, 0x2D0($a0)
    ctx->pc = 0x134338u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 720), (uint16_t)GPR_U32(ctx, 3));
    // 0x13433c: 0x92030095  lbu         $v1, 0x95($s0)
    ctx->pc = 0x13433cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 149)));
    // 0x134340: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x134340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x134344: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x134344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x134348: 0x10a30029  beq         $a1, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x134348u;
    {
        const bool branch_taken_0x134348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x134348) {
            ctx->pc = 0x1343F0u;
            return;
        }
    }
    ctx->pc = 0x134350u;
    // 0x134350: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x134350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x134354: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x134354u;
    {
        const bool branch_taken_0x134354 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x134354) {
            ctx->pc = 0x1343B8u;
            return;
        }
    }
    ctx->pc = 0x13435Cu;
    // 0x13435c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13435cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134360: 0x10a4000d  beq         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x134360u;
    {
        const bool branch_taken_0x134360 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x134360) {
            ctx->pc = 0x134398u;
            return;
        }
    }
    ctx->pc = 0x134368u;
    // 0x134368: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134368u;
    {
        const bool branch_taken_0x134368 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x134368) {
            ctx->pc = 0x134378u;
            return;
        }
    }
    ctx->pc = 0x134370u;
    // 0x134370: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x134370u;
    {
        const bool branch_taken_0x134370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134370) {
            ctx->pc = 0x134420u;
            return;
        }
    }
    ctx->pc = 0x134378u;
}
