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

// Function: Set_effect_b_kaminari00
// Address: 0x21cd20 - 0x21d070
void Set_effect_b_kaminari00_0x21cd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_b_kaminari00_0x21cd20");
#endif

    switch (ctx->pc) {
        case 0x21cf0cu: goto label_21cf0c;
        default: break;
    }

    ctx->pc = 0x21cd20u;

    // 0x21cd20: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x21cd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x21cd24: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x21cd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x21cd28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21cd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21cd2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21cd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21cd30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21cd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21cd34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21cd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21cd38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21cd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21cd3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21cd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21cd40: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x21cd40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x21cd44: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x21cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x21cd48: 0xafa60088  sw          $a2, 0x88($sp)
    ctx->pc = 0x21cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 6));
    // 0x21cd4c: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x21cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
    // 0x21cd50: 0xafa80098  sw          $t0, 0x98($sp)
    ctx->pc = 0x21cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 8));
    // 0x21cd54: 0xafa900a0  sw          $t1, 0xA0($sp)
    ctx->pc = 0x21cd54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 9));
    // 0x21cd58: 0xe7ac00a8  swc1        $f12, 0xA8($sp)
    ctx->pc = 0x21cd58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x21cd5c: 0xe7ad00b0  swc1        $f13, 0xB0($sp)
    ctx->pc = 0x21cd5cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x21cd60: 0xe7ae00b8  swc1        $f14, 0xB8($sp)
    ctx->pc = 0x21cd60u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x21cd64: 0xafaa00c0  sw          $t2, 0xC0($sp)
    ctx->pc = 0x21cd64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 10));
    // 0x21cd68: 0xa3ab00c8  sb          $t3, 0xC8($sp)
    ctx->pc = 0x21cd68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 200), (uint8_t)GPR_U32(ctx, 11));
    // 0x21cd6c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x21cd6cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21cd70: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x21cd70u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21cd74: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21cd78: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21CD78u;
    {
        const bool branch_taken_0x21cd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cd78) {
            ctx->pc = 0x21CDA8u;
            goto label_21cda8;
        }
    }
    ctx->pc = 0x21CD80u;
    // 0x21cd80: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x21cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21cd84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21CD84u;
    {
        const bool branch_taken_0x21cd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cd84) {
            ctx->pc = 0x21CD98u;
            goto label_21cd98;
        }
    }
    ctx->pc = 0x21CD8Cu;
    // 0x21cd8c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21cd8cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21cd90: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21CD90u;
    {
        const bool branch_taken_0x21cd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cd90) {
            ctx->pc = 0x21CDCCu;
            goto label_21cdcc;
        }
    }
    ctx->pc = 0x21CD98u;
label_21cd98:
    // 0x21cd98: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x21cd98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cd9c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21cd9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cda0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21CDA0u;
    {
        const bool branch_taken_0x21cda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cda0) {
            ctx->pc = 0x21CDCCu;
            goto label_21cdcc;
        }
    }
    ctx->pc = 0x21CDA8u;
label_21cda8:
    // 0x21cda8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x21cda8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cdac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x21cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21cdb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21CDB0u;
    {
        const bool branch_taken_0x21cdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cdb0) {
            ctx->pc = 0x21CDC4u;
            goto label_21cdc4;
        }
    }
    ctx->pc = 0x21CDB8u;
    // 0x21cdb8: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x21cdb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21cdbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21CDBCu;
    {
        const bool branch_taken_0x21cdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cdbc) {
            ctx->pc = 0x21CDCCu;
            goto label_21cdcc;
        }
    }
    ctx->pc = 0x21CDC4u;
