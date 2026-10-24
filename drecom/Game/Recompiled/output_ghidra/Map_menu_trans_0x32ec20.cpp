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

// Function: Map_menu_trans
// Address: 0x32ec20 - 0x32fad4
void Map_menu_trans_0x32ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Map_menu_trans_0x32ec20");
#endif

    switch (ctx->pc) {
        case 0x32ed14u: goto label_32ed14;
        case 0x32ee10u: goto label_32ee10;
        case 0x32ee3cu: goto label_32ee3c;
        case 0x32f0a4u: goto label_32f0a4;
        case 0x32f124u: goto label_32f124;
        case 0x32f1ccu: goto label_32f1cc;
        case 0x32f2ecu: goto label_32f2ec;
        case 0x32f318u: goto label_32f318;
        case 0x32f4ecu: goto label_32f4ec;
        case 0x32f56cu: goto label_32f56c;
        case 0x32f59cu: goto label_32f59c;
        case 0x32f610u: goto label_32f610;
        case 0x32f63cu: goto label_32f63c;
        case 0x32f774u: goto label_32f774;
        case 0x32f7f8u: goto label_32f7f8;
        case 0x32f860u: goto label_32f860;
        case 0x32f940u: goto label_32f940;
        case 0x32f9a8u: goto label_32f9a8;
        case 0x32fa34u: goto label_32fa34;
        case 0x32fa68u: goto label_32fa68;
        case 0x32fa98u: goto label_32fa98;
        default: break;
    }

    ctx->pc = 0x32ec20u;

    // 0x32ec20: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x32ec20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x32ec24: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x32ec24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x32ec28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x32ec28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x32ec2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x32ec2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x32ec30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x32ec30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x32ec34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32ec34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x32ec38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32ec38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32ec3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32ec3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32ec40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32ec40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32ec44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32ec44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32ec48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32ec48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32ec4c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x32ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x32ec50: 0x24466150  addiu       $a2, $v0, 0x6150
    ctx->pc = 0x32ec50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x32ec54: 0x70c0be28  paddub      $s7, $a2, $zero
    ctx->pc = 0x32ec54u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x32ec58: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x32ec58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x32ec5c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x32ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x32ec60: 0x2442ec20  addiu       $v0, $v0, -0x13E0
    ctx->pc = 0x32ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962208));
    // 0x32ec64: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x32ec64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ec68: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x32ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x32ec6c: 0x2466f1a0  addiu       $a2, $v1, -0xE60
    ctx->pc = 0x32ec6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963616));
    // 0x32ec70: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x32ec70u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x32ec74: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x32ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x32ec78: 0x24669680  addiu       $a2, $v1, -0x6980
    ctx->pc = 0x32ec78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940288));
    // 0x32ec7c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x32ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x32ec80: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x32ec80u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3A9680u));
    // 0x32ec84: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x32ec84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x32ec88: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x32ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x32ec8c: 0x2447f3a0  addiu       $a3, $v0, -0xC60
    ctx->pc = 0x32ec8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964128));
    // 0x32ec90: 0xafa700cc  sw          $a3, 0xCC($sp)
    ctx->pc = 0x32ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 7));
    // 0x32ec94: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ec94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ec98: 0x8c26ec10  lw          $a2, -0x13F0($at)
    ctx->pc = 0x32ec98u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x88EC10u));
    // 0x32ec9c: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x32ec9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x32eca0: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x32eca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x32eca4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x32eca4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32eca8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x32eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x32ecac: 0x2462a640  addiu       $v0, $v1, -0x59C0
    ctx->pc = 0x32ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944320));
    // 0x32ecb0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x32ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x32ecb4: 0x80420009  lb          $v0, 0x9($v0)
    ctx->pc = 0x32ecb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x32ecb8: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x32ecb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32ecbc: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x32ecbcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x32ecc0: 0xafa600c4  sw          $a2, 0xC4($sp)
    ctx->pc = 0x32ecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 6));
    // 0x32ecc4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ecc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ecc8: 0x8c22ec10  lw          $v0, -0x13F0($at)
    ctx->pc = 0x32ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x88EC10u));
    // 0x32eccc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x32ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32ecd0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32ecd4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32ecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32ecd8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32ecdc: 0x2442a640  addiu       $v0, $v0, -0x59C0
    ctx->pc = 0x32ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944320));
    // 0x32ece0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x32ece0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32ece4: 0x80620008  lb          $v0, 0x8($v1)
    ctx->pc = 0x32ece4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x32ece8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32ece8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32ecec: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32ececu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32ecf0: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x32ecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x32ecf4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x32ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x32ecf8: 0x24629690  addiu       $v0, $v1, -0x6970
    ctx->pc = 0x32ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940304));
    // 0x32ecfc: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x32ecfcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ed00: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x32ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x32ed04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32ed08: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x32ed08u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ed0c: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x32ED0Cu;
    {
        const bool branch_taken_0x32ed0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ed0c) {
            ctx->pc = 0x32F1D8u;
            goto label_32f1d8;
        }
    }
    ctx->pc = 0x32ED14u;
label_32ed14:
    // 0x32ed14: 0x2aa10005  slti        $at, $s5, 0x5
    ctx->pc = 0x32ed14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x32ed18: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x32ED18u;
    {
        const bool branch_taken_0x32ed18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ed18) {
            ctx->pc = 0x32ED50u;
            goto label_32ed50;
        }
    }
    ctx->pc = 0x32ED20u;
    // 0x32ed20: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ed20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ed24: 0x8c22ec10  lw          $v0, -0x13F0($at)
    ctx->pc = 0x32ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x88EC10u));
    // 0x32ed28: 0x24430005  addiu       $v1, $v0, 0x5
    ctx->pc = 0x32ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x32ed2c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32ed30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32ed34: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32ed38: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32ed3c: 0x24549510  addiu       $s4, $v0, -0x6AF0
    ctx->pc = 0x32ed3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939920));
    // 0x32ed40: 0x283b021  addu        $s6, $s4, $v1
    ctx->pc = 0x32ed40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x32ed44: 0x72c08e28  paddub      $s1, $s6, $zero
    ctx->pc = 0x32ed44u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x32ed48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32ED48u;
    {
        const bool branch_taken_0x32ed48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ed48) {
            ctx->pc = 0x32ED70u;
            goto label_32ed70;
        }
    }
    ctx->pc = 0x32ED50u;
