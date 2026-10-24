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

// Function: Item_use
// Address: 0x338620 - 0x33872c
void Item_use_0x338620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Item_use_0x338620");
#endif

    switch (ctx->pc) {
        case 0x33864cu: goto label_33864c;
        case 0x338710u: goto label_338710;
        default: break;
    }

    ctx->pc = 0x338620u;

    // 0x338620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x338620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x338624: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x338624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x338628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x338628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33862c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33862cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x338630: 0xa3a40038  sb          $a0, 0x38($sp)
    ctx->pc = 0x338630u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x338634: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x338634u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x338638: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x338638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x33863c: 0x93a40038  lbu         $a0, 0x38($sp)
    ctx->pc = 0x33863cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x338640: 0x93a50040  lbu         $a1, 0x40($sp)
    ctx->pc = 0x338640u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x338644: 0xc0ce14c  jal         func_338530
    ctx->pc = 0x338644u;
    SET_GPR_U32(ctx, 31, 0x33864Cu);
    ctx->pc = 0x338530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338530u, 0x338644u, 0x33864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33864Cu;
label_33864c:
    // 0x33864c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x33864cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x338650: 0x40102b  sltu        $v0, $v0, $zero
    ctx->pc = 0x338650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
    // 0x338654: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x338654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x338658: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x338658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33865c: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x33865Cu;
    {
        const bool branch_taken_0x33865c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x33865c) {
            ctx->pc = 0x3386C0u;
            goto label_3386c0;
        }
    }
    ctx->pc = 0x338664u;
    // 0x338664: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x338664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x338668: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x338668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x33866c: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x33866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x338670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338674: 0x84426640  lh          $v0, 0x6640($v0)
    ctx->pc = 0x338674u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26176)));
    // 0x338678: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x338678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33867c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33867cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x338680: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x338680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x338684: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x338684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x338688: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x338688u;
    {
        const bool branch_taken_0x338688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x338688) {
            ctx->pc = 0x3386CCu;
            goto label_3386cc;
        }
    }
    ctx->pc = 0x338690u;
    // 0x338690: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x338690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x338694: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x338694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x338698: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x338698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x33869c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x33869cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3386a0: 0x84836640  lh          $v1, 0x6640($a0)
    ctx->pc = 0x3386a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26176)));
    // 0x3386a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3386a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3386a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3386a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3386ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3386acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3386b0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3386b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3386b4: 0xa4826640  sh          $v0, 0x6640($a0)
    ctx->pc = 0x3386b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26176), (uint16_t)GPR_U32(ctx, 2));
    // 0x3386b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3386B8u;
    {
        const bool branch_taken_0x3386b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3386b8) {
            ctx->pc = 0x3386CCu;
            goto label_3386cc;
        }
    }
    ctx->pc = 0x3386C0u;
label_3386c0:
    // 0x3386c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3386c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3386c4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3386C4u;
    {
        const bool branch_taken_0x3386c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3386c4) {
            ctx->pc = 0x338714u;
            goto label_338714;
        }
    }
    ctx->pc = 0x3386CCu;
label_3386cc:
    // 0x3386cc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3386ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3386d0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3386d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3386d4: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x3386d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x3386d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3386d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3386dc: 0x84426640  lh          $v0, 0x6640($v0)
    ctx->pc = 0x3386dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26176)));
    // 0x3386e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3386e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3386e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3386e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3386e8: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3386E8u;
    {
        const bool branch_taken_0x3386e8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3386e8) {
            ctx->pc = 0x338708u;
            goto label_338708;
        }
    }
    ctx->pc = 0x3386F0u;
    // 0x3386f0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3386f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3386f4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3386f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3386f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3386f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3386fc: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x3386fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x338700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338704: 0xa044663e  sb          $a0, 0x663E($v0)
    ctx->pc = 0x338704u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26174), (uint8_t)GPR_U32(ctx, 4));
label_338708:
    // 0x338708: 0xc0ce0d8  jal         func_338360
    ctx->pc = 0x338708u;
    SET_GPR_U32(ctx, 31, 0x338710u);
    ctx->pc = 0x338360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338360u, 0x338708u, 0x338710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338710u;
label_338710:
    // 0x338710: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x338710u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_338714:
    // 0x338714: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x338714u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338718: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x338718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33871c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33871cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338720: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x338720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x338724: 0x3e00008  jr          $ra
    ctx->pc = 0x338724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33872Cu;
}
