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

// Function: Item_find
// Address: 0x338530 - 0x338614
void Item_find_0x338530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Item_find_0x338530");
#endif

    switch (ctx->pc) {
        case 0x33856cu: goto label_33856c;
        case 0x3385b0u: goto label_3385b0;
        default: break;
    }

    ctx->pc = 0x338530u;

    // 0x338530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x338530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x338534: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x338534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x338538: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x338538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33853c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33853cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x338540: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x338544: 0xa3a40040  sb          $a0, 0x40($sp)
    ctx->pc = 0x338544u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 4));
    // 0x338548: 0xa3a50048  sb          $a1, 0x48($sp)
    ctx->pc = 0x338548u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 5));
    // 0x33854c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x33854cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x338550: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x338550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x338554: 0x2451c98f  addiu       $s1, $v0, -0x3671
    ctx->pc = 0x338554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953359));
    // 0x338558: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x338558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x33855c: 0x2452c78e  addiu       $s2, $v0, -0x3872
    ctx->pc = 0x33855cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952846));
    // 0x338560: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x338560u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x338564: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x338564u;
    {
        const bool branch_taken_0x338564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338564) {
            ctx->pc = 0x338590u;
            goto label_338590;
        }
    }
    ctx->pc = 0x33856Cu;
label_33856c:
    // 0x33856c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x33856cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x338570: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x338570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x338574: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x338574u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x338578: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x338578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33857c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33857cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x338580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x338580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x338584: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x338584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x338588: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x338588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33858c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33858cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_338590:
    // 0x338590: 0x93a20040  lbu         $v0, 0x40($sp)
    ctx->pc = 0x338590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x338594: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x338594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x338598: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x338598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33859c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x33859Cu;
    {
        const bool branch_taken_0x33859c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33859c) {
            ctx->pc = 0x33856Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33856c;
        }
    }
    ctx->pc = 0x3385A4u;
    // 0x3385a4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3385a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3385a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3385A8u;
    {
        const bool branch_taken_0x3385a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3385a8) {
            ctx->pc = 0x3385E0u;
            goto label_3385e0;
        }
    }
    ctx->pc = 0x3385B0u;
label_3385b0:
    // 0x3385b0: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x3385b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3385b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3385b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3385b8: 0x93a20048  lbu         $v0, 0x48($sp)
    ctx->pc = 0x3385b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3385bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3385bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3385c0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3385C0u;
    {
        const bool branch_taken_0x3385c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3385c0) {
            ctx->pc = 0x3385D4u;
            goto label_3385d4;
        }
    }
    ctx->pc = 0x3385C8u;
    // 0x3385c8: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x3385c8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x3385cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3385CCu;
    {
        const bool branch_taken_0x3385cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3385cc) {
            ctx->pc = 0x3385F8u;
            goto label_3385f8;
        }
    }
    ctx->pc = 0x3385D4u;
label_3385d4:
    // 0x3385d4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3385d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3385d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3385d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3385dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3385dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3385e0:
    // 0x3385e0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3385e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3385e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3385e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3385e8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3385e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3385ec: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3385ECu;
    {
        const bool branch_taken_0x3385ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3385ec) {
            ctx->pc = 0x3385B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3385b0;
        }
    }
    ctx->pc = 0x3385F4u;
    // 0x3385f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3385f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3385f8:
    // 0x3385f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3385f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3385fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3385fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x338600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338608: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x338608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33860c: 0x3e00008  jr          $ra
    ctx->pc = 0x33860Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33860Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338614u;
}
