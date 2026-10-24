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

// Function: StrIpuCallBack
// Address: 0x35ca00 - 0x35cb54
void StrIpuCallBack_0x35ca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StrIpuCallBack_0x35ca00");
#endif

    switch (ctx->pc) {
        case 0x35ca80u: goto label_35ca80;
        case 0x35cac8u: goto label_35cac8;
        case 0x35cae0u: goto label_35cae0;
        case 0x35cb10u: goto label_35cb10;
        default: break;
    }

    ctx->pc = 0x35ca00u;

    // 0x35ca00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x35ca00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x35ca04: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x35ca04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x35ca08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35ca08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x35ca0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35ca0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35ca10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35ca10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35ca14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35ca14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35ca18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35ca18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35ca1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35ca1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35ca20: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x35ca20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x35ca24: 0xafa60088  sw          $a2, 0x88($sp)
    ctx->pc = 0x35ca24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 6));
    // 0x35ca28: 0x8fb00088  lw          $s0, 0x88($sp)
    ctx->pc = 0x35ca28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35ca2c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x35ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35ca30: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x35ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x35ca34: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x35ca34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x35ca38: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x35ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35ca3c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x35ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x35ca40: 0x2452fffc  addiu       $s2, $v0, -0x4
    ctx->pc = 0x35ca40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x35ca44: 0x8e0202a8  lw          $v0, 0x2A8($s0)
    ctx->pc = 0x35ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x35ca48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35ca48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35ca4c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x35CA4Cu;
    {
        const bool branch_taken_0x35ca4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ca4c) {
            ctx->pc = 0x35CA88u;
            goto label_35ca88;
        }
    }
    ctx->pc = 0x35CA54u;
    // 0x35ca54: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x35ca54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35ca58: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x35ca58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x35ca5c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x35ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x35ca60: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x35ca60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x35ca64: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35ca64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35ca68: 0xae0202a8  sw          $v0, 0x2A8($s0)
    ctx->pc = 0x35ca68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
    // 0x35ca6c: 0x260401f4  addiu       $a0, $s0, 0x1F4
    ctx->pc = 0x35ca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 500));
    // 0x35ca70: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x35ca70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x35ca74: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x35ca74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x35ca78: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x35CA78u;
    SET_GPR_U32(ctx, 31, 0x35CA80u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x35CA80u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35CA80u) { return; }
    ctx->pc = 0x35CA80u;
label_35ca80:
    // 0x35ca80: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x35ca80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x35ca84: 0x2549023  subu        $s2, $s2, $s4
    ctx->pc = 0x35ca84u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_35ca88:
    // 0x35ca88: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x35ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x35ca8c: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x35ca8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x35ca90: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x35ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x35ca94: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x35ca94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x35ca98: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x35CA98u;
    {
        const bool branch_taken_0x35ca98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ca98) {
            ctx->pc = 0x35CAF4u;
            goto label_35caf4;
        }
    }
    ctx->pc = 0x35CAA0u;
    // 0x35caa0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x35caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x35caa4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x35caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x35caa8: 0x62a823  subu        $s5, $v1, $v0
    ctx->pc = 0x35caa8u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35caac: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x35caacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x35cab0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x35cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x35cab4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x35cab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35cab8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x35cab8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x35cabc: 0x72a03628  paddub      $a2, $s5, $zero
    ctx->pc = 0x35cabcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x35cac0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x35CAC0u;
    SET_GPR_U32(ctx, 31, 0x35CAC8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x35CAC8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35CAC8u) { return; }
    ctx->pc = 0x35CAC8u;
label_35cac8:
    // 0x35cac8: 0x2352821  addu        $a1, $s1, $s5
    ctx->pc = 0x35cac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x35cacc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x35caccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x35cad0: 0x2623023  subu        $a2, $s3, $v0
    ctx->pc = 0x35cad0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x35cad4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x35cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x35cad8: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x35CAD8u;
    SET_GPR_U32(ctx, 31, 0x35CAE0u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x35CAE0u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35CAE0u) { return; }
    ctx->pc = 0x35CAE0u;
label_35cae0:
    // 0x35cae0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x35cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x35cae4: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x35cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x35cae8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x35cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x35caec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x35CAECu;
    {
        const bool branch_taken_0x35caec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35caec) {
            ctx->pc = 0x35CB1Cu;
            goto label_35cb1c;
        }
    }
    ctx->pc = 0x35CAF4u;
label_35caf4:
    // 0x35caf4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x35caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x35caf8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x35caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x35cafc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x35cafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35cb00: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x35cb00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x35cb04: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x35cb04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x35cb08: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x35CB08u;
    SET_GPR_U32(ctx, 31, 0x35CB10u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x35CB10u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35CB10u) { return; }
    ctx->pc = 0x35CB10u;
label_35cb10:
    // 0x35cb10: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x35cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x35cb14: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x35cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x35cb18: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x35cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_35cb1c:
    // 0x35cb1c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x35cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x35cb20: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x35cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x35cb24: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x35cb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x35cb28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cb2c: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x35cb2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35cb30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35cb30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35cb34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35cb34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35cb38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35cb38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35cb3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35cb3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35cb40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35cb40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35cb44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35cb44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35cb48: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x35cb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x35cb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x35CB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CB54u;
}