label_32ed50:
    // 0x32ed50: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x32ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x32ed54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32ed58: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x32ed58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32ed5c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x32ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x32ed60: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32ed64: 0x245e9510  addiu       $fp, $v0, -0x6AF0
    ctx->pc = 0x32ed64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939920));
    // 0x32ed68: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x32ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x32ed6c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x32ed6cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_32ed70:
    // 0x32ed70: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x32ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32ed74: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32ed74u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ed78: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x32ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x32ed7c: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x32ed7cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32ed80: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x32ed80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32ed84: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32ed88: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x32ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32ed8c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x32ed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x32ed90: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x32ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32ed94: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x32ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32ed98: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x32ed98u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32ed9c: 0xafa600bc  sw          $a2, 0xBC($sp)
    ctx->pc = 0x32ed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
    // 0x32eda0: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x32eda0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32eda4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x32eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32eda8: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x32eda8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32edac: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x32edacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x32edb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x32edb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32edb4: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x32edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x32edb8: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32edb8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32edbc: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x32edbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x32edc0: 0x8fb600bc  lw          $s6, 0xBC($sp)
    ctx->pc = 0x32edc0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x32edc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32edc8: 0x161043  sra         $v0, $s6, 1
    ctx->pc = 0x32edc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 22), 1));
    // 0x32edcc: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x32edccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x32edd0: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x32edd0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32edd4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x32edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32edd8: 0x282f021  addu        $fp, $s4, $v0
    ctx->pc = 0x32edd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x32eddc: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x32eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x32ede0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x32ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x32ede4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x32ede4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x32ede8: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x32ede8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32edec: 0x0  nop
    ctx->pc = 0x32edecu;
    // NOP
    // 0x32edf0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32edf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32edf4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32edf8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32edf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32edfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32edfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ee00: 0x0  nop
    ctx->pc = 0x32ee00u;
    // NOP
    // 0x32ee04: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32ee04u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32ee08: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32EE08u;
    SET_GPR_U32(ctx, 31, 0x32EE10u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32EE08u, 0x32EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EE10u;
label_32ee10:
    // 0x32ee10: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32ee10u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ee14: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x32ee14u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ee18: 0x0  nop
    ctx->pc = 0x32ee18u;
    // NOP
    // 0x32ee1c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32ee1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32ee20: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32ee24: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32ee24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32ee28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32ee28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ee2c: 0x0  nop
    ctx->pc = 0x32ee2cu;
    // NOP
    // 0x32ee30: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32ee30u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32ee34: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32EE34u;
    SET_GPR_U32(ctx, 31, 0x32EE3Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32EE34u, 0x32EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EE3Cu;
label_32ee3c:
    // 0x32ee3c: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x32ee3cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ee40: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x32ee44: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32ee44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x32ee48: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x32ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x32ee4c: 0x34642b16  ori         $a0, $v1, 0x2B16
    ctx->pc = 0x32ee4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x32ee50: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x32ee50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x32ee54: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x32ee54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x32ee58: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32ee58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32ee5c: 0x34820040  ori         $v0, $a0, 0x40
    ctx->pc = 0x32ee5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x32ee60: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32ee64: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32ee68: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x32ee68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32ee6c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x32ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32ee70: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x32ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32ee74: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x32ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32ee78: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x32ee78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32ee7c: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x32ee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x32ee80: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32ee80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32ee84: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32ee88: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x32ee88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32ee8c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x32ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32ee90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32ee94: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x32ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32ee98: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x32ee98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x32ee9c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x32ee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32eea0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x32eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x32eea4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32eea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32eea8: 0x8c23ec18  lw          $v1, -0x13E8($at)
    ctx->pc = 0x32eea8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x88EC18u));
    // 0x32eeac: 0x16a3000f  bne         $s5, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x32EEACu;
    {
        const bool branch_taken_0x32eeac = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x32eeac) {
            ctx->pc = 0x32EEECu;
            goto label_32eeec;
        }
    }
    ctx->pc = 0x32EEB4u;
    // 0x32eeb4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x32eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32eeb8: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x32eeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32eebc: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x32eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32eec0: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x32eec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32eec4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x32eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32eec8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32eec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32eecc: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x32eeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x32eed0: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x32eed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32eed4: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x32eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x32eed8: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x32eed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32eedc: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x32eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32eee0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32eee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32eee4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x32EEE4u;
    {
        const bool branch_taken_0x32eee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eee4) {
            ctx->pc = 0x32EF80u;
            goto label_32ef80;
        }
    }
    ctx->pc = 0x32EEECu;
label_32eeec:
    // 0x32eeec: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x32eeecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32eef0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x32eef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32eef4: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x32eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x32eef8: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x32eef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x32eefc: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x32eefcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32ef00: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x32ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x32ef04: 0x0  nop
    ctx->pc = 0x32ef04u;
    // NOP
    // 0x32ef08: 0x1010  mfhi        $v0
    ctx->pc = 0x32ef08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32ef0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32ef10: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x32ef10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32ef14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32ef18: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x32ef18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x32ef1c: 0x34c35556  ori         $v1, $a2, 0x5556
    ctx->pc = 0x32ef1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x32ef20: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x32ef20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32ef24: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x32ef24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x32ef28: 0x0  nop
    ctx->pc = 0x32ef28u;
    // NOP
    // 0x32ef2c: 0x1810  mfhi        $v1
    ctx->pc = 0x32ef2cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32ef30: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x32ef30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32ef34: 0x53200  sll         $a2, $a1, 8
    ctx->pc = 0x32ef34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x32ef38: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32ef38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x32ef3c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x32ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32ef40: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x32ef40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32ef44: 0x3c055555  lui         $a1, 0x5555
    ctx->pc = 0x32ef44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
    // 0x32ef48: 0x34a35556  ori         $v1, $a1, 0x5556
    ctx->pc = 0x32ef48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21846);
    // 0x32ef4c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x32ef4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32ef50: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x32ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x32ef54: 0x0  nop
    ctx->pc = 0x32ef54u;
    // NOP
    // 0x32ef58: 0x2010  mfhi        $a0
    ctx->pc = 0x32ef58u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x32ef5c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32ef60: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x32ef60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32ef64: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x32ef64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32ef68: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x32ef68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32ef6c: 0x72600  sll         $a0, $a3, 24
    ctx->pc = 0x32ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x32ef70: 0x851825  or          $v1, $a0, $a1
    ctx->pc = 0x32ef70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x32ef74: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x32ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32ef78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32ef78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32ef7c: 0x0  nop
    ctx->pc = 0x32ef7cu;
    // NOP