label_21cdc4:
    // 0x21cdc4: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x21cdc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21cdc8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21cdc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21cdcc:
    // 0x21cdcc: 0x93a200c8  lbu         $v0, 0xC8($sp)
    ctx->pc = 0x21cdccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x21cdd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21cdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21cdd4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21CDD4u;
    {
        const bool branch_taken_0x21cdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cdd4) {
            ctx->pc = 0x21CDECu;
            goto label_21cdec;
        }
    }
    ctx->pc = 0x21CDDCu;
    // 0x21cddc: 0x24140034  addiu       $s4, $zero, 0x34
    ctx->pc = 0x21cddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x21cde0: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x21cde0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21cde4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21CDE4u;
    {
        const bool branch_taken_0x21cde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cde4) {
            ctx->pc = 0x21CDF4u;
            goto label_21cdf4;
        }
    }
    ctx->pc = 0x21CDECu;
label_21cdec:
    // 0x21cdec: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x21cdecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21cdf0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x21cdf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21cdf4:
    // 0x21cdf4: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x21cdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x21cdf8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21cdf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21cdfc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x21cdfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x21ce00: 0x32a2000f  andi        $v0, $s5, 0xF
    ctx->pc = 0x21ce00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)15);
    // 0x21ce04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21ce04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ce08: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21ce08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21ce0c: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x21ce0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x21ce10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ce10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ce14: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x21ce14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x21ce18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21ce18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ce1c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21ce1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21ce20: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x21ce20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x21ce24: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x21ce24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21ce28: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x21ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x21ce2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ce2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ce30: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x21ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x21ce34: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x21ce34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x21ce38: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x21ce38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21ce3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21ce3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ce40: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21ce40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21ce44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21ce44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ce48: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x21ce48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ce4c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x21ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x21ce50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21ce50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ce54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21ce54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21ce58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21ce58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21ce5c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21ce5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21ce60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21ce60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21ce64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21ce64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21ce68: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x21ce68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ce6c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x21ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21ce70: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21ce70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ce74: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21ce74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21ce78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21ce78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21ce7c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21ce7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21ce80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21ce80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21ce84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21ce84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21ce88: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x21ce88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x21ce8c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ce90: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21ce90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ce94: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21ce94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21ce98: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21ce98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21ce9c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21ce9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21cea0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21cea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21cea4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21cea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21cea8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x21cea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ceac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x21ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21ceb0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21ceb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ceb4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21ceb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21ceb8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21ceb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21cebc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21cebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21cec0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21cec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21cec4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21cec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21cec8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x21cec8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x21cecc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x21ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21ced0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ced0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ced4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21ced4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ced8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21ced8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21cedc: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x21cedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x21cee0: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x21cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x21cee4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21cee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21cee8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21ceec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ceecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21cef0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21cef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21cef4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21cef4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21cef8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x21cef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21cefc: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x21cefcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21cf00: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x21cf00u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x21cf04: 0xc0634c8  jal         func_18D320
    ctx->pc = 0x21CF04u;
    SET_GPR_U32(ctx, 31, 0x21CF0Cu);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x21CF04u, 0x21CF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CF0Cu;
