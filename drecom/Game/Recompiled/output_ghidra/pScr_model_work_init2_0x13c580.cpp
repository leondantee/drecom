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

// Function: pScr_model_work_init2
// Address: 0x13c580 - 0x13cfdc
void pScr_model_work_init2_0x13c580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pScr_model_work_init2_0x13c580");
#endif

    switch (ctx->pc) {
        case 0x13c618u: goto label_13c618;
        case 0x13c674u: goto label_13c674;
        case 0x13c698u: goto label_13c698;
        case 0x13c6c8u: goto label_13c6c8;
        case 0x13c8f8u: goto label_13c8f8;
        case 0x13c934u: goto label_13c934;
        case 0x13ca38u: goto label_13ca38;
        case 0x13cb88u: goto label_13cb88;
        default: break;
    }

    ctx->pc = 0x13c580u;

    // 0x13c580: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x13c580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x13c584: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x13c584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x13c588: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13c588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x13c58c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13c58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13c590: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13c590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13c594: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13c594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13c598: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13c598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13c59c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13c59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13c5a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13c5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13c5a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c5a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c5ac: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x13c5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x13c5b0: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x13c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
    // 0x13c5b4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c5b8: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x13c5b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x13c5bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13c5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13c5c0: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x13c5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x13c5c4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c5c8: 0x8c5e02d0  lw          $fp, 0x2D0($v0)
    ctx->pc = 0x13c5c8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x13c5cc: 0xafbe00a8  sw          $fp, 0xA8($sp)
    ctx->pc = 0x13c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 30));
    // 0x13c5d0: 0x8fb000e8  lw          $s0, 0xE8($sp)
    ctx->pc = 0x13c5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c5d4: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x13c5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x13c5d8: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x13c5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x13c5dc: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x13c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x13c5e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13C5E0u;
    {
        const bool branch_taken_0x13c5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c5e0) {
            ctx->pc = 0x13C600u;
            goto label_13c600;
        }
    }
    ctx->pc = 0x13C5E8u;
    // 0x13c5e8: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x13c5e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13c5ec: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x13c5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x13c5f0: 0x2441823  subu        $v1, $s2, $a0
    ctx->pc = 0x13c5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x13c5f4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x13c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c5f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c5fc: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x13c5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_13c600:
    // 0x13c600: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x13c600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c604: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c608: 0xac430084  sw          $v1, 0x84($v0)
    ctx->pc = 0x13c608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
    // 0x13c60c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x13c60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c610: 0xc04f3f8  jal         func_13CFE0
    ctx->pc = 0x13C610u;
    SET_GPR_U32(ctx, 31, 0x13C618u);
    ctx->pc = 0x13CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CFE0u, 0x13C610u, 0x13C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C618u;
label_13c618:
    // 0x13c618: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c61c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x13c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x13c620: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13c620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13c624: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x13c624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x13c628: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x13c628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c62c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x13c62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13c630: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x13c630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x13c634: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13c634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13c638: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13C638u;
    {
        const bool branch_taken_0x13c638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c638) {
            ctx->pc = 0x13C658u;
            goto label_13c658;
        }
    }
    ctx->pc = 0x13C640u;
    // 0x13c640: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x13c640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13c644: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13c644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13c648: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x13c648u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c64c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x13c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c654: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x13c654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_13c658:
    // 0x13c658: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c65c: 0x94430052  lhu         $v1, 0x52($v0)
    ctx->pc = 0x13c65cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x13c660: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x13c660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13c664: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x13c664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x13c668: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c66c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x13c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x13c670: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x13c670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_13c674:
    // 0x13c674: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13c674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c678: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13c678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c67c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x13c67cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x13c680: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c684: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x13c684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c688: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x13c688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x13c68c: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x13c68cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c690: 0xc04f410  jal         func_13D040
    ctx->pc = 0x13C690u;
    SET_GPR_U32(ctx, 31, 0x13C698u);
    ctx->pc = 0x13D040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D040u, 0x13C690u, 0x13C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C698u;