label_32ef80:
    // 0x32ef80: 0x8ee35dc0  lw          $v1, 0x5DC0($s7)
    ctx->pc = 0x32ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24000)));
    // 0x32ef84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ef88: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x32EF88u;
    {
        const bool branch_taken_0x32ef88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32ef88) {
            ctx->pc = 0x32F020u;
            goto label_32f020;
        }
    }
    ctx->pc = 0x32EF90u;
    // 0x32ef90: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x32ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32ef94: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x32ef94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32ef98: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x32ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x32ef9c: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x32ef9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x32efa0: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x32efa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32efa4: 0x23fc2  srl         $a3, $v0, 31
    ctx->pc = 0x32efa4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x32efa8: 0x0  nop
    ctx->pc = 0x32efa8u;
    // NOP
    // 0x32efac: 0x2010  mfhi        $a0
    ctx->pc = 0x32efacu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x32efb0: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x32efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x32efb4: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x32efb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32efb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32efbc: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x32efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x32efc0: 0x34645556  ori         $a0, $v1, 0x5556
    ctx->pc = 0x32efc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x32efc4: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x32efc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32efc8: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x32efc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x32efcc: 0x0  nop
    ctx->pc = 0x32efccu;
    // NOP
    // 0x32efd0: 0x1810  mfhi        $v1
    ctx->pc = 0x32efd0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32efd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32efd8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x32efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32efdc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32efdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32efe0: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x32efe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32efe4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32efe8: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x32efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x32efec: 0x34445556  ori         $a0, $v0, 0x5556
    ctx->pc = 0x32efecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x32eff0: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x32eff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32eff4: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x32eff4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x32eff8: 0x0  nop
    ctx->pc = 0x32eff8u;
    // NOP
    // 0x32effc: 0x1010  mfhi        $v0
    ctx->pc = 0x32effcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32f000: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x32f000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x32f004: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x32f004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x32f008: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32f008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f00c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x32f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32f010: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x32f010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x32f014: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x32f014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x32f018: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x32f018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32f01c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f01cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_32f020:
    // 0x32f020: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x32f020u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x32f024: 0x24827000  addiu       $v0, $a0, 0x7000
    ctx->pc = 0x32f024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x32f028: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x32f028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32f02c: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x32f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x32f030: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32f030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32f034: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32f034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32f038: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x32f038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32f03c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x32f03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x32f040: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x32f040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x32f044: 0x3402fffa  ori         $v0, $zero, 0xFFFA
    ctx->pc = 0x32f044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x32f048: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x32f048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x32f04c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32f04cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32f050: 0x1e2900  sll         $a1, $fp, 4
    ctx->pc = 0x32f050u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x32f054: 0x24a27000  addiu       $v0, $a1, 0x7000
    ctx->pc = 0x32f054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    // 0x32f058: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x32f058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32f05c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x32f05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x32f060: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x32f060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x32f064: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x32f064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32f068: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x32f068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x32f06c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32f06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32f070: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x32f070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x32f074: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32f078: 0x3403fffa  ori         $v1, $zero, 0xFFFA
    ctx->pc = 0x32f078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x32f07c: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x32f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x32f080: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32f084: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x32f084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x32f088: 0x2442e640  addiu       $v0, $v0, -0x19C0
    ctx->pc = 0x32f088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960704));
    // 0x32f08c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x32f08cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x32f090: 0x26f4001c  addiu       $s4, $s7, 0x1C
    ctx->pc = 0x32f090u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x32f094: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x32f094u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x32f098: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32f098u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32f09c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32F09Cu;
    SET_GPR_U32(ctx, 31, 0x32F0A4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32F09Cu, 0x32F0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F0A4u;
label_32f0a4:
    // 0x32f0a4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x32f0a8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x32f0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x32f0ac: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32f0b0: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x32f0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x32f0b4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x32f0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x32f0b8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32f0bc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x32f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32f0c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32f0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f0c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32f0c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32f0c8: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x32f0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x32f0cc: 0x3454000a  ori         $s4, $v0, 0xA
    ctx->pc = 0x32f0ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x32f0d0: 0x8e36000c  lw          $s6, 0xC($s1)
    ctx->pc = 0x32f0d0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32f0d4: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x32f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x32f0d8: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x32f0d8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f0dc: 0x1ef03f  dsra32      $fp, $fp, 0
    ctx->pc = 0x32f0dcu;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 0));
    // 0x32f0e0: 0x1e13b8  dsll        $v0, $fp, 14
    ctx->pc = 0x32f0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << 14);
    // 0x32f0e4: 0x2821825  or          $v1, $s4, $v0
    ctx->pc = 0x32f0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x32f0e8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x32f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32f0ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32f0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f0f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32f0f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32f0f4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x32f0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x32f0f8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32f0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f0fc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x32f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32f100: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32f100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f104: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32f104u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32f108: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x32f108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x32f10c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f110: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x32f110u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x32f114: 0x26e4001c  addiu       $a0, $s7, 0x1C
    ctx->pc = 0x32f114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x32f118: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32f118u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32f11c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32F11Cu;
    SET_GPR_U32(ctx, 31, 0x32F124u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32F11Cu, 0x32F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F124u;
label_32f124:
    // 0x32f124: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x32f124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x32f128: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x32f128u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f12c: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x32f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32f130: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x32f130u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f134: 0x26630008  addiu       $v1, $s3, 0x8
    ctx->pc = 0x32f134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x32f138: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x32f138u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32f13c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32f13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32f140: 0x8c22ec18  lw          $v0, -0x13E8($at)
    ctx->pc = 0x32f140u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x88EC18u));
    // 0x32f144: 0x16a20005  bne         $s5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32F144u;
    {
        const bool branch_taken_0x32f144 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x32f144) {
            ctx->pc = 0x32F15Cu;
            goto label_32f15c;
        }
    }
    ctx->pc = 0x32F14Cu;
    // 0x32f14c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32f150: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x32f150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x32f154: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32F154u;
    {
        const bool branch_taken_0x32f154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f154) {
            ctx->pc = 0x32F168u;
            goto label_32f168;
        }
    }
    ctx->pc = 0x32F15Cu;
