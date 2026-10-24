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

// Function: Om2e_R0_init
// Address: 0x378630 - 0x3786fc
void Om2e_R0_init_0x378630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om2e_R0_init_0x378630");
#endif

    switch (ctx->pc) {
        case 0x37866cu: goto label_37866c;
        default: break;
    }

    ctx->pc = 0x378630u;

    // 0x378630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x378630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x378634: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x378634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x378638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x378638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37863c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x37863cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x378640: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x378640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378644: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x378644u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x378648: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x378648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x37864c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x37864cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x378650: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x378650u;
    {
        const bool branch_taken_0x378650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378650) {
            ctx->pc = 0x378660u;
            goto label_378660;
        }
    }
    ctx->pc = 0x378658u;
    // 0x378658: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x378658u;
    {
        const bool branch_taken_0x378658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378658) {
            ctx->pc = 0x378660u;
            goto label_378660;
        }
    }
    ctx->pc = 0x378660u;
label_378660:
    // 0x378660: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x378660u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x378664: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x378664u;
    {
        const bool branch_taken_0x378664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378664) {
            ctx->pc = 0x3786A0u;
            goto label_3786a0;
        }
    }
    ctx->pc = 0x37866Cu;
label_37866c:
    // 0x37866c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x37866cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378670: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x378670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x378674: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x378674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x378678: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x378678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37867c: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x37867cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x378680: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x378680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378684: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x378684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x378688: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x378688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x37868c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x37868cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x378690: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x378690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x378694: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x378694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x378698: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x378698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x37869c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x37869cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3786a0:
    // 0x3786a0: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x3786a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3786a4: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x3786A4u;
    {
        const bool branch_taken_0x3786a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3786a4) {
            ctx->pc = 0x37866Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37866c;
        }
    }
    ctx->pc = 0x3786ACu;
    // 0x3786ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3786acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3786b0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3786b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3786b4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3786b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3786b8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x3786b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x3786bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3786bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3786c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3786c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3786c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3786c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3786c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3786c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3786cc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3786ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3786d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3786d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3786d4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3786d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3786d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3786d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3786dc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3786dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3786e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3786e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3786e4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3786e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3786e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3786e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3786ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3786ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3786f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3786f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3786f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3786F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3786F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3786FCu;
}