label_13c698:
    // 0x13c698: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x13c698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x13c69c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c6a0: 0x24430120  addiu       $v1, $v0, 0x120
    ctx->pc = 0x13c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x13c6a4: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x13c6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x13c6a8: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x13c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x13c6ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13c6b0: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x13c6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x13c6b4: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x13C6B4u;
    {
        const bool branch_taken_0x13c6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c6b4) {
            ctx->pc = 0x13C674u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c674;
        }
    }
    ctx->pc = 0x13C6BCu;
    // 0x13c6bc: 0xa3a000df  sb          $zero, 0xDF($sp)
    ctx->pc = 0x13c6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 223), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c6c0: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x13C6C0u;
    {
        const bool branch_taken_0x13c6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c6c0) {
            ctx->pc = 0x13CF90u;
            goto label_13cf90;
        }
    }
    ctx->pc = 0x13C6C8u;
label_13c6c8:
    // 0x13c6c8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x13c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c6cc: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x13c6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13c6d0: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x13c6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x13c6d4: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x13c6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x13c6d8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13C6D8u;
    {
        const bool branch_taken_0x13c6d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c6d8) {
            ctx->pc = 0x13C6F8u;
            goto label_13c6f8;
        }
    }
    ctx->pc = 0x13C6E0u;
    // 0x13c6e0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13c6e4: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x13c6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x13c6e8: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x13c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13c6ec: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x13c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c6f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c6f4: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x13c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_13c6f8:
    // 0x13c6f8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x13c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c6fc: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x13c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x13c700: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x13c700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c704: 0x93a400df  lbu         $a0, 0xDF($sp)
    ctx->pc = 0x13c704u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13c708: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x13c708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x13c70c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13c710: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c714: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c718: 0xac450064  sw          $a1, 0x64($v0)
    ctx->pc = 0x13c718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 5));
    // 0x13c71c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c720: 0xac450060  sw          $a1, 0x60($v0)
    ctx->pc = 0x13c720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 5));
    // 0x13c724: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x13c724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c728: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x13c728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x13c72c: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x13c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
    // 0x13c730: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x13c730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x13c734: 0x2483bd20  addiu       $v1, $a0, -0x42E0
    ctx->pc = 0x13c734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950176));
    // 0x13c738: 0x3113c  dsll32      $v0, $v1, 4
    ctx->pc = 0x13c738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 4));
    // 0x13c73c: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13c73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x13c740: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13c740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c744: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13c744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13c748: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13c748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c74c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13c750: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x13c750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x13c754: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13c754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13c758: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x13c758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c75c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x13c75cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x13c760: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x13c760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c764: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x13c764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x13c768: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x13c768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x13c76c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x13c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c770: 0x24620018  addiu       $v0, $v1, 0x18
    ctx->pc = 0x13c770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x13c774: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13c774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x13c778: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c77c: 0xac20bd00  sw          $zero, -0x4300($at)
    ctx->pc = 0x13c77cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BD00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD00u, _value); } while (0);
    // 0x13c780: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c784: 0xac20bd04  sw          $zero, -0x42FC($at)
    ctx->pc = 0x13c784u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BD04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD04u, _value); } while (0);
    // 0x13c788: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x13c788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x13c78c: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x13c78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x13c790: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c794: 0xac22bd08  sw          $v0, -0x42F8($at)
    ctx->pc = 0x13c794u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47BD08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD08u, _value); } while (0);
    // 0x13c798: 0x3c116c01  lui         $s1, 0x6C01
    ctx->pc = 0x13c798u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)27649 << 16));
    // 0x13c79c: 0x362203ff  ori         $v0, $s1, 0x3FF
    ctx->pc = 0x13c79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1023);
    // 0x13c7a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c7a4: 0xac22bd0c  sw          $v0, -0x42F4($at)
    ctx->pc = 0x13c7a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47BD0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD0Cu, _value); } while (0);
    // 0x13c7a8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c7ac: 0xac20bd20  sw          $zero, -0x42E0($at)
    ctx->pc = 0x13c7acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BD20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD20u, _value); } while (0);
    // 0x13c7b0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c7b4: 0xac20bd24  sw          $zero, -0x42DC($at)
    ctx->pc = 0x13c7b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BD24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD24u, _value); } while (0);
    // 0x13c7b8: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13c7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x13c7bc: 0x34a20404  ori         $v0, $a1, 0x404
    ctx->pc = 0x13c7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
    // 0x13c7c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c7c4: 0xac22bd28  sw          $v0, -0x42D8($at)
    ctx->pc = 0x13c7c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47BD28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD28u, _value); } while (0);
    // 0x13c7c8: 0x3c036c02  lui         $v1, 0x6C02
    ctx->pc = 0x13c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27650 << 16));
    // 0x13c7cc: 0x346403fc  ori         $a0, $v1, 0x3FC
    ctx->pc = 0x13c7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1020);
    // 0x13c7d0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c7d4: 0xac24bd2c  sw          $a0, -0x42D4($at)
    ctx->pc = 0x13c7d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x47BD2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD2Cu, _value); } while (0);
    // 0x13c7d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13c7d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c7dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c7e0: 0xe420bd38  swc1        $f0, -0x42C8($at)
    ctx->pc = 0x13c7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47BD38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD38u, _value); } while (0); }
    // 0x13c7e4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c7e8: 0xe420bd34  swc1        $f0, -0x42CC($at)
    ctx->pc = 0x13c7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47BD34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD34u, _value); } while (0); }
    // 0x13c7ec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c7f0: 0xe420bd30  swc1        $f0, -0x42D0($at)
    ctx->pc = 0x13c7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47BD30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD30u, _value); } while (0); }
    // 0x13c7f4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c7f8: 0xac20bd48  sw          $zero, -0x42B8($at)
    ctx->pc = 0x13c7f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BD48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD48u, _value); } while (0);
    // 0x13c7fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c800: 0xac20bd44  sw          $zero, -0x42BC($at)
    ctx->pc = 0x13c800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BD44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD44u, _value); } while (0);
    // 0x13c804: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c808: 0xac20bd40  sw          $zero, -0x42C0($at)
    ctx->pc = 0x13c808u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BD40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD40u, _value); } while (0);
    // 0x13c80c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c810: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x13c810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x13c814: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x13c814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x13c818: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13c818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x13c81c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13c81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c820: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13c820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13c824: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x13c824u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c828: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13c828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13c82c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13c82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13c830: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x13c830u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x13c834: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x13c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c838: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13c838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13c83c: 0xfc510000  sd          $s1, 0x0($v0)
    ctx->pc = 0x13c83cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 17));
    // 0x13c840: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x13c840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x13c844: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x13c844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c848: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x13c848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x13c84c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x13c84cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x13c850: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13c850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x13c854: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x13c854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13c858: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x13c858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c85c: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x13c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x13c860: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13c860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13c864: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13c864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13c868: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13c868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13c86c: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x13c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x13c870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c874: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13c874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13c878: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13c878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13c87c: 0x24426eb0  addiu       $v0, $v0, 0x6EB0
    ctx->pc = 0x13c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28336));
    // 0x13c880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c884: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x13c884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x13c888: 0x2213c  dsll32      $a0, $v0, 4
    ctx->pc = 0x13c888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 4));
    // 0x13c88c: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x13c88cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x13c890: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x13c890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x13c894: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13c894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13c898: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13c898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c89c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x13c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x13c8a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13c8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13c8a4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x13c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c8a8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13c8ac: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x13c8acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x13c8b0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x13c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c8b4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x13c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x13c8b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x13c8bc: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x13c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c8c0: 0x2462002c  addiu       $v0, $v1, 0x2C
    ctx->pc = 0x13c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x13c8c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13c8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x13c8c8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c8cc: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x13c8ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x13c8d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13c8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13c8d4: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x13c8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x13c8d8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x13c8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c8dc: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x13c8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x13c8e0: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x13c8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x13c8e4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c8e8: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x13c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x13c8ec: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x13c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13c8f0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x13c8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x13c8f4: 0x0  nop
    ctx->pc = 0x13c8f4u;
    // NOP
