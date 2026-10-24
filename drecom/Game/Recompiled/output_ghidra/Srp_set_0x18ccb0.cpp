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

// Function: Srp_set
// Address: 0x18ccb0 - 0x18d320
void Srp_set_0x18ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Srp_set_0x18ccb0");
#endif

    switch (ctx->pc) {
        case 0x18cdccu: goto label_18cdcc;
        case 0x18ce40u: goto label_18ce40;
        case 0x18ce74u: goto label_18ce74;
        case 0x18cee0u: goto label_18cee0;
        case 0x18cfd8u: goto label_18cfd8;
        case 0x18cfecu: goto label_18cfec;
        case 0x18d170u: goto label_18d170;
        case 0x18d200u: goto label_18d200;
        default: break;
    }

    ctx->pc = 0x18ccb0u;

    // 0x18ccb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18ccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18ccb4: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x18ccb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x18ccb8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18ccb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18ccbc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18ccbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18ccc0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18ccc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18ccc4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18ccc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18ccc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18ccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18cccc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ccccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ccd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ccd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ccd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ccd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ccd8: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x18ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x18ccdc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18cce0: 0x2443a630  addiu       $v1, $v0, -0x59D0
    ctx->pc = 0x18cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x18cce4: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x18cce4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x18cce8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18ccec: 0x2451e890  addiu       $s1, $v0, -0x1770
    ctx->pc = 0x18ccecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18ccf0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18ccf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18ccf4: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x18ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x18ccf8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18ccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x18ccfc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18ccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18cd00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CD00u;
    {
        const bool branch_taken_0x18cd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cd00) {
            ctx->pc = 0x18CD18u;
            goto label_18cd18;
        }
    }
    ctx->pc = 0x18CD08u;
    // 0x18cd08: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x18cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x18cd0c: 0x34620011  ori         $v0, $v1, 0x11
    ctx->pc = 0x18cd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x18cd10: 0x10000177  b           . + 4 + (0x177 << 2)
    ctx->pc = 0x18CD10u;
    {
        const bool branch_taken_0x18cd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cd10) {
            ctx->pc = 0x18D2F0u;
            goto label_18d2f0;
        }
    }
    ctx->pc = 0x18CD18u;
label_18cd18:
    // 0x18cd18: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x18cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18cd1c: 0x8c740350  lw          $s4, 0x350($v1)
    ctx->pc = 0x18cd1cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 848)));
    // 0x18cd20: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x18cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18cd24: 0x8c420350  lw          $v0, 0x350($v0)
    ctx->pc = 0x18cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x18cd28: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x18cd28u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18cd2c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x18cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18cd30: 0x16830005  bne         $s4, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CD30u;
    {
        const bool branch_taken_0x18cd30 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x18cd30) {
            ctx->pc = 0x18CD48u;
            goto label_18cd48;
        }
    }
    ctx->pc = 0x18CD38u;
    // 0x18cd38: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18cd3c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18cd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18cd40: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x18CD40u;
    {
        const bool branch_taken_0x18cd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cd40) {
            ctx->pc = 0x18D2F0u;
            goto label_18d2f0;
        }
    }
    ctx->pc = 0x18CD48u;
label_18cd48:
    // 0x18cd48: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x18cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x18cd4c: 0x24626ef0  addiu       $v0, $v1, 0x6EF0
    ctx->pc = 0x18cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28400));
    // 0x18cd50: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x18cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x18cd54: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18cd54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cd58: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18cd58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cd5c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x18cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18cd60: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x18cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18cd64: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x18cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18cd68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18cd6c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18cd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18cd70: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18cd74: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x18cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18cd78: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x18cd78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cd7c: 0x92220097  lbu         $v0, 0x97($s1)
    ctx->pc = 0x18cd7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 151)));
    // 0x18cd80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cd84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CD84u;
    {
        const bool branch_taken_0x18cd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cd84) {
            ctx->pc = 0x18CD9Cu;
            goto label_18cd9c;
        }
    }
    ctx->pc = 0x18CD8Cu;
    // 0x18cd8c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18cd90: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18cd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18cd94: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x18CD94u;
    {
        const bool branch_taken_0x18cd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cd94) {
            ctx->pc = 0x18D2F0u;
            goto label_18d2f0;
        }
    }
    ctx->pc = 0x18CD9Cu;
