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

// Function: Item_sort
// Address: 0x338360 - 0x3384a4
void Item_sort_0x338360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Item_sort_0x338360");
#endif

    switch (ctx->pc) {
        case 0x33838cu: goto label_33838c;
        case 0x3383a0u: goto label_3383a0;
        case 0x338408u: goto label_338408;
        case 0x338424u: goto label_338424;
        case 0x338444u: goto label_338444;
        default: break;
    }

    ctx->pc = 0x338360u;

    // 0x338360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x338360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x338364: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x338364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x338368: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x338368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33836c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33836cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x338370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x338374: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x338374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x338378: 0x2444c98f  addiu       $a0, $v0, -0x3671
    ctx->pc = 0x338378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953359));
    // 0x33837c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x33837cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x338380: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x338380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x338384: 0xc046314  jal         func_118C50
    ctx->pc = 0x338384u;
    SET_GPR_U32(ctx, 31, 0x33838Cu);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x33838Cu;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33838Cu) { return; }
    ctx->pc = 0x33838Cu;
label_33838c:
    // 0x33838c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x33838cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x338390: 0x2450c78e  addiu       $s0, $v0, -0x3872
    ctx->pc = 0x338390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952846));
    // 0x338394: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x338394u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x338398: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x338398u;
    {
        const bool branch_taken_0x338398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338398) {
            ctx->pc = 0x3383C8u;
            goto label_3383c8;
        }
    }
    ctx->pc = 0x3383A0u;
label_3383a0:
    // 0x3383a0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3383a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3383a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3383a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3383a8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3383a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3383ac: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x3383acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x3383b0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3383b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3383b4: 0x9062683f  lbu         $v0, 0x683F($v1)
    ctx->pc = 0x3383b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26687)));
    // 0x3383b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3383b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3383bc: 0xa062683f  sb          $v0, 0x683F($v1)
    ctx->pc = 0x3383bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26687), (uint8_t)GPR_U32(ctx, 2));
    // 0x3383c0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3383c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3383c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3383c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3383c8:
    // 0x3383c8: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x3383c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x3383cc: 0x9022c98e  lbu         $v0, -0x3672($at)
    ctx->pc = 0x3383ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x62C98Eu));
    // 0x3383d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3383d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3383d4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3383d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3383d8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3383D8u;
    {
        const bool branch_taken_0x3383d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3383d8) {
            ctx->pc = 0x3383A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3383a0;
        }
    }
    ctx->pc = 0x3383E0u;
    // 0x3383e0: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x3383e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x3383e4: 0x9022c98e  lbu         $v0, -0x3672($at)
    ctx->pc = 0x3383e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x62C98Eu));
    // 0x3383e8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3383e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3383ec: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x3383ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x3383f0: 0x2444c78e  addiu       $a0, $v0, -0x3872
    ctx->pc = 0x3383f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952846));
    // 0x3383f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3383f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3383f8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x3383f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x3383fc: 0x244784b0  addiu       $a3, $v0, -0x7B50
    ctx->pc = 0x3383fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
    // 0x338400: 0xc046774  jal         func_119DD0
    ctx->pc = 0x338400u;
    SET_GPR_U32(ctx, 31, 0x338408u);
    ctx->pc = 0x119DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119DD0u, 0x338400u, 0x338408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338408u;
label_338408:
    // 0x338408: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x338408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x33840c: 0x2472c98f  addiu       $s2, $v1, -0x3671
    ctx->pc = 0x33840cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953359));
    // 0x338410: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x338410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x338414: 0x2470c78e  addiu       $s0, $v1, -0x3872
    ctx->pc = 0x338414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952846));
    // 0x338418: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x338418u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33841c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x33841Cu;
    {
        const bool branch_taken_0x33841c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33841c) {
            ctx->pc = 0x338460u;
            goto label_338460;
        }
    }
    ctx->pc = 0x338424u;
label_338424:
    // 0x338424: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x338424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x338428: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x338428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33842c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x33842cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x338430: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x338430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x338434: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x338434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x338438: 0x244784f0  addiu       $a3, $v0, -0x7B10
    ctx->pc = 0x338438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935792));
    // 0x33843c: 0xc046774  jal         func_119DD0
    ctx->pc = 0x33843Cu;
    SET_GPR_U32(ctx, 31, 0x338444u);
    ctx->pc = 0x119DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119DD0u, 0x33843Cu, 0x338444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338444u;
label_338444:
    // 0x338444: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x338444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x338448: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x338448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33844c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33844cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x338450: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x338450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x338454: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x338454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x338458: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x338458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33845c: 0x0  nop
    ctx->pc = 0x33845cu;
    // NOP
label_338460:
    // 0x338460: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x338460u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x338464: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x338464u;
    {
        const bool branch_taken_0x338464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x338464) {
            ctx->pc = 0x338424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338424;
        }
    }
    ctx->pc = 0x33846Cu;
    // 0x33846c: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x33846cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x338470: 0x9024c98e  lbu         $a0, -0x3672($at)
    ctx->pc = 0x338470u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x62C98Eu));
    // 0x338474: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x338474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x338478: 0x9023c998  lbu         $v1, -0x3668($at)
    ctx->pc = 0x338478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x62C998u));
    // 0x33847c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x33847cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x338480: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x338480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x338484: 0xa023c98e  sb          $v1, -0x3672($at)
    ctx->pc = 0x338484u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x62C98Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x62C98Eu, _value); } while (0);
    // 0x338488: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x338488u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33848c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33848cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x338490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338498: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x338498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33849c: 0x3e00008  jr          $ra
    ctx->pc = 0x33849Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33849Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3384A4u;
}