label_13c8f8:
    // 0x13c8f8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x13c8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c8fc: 0xafa400d4  sw          $a0, 0xD4($sp)
    ctx->pc = 0x13c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 4));
    // 0x13c900: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13c900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13c904: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13c904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13c908: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13c908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13c90c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x13c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c910: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13c910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c914: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x13c914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x13c918: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13c918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c91c: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x13c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x13c920: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x13c920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x13c924: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x13c924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c928: 0x93a600df  lbu         $a2, 0xDF($sp)
    ctx->pc = 0x13c928u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13c92c: 0xc04f6b0  jal         func_13DAC0
    ctx->pc = 0x13C92Cu;
    SET_GPR_U32(ctx, 31, 0x13C934u);
    ctx->pc = 0x13DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DAC0u, 0x13C92Cu, 0x13C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C934u;
label_13c934:
    // 0x13c934: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x13c934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x13c938: 0x24620150  addiu       $v0, $v1, 0x150
    ctx->pc = 0x13c938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x13c93c: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x13c93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x13c940: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x13c940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c944: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x13c944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x13c948: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13c948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13c94c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13c94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13c950: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13c950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13c954: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x13c954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c958: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13c958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c95c: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x13c95cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x13c960: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13c960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c964: 0xac440084  sw          $a0, 0x84($v0)
    ctx->pc = 0x13c964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 4));
    // 0x13c968: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x13c968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13c96c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13c970: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x13c970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x13c974: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13c974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13c978: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x13c978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x13c97c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13c97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13c980: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x13c980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x13c984: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x13c984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x13c988: 0x2462b7a0  addiu       $v0, $v1, -0x4860
    ctx->pc = 0x13c988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948768));
    // 0x13c98c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13c990: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13c990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13c994: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13c994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c998: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13c998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13c99c: 0x3c153000  lui         $s5, 0x3000
    ctx->pc = 0x13c99cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)12288 << 16));
    // 0x13c9a0: 0x55b025  or          $s6, $v0, $s5
    ctx->pc = 0x13c9a0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x13c9a4: 0x8fb700b0  lw          $s7, 0xB0($sp)
    ctx->pc = 0x13c9a4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13c9a8: 0x92fe0001  lbu         $fp, 0x1($s7)
    ctx->pc = 0x13c9a8u;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
    // 0x13c9ac: 0x33d200ff  andi        $s2, $fp, 0xFF
    ctx->pc = 0x13c9acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x13c9b0: 0x1280c0  sll         $s0, $s2, 3
    ctx->pc = 0x13c9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x13c9b4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x13c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x13c9b8: 0x2442b7a0  addiu       $v0, $v0, -0x4860
    ctx->pc = 0x13c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948768));
    // 0x13c9bc: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x13c9bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13c9c0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x13c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13c9c4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x13c9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x13c9c8: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13c9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x13c9cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13c9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c9d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13c9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13c9d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13c9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c9d8: 0x2c21825  or          $v1, $s6, $v0
    ctx->pc = 0x13c9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x13c9dc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x13c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13c9e0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x13c9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x13c9e4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x13c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13c9e8: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x13c9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x13c9ec: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c9f0: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x13c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x13c9f4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x13c9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x13c9f8: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x13c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13c9fc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x13c9fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13ca00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13ca00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13ca04: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x13ca04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13ca08: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x13ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x13ca0c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x13ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13ca10: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13ca14: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x13ca14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x13ca18: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13ca1c: 0x8c540030  lw          $s4, 0x30($v0)
    ctx->pc = 0x13ca1cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13ca20: 0xafb400b4  sw          $s4, 0xB4($sp)
    ctx->pc = 0x13ca20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 20));
    // 0x13ca24: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13ca28: 0x8c530034  lw          $s3, 0x34($v0)
    ctx->pc = 0x13ca28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x13ca2c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x13ca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13ca30: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13ca34: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x13ca34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_13ca38:
    // 0x13ca38: 0x8fb400e8  lw          $s4, 0xE8($sp)
    ctx->pc = 0x13ca38u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13ca3c: 0x26820040  addiu       $v0, $s4, 0x40
    ctx->pc = 0x13ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x13ca40: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x13ca40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x13ca44: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13ca48: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13ca48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13ca4c: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x13ca4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x13ca50: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x13ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x13ca54: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x13ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x13ca58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13ca5c: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x13ca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x13ca60: 0xae800018  sw          $zero, 0x18($s4)
    ctx->pc = 0x13ca60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
    // 0x13ca64: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x13ca64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x13ca68: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x13ca68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
    // 0x13ca6c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13ca70: 0xae82001c  sw          $v0, 0x1C($s4)
    ctx->pc = 0x13ca70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
    // 0x13ca74: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x13ca74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
    // 0x13ca78: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x13ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
    // 0x13ca7c: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x13ca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
    // 0x13ca80: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x13ca80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
    // 0x13ca84: 0x26830020  addiu       $v1, $s4, 0x20
    ctx->pc = 0x13ca84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x13ca88: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13ca88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13ca8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13ca8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13ca90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13ca94: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13ca98: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x13ca98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
    // 0x13ca9c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x13ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x13caa0: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x13caa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x13caa4: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13caa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x13caa8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13caa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13caac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13caacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13cab0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13cab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cab4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13cab8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x13cab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x13cabc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13cabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13cac0: 0xfe820030  sd          $v0, 0x30($s4)
    ctx->pc = 0x13cac0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 2));
    // 0x13cac4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13cac8: 0xae820038  sw          $v0, 0x38($s4)
    ctx->pc = 0x13cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
    // 0x13cacc: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13caccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x13cad0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x13cad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x13cad4: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x13cad4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x13cad8: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13cad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13cadc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13cadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13cae0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13cae4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13cae8: 0x8c550028  lw          $s5, 0x28($v0)
    ctx->pc = 0x13cae8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x13caec: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13caecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13caf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13caf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13caf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13caf8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13cafc: 0x8c560030  lw          $s6, 0x30($v0)
    ctx->pc = 0x13cafcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13cb00: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13cb00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13cb04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13cb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13cb08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13cb0c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13cb10: 0x8c570038  lw          $s7, 0x38($v0)
    ctx->pc = 0x13cb10u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x13cb14: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13cb14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13cb18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13cb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13cb1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13cb20: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13cb24: 0x8c5e0050  lw          $fp, 0x50($v0)
    ctx->pc = 0x13cb24u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x13cb28: 0x8fb000e8  lw          $s0, 0xE8($sp)
    ctx->pc = 0x13cb28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13cb2c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x13cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x13cb30: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x13cb30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cb34: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x13cb34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13cb38: 0x26440043  addiu       $a0, $s2, 0x43
    ctx->pc = 0x13cb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 67));
    // 0x13cb3c: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x13cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x13cb40: 0x3c027878  lui         $v0, 0x7878
    ctx->pc = 0x13cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30840 << 16));
    // 0x13cb44: 0x34427879  ori         $v0, $v0, 0x7879
    ctx->pc = 0x13cb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30841);
    // 0x13cb48: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x13cb48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13cb4c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x13cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x13cb50: 0x0  nop
    ctx->pc = 0x13cb50u;
    // NOP
    // 0x13cb54: 0x1010  mfhi        $v0
    ctx->pc = 0x13cb54u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13cb58: 0x22143  sra         $a0, $v0, 5
    ctx->pc = 0x13cb58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
    // 0x13cb5c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x13cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13cb60: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x13cb60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x13cb64: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13cb64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13cb68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13cb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13cb6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13cb70: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13cb74: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x13cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
    // 0x13cb78: 0xae700014  sw          $s0, 0x14($s3)
    ctx->pc = 0x13cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 16));
    // 0x13cb7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cb80: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x13cb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x13cb84: 0x0  nop
    ctx->pc = 0x13cb84u;
    // NOP