label_18cd9c:
    // 0x18cd9c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x18cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18cda0: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x18cda0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x18cda4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18cda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18cda8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x18cda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x18cdac: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x18CDACu;
    {
        const bool branch_taken_0x18cdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cdac) {
            ctx->pc = 0x18CE38u;
            goto label_18ce38;
        }
    }
    ctx->pc = 0x18CDB4u;
    // 0x18cdb4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x18cdb4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18cdb8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x18cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18cdbc: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x18cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x18cdc0: 0x8c501214  lw          $s0, 0x1214($v0)
    ctx->pc = 0x18cdc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4628)));
    // 0x18cdc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18CDC4u;
    {
        const bool branch_taken_0x18cdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cdc4) {
            ctx->pc = 0x18CDE8u;
            goto label_18cde8;
        }
    }
    ctx->pc = 0x18CDCCu;
label_18cdcc:
    // 0x18cdcc: 0x8e020b18  lw          $v0, 0xB18($s0)
    ctx->pc = 0x18cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x18cdd0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CDD0u;
    {
        const bool branch_taken_0x18cdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cdd0) {
            ctx->pc = 0x18CDE4u;
            goto label_18cde4;
        }
    }
    ctx->pc = 0x18CDD8u;
    // 0x18cdd8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x18cdd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cddc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18CDDCu;
    {
        const bool branch_taken_0x18cddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cddc) {
            ctx->pc = 0x18CE20u;
            goto label_18ce20;
        }
    }
    ctx->pc = 0x18CDE4u;
label_18cde4:
    // 0x18cde4: 0x26100b30  addiu       $s0, $s0, 0xB30
    ctx->pc = 0x18cde4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2864));
label_18cde8:
    // 0x18cde8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x18cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18cdec: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x18cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x18cdf0: 0x8c441214  lw          $a0, 0x1214($v0)
    ctx->pc = 0x18cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4628)));
    // 0x18cdf4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x18cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18cdf8: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x18cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x18cdfc: 0x90421218  lbu         $v0, 0x1218($v0)
    ctx->pc = 0x18cdfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4632)));
    // 0x18ce00: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18ce00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ce04: 0x24020b30  addiu       $v0, $zero, 0xB30
    ctx->pc = 0x18ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2864));
    // 0x18ce08: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x18ce08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18ce0c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18ce10: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x18ce10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18ce14: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x18CE14u;
    {
        const bool branch_taken_0x18ce14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ce14) {
            ctx->pc = 0x18CDCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18cdcc;
        }
    }
    ctx->pc = 0x18CE1Cu;
    // 0x18ce1c: 0x0  nop
    ctx->pc = 0x18ce1cu;
    // NOP
label_18ce20:
    // 0x18ce20: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x18CE20u;
    {
        const bool branch_taken_0x18ce20 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ce20) {
            ctx->pc = 0x18CE60u;
            goto label_18ce60;
        }
    }
    ctx->pc = 0x18CE28u;
    // 0x18ce28: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18ce2c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18ce2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18ce30: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x18CE30u;
    {
        const bool branch_taken_0x18ce30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ce30) {
            ctx->pc = 0x18D2F0u;
            goto label_18d2f0;
        }
    }
    ctx->pc = 0x18CE38u;
label_18ce38:
    // 0x18ce38: 0xc062f14  jal         func_18BC50
    ctx->pc = 0x18CE38u;
    SET_GPR_U32(ctx, 31, 0x18CE40u);
    ctx->pc = 0x18BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BC50u, 0x18CE38u, 0x18CE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE40u;