label_32f15c:
    // 0x32f15c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x32f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x32f160: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x32f160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x32f164: 0x0  nop
    ctx->pc = 0x32f164u;
    // NOP
label_32f168:
    // 0x32f168: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x32f168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x32f16c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x32f16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x32f170: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x32f170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x32f174: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32f174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x32f178: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x32f178u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x32f17c: 0x34c30808  ori         $v1, $a2, 0x808
    ctx->pc = 0x32f17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2056);
    // 0x32f180: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32f180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32f184: 0x3c061e00  lui         $a2, 0x1E00
    ctx->pc = 0x32f184u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7680 << 16));
    // 0x32f188: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x32f188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x32f18c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f190: 0x34422600  ori         $v0, $v0, 0x2600
    ctx->pc = 0x32f190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9728);
    // 0x32f194: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x32f194u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32f198: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x32f198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x32f19c: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x32f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x32f1a0: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x32f1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x32f1a4: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x32f1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x32f1a8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x32f1a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x32f1ac: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x32f1acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f1b0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x32f1b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x32f1b4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x32f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x32f1b8: 0x24622058  addiu       $v0, $v1, 0x2058
    ctx->pc = 0x32f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8280));
    // 0x32f1bc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32f1bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f1c0: 0x72a03628  paddub      $a2, $s5, $zero
    ctx->pc = 0x32f1c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x32f1c4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32F1C4u;
    SET_GPR_U32(ctx, 31, 0x32F1CCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32F1C4u, 0x32F1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F1CCu;
label_32f1cc:
    // 0x32f1cc: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x32f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x32f1d0: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x32f1d0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f1d4: 0x0  nop
    ctx->pc = 0x32f1d4u;
    // NOP
label_32f1d8:
    // 0x32f1d8: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x32f1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x32f1dc: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x32f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x32f1e0: 0x55082a  slt         $at, $v0, $s5
    ctx->pc = 0x32f1e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x32f1e4: 0x1420fecb  bnez        $at, . + 4 + (-0x135 << 2)
    ctx->pc = 0x32F1E4u;
    {
        const bool branch_taken_0x32f1e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f1e4) {
            ctx->pc = 0x32ED14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32ed14;
        }
    }
    ctx->pc = 0x32F1ECu;
    // 0x32f1ec: 0x8ee35dc8  lw          $v1, 0x5DC8($s7)
    ctx->pc = 0x32f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24008)));
    // 0x32f1f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f1f4: 0x146200df  bne         $v1, $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x32F1F4u;
    {
        const bool branch_taken_0x32f1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32f1f4) {
            ctx->pc = 0x32F574u;
            goto label_32f574;
        }
    }
    ctx->pc = 0x32F1FCu;
    // 0x32f1fc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x32f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x32f200: 0x24626774  addiu       $v0, $v1, 0x6774
    ctx->pc = 0x32f200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 26484));
    // 0x32f204: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x32f204u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f208: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x32f208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x32f20c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x32f20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32f210: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32f210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32f214: 0x8c22ec18  lw          $v0, -0x13E8($at)
    ctx->pc = 0x32f214u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x88EC18u));
    // 0x32f218: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x32f218u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32f21c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x32f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32f220: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32f220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32f224: 0x24429690  addiu       $v0, $v0, -0x6970
    ctx->pc = 0x32f224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940304));
    // 0x32f228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32f228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32f22c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x32f22cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f230: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32f230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32f234: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32f234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32f238: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32f238u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32f23c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x32f23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x32f240: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x32f240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32f244: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x32f244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32f248: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32f248u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32f24c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x32f24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x32f250: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x32f250u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32f254: 0x8e760004  lw          $s6, 0x4($s3)
    ctx->pc = 0x32f254u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x32f258: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x32f258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32f25c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32f260: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x32f260u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x32f264: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x32f264u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32f268: 0x70c01628  paddub      $v0, $a2, $zero
    ctx->pc = 0x32f268u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x32f26c: 0x282f021  addu        $fp, $s4, $v0
    ctx->pc = 0x32f26cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x32f270: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x32f270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x32f274: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32f274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32f278: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x32f278u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x32f27c: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x32f27cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32f280: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x32f280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x32f284: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x32f284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x32f288: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x32f288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32f28c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32f290: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x32f290u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x32f294: 0x70c01628  paddub      $v0, $a2, $zero
    ctx->pc = 0x32f294u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x32f298: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x32f298u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x32f29c: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x32f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x32f2a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32f2a4: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x32f2a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x32f2a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x32f2a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f2ac: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x32f2acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32f2b0: 0x2c6b023  subu        $s6, $s6, $a2
    ctx->pc = 0x32f2b0u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x32f2b4: 0x2683ffa6  addiu       $v1, $s4, -0x5A
    ctx->pc = 0x32f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967206));
    // 0x32f2b8: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x32f2b8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32f2bc: 0x27c2ffa6  addiu       $v0, $fp, -0x5A
    ctx->pc = 0x32f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967206));
    // 0x32f2c0: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x32f2c0u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f2c4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x32f2c4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f2c8: 0x0  nop
    ctx->pc = 0x32f2c8u;
    // NOP
    // 0x32f2cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32f2ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32f2d0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32f2d4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32f2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32f2d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f2dc: 0x0  nop
    ctx->pc = 0x32f2dcu;
    // NOP
    // 0x32f2e0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32f2e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32f2e4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32F2E4u;
    SET_GPR_U32(ctx, 31, 0x32F2ECu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32F2E4u, 0x32F2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F2ECu;
label_32f2ec:
    // 0x32f2ec: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32f2ecu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f2f0: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x32f2f0u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f2f4: 0x0  nop
    ctx->pc = 0x32f2f4u;
    // NOP
    // 0x32f2f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32f2f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32f2fc: 0x3c1e3f4c  lui         $fp, 0x3F4C
    ctx->pc = 0x32f2fcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)16204 << 16));
    // 0x32f300: 0x37c2cccd  ori         $v0, $fp, 0xCCCD
    ctx->pc = 0x32f300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)52429);
    // 0x32f304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f308: 0x0  nop
    ctx->pc = 0x32f308u;
    // NOP
    // 0x32f30c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32f30cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32f310: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32F310u;
    SET_GPR_U32(ctx, 31, 0x32F318u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32F310u, 0x32F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F318u;
label_32f318:
    // 0x32f318: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x32f318u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f31c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32f320: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32f320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32f324: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x32f324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x32f328: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x32f328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x32f32c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32f330: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x32f330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x32f334: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32f334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32f338: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x32f338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x32f33c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32f33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32f340: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x32f340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32f344: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32f344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32f348: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x32f348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32f34c: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x32f34cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32f350: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x32f350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32f354: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x32f354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32f358: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x32f358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x32f35c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x32f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32f360: 0x32600  sll         $a0, $v1, 24
    ctx->pc = 0x32f360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32f364: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x32f364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x32f368: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x32f368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32f36c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32f370: 0x8ee35dc0  lw          $v1, 0x5DC0($s7)
    ctx->pc = 0x32f370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24000)));
    // 0x32f374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f378: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x32F378u;
    {
        const bool branch_taken_0x32f378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32f378) {
            ctx->pc = 0x32F410u;
            goto label_32f410;
        }
    }
    ctx->pc = 0x32F380u;
    // 0x32f380: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x32f380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32f384: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32f384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32f388: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x32f388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x32f38c: 0x34445556  ori         $a0, $v0, 0x5556
    ctx->pc = 0x32f38cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x32f390: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x32f390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32f394: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x32f394u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x32f398: 0x0  nop
    ctx->pc = 0x32f398u;
    // NOP
    // 0x32f39c: 0x1010  mfhi        $v0
    ctx->pc = 0x32f39cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32f3a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32f3a4: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x32f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32f3a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32f3ac: 0x3c055555  lui         $a1, 0x5555
    ctx->pc = 0x32f3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
    // 0x32f3b0: 0x34a35556  ori         $v1, $a1, 0x5556
    ctx->pc = 0x32f3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21846);
    // 0x32f3b4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x32f3b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32f3b8: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x32f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x32f3bc: 0x0  nop
    ctx->pc = 0x32f3bcu;
    // NOP
    // 0x32f3c0: 0x2010  mfhi        $a0
    ctx->pc = 0x32f3c0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x32f3c4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32f3c8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x32f3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32f3cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f3d0: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x32f3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32f3d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32f3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32f3d8: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x32f3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x32f3dc: 0x34645556  ori         $a0, $v1, 0x5556
    ctx->pc = 0x32f3dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x32f3e0: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x32f3e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32f3e4: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x32f3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x32f3e8: 0x0  nop
    ctx->pc = 0x32f3e8u;
    // NOP
    // 0x32f3ec: 0x2010  mfhi        $a0
    ctx->pc = 0x32f3ecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x32f3f0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x32f3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x32f3f4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x32f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32f3f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32f3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32f3fc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x32f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32f400: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x32f400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x32f404: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32f404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f408: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x32f408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32f40c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32f40cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_32f410:
    // 0x32f410: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32f410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32f414: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x32f414u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32f418: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x32f418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32f41c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x32f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x32f420: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x32f420u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32f424: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x32f424u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x32f428: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x32f428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x32f42c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x32f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x32f430: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x32f430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32f434: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x32f434u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x32f438: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x32f438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32f43c: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x32f43cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32f440: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x32f440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x32f444: 0xc32025  or          $a0, $a2, $v1
    ctx->pc = 0x32f444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x32f448: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x32f448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32f44c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32f44cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32f450: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x32f450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x32f454: 0x24657000  addiu       $a1, $v1, 0x7000
    ctx->pc = 0x32f454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32f458: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x32f458u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x32f45c: 0x1620c0  sll         $a0, $s6, 3
    ctx->pc = 0x32f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x32f460: 0x24837900  addiu       $v1, $a0, 0x7900
    ctx->pc = 0x32f460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x32f464: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x32f464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32f468: 0xe21825  or          $v1, $a3, $v0
    ctx->pc = 0x32f468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x32f46c: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x32f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x32f470: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32f474: 0x3402fffa  ori         $v0, $zero, 0xFFFA
    ctx->pc = 0x32f474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x32f478: 0x2607001c  addiu       $a3, $s0, 0x1C
    ctx->pc = 0x32f478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x32f47c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x32f47cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x32f480: 0x1e1900  sll         $v1, $fp, 4
    ctx->pc = 0x32f480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x32f484: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x32f484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32f488: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x32f488u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32f48c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x32f48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x32f490: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x32f490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x32f494: 0x24457900  addiu       $a1, $v0, 0x7900
    ctx->pc = 0x32f494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32f498: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x32f498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x32f49c: 0xe32025  or          $a0, $a3, $v1
    ctx->pc = 0x32f49cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x32f4a0: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x32f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x32f4a4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32f4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32f4a8: 0x3404fffa  ori         $a0, $zero, 0xFFFA
    ctx->pc = 0x32f4a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x32f4ac: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x32f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x32f4b0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32f4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32f4b4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x32f4b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f4b8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32f4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32f4bc: 0x246300a3  addiu       $v1, $v1, 0xA3
    ctx->pc = 0x32f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 163));
    // 0x32f4c0: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x32f4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32f4c4: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x32f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x32f4c8: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x32f4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32f4cc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x32f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x32f4d0: 0x2445cca0  addiu       $a1, $v0, -0x3360
    ctx->pc = 0x32f4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x32f4d4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x32f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x32f4d8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x32f4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x32f4dc: 0x26e4001c  addiu       $a0, $s7, 0x1C
    ctx->pc = 0x32f4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x32f4e0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32f4e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32f4e4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32F4E4u;
    SET_GPR_U32(ctx, 31, 0x32F4ECu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32F4E4u, 0x32F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F4ECu;
label_32f4ec:
    // 0x32f4ec: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x32f4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x32f4f0: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x32f4f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x32f4f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32f4f8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32f4fc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x32f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x32f500: 0x34621009  ori         $v0, $v1, 0x1009
    ctx->pc = 0x32f500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x32f504: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x32f504u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x32f508: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32f508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32f50c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x32f50cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f510: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x32f510u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x32f514: 0x41138  dsll        $v0, $a0, 4
    ctx->pc = 0x32f514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 4);
    // 0x32f518: 0x3443000a  ori         $v1, $v0, 0xA
    ctx->pc = 0x32f518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x32f51c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32f520: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32f520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f524: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32f524u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32f528: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x32f528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x32f52c: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x32f52cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32f530: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x32f530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32f534: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x32f534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x32f538: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32f538u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32f53c: 0x21e38  dsll        $v1, $v0, 24
    ctx->pc = 0x32f53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 24);
    // 0x32f540: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x32f540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x32f544: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x32f544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32f548: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32f548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f54c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x32f54cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x32f550: 0x320bc  dsll32      $a0, $v1, 2
    ctx->pc = 0x32f550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 2));
    // 0x32f554: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x32f554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x32f558: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x32f558u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x32f55c: 0x26e4001c  addiu       $a0, $s7, 0x1C
    ctx->pc = 0x32f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x32f560: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32f560u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32f564: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32F564u;
    SET_GPR_U32(ctx, 31, 0x32F56Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32F564u, 0x32F56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F56Cu;
label_32f56c:
    // 0x32f56c: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x32f56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32f570: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x32f570u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_32f574:
    // 0x32f574: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32f574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32f578: 0x244396c0  addiu       $v1, $v0, -0x6940
    ctx->pc = 0x32f578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940352));
    // 0x32f57c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x32f57cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32f580: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x32f580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x32f584: 0x24426760  addiu       $v0, $v0, 0x6760
    ctx->pc = 0x32f584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26464));
    // 0x32f588: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x32f588u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f58c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32f590: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x32f590u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f594: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x32F594u;
    {
        const bool branch_taken_0x32f594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f594) {
            ctx->pc = 0x32F820u;
            goto label_32f820;
        }
    }
    ctx->pc = 0x32F59Cu;