label_13cb88:
    // 0x13cb88: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13cb8c: 0x34620004  ori         $v0, $v1, 0x4
    ctx->pc = 0x13cb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x13cb90: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x13cb90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x13cb94: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x13cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x13cb98: 0x34620404  ori         $v0, $v1, 0x404
    ctx->pc = 0x13cb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x13cb9c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x13cb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x13cba0: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x13cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
    // 0x13cba4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x13cba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x13cba8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x13cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x13cbac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13cbb0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13cbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cbb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cbb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13cbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13cbbc: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x13cbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x13cbc0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x13cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x13cbc4: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x13cbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x13cbc8: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x13cbc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x13cbcc: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x13cbccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x13cbd0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x13cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13cbd4: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x13cbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x13cbd8: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x13cbd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13cbdc: 0x223fc  dsll32      $a0, $v0, 15
    ctx->pc = 0x13cbdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 15));
    // 0x13cbe0: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x13cbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x13cbe4: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x13cbe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x13cbe8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x13cbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13cbec: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x13cbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13cbf0: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x13cbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x13cbf4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13cbf8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13cbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cbfc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13cbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13cc00: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x13cc00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x13cc04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13cc08: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x13cc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x13cc0c: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x13cc0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13cc10: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x13cc10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x13cc14: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x13cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x13cc18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13cc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13cc1c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13cc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13cc20: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x13cc20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x13cc24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cc28: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x13cc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x13cc2c: 0x90a40008  lbu         $a0, 0x8($a1)
    ctx->pc = 0x13cc2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13cc30: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x13cc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13cc34: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13cc38: 0x2402ff0f  addiu       $v0, $zero, -0xF1
    ctx->pc = 0x13cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x13cc3c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13cc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13cc40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13cc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13cc44: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x13cc44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x13cc48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13cc4c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x13cc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x13cc50: 0x90a40009  lbu         $a0, 0x9($a1)
    ctx->pc = 0x13cc50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x13cc54: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x13cc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13cc58: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x13cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x13cc5c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13cc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13cc60: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x13cc60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13cc64: 0xa0a30009  sb          $v1, 0x9($a1)
    ctx->pc = 0x13cc64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x13cc68: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x13cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x13cc6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13CC6Cu;
    {
        const bool branch_taken_0x13cc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc6c) {
            ctx->pc = 0x13CC84u;
            goto label_13cc84;
        }
    }
    ctx->pc = 0x13CC74u;
    // 0x13cc74: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x13cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x13cc78: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x13cc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x13cc7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13CC7Cu;
    {
        const bool branch_taken_0x13cc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc7c) {
            ctx->pc = 0x13CCA8u;
            goto label_13cca8;
        }
    }
    ctx->pc = 0x13CC84u;