label_18ce40:
    // 0x18ce40: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18ce40u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18ce44: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18ce48: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18ce48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18ce4c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CE4Cu;
    {
        const bool branch_taken_0x18ce4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ce4c) {
            ctx->pc = 0x18CE60u;
            goto label_18ce60;
        }
    }
    ctx->pc = 0x18CE54u;
    // 0x18ce54: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18ce54u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18ce58: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x18CE58u;
    {
        const bool branch_taken_0x18ce58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ce58) {
            ctx->pc = 0x18D2F0u;
            goto label_18d2f0;
        }
    }
    ctx->pc = 0x18CE60u;
label_18ce60:
    // 0x18ce60: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18ce60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18ce64: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x18ce64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18ce68: 0x24060370  addiu       $a2, $zero, 0x370
    ctx->pc = 0x18ce68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 880));
    // 0x18ce6c: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x18CE6Cu;
    SET_GPR_U32(ctx, 31, 0x18CE74u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x18CE74u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18CE74u) { return; }
    ctx->pc = 0x18CE74u;
label_18ce74:
    // 0x18ce74: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18ce78: 0xae020b18  sw          $v0, 0xB18($s0)
    ctx->pc = 0x18ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 2));
    // 0x18ce7c: 0xae110ac0  sw          $s1, 0xAC0($s0)
    ctx->pc = 0x18ce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2752), GPR_U32(ctx, 17));
    // 0x18ce80: 0x92020347  lbu         $v0, 0x347($s0)
    ctx->pc = 0x18ce80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 839)));
    // 0x18ce84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18ce84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ce88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18ce8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18ce8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ce90: 0xa2020349  sb          $v0, 0x349($s0)
    ctx->pc = 0x18ce90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 841), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ce94: 0x92020347  lbu         $v0, 0x347($s0)
    ctx->pc = 0x18ce94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 839)));
    // 0x18ce98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18ce98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ce9c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18cea0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x18cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x18cea4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cea8: 0xa202034a  sb          $v0, 0x34A($s0)
    ctx->pc = 0x18cea8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 842), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ceac: 0x260202b0  addiu       $v0, $s0, 0x2B0
    ctx->pc = 0x18ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x18ceb0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x18ceb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ceb4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x18ceb4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x18ceb8: 0x260202c0  addiu       $v0, $s0, 0x2C0
    ctx->pc = 0x18ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x18cebc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18cebcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cec0: 0x92020344  lbu         $v0, 0x344($s0)
    ctx->pc = 0x18cec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 836)));
    // 0x18cec4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cec8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18cecc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18ced0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18ced0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18ced4: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x18ced4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x18ced8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18CED8u;
    SET_GPR_U32(ctx, 31, 0x18CEE0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18CED8u, 0x18CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CEE0u;
label_18cee0:
    // 0x18cee0: 0xa2000abc  sb          $zero, 0xABC($s0)
    ctx->pc = 0x18cee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2748), (uint8_t)GPR_U32(ctx, 0));
    // 0x18cee4: 0xae000ab8  sw          $zero, 0xAB8($s0)
    ctx->pc = 0x18cee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 0));
    // 0x18cee8: 0xa2000b1e  sb          $zero, 0xB1E($s0)
    ctx->pc = 0x18cee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2846), (uint8_t)GPR_U32(ctx, 0));
    // 0x18ceec: 0x92020369  lbu         $v0, 0x369($s0)
    ctx->pc = 0x18ceecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 873)));
    // 0x18cef0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cef4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18CEF4u;
    {
        const bool branch_taken_0x18cef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cef4) {
            ctx->pc = 0x18CF70u;
            goto label_18cf70;
        }
    }
    ctx->pc = 0x18CEFCu;
    // 0x18cefc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x18cefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x18cf00: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x18cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x18cf04: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x18cf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18cf08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18cf0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cf10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cf14: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x18cf14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x18cf18: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x18cf18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x18cf1c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x18cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x18cf20: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x18cf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18cf24: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18cf28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cf2c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x18cf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x18cf30: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x18cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x18cf34: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18cf38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x18cf38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x18cf3c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x18cf3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x18cf40: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18cf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cf44: 0x92020369  lbu         $v0, 0x369($s0)
    ctx->pc = 0x18cf44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 873)));
    // 0x18cf48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cf4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18cf50: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x18cf50u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x18cf54: 0x0  nop
    ctx->pc = 0x18cf54u;
    // NOP
    // 0x18cf58: 0x0  nop
    ctx->pc = 0x18cf58u;
    // NOP
    // 0x18cf5c: 0x1010  mfhi        $v0
    ctx->pc = 0x18cf5cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18cf60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18cf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cf64: 0x92020368  lbu         $v0, 0x368($s0)
    ctx->pc = 0x18cf64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x18cf68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cf6c: 0xa2020368  sb          $v0, 0x368($s0)
    ctx->pc = 0x18cf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 872), (uint8_t)GPR_U32(ctx, 2));
