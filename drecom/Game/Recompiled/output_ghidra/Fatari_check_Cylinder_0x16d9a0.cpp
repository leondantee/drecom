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

// Function: Fatari_check_Cylinder
// Address: 0x16d9a0 - 0x16df0c
void Fatari_check_Cylinder_0x16d9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Fatari_check_Cylinder_0x16d9a0");
#endif

    switch (ctx->pc) {
        case 0x16d9f8u: goto label_16d9f8;
        case 0x16db40u: goto label_16db40;
        case 0x16db50u: goto label_16db50;
        case 0x16db60u: goto label_16db60;
        case 0x16db80u: goto label_16db80;
        case 0x16dbb8u: goto label_16dbb8;
        case 0x16dbf0u: goto label_16dbf0;
        case 0x16dc14u: goto label_16dc14;
        case 0x16dc3cu: goto label_16dc3c;
        case 0x16dc4cu: goto label_16dc4c;
        case 0x16dc78u: goto label_16dc78;
        case 0x16dc88u: goto label_16dc88;
        case 0x16dd60u: goto label_16dd60;
        case 0x16dd70u: goto label_16dd70;
        case 0x16dd90u: goto label_16dd90;
        case 0x16ddc8u: goto label_16ddc8;
        case 0x16de00u: goto label_16de00;
        case 0x16de24u: goto label_16de24;
        case 0x16de4cu: goto label_16de4c;
        case 0x16de5cu: goto label_16de5c;
        case 0x16de88u: goto label_16de88;
        case 0x16de98u: goto label_16de98;
        default: break;
    }

    ctx->pc = 0x16d9a0u;

    // 0x16d9a0: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x16d9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x16d9a4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x16d9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x16d9a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x16d9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x16d9ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16d9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x16d9b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16d9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x16d9b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16d9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16d9b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16d9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16d9bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16d9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16d9c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16d9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16d9c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16d9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16d9c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16d9cc: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x16d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
    // 0x16d9d0: 0xafa50268  sw          $a1, 0x268($sp)
    ctx->pc = 0x16d9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 5));
    // 0x16d9d4: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x16d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16d9d8: 0x8c63ffe0  lw          $v1, -0x20($v1)
    ctx->pc = 0x16d9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967264)));
    // 0x16d9dc: 0xafa30240  sw          $v1, 0x240($sp)
    ctx->pc = 0x16d9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 3));
    // 0x16d9e0: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x16d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16d9e4: 0x8c63ffe4  lw          $v1, -0x1C($v1)
    ctx->pc = 0x16d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967268)));
    // 0x16d9e8: 0xafa30244  sw          $v1, 0x244($sp)
    ctx->pc = 0x16d9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 3));
    // 0x16d9ec: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x16d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16d9f0: 0x8c63ffe8  lw          $v1, -0x18($v1)
    ctx->pc = 0x16d9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967272)));
    // 0x16d9f4: 0xafa30248  sw          $v1, 0x248($sp)
    ctx->pc = 0x16d9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