label_21cf0c:
    // 0x21cf0c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21cf0cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21cf10: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21cf14: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21cf14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21cf18: 0x12030049  beq         $s0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x21CF18u;
    {
        const bool branch_taken_0x21cf18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21cf18) {
            ctx->pc = 0x21D040u;
            goto label_21d040;
        }
    }
    ctx->pc = 0x21CF20u;
    // 0x21cf20: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x21cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x21cf24: 0xa203034d  sb          $v1, 0x34D($s0)
    ctx->pc = 0x21cf24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 845), (uint8_t)GPR_U32(ctx, 3));
    // 0x21cf28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cf2c: 0xa20302a8  sb          $v1, 0x2A8($s0)
    ctx->pc = 0x21cf2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x21cf30: 0x93a300c8  lbu         $v1, 0xC8($sp)
    ctx->pc = 0x21cf30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x21cf34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x21cf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x21cf38: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x21CF38u;
    {
        const bool branch_taken_0x21cf38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cf38) {
            ctx->pc = 0x21CF90u;
            goto label_21cf90;
        }
    }
    ctx->pc = 0x21CF40u;
    // 0x21cf40: 0x3c034364  lui         $v1, 0x4364
    ctx->pc = 0x21cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17252 << 16));
    // 0x21cf44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cf44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cf48: 0x0  nop
    ctx->pc = 0x21cf48u;
    // NOP
    // 0x21cf4c: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x21cf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x21cf50: 0x3c034364  lui         $v1, 0x4364
    ctx->pc = 0x21cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17252 << 16));
    // 0x21cf54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cf54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cf58: 0x0  nop
    ctx->pc = 0x21cf58u;
    // NOP
    // 0x21cf5c: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x21cf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x21cf60: 0x3c034364  lui         $v1, 0x4364
    ctx->pc = 0x21cf60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17252 << 16));
    // 0x21cf64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cf64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cf68: 0x0  nop
    ctx->pc = 0x21cf68u;
    // NOP
    // 0x21cf6c: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x21cf6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x21cf70: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21cf74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cf74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cf78: 0x0  nop
    ctx->pc = 0x21cf78u;
    // NOP
    // 0x21cf7c: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x21cf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x21cf80: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x21cf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cf84: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x21cf84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x21cf88: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x21CF88u;
    {
        const bool branch_taken_0x21cf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cf88) {
            ctx->pc = 0x21CFE4u;
            goto label_21cfe4;
        }
    }
    ctx->pc = 0x21CF90u;
label_21cf90:
    // 0x21cf90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21cf90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cf94: 0x0  nop
    ctx->pc = 0x21cf94u;
    // NOP
    // 0x21cf98: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x21cf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x21cf9c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21cfa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cfa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cfa4: 0x0  nop
    ctx->pc = 0x21cfa4u;
    // NOP
    // 0x21cfa8: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x21cfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x21cfac: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21cfb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cfb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cfb4: 0x0  nop
    ctx->pc = 0x21cfb4u;
    // NOP
    // 0x21cfb8: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x21cfb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x21cfbc: 0x3c0342d8  lui         $v1, 0x42D8
    ctx->pc = 0x21cfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17112 << 16));
    // 0x21cfc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cfc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cfc4: 0x0  nop
    ctx->pc = 0x21cfc4u;
    // NOP
    // 0x21cfc8: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x21cfc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x21cfcc: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x21cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x21cfd0: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x21cfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x21cfd4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21cfd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21cfd8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x21cfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cfdc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21cfdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21cfe0: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x21cfe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_21cfe4:
    // 0x21cfe4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x21cfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cfe8: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x21cfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x21cfec: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x21cfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cff0: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x21cff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x21cff4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x21cff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cff8: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x21cff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x21cffc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x21cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21d000: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x21d000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d004: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x21d004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x21d008: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x21d008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21d00c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x21d00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d010: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x21d010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x21d014: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x21d014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21d018: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x21d018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d01c: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x21d01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
    // 0x21d020: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x21d020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d024: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x21d024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x21d028: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x21d028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21d02c: 0xa203034f  sb          $v1, 0x34F($s0)
    ctx->pc = 0x21d02cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x21d030: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x21d030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21d034: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x21d034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    // 0x21d038: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21D038u;
    {
        const bool branch_taken_0x21d038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d038) {
            ctx->pc = 0x21D048u;
            goto label_21d048;
        }
    }
    ctx->pc = 0x21D040u;
label_21d040:
    // 0x21d040: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x21D040u;
    {
        const bool branch_taken_0x21d040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d040) {
            ctx->pc = 0x21D048u;
            goto label_21d048;
        }
    }
    ctx->pc = 0x21D048u;
label_21d048:
    // 0x21d048: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x21d048u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21d04c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21d04cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21d050: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21d050u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21d054: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21d054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21d058: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21d058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d05c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21d05cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d060: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21d060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d064: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x21d064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21d068: 0x3e00008  jr          $ra
    ctx->pc = 0x21D068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D070u;
}