label_18cf70:
    // 0x18cf70: 0x92020368  lbu         $v0, 0x368($s0)
    ctx->pc = 0x18cf70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x18cf74: 0xa2020b1c  sb          $v0, 0xB1C($s0)
    ctx->pc = 0x18cf74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2844), (uint8_t)GPR_U32(ctx, 2));
    // 0x18cf78: 0x9202036a  lbu         $v0, 0x36A($s0)
    ctx->pc = 0x18cf78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 874)));
    // 0x18cf7c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18cf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cf80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18cf84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cf88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18cf8c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x18cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x18cf90: 0x24570010  addiu       $s7, $v0, 0x10
    ctx->pc = 0x18cf90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x18cf94: 0xae170ac4  sw          $s7, 0xAC4($s0)
    ctx->pc = 0x18cf94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2756), GPR_U32(ctx, 23));
    // 0x18cf98: 0x8ef50010  lw          $s5, 0x10($s7)
    ctx->pc = 0x18cf98u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x18cf9c: 0x92020b1c  lbu         $v0, 0xB1C($s0)
    ctx->pc = 0x18cf9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2844)));
    // 0x18cfa0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cfa4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18cfa8: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x18cfa8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x18cfac: 0x92a20018  lbu         $v0, 0x18($s5)
    ctx->pc = 0x18cfacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x18cfb0: 0xa2020b1d  sb          $v0, 0xB1D($s0)
    ctx->pc = 0x18cfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2845), (uint8_t)GPR_U32(ctx, 2));
    // 0x18cfb4: 0x8e020ac0  lw          $v0, 0xAC0($s0)
    ctx->pc = 0x18cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2752)));
    // 0x18cfb8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18cfb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cfbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cfc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18cfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18cfc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18CFC4u;
    {
        const bool branch_taken_0x18cfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cfc4) {
            ctx->pc = 0x18CFE0u;
            goto label_18cfe0;
        }
    }
    ctx->pc = 0x18CFCCu;
    // 0x18cfcc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18cfccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18cfd0: 0xc0c9ae4  jal         func_326B90
    ctx->pc = 0x18CFD0u;
    SET_GPR_U32(ctx, 31, 0x18CFD8u);
    ctx->pc = 0x326B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326B90u, 0x18CFD0u, 0x18CFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CFD8u;
label_18cfd8:
    // 0x18cfd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18CFD8u;
    {
        const bool branch_taken_0x18cfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cfd8) {
            ctx->pc = 0x18CFECu;
            goto label_18cfec;
        }
    }
    ctx->pc = 0x18CFE0u;
label_18cfe0:
    // 0x18cfe0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18cfe0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18cfe4: 0xc0c99d8  jal         func_326760
    ctx->pc = 0x18CFE4u;
    SET_GPR_U32(ctx, 31, 0x18CFECu);
    ctx->pc = 0x326760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326760u, 0x18CFE4u, 0x18CFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CFECu;