label_16d9f8:
    // 0x16d9f8: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x16d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16d9fc: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x16d9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16da00: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16da00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16da04: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16da04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16da08: 0x1460012b  bnez        $v1, . + 4 + (0x12B << 2)
    ctx->pc = 0x16DA08u;
    {
        const bool branch_taken_0x16da08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16da08) {
            ctx->pc = 0x16DEB8u;
            goto label_16deb8;
        }
    }
    ctx->pc = 0x16DA10u;
    // 0x16da10: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x16da10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16da14: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x16da14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16da18: 0x3223c  dsll32      $a0, $v1, 8
    ctx->pc = 0x16da18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 8));
    // 0x16da1c: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x16da1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x16da20: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16da20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16da24: 0x8c23ab28  lw          $v1, -0x54D8($at)
    ctx->pc = 0x16da24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47AB28u));
    // 0x16da28: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16da28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16da2c: 0x14600122  bnez        $v1, . + 4 + (0x122 << 2)
    ctx->pc = 0x16DA2Cu;
    {
        const bool branch_taken_0x16da2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16da2c) {
            ctx->pc = 0x16DEB8u;
            goto label_16deb8;
        }
    }
    ctx->pc = 0x16DA34u;
    // 0x16da34: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16da38: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x16da38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16da3c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16da3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16da40: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16da40u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16da44: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x16da44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x16da48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16da48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16da4c: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x16da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x16da50: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16da50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16da54: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x16da54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x16da58: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16da58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16da5c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16da5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16da60: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x16da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x16da64: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16da64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16da68: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x16da68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x16da6c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16da70: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x16da70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16da74: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16da74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16da78: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16da78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16da7c: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x16da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x16da80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16da80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16da84: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x16da84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x16da88: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16da88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16da8c: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x16da8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x16da90: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16da90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16da94: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16da94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16da98: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x16da98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x16da9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16daa0: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x16daa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x16daa4: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16daa8: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x16daa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x16daac: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16daacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dab0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16dab0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16dab4: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x16dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x16dab8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dabc: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x16dabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x16dac0: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dac4: 0x8442000e  lh          $v0, 0xE($v0)
    ctx->pc = 0x16dac4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x16dac8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16dac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dacc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16daccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16dad0: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x16dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x16dad4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dad8: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x16dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x16dadc: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dae0: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x16dae0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16dae4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16dae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dae8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16dae8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16daec: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x16daecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x16daf0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16daf4: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x16daf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x16daf8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dafc: 0x84420012  lh          $v0, 0x12($v0)
    ctx->pc = 0x16dafcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x16db00: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16db00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16db04: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16db04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16db08: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x16db08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x16db0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16db10: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x16db10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
    // 0x16db14: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16db14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16db18: 0x84420014  lh          $v0, 0x14($v0)
    ctx->pc = 0x16db18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x16db1c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16db1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16db20: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16db20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16db24: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x16db24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x16db28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16db28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16db2c: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x16db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
    // 0x16db30: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x16db30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x16db34: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x16db34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x16db38: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16DB38u;
    SET_GPR_U32(ctx, 31, 0x16DB40u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16DB40u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16DB40u) { return; }
    ctx->pc = 0x16DB40u;
label_16db40:
    // 0x16db40: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x16db40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x16db44: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x16db44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x16db48: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16DB48u;
    SET_GPR_U32(ctx, 31, 0x16DB50u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16DB50u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16DB50u) { return; }
    ctx->pc = 0x16DB50u;
label_16db50:
    // 0x16db50: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x16db50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x16db54: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x16db54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x16db58: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16DB58u;
    SET_GPR_U32(ctx, 31, 0x16DB60u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16DB60u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16DB60u) { return; }
    ctx->pc = 0x16DB60u;
label_16db60:
    // 0x16db60: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x16db60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x16db64: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16db64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16db68: 0x24455750  addiu       $a1, $v0, 0x5750
    ctx->pc = 0x16db68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22352));
    // 0x16db6c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16db70: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x16db70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16db74: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x16db74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16db78: 0xc059c84  jal         func_167210
    ctx->pc = 0x16DB78u;
    SET_GPR_U32(ctx, 31, 0x16DB80u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16DB78u, 0x16DB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB80u;
label_16db80:
    // 0x16db80: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16db80u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16db84: 0x12400048  beqz        $s2, . + 4 + (0x48 << 2)
    ctx->pc = 0x16DB84u;
    {
        const bool branch_taken_0x16db84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db84) {
            ctx->pc = 0x16DCA8u;
            goto label_16dca8;
        }
    }
    ctx->pc = 0x16DB8Cu;
    // 0x16db8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16db90: 0x1642000f  bne         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16DB90u;
    {
        const bool branch_taken_0x16db90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16db90) {
            ctx->pc = 0x16DBD0u;
            goto label_16dbd0;
        }
    }
    ctx->pc = 0x16DB98u;
    // 0x16db98: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16db98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16db9c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16dba0: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16dba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16dba4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16dba8: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16dba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16dbac: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x16dbacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16dbb0: 0xc059c84  jal         func_167210
    ctx->pc = 0x16DBB0u;
    SET_GPR_U32(ctx, 31, 0x16DBB8u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16DBB0u, 0x16DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DBB8u;
label_16dbb8:
    // 0x16dbb8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16dbb8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16dbbc: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x16dbbcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16dbc0: 0x12400039  beqz        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x16DBC0u;
    {
        const bool branch_taken_0x16dbc0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dbc0) {
            ctx->pc = 0x16DCA8u;
            goto label_16dca8;
        }
    }
    ctx->pc = 0x16DBC8u;
    // 0x16dbc8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x16DBC8u;
    {
        const bool branch_taken_0x16dbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dbc8) {
            ctx->pc = 0x16DC28u;
            goto label_16dc28;
        }
    }
    ctx->pc = 0x16DBD0u;