label_13cc84:
    // 0x13cc84: 0x2a410004  slti        $at, $s2, 0x4
    ctx->pc = 0x13cc84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13cc88: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13CC88u;
    {
        const bool branch_taken_0x13cc88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cc88) {
            ctx->pc = 0x13CCA0u;
            goto label_13cca0;
        }
    }
    ctx->pc = 0x13CC90u;
    // 0x13cc90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cc94: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x13cc94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x13cc98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13CC98u;
    {
        const bool branch_taken_0x13cc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc98) {
            ctx->pc = 0x13CCA8u;
            goto label_13cca8;
        }
    }
    ctx->pc = 0x13CCA0u;
label_13cca0:
    // 0x13cca0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x13cca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x13cca4: 0x0  nop
    ctx->pc = 0x13cca4u;
    // NOP
label_13cca8:
    // 0x13cca8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x13cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x13ccac: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x13ccacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x13ccb0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x13ccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x13ccb4: 0x2a430044  slti        $v1, $s2, 0x44
    ctx->pc = 0x13ccb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)68) ? 1 : 0);
    // 0x13ccb8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13CCB8u;
    {
        const bool branch_taken_0x13ccb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ccb8) {
            ctx->pc = 0x13CCF0u;
            goto label_13ccf0;
        }
    }
    ctx->pc = 0x13CCC0u;
    // 0x13ccc0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x13ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x13ccc4: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x13ccc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x13ccc8: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x13ccc8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13cccc: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x13ccccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x13ccd0: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x13ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x13ccd4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13ccd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13ccd8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13ccd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13ccdc: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x13ccdcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x13cce0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x13cce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x13cce4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x13cce4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13cce8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13CCE8u;
    {
        const bool branch_taken_0x13cce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cce8) {
            ctx->pc = 0x13CD18u;
            goto label_13cd18;
        }
    }
    ctx->pc = 0x13CCF0u;