label_18cfec:
    // 0x18cfec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18cfecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cff0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cff4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18cff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18cff8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CFF8u;
    {
        const bool branch_taken_0x18cff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cff8) {
            ctx->pc = 0x18D010u;
            goto label_18d010;
        }
    }
    ctx->pc = 0x18D000u;
    // 0x18d000: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18d000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d004: 0xfe020a90  sd          $v0, 0xA90($s0)
    ctx->pc = 0x18d004u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2704), GPR_U64(ctx, 2));
    // 0x18d008: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18D008u;
    {
        const bool branch_taken_0x18d008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d008) {
            ctx->pc = 0x18D018u;
            goto label_18d018;
        }
    }
    ctx->pc = 0x18D010u;
label_18d010:
    // 0x18d010: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18d010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d014: 0xfe020a90  sd          $v0, 0xA90($s0)
    ctx->pc = 0x18d014u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2704), GPR_U64(ctx, 2));
label_18d018:
    // 0x18d018: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18d018u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x18d01c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18d01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18d020: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x18d020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x18d024: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D024u;
    {
        const bool branch_taken_0x18d024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d024) {
            ctx->pc = 0x18D048u;
            goto label_18d048;
        }
    }
    ctx->pc = 0x18D02Cu;
    // 0x18d02c: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x18d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x18d030: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18d030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d034: 0x24020368  addiu       $v0, $zero, 0x368
    ctx->pc = 0x18d034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 872));
    // 0x18d038: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18d038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18d03c: 0xfe020a98  sd          $v0, 0xA98($s0)
    ctx->pc = 0x18d03cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2712), GPR_U64(ctx, 2));
    // 0x18d040: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18D040u;
    {
        const bool branch_taken_0x18d040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d040) {
            ctx->pc = 0x18D05Cu;
            goto label_18d05c;
        }
    }
    ctx->pc = 0x18D048u;
label_18d048:
    // 0x18d048: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x18d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x18d04c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18d04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d050: 0x24020360  addiu       $v0, $zero, 0x360
    ctx->pc = 0x18d050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x18d054: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18d054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18d058: 0xfe020a98  sd          $v0, 0xA98($s0)
    ctx->pc = 0x18d058u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2712), GPR_U64(ctx, 2));
label_18d05c:
    // 0x18d05c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d05cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d060: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d064: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18d064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18d068: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18D068u;
    {
        const bool branch_taken_0x18d068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d068) {
            ctx->pc = 0x18D0D8u;
            goto label_18d0d8;
        }
    }
    ctx->pc = 0x18D070u;
    // 0x18d070: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18d070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18d074: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18d074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d078: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18d078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18d07c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18d080: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d084: 0x3c020130  lui         $v0, 0x130
    ctx->pc = 0x18d084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)304 << 16));
    // 0x18d088: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d08c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18d090: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d094: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18d094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d098: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d09c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d0a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d0a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d0a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d0ac: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x18d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x18d0b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d0b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18d0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d0b8: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18d0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18d0bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d0c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18d0c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d0c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18d0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d0cc: 0xfe020aa0  sd          $v0, 0xAA0($s0)
    ctx->pc = 0x18d0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2720), GPR_U64(ctx, 2));
    // 0x18d0d0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x18D0D0u;
    {
        const bool branch_taken_0x18d0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d0d0) {
            ctx->pc = 0x18D138u;
            goto label_18d138;
        }
    }
    ctx->pc = 0x18D0D8u;
label_18d0d8:
    // 0x18d0d8: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18d0dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18d0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d0e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18d0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18d0e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18d0e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d0ec: 0x3c020140  lui         $v0, 0x140
    ctx->pc = 0x18d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)320 << 16));
    // 0x18d0f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d0f4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18d0f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d0fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d100: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d104: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d108: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18d108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d10c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d110: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d114: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x18d114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x18d118: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d11c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18d11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d120: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18d120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18d124: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d128: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18d128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18d12c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d130: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18d130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d134: 0xfe020aa0  sd          $v0, 0xAA0($s0)
    ctx->pc = 0x18d134u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2720), GPR_U64(ctx, 2));