label_16dbd0:
    // 0x16dbd0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16dbd4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16dbd8: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16dbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16dbdc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16dbe0: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16dbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16dbe4: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x16dbe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16dbe8: 0xc059c84  jal         func_167210
    ctx->pc = 0x16DBE8u;
    SET_GPR_U32(ctx, 31, 0x16DBF0u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16DBE8u, 0x16DBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DBF0u;
label_16dbf0:
    // 0x16dbf0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16dbf0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16dbf4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16dbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16dbf8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16dbfc: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16dbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16dc00: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16dc04: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16dc04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16dc08: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x16dc08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x16dc0c: 0xc059c84  jal         func_167210
    ctx->pc = 0x16DC0Cu;
    SET_GPR_U32(ctx, 31, 0x16DC14u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16DC0Cu, 0x16DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC14u;
label_16dc14:
    // 0x16dc14: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x16dc14u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16dc18: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DC18u;
    {
        const bool branch_taken_0x16dc18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x16dc18) {
            ctx->pc = 0x16DC28u;
            goto label_16dc28;
        }
    }
    ctx->pc = 0x16DC20u;
    // 0x16dc20: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x16DC20u;
    {
        const bool branch_taken_0x16dc20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dc20) {
            ctx->pc = 0x16DCA8u;
            goto label_16dca8;
        }
    }
    ctx->pc = 0x16DC28u;
label_16dc28:
    // 0x16dc28: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x16dc28u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16dc2c: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x16dc2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16dc30: 0x7200f628  paddub      $fp, $s0, $zero
    ctx->pc = 0x16dc30u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16dc34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16DC34u;
    {
        const bool branch_taken_0x16dc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dc34) {
            ctx->pc = 0x16DC58u;
            goto label_16dc58;
        }
    }
    ctx->pc = 0x16DC3Cu;
label_16dc3c:
    // 0x16dc3c: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x16dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dc40: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16dc40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16dc44: 0xc05b7c4  jal         func_16DF10
    ctx->pc = 0x16DC44u;
    SET_GPR_U32(ctx, 31, 0x16DC4Cu);
    ctx->pc = 0x16DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DF10u, 0x16DC44u, 0x16DC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC4Cu;
label_16dc4c:
    // 0x16dc4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16dc4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16dc50: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x16dc50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x16dc54: 0x7200a628  paddub      $s4, $s0, $zero
    ctx->pc = 0x16dc54u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_16dc58:
    // 0x16dc58: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x16dc58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x16dc5c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16DC5Cu;
    {
        const bool branch_taken_0x16dc5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16dc5c) {
            ctx->pc = 0x16DC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16dc3c;
        }
    }
    ctx->pc = 0x16DC64u;
    // 0x16dc64: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x16dc64u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16dc68: 0x27b00160  addiu       $s0, $sp, 0x160
    ctx->pc = 0x16dc68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x16dc6c: 0xafb00254  sw          $s0, 0x254($sp)
    ctx->pc = 0x16dc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 16));
    // 0x16dc70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16DC70u;
    {
        const bool branch_taken_0x16dc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dc70) {
            ctx->pc = 0x16DC98u;
            goto label_16dc98;
        }
    }
    ctx->pc = 0x16DC78u;
label_16dc78:
    // 0x16dc78: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x16dc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dc7c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16dc7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16dc80: 0xc05b7c4  jal         func_16DF10
    ctx->pc = 0x16DC80u;
    SET_GPR_U32(ctx, 31, 0x16DC88u);
    ctx->pc = 0x16DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DF10u, 0x16DC80u, 0x16DC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC88u;
label_16dc88:
    // 0x16dc88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16dc88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16dc8c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x16dc8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x16dc90: 0x7200ae28  paddub      $s5, $s0, $zero
    ctx->pc = 0x16dc90u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16dc94: 0x0  nop
    ctx->pc = 0x16dc94u;
    // NOP
label_16dc98:
    // 0x16dc98: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x16dc98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x16dc9c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16DC9Cu;
    {
        const bool branch_taken_0x16dc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16dc9c) {
            ctx->pc = 0x16DC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16dc78;
        }
    }
    ctx->pc = 0x16DCA4u;
    // 0x16dca4: 0x0  nop
    ctx->pc = 0x16dca4u;
    // NOP