label_13ccf0:
    // 0x13ccf0: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x13ccf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x13ccf4: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x13ccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x13ccf8: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x13ccf8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13ccfc: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x13ccfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x13cd00: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x13cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x13cd04: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13cd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13cd08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13cd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13cd0c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x13cd0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x13cd10: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x13cd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x13cd14: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x13cd14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_13cd18:
    // 0x13cd18: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x13cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x13cd1c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x13cd1cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13cd20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13cd24: 0x118882  srl         $s1, $s1, 2
    ctx->pc = 0x13cd24u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 2));
    // 0x13cd28: 0x15113c  dsll32      $v0, $s5, 4
    ctx->pc = 0x13cd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 4));
    // 0x13cd2c: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13cd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x13cd30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13cd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cd34: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13cd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13cd38: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x13cd38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cd3c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x13cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x13cd40: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13cd44: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13cd44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cd48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13cd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13cd4c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13cd50: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13cd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13cd54: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x13cd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x13cd58: 0xfe020050  sd          $v0, 0x50($s0)
    ctx->pc = 0x13cd58u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 2));
    // 0x13cd5c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x13cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x13cd60: 0x34620104  ori         $v0, $v1, 0x104
    ctx->pc = 0x13cd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)260);
    // 0x13cd64: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x13cd64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x13cd68: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13cd6c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x13cd70: 0x34438004  ori         $v1, $v0, 0x8004
    ctx->pc = 0x13cd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32772);
    // 0x13cd74: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x13cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x13cd78: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13cd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13cd7c: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x13cd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x13cd80: 0x16113c  dsll32      $v0, $s6, 4
    ctx->pc = 0x13cd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 4));
    // 0x13cd84: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13cd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x13cd88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13cd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cd8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13cd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13cd90: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x13cd90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cd94: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x13cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x13cd98: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x13cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13cd9c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x13cd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13cda0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13cda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13cda4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x13cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x13cda8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13cda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13cdac: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x13cdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x13cdb0: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x13cdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x13cdb4: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x13cdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x13cdb8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13cdbc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x13cdc0: 0x34438005  ori         $v1, $v0, 0x8005
    ctx->pc = 0x13cdc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
    // 0x13cdc4: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x13cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x13cdc8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13cdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13cdcc: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x13cdccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x13cdd0: 0x17113c  dsll32      $v0, $s7, 4
    ctx->pc = 0x13cdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 4));
    // 0x13cdd4: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13cdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x13cdd8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13cdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cddc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13cddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13cde0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x13cde0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cde4: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x13cde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x13cde8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13cde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13cdec: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13cdf0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13cdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13cdf4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13cdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13cdf8: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x13cdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x13cdfc: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x13cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x13ce00: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x13ce00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x13ce04: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x13ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
    // 0x13ce08: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13ce0c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x13ce10: 0x34438006  ori         $v1, $v0, 0x8006
    ctx->pc = 0x13ce10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32774);
    // 0x13ce14: 0x3c026500  lui         $v0, 0x6500
    ctx->pc = 0x13ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25856 << 16));
    // 0x13ce18: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13ce18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13ce1c: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x13ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x13ce20: 0x1e213c  dsll32      $a0, $fp, 4
    ctx->pc = 0x13ce20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) << (32 + 4));
    // 0x13ce24: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x13ce24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x13ce28: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x13ce28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x13ce2c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x13ce2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x13ce30: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x13ce30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x13ce34: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x13ce34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x13ce38: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13ce38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13ce3c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x13ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x13ce40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13ce40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13ce44: 0x462025  or          $a0, $v0, $a2
    ctx->pc = 0x13ce44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13ce48: 0xfe040080  sd          $a0, 0x80($s0)
    ctx->pc = 0x13ce48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 4));
    // 0x13ce4c: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x13ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x13ce50: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x13ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x13ce54: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13ce58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x13ce5c: 0x34438007  ori         $v1, $v0, 0x8007
    ctx->pc = 0x13ce5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32775);
    // 0x13ce60: 0x3c026e00  lui         $v0, 0x6E00
    ctx->pc = 0x13ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
    // 0x13ce64: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13ce64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13ce68: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13ce68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x13ce6c: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x13ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x13ce70: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x13ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x13ce74: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x13ce74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x13ce78: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13ce78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x13ce7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13ce7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13ce80: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13ce80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13ce84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13ce84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13ce88: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x13ce88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x13ce8c: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x13ce8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13ce90: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x13ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x13ce94: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x13ce94u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x13ce98: 0x3c021700  lui         $v0, 0x1700
    ctx->pc = 0x13ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5888 << 16));
    // 0x13ce9c: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x13ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x13cea0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x13cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x13cea4: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x13cea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x13cea8: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x13cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x13ceac: 0x26b50330  addiu       $s5, $s5, 0x330
    ctx->pc = 0x13ceacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 816));
    // 0x13ceb0: 0x26d60330  addiu       $s6, $s6, 0x330
    ctx->pc = 0x13ceb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 816));
    // 0x13ceb4: 0x26f70110  addiu       $s7, $s7, 0x110
    ctx->pc = 0x13ceb4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 272));
    // 0x13ceb8: 0x27de0110  addiu       $fp, $fp, 0x110
    ctx->pc = 0x13ceb8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 272));
    // 0x13cebc: 0x2652ffbc  addiu       $s2, $s2, -0x44
    ctx->pc = 0x13cebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967228));
    // 0x13cec0: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x13cec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x13cec4: 0x1e40ff30  bgtz        $s2, . + 4 + (-0xD0 << 2)
    ctx->pc = 0x13CEC4u;
    {
        const bool branch_taken_0x13cec4 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x13cec4) {
            ctx->pc = 0x13CB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13cb88;
        }
    }
    ctx->pc = 0x13CECCu;
    // 0x13cecc: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x13ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x13ced0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x13ced4: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x13ced4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x13ced8: 0x267300c0  addiu       $s3, $s3, 0xC0
    ctx->pc = 0x13ced8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x13cedc: 0xafb000e8  sw          $s0, 0xE8($sp)
    ctx->pc = 0x13cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 16));
    // 0x13cee0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x13cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x13cee4: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x13cee4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x13cee8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13cee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13ceec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13cef0: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x13cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x13cef4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13cef8: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x13cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x13cefc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13cf00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13cf04: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x13cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x13cf08: 0x441fecb  bgez        $v0, . + 4 + (-0x135 << 2)
    ctx->pc = 0x13CF08u;
    {
        const bool branch_taken_0x13cf08 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x13cf08) {
            ctx->pc = 0x13CA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ca38;
        }
    }
    ctx->pc = 0x13CF10u;
    // 0x13cf10: 0x2602fff0  addiu       $v0, $s0, -0x10
    ctx->pc = 0x13cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x13cf14: 0x2213c  dsll32      $a0, $v0, 4
    ctx->pc = 0x13cf14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 4));
    // 0x13cf18: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x13cf18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x13cf1c: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13cf1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13cf20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13cf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13cf24: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13cf24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13cf28: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13cf2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13cf30: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x13cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x13cf34: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13cf38: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x13cf38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
    // 0x13cf3c: 0x8fb400e8  lw          $s4, 0xE8($sp)
    ctx->pc = 0x13cf3cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13cf40: 0x26820040  addiu       $v0, $s4, 0x40
    ctx->pc = 0x13cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x13cf44: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x13cf44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x13cf48: 0x3c137000  lui         $s3, 0x7000
    ctx->pc = 0x13cf48u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)28672 << 16));
    // 0x13cf4c: 0xfe930000  sd          $s3, 0x0($s4)
    ctx->pc = 0x13cf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 19));
    // 0x13cf50: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x13cf50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x13cf54: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x13cf54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x13cf58: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x13cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13cf5c: 0x24620120  addiu       $v0, $v1, 0x120
    ctx->pc = 0x13cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x13cf60: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x13cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x13cf64: 0x8fb400b0  lw          $s4, 0xB0($sp)
    ctx->pc = 0x13cf64u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13cf68: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x13cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x13cf6c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x13cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x13cf70: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x13cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x13cf74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13cf78: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x13cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x13cf7c: 0x1440fe5e  bnez        $v0, . + 4 + (-0x1A2 << 2)
    ctx->pc = 0x13CF7Cu;
    {
        const bool branch_taken_0x13cf7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cf7c) {
            ctx->pc = 0x13C8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c8f8;
        }
    }
    ctx->pc = 0x13CF84u;
    // 0x13cf84: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13cf84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13cf88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13cf8c: 0xa3a200df  sb          $v0, 0xDF($sp)
    ctx->pc = 0x13cf8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 223), (uint8_t)GPR_U32(ctx, 2));
label_13cf90:
    // 0x13cf90: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13cf90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13cf94: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13cf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13cf98: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x13cf98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13cf9c: 0x1440fdca  bnez        $v0, . + 4 + (-0x236 << 2)
    ctx->pc = 0x13CF9Cu;
    {
        const bool branch_taken_0x13cf9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cf9c) {
            ctx->pc = 0x13C6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c6c8;
        }
    }
    ctx->pc = 0x13CFA4u;
    // 0x13cfa4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x13cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13cfa8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x13cfa8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13cfac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13cfacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13cfb0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13cfb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13cfb4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13cfb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13cfb8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13cfb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13cfbc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13cfbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13cfc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13cfc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13cfc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13cfc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13cfc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13cfc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cfcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13cfccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cfd0: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x13cfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x13cfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x13CFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CFDCu;
}