label_18d138:
    // 0x18d138: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d13c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d140: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18d140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18d144: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x18D144u;
    {
        const bool branch_taken_0x18d144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d144) {
            ctx->pc = 0x18D1D0u;
            goto label_18d1d0;
        }
    }
    ctx->pc = 0x18D14Cu;
    // 0x18d14c: 0x92220095  lbu         $v0, 0x95($s1)
    ctx->pc = 0x18d14cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 149)));
    // 0x18d150: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18d150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d154: 0x92220096  lbu         $v0, 0x96($s1)
    ctx->pc = 0x18d154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x18d158: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18d158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d15c: 0x9202034c  lbu         $v0, 0x34C($s0)
    ctx->pc = 0x18d15cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 844)));
    // 0x18d160: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d164: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x18d164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18d168: 0xc05e9b0  jal         func_17A6C0
    ctx->pc = 0x18D168u;
    SET_GPR_U32(ctx, 31, 0x18D170u);
    ctx->pc = 0x17A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A6C0u, 0x18D168u, 0x18D170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D170u;
label_18d170:
    // 0x18d170: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x18d170u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18d174: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18d174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18d178: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18d178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d17c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18d17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18d180: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18d180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18d184: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d188: 0x3c020140  lui         $v0, 0x140
    ctx->pc = 0x18d188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)320 << 16));
    // 0x18d18c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d190: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18d190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18d194: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d198: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18d198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d19c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d1a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d1a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d1a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d1ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d1b0: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x18d1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x18d1b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18d1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d1b8: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18d1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18d1bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d1c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18d1c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d1c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18d1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d1cc: 0xfe020aa0  sd          $v0, 0xAA0($s0)
    ctx->pc = 0x18d1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2720), GPR_U64(ctx, 2));
label_18d1d0:
    // 0x18d1d0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d1d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d1d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d1d8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18d1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18d1dc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x18D1DCu;
    {
        const bool branch_taken_0x18d1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d1dc) {
            ctx->pc = 0x18D260u;
            goto label_18d260;
        }
    }
    ctx->pc = 0x18D1E4u;
    // 0x18d1e4: 0x92220095  lbu         $v0, 0x95($s1)
    ctx->pc = 0x18d1e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 149)));
    // 0x18d1e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18d1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d1ec: 0x9202034c  lbu         $v0, 0x34C($s0)
    ctx->pc = 0x18d1ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 844)));
    // 0x18d1f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d1f4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x18d1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18d1f8: 0xc05e990  jal         func_17A640
    ctx->pc = 0x18D1F8u;
    SET_GPR_U32(ctx, 31, 0x18D200u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x18D1F8u, 0x18D200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D200u;
label_18d200:
    // 0x18d200: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x18d200u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18d204: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18d204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18d208: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18d208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d20c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18d20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18d210: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18d210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18d214: 0x628825  or          $s1, $v1, $v0
    ctx->pc = 0x18d214u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d218: 0x3c020130  lui         $v0, 0x130
    ctx->pc = 0x18d218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)304 << 16));
    // 0x18d21c: 0x2221825  or          $v1, $s1, $v0
    ctx->pc = 0x18d21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x18d220: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18d220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18d224: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18d224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d228: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18d228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d22c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18d22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18d230: 0x43a025  or          $s4, $v0, $v1
    ctx->pc = 0x18d230u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18d234: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18d234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d238: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d23c: 0x2821825  or          $v1, $s4, $v0
    ctx->pc = 0x18d23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x18d240: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x18d240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x18d244: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18d244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d248: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18d248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18d24c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d250: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18d250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18d254: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d258: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18d258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d25c: 0xfe020aa0  sd          $v0, 0xAA0($s0)
    ctx->pc = 0x18d25cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2720), GPR_U64(ctx, 2));