label_16dca8:
    // 0x16dca8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dcac: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x16dcacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16dcb0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16dcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dcb4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16dcb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16dcb8: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x16dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x16dcbc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dcc0: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x16dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x16dcc4: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dcc8: 0x84420012  lh          $v0, 0x12($v0)
    ctx->pc = 0x16dcc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x16dccc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16dcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dcd0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16dcd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16dcd4: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x16dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x16dcd8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dcdc: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x16dcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x16dce0: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dce4: 0x84420014  lh          $v0, 0x14($v0)
    ctx->pc = 0x16dce4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x16dce8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16dce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dcec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16dcecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16dcf0: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x16dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x16dcf4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dcf8: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x16dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x16dcfc: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dd00: 0x84420016  lh          $v0, 0x16($v0)
    ctx->pc = 0x16dd00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x16dd04: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16dd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dd08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16dd08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16dd0c: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x16dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x16dd10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dd14: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x16dd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x16dd18: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dd1c: 0x84420018  lh          $v0, 0x18($v0)
    ctx->pc = 0x16dd1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x16dd20: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16dd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dd24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16dd24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16dd28: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x16dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x16dd2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dd30: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x16dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
    // 0x16dd34: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dd38: 0x8442001a  lh          $v0, 0x1A($v0)
    ctx->pc = 0x16dd38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x16dd3c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16dd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dd40: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16dd40u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16dd44: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x16dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x16dd48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dd4c: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x16dd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
    // 0x16dd50: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x16dd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x16dd54: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x16dd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x16dd58: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16DD58u;
    SET_GPR_U32(ctx, 31, 0x16DD60u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16DD60u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16DD60u) { return; }
    ctx->pc = 0x16DD60u;
label_16dd60:
    // 0x16dd60: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x16dd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x16dd64: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x16dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x16dd68: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16DD68u;
    SET_GPR_U32(ctx, 31, 0x16DD70u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16DD70u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16DD70u) { return; }
    ctx->pc = 0x16DD70u;
label_16dd70:
    // 0x16dd70: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x16dd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x16dd74: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16dd78: 0x24455750  addiu       $a1, $v0, 0x5750
    ctx->pc = 0x16dd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22352));
    // 0x16dd7c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16dd80: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x16dd80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16dd84: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x16dd84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16dd88: 0xc059c84  jal         func_167210
    ctx->pc = 0x16DD88u;
    SET_GPR_U32(ctx, 31, 0x16DD90u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16DD88u, 0x16DD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD90u;
label_16dd90:
    // 0x16dd90: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16dd90u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16dd94: 0x12400048  beqz        $s2, . + 4 + (0x48 << 2)
    ctx->pc = 0x16DD94u;
    {
        const bool branch_taken_0x16dd94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dd94) {
            ctx->pc = 0x16DEB8u;
            goto label_16deb8;
        }
    }
    ctx->pc = 0x16DD9Cu;
    // 0x16dd9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dda0: 0x1642000f  bne         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16DDA0u;
    {
        const bool branch_taken_0x16dda0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16dda0) {
            ctx->pc = 0x16DDE0u;
            goto label_16dde0;
        }
    }
    ctx->pc = 0x16DDA8u;
    // 0x16dda8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16ddac: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16ddb0: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16ddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16ddb4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16ddb8: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16ddb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16ddbc: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x16ddbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16ddc0: 0xc059c84  jal         func_167210
    ctx->pc = 0x16DDC0u;
    SET_GPR_U32(ctx, 31, 0x16DDC8u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16DDC0u, 0x16DDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DDC8u;
label_16ddc8:
    // 0x16ddc8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16ddc8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16ddcc: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x16ddccu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16ddd0: 0x12400039  beqz        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x16DDD0u;
    {
        const bool branch_taken_0x16ddd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ddd0) {
            ctx->pc = 0x16DEB8u;
            goto label_16deb8;
        }
    }
    ctx->pc = 0x16DDD8u;
    // 0x16ddd8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x16DDD8u;
    {
        const bool branch_taken_0x16ddd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ddd8) {
            ctx->pc = 0x16DE38u;
            goto label_16de38;
        }
    }
    ctx->pc = 0x16DDE0u;
label_16dde0:
    // 0x16dde0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16dde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16dde4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16dde8: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16dde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16ddec: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16ddf0: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16ddf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16ddf4: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x16ddf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16ddf8: 0xc059c84  jal         func_167210
    ctx->pc = 0x16DDF8u;
    SET_GPR_U32(ctx, 31, 0x16DE00u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16DDF8u, 0x16DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DE00u;
label_16de00:
    // 0x16de00: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16de00u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16de04: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16de04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16de08: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16de08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16de0c: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16de0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16de10: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16de10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16de14: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16de14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16de18: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x16de18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x16de1c: 0xc059c84  jal         func_167210
    ctx->pc = 0x16DE1Cu;
    SET_GPR_U32(ctx, 31, 0x16DE24u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16DE1Cu, 0x16DE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DE24u;
label_16de24:
    // 0x16de24: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x16de24u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16de28: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DE28u;
    {
        const bool branch_taken_0x16de28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x16de28) {
            ctx->pc = 0x16DE38u;
            goto label_16de38;
        }
    }
    ctx->pc = 0x16DE30u;
    // 0x16de30: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x16DE30u;
    {
        const bool branch_taken_0x16de30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16de30) {
            ctx->pc = 0x16DEB8u;
            goto label_16deb8;
        }
    }
    ctx->pc = 0x16DE38u;