label_32f59c:
    // 0x32f59c: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x32f59cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32f5a0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x32f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x32f5a4: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x32f5a4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f5a8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x32f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32f5ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32f5b0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x32f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32f5b4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x32f5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x32f5b8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x32f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32f5bc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x32f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32f5c0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x32f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32f5c4: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x32f5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x32f5c8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x32f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32f5cc: 0x24540050  addiu       $s4, $v0, 0x50
    ctx->pc = 0x32f5ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x32f5d0: 0x8e760004  lw          $s6, 0x4($s3)
    ctx->pc = 0x32f5d0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x32f5d4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x32f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32f5d8: 0x282f021  addu        $fp, $s4, $v0
    ctx->pc = 0x32f5d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x32f5dc: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x32f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x32f5e0: 0x2c21821  addu        $v1, $s6, $v0
    ctx->pc = 0x32f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x32f5e4: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x32f5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x32f5e8: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x32f5e8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f5ec: 0x0  nop
    ctx->pc = 0x32f5ecu;
    // NOP
    // 0x32f5f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32f5f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32f5f4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32f5f8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32f5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32f5fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f600: 0x0  nop
    ctx->pc = 0x32f600u;
    // NOP
    // 0x32f604: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32f604u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32f608: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32F608u;
    SET_GPR_U32(ctx, 31, 0x32F610u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32F608u, 0x32F610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F610u;
label_32f610:
    // 0x32f610: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32f610u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f614: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x32f614u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f618: 0x0  nop
    ctx->pc = 0x32f618u;
    // NOP
    // 0x32f61c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32f61cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32f620: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32f620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32f624: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x32f624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32f628: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32f628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f62c: 0x0  nop
    ctx->pc = 0x32f62cu;
    // NOP
    // 0x32f630: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32f630u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32f634: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32F634u;
    SET_GPR_U32(ctx, 31, 0x32F63Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32F634u, 0x32F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F63Cu;
label_32f63c:
    // 0x32f63c: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x32f63cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f640: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32f640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32f644: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32f644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32f648: 0x3c046400  lui         $a0, 0x6400
    ctx->pc = 0x32f648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25600 << 16));
    // 0x32f64c: 0x34822b16  ori         $v0, $a0, 0x2B16
    ctx->pc = 0x32f64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11030);
    // 0x32f650: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32f650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32f654: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x32f654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x32f658: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32f658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32f65c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x32f65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x32f660: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32f660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32f664: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32f664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32f668: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32f668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32f66c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x32f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32f670: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32f670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32f674: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32f674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32f678: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32f678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32f67c: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x32f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x32f680: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32f684: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32f684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32f688: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x32f688u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32f68c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x32f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32f690: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32f690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32f694: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x32f694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32f698: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x32f698u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x32f69c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x32f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32f6a0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x32f6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x32f6a4: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x32f6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32f6a8: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x32f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x32f6ac: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x32f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32f6b0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x32f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32f6b4: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x32f6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32f6b8: 0xe23025  or          $a2, $a3, $v0
    ctx->pc = 0x32f6b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x32f6bc: 0x663825  or          $a3, $v1, $a2
    ctx->pc = 0x32f6bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x32f6c0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x32f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32f6c4: 0x33600  sll         $a2, $v1, 24
    ctx->pc = 0x32f6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32f6c8: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x32f6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x32f6cc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x32f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32f6d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32f6d4: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x32f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x32f6d8: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32f6dc: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x32f6dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32f6e0: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x32f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x32f6e4: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x32f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32f6e8: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x32f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32f6ec: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x32f6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x32f6f0: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x32f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x32f6f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32f6f8: 0x3402fffa  ori         $v0, $zero, 0xFFFA
    ctx->pc = 0x32f6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x32f6fc: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x32f6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x32f700: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32f700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32f704: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x32f704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x32f708: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32f708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32f70c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x32f70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32f710: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x32f710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x32f714: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32f714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32f718: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32f718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32f71c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32f720: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32f720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32f724: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x32f724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x32f728: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32f72c: 0x3402fffa  ori         $v0, $zero, 0xFFFA
    ctx->pc = 0x32f72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x32f730: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x32f730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x32f734: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32f734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32f738: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x32f738u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f73c: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x32f73cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32f740: 0x269600a3  addiu       $s6, $s4, 0xA3
    ctx->pc = 0x32f740u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 163));
    // 0x32f744: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x32f744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x32f748: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x32f748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x32f74c: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x32f74cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32f750: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x32f750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x32f754: 0x2462cca0  addiu       $v0, $v1, -0x3360
    ctx->pc = 0x32f754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x32f758: 0x46f021  addu        $fp, $v0, $a2
    ctx->pc = 0x32f758u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x32f75c: 0xae1e0008  sw          $fp, 0x8($s0)
    ctx->pc = 0x32f75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 30));
    // 0x32f760: 0x26e3001c  addiu       $v1, $s7, 0x1C
    ctx->pc = 0x32f760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x32f764: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32f764u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32f768: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32f768u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32f76c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32F76Cu;
    SET_GPR_U32(ctx, 31, 0x32F774u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32F76Cu, 0x32F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F774u;
label_32f774:
    // 0x32f774: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32f774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x32f778: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x32f778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x32f77c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32f780: 0x34431009  ori         $v1, $v0, 0x1009
    ctx->pc = 0x32f780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x32f784: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x32f784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x32f788: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32f78c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x32f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32f790: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x32f790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32f794: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32f794u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32f798: 0x23138  dsll        $a2, $v0, 4
    ctx->pc = 0x32f798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 4);
    // 0x32f79c: 0x34c6000a  ori         $a2, $a2, 0xA
    ctx->pc = 0x32f79cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
    // 0x32f7a0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32f7a4: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x32f7a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32f7a8: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x32f7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x32f7ac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x32f7acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x32f7b0: 0x313b8  dsll        $v0, $v1, 14
    ctx->pc = 0x32f7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 14);
    // 0x32f7b4: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x32f7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x32f7b8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x32f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32f7bc: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x32f7bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f7c0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x32f7c0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x32f7c4: 0x6b638  dsll        $s6, $a2, 24
    ctx->pc = 0x32f7c4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) << 24);
    // 0x32f7c8: 0x2c31825  or          $v1, $s6, $v1
    ctx->pc = 0x32f7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x32f7cc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x32f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32f7d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32f7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f7d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32f7d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32f7d8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x32f7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x32f7dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f7e0: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x32f7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x32f7e4: 0x26e2001c  addiu       $v0, $s7, 0x1C
    ctx->pc = 0x32f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x32f7e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32f7e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f7ec: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32f7ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32f7f0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32F7F0u;
    SET_GPR_U32(ctx, 31, 0x32F7F8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32F7F0u, 0x32F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F7F8u;
label_32f7f8:
    // 0x32f7f8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x32f7f8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f7fc: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x32f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x32f800: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x32f800u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f804: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x32f804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32f808: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x32f808u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f80c: 0x26620008  addiu       $v0, $s3, 0x8
    ctx->pc = 0x32f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x32f810: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x32f810u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f814: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x32f814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x32f818: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x32f818u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f81c: 0x0  nop
    ctx->pc = 0x32f81cu;
    // NOP
label_32f820:
    // 0x32f820: 0x1ea0ff5e  bgtz        $s5, . + 4 + (-0xA2 << 2)
    ctx->pc = 0x32F820u;
    {
        const bool branch_taken_0x32f820 = (GPR_S32(ctx, 21) > 0);
        if (branch_taken_0x32f820) {
            ctx->pc = 0x32F59Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f59c;
        }
    }
    ctx->pc = 0x32F828u;
    // 0x32f828: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32f828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32f82c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32f82cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32f830: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32f830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32f834: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x32f834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x32f838: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x32f838u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x32f83c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32f840: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32f840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f844: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x32f844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x32f848: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x32f848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32f84c: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x32f84cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x32f850: 0x26e4001c  addiu       $a0, $s7, 0x1C
    ctx->pc = 0x32f850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x32f854: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32f854u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32f858: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32F858u;
    SET_GPR_U32(ctx, 31, 0x32F860u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32F858u, 0x32F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F860u;
label_32f860:
    // 0x32f860: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x32f860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32f864: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x32f864u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32f868: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x32f868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x32f86c: 0x248395f0  addiu       $v1, $a0, -0x6A10
    ctx->pc = 0x32f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940144));
    // 0x32f870: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x32f870u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32f874: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32f874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32f878: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32f878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32f87c: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x32f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x32f880: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x32f880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x32f884: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x32f884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x32f888: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x32f888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x32f88c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x32f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32f890: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x32f890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x32f894: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32f894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32f898: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x32f898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x32f89c: 0x34448080  ori         $a0, $v0, 0x8080
    ctx->pc = 0x32f89cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x32f8a0: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x32f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32f8a4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32f8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32f8a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32f8ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32f8b0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x32f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32f8b4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x32f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32f8b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32f8bc: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x32f8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32f8c0: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x32f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x32f8c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x32f8c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32f8c8: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x32f8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x32f8cc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32f8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32f8d0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x32f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32f8d4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x32f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32f8d8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x32f8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32f8dc: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x32f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x32f8e0: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x32f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32f8e4: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x32f8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x32f8e8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x32f8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32f8ec: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x32f8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x32f8f0: 0x3c037900  lui         $v1, 0x7900
    ctx->pc = 0x32f8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30976 << 16));
    // 0x32f8f4: 0x34647000  ori         $a0, $v1, 0x7000
    ctx->pc = 0x32f8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x32f8f8: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x32f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x32f8fc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32f8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32f900: 0x3403fffa  ori         $v1, $zero, 0xFFFA
    ctx->pc = 0x32f900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x32f904: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x32f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x32f908: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32f90c: 0x3c048800  lui         $a0, 0x8800
    ctx->pc = 0x32f90cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34816 << 16));
    // 0x32f910: 0x34829000  ori         $v0, $a0, 0x9000
    ctx->pc = 0x32f910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36864);
    // 0x32f914: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x32f914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x32f918: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32f918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32f91c: 0x3403fffa  ori         $v1, $zero, 0xFFFA
    ctx->pc = 0x32f91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x32f920: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x32f920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x32f924: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x32f924u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x32f928: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x32f928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32f92c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x32f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x32f930: 0x2465e7a8  addiu       $a1, $v1, -0x1858
    ctx->pc = 0x32f930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961064));
    // 0x32f934: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x32f934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x32f938: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x32F938u;
    SET_GPR_U32(ctx, 31, 0x32F940u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x32F940u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32F940u) { return; }
    ctx->pc = 0x32F940u;