label_18d260:
    // 0x18d260: 0x92040342  lbu         $a0, 0x342($s0)
    ctx->pc = 0x18d260u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 834)));
    // 0x18d264: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18d264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18d268: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18d268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18d26c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x18d270: 0x24427290  addiu       $v0, $v0, 0x7290
    ctx->pc = 0x18d270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29328));
    // 0x18d274: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18d274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d278: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x18d278u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18d27c: 0xfe020aa8  sd          $v0, 0xAA8($s0)
    ctx->pc = 0x18d27cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2728), GPR_U64(ctx, 2));
    // 0x18d280: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18d280u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x18d284: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x18d284u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18d288: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x18d288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x18d28c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D28Cu;
    {
        const bool branch_taken_0x18d28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d28c) {
            ctx->pc = 0x18D2A8u;
            goto label_18d2a8;
        }
    }
    ctx->pc = 0x18D294u;
    // 0x18d294: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x18d294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x18d298: 0x34423011  ori         $v0, $v0, 0x3011
    ctx->pc = 0x18d298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12305);
    // 0x18d29c: 0xfe020ab0  sd          $v0, 0xAB0($s0)
    ctx->pc = 0x18d29cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2736), GPR_U64(ctx, 2));
    // 0x18d2a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D2A0u;
    {
        const bool branch_taken_0x18d2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d2a0) {
            ctx->pc = 0x18D2B4u;
            goto label_18d2b4;
        }
    }
    ctx->pc = 0x18D2A8u;
label_18d2a8:
    // 0x18d2a8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x18d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x18d2ac: 0x3442001b  ori         $v0, $v0, 0x1B
    ctx->pc = 0x18d2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
    // 0x18d2b0: 0xfe020ab0  sd          $v0, 0xAB0($s0)
    ctx->pc = 0x18d2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2736), GPR_U64(ctx, 2));
label_18d2b4:
    // 0x18d2b4: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x18d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x18d2b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D2B8u;
    {
        const bool branch_taken_0x18d2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d2b8) {
            ctx->pc = 0x18D2D4u;
            goto label_18d2d4;
        }
    }
    ctx->pc = 0x18D2C0u;
    // 0x18d2c0: 0xae50006c  sw          $s0, 0x6C($s2)
    ctx->pc = 0x18d2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 16));
    // 0x18d2c4: 0xae500068  sw          $s0, 0x68($s2)
    ctx->pc = 0x18d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 16));
    // 0x18d2c8: 0xae000b20  sw          $zero, 0xB20($s0)
    ctx->pc = 0x18d2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2848), GPR_U32(ctx, 0));
    // 0x18d2cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18D2CCu;
    {
        const bool branch_taken_0x18d2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d2cc) {
            ctx->pc = 0x18D2E8u;
            goto label_18d2e8;
        }
    }
    ctx->pc = 0x18D2D4u;
label_18d2d4:
    // 0x18d2d4: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x18d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x18d2d8: 0xae020b20  sw          $v0, 0xB20($s0)
    ctx->pc = 0x18d2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2848), GPR_U32(ctx, 2));
    // 0x18d2dc: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x18d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x18d2e0: 0xac500b24  sw          $s0, 0xB24($v0)
    ctx->pc = 0x18d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2852), GPR_U32(ctx, 16));
    // 0x18d2e4: 0xae50006c  sw          $s0, 0x6C($s2)
    ctx->pc = 0x18d2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 16));
label_18d2e8:
    // 0x18d2e8: 0xae000b24  sw          $zero, 0xB24($s0)
    ctx->pc = 0x18d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2852), GPR_U32(ctx, 0));
    // 0x18d2ec: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18d2ecu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18d2f0:
    // 0x18d2f0: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x18d2f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18d2f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18d2f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18d2f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18d2f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18d2fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18d2fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18d300: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18d300u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d304: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18d304u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d308: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18d308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d30c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18d30cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d314: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x18d314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18d318: 0x3e00008  jr          $ra
    ctx->pc = 0x18D318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D320u;
}