label_16de38:
    // 0x16de38: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x16de38u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16de3c: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x16de3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16de40: 0xafb00258  sw          $s0, 0x258($sp)
    ctx->pc = 0x16de40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 16));
    // 0x16de44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16DE44u;
    {
        const bool branch_taken_0x16de44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16de44) {
            ctx->pc = 0x16DE68u;
            goto label_16de68;
        }
    }
    ctx->pc = 0x16DE4Cu;
label_16de4c:
    // 0x16de4c: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x16de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16de50: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16de50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16de54: 0xc05b7c4  jal         func_16DF10
    ctx->pc = 0x16DE54u;
    SET_GPR_U32(ctx, 31, 0x16DE5Cu);
    ctx->pc = 0x16DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DF10u, 0x16DE54u, 0x16DE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DE5Cu;
label_16de5c:
    // 0x16de5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16de5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16de60: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x16de60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x16de64: 0x7200b628  paddub      $s6, $s0, $zero
    ctx->pc = 0x16de64u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_16de68:
    // 0x16de68: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x16de68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x16de6c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16DE6Cu;
    {
        const bool branch_taken_0x16de6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16de6c) {
            ctx->pc = 0x16DE4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16de4c;
        }
    }
    ctx->pc = 0x16DE74u;
    // 0x16de74: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x16de74u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16de78: 0x27b00160  addiu       $s0, $sp, 0x160
    ctx->pc = 0x16de78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x16de7c: 0xafb0025c  sw          $s0, 0x25C($sp)
    ctx->pc = 0x16de7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 16));
    // 0x16de80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16DE80u;
    {
        const bool branch_taken_0x16de80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16de80) {
            ctx->pc = 0x16DEA8u;
            goto label_16dea8;
        }
    }
    ctx->pc = 0x16DE88u;
label_16de88:
    // 0x16de88: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x16de88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16de8c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16de8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16de90: 0xc05b7c4  jal         func_16DF10
    ctx->pc = 0x16DE90u;
    SET_GPR_U32(ctx, 31, 0x16DE98u);
    ctx->pc = 0x16DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DF10u, 0x16DE90u, 0x16DE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DE98u;
label_16de98:
    // 0x16de98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16de98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16de9c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x16de9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x16dea0: 0x7200be28  paddub      $s7, $s0, $zero
    ctx->pc = 0x16dea0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16dea4: 0x0  nop
    ctx->pc = 0x16dea4u;
    // NOP
label_16dea8:
    // 0x16dea8: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x16dea8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x16deac: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x16DEACu;
    {
        const bool branch_taken_0x16deac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16deac) {
            ctx->pc = 0x16DE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16de88;
        }
    }
    ctx->pc = 0x16DEB4u;
    // 0x16deb4: 0x0  nop
    ctx->pc = 0x16deb4u;
    // NOP
label_16deb8:
    // 0x16deb8: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x16deb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16debc: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x16debcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x16dec0: 0xafa30260  sw          $v1, 0x260($sp)
    ctx->pc = 0x16dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
    // 0x16dec4: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x16dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x16dec8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16decc: 0xafa30268  sw          $v1, 0x268($sp)
    ctx->pc = 0x16deccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
    // 0x16ded0: 0x1460fec9  bnez        $v1, . + 4 + (-0x137 << 2)
    ctx->pc = 0x16DED0u;
    {
        const bool branch_taken_0x16ded0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ded0) {
            ctx->pc = 0x16D9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d9f8;
        }
    }
    ctx->pc = 0x16DED8u;
    // 0x16ded8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x16ded8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16dedc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x16dedcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16dee0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16dee0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16dee4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16dee4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16dee8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16dee8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16deec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16deecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16def0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16def0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16def4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16def4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16def8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16def8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16defc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16defcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16df00: 0x27bd0270  addiu       $sp, $sp, 0x270
    ctx->pc = 0x16df00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x16df04: 0x3e00008  jr          $ra
    ctx->pc = 0x16DF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DF0Cu;
}