label_32f940:
    // 0x32f940: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x32f940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32f944: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x32f944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x32f948: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x32f948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32f94c: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x32f94cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x32f950: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x32f950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32f954: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x32f954u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x32f958: 0x32378  dsll        $a0, $v1, 13
    ctx->pc = 0x32f958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 13);
    // 0x32f95c: 0x41cbe  dsrl32      $v1, $a0, 18
    ctx->pc = 0x32f95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> (32 + 18));
    // 0x32f960: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x32f960u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x32f964: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x32f964u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x32f968: 0x30673fff  andi        $a3, $v1, 0x3FFF
    ctx->pc = 0x32f968u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x32f96c: 0x7217c  dsll32      $a0, $a3, 5
    ctx->pc = 0x32f96cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 5));
    // 0x32f970: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x32f970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x32f974: 0x3443001f  ori         $v1, $v0, 0x1F
    ctx->pc = 0x32f974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x32f978: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32f978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32f97c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x32f97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32f980: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32f980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x32f984: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x32f984u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x32f988: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x32f988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x32f98c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x32f98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x32f990: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x32f990u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32f994: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x32f994u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x32f998: 0x26e40018  addiu       $a0, $s7, 0x18
    ctx->pc = 0x32f998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x32f99c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32f99cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32f9a0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32F9A0u;
    SET_GPR_U32(ctx, 31, 0x32F9A8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32F9A0u, 0x32F9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F9A8u;
label_32f9a8:
    // 0x32f9a8: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x32f9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x32f9ac: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x32f9acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x32f9b0: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x32f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32f9b4: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x32f9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x32f9b8: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x32f9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
    // 0x32f9bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x32f9c0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x32f9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x32f9c4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x32f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x32f9c8: 0x34641009  ori         $a0, $v1, 0x1009
    ctx->pc = 0x32f9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x32f9cc: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x32f9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x32f9d0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32f9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32f9d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32f9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32f9d8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x32f9d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x32f9dc: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x32f9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x32f9e0: 0x3465000a  ori         $a1, $v1, 0xA
    ctx->pc = 0x32f9e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x32f9e4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32f9e8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x32f9e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f9ec: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x32f9ecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x32f9f0: 0x413b8  dsll        $v0, $a0, 14
    ctx->pc = 0x32f9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 14);
    // 0x32f9f4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x32f9f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x32f9f8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x32f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32f9fc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x32f9fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32fa00: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x32fa00u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x32fa04: 0x41638  dsll        $v0, $a0, 24
    ctx->pc = 0x32fa04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 24);
    // 0x32fa08: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x32fa08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x32fa0c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x32fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32fa10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32fa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32fa14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32fa14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32fa18: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x32fa18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
    // 0x32fa1c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x32fa1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32fa20: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x32fa20u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x32fa24: 0x26e40018  addiu       $a0, $s7, 0x18
    ctx->pc = 0x32fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x32fa28: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32fa28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32fa2c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32FA2Cu;
    SET_GPR_U32(ctx, 31, 0x32FA34u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32FA2Cu, 0x32FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FA34u;
label_32fa34:
    // 0x32fa34: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x32fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32fa38: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x32fa38u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32fa3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32fa40: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32fa40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32fa44: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32fa48: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x32fa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x32fa4c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x32fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x32fa50: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x32fa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x32fa54: 0xfe450008  sd          $a1, 0x8($s2)
    ctx->pc = 0x32fa54u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 5));
    // 0x32fa58: 0x26e40018  addiu       $a0, $s7, 0x18
    ctx->pc = 0x32fa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x32fa5c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32fa5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32fa60: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32FA60u;
    SET_GPR_U32(ctx, 31, 0x32FA68u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32FA60u, 0x32FA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FA68u;
label_32fa68:
    // 0x32fa68: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x32fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32fa6c: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x32fa6cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32fa70: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x32fa70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x32fa74: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x32fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x32fa78: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x32fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x32fa7c: 0x34621048  ori         $v0, $v1, 0x1048
    ctx->pc = 0x32fa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4168);
    // 0x32fa80: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x32fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x32fa84: 0xfe400008  sd          $zero, 0x8($s2)
    ctx->pc = 0x32fa84u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 0));
    // 0x32fa88: 0x26e40018  addiu       $a0, $s7, 0x18
    ctx->pc = 0x32fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x32fa8c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32fa8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32fa90: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32FA90u;
    SET_GPR_U32(ctx, 31, 0x32FA98u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32FA90u, 0x32FA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FA98u;
label_32fa98:
    // 0x32fa98: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x32fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32fa9c: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x32fa9cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x32faa0: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x32faa0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32faa4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x32faa4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32faa8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x32faa8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32faac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32faacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32fab0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32fab0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32fab4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32fab4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32fab8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32fab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32fabc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32fabcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32fac0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32fac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32fac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32fac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fac8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x32fac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x32facc: 0x3e00008  jr          $ra
    ctx->pc = 0x32FACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FAD4u;
}
