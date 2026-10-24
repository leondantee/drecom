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

// Function: Item_select
// Address: 0x335bb0 - 0x336794
void Item_select_0x335bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Item_select_0x335bb0");
#endif

    switch (ctx->pc) {
        case 0x335d24u: goto label_335d24;
        case 0x335dc4u: goto label_335dc4;
        case 0x335df8u: goto label_335df8;
        case 0x335e2cu: goto label_335e2c;
        case 0x335f20u: goto label_335f20;
        case 0x335fa8u: goto label_335fa8;
        case 0x335ff0u: goto label_335ff0;
        case 0x336038u: goto label_336038;
        case 0x3360c4u: goto label_3360c4;
        case 0x3360fcu: goto label_3360fc;
        case 0x336130u: goto label_336130;
        case 0x336150u: goto label_336150;
        case 0x336278u: goto label_336278;
        case 0x3362b4u: goto label_3362b4;
        case 0x3362f4u: goto label_3362f4;
        case 0x3364e4u: goto label_3364e4;
        case 0x3364f4u: goto label_3364f4;
        case 0x33657cu: goto label_33657c;
        case 0x33659cu: goto label_33659c;
        case 0x3365b4u: goto label_3365b4;
        case 0x336600u: goto label_336600;
        case 0x336628u: goto label_336628;
        case 0x336660u: goto label_336660;
        case 0x336670u: goto label_336670;
        case 0x3366e8u: goto label_3366e8;
        case 0x336734u: goto label_336734;
        case 0x33675cu: goto label_33675c;
        default: break;
    }

    ctx->pc = 0x335bb0u;

    // 0x335bb0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x335bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x335bb4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x335bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x335bb8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x335bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x335bbc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x335bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x335bc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x335bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x335bc4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x335bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x335bc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x335bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x335bcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x335bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x335bd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x335bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x335bd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x335bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x335bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x335bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x335bdc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x335bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x335be0: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x335be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x335be4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x335be4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335be8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x335be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x335bec: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x335becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x335bf0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x335bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x335bf4: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x335bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x335bf8: 0x2442cb10  addiu       $v0, $v0, -0x34F0
    ctx->pc = 0x335bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953744));
    // 0x335bfc: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x335bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x335c00: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x335c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x335c04: 0x24424980  addiu       $v0, $v0, 0x4980
    ctx->pc = 0x335c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18816));
    // 0x335c08: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x335c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x335c0c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x335c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x335c10: 0x24424990  addiu       $v0, $v0, 0x4990
    ctx->pc = 0x335c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18832));
    // 0x335c14: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x335c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x335c18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x335c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x335c1c: 0xa2025e04  sb          $v0, 0x5E04($s0)
    ctx->pc = 0x335c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 2));
    // 0x335c20: 0x260229e8  addiu       $v0, $s0, 0x29E8
    ctx->pc = 0x335c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10728));
    // 0x335c24: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x335c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x335c28: 0x26024458  addiu       $v0, $s0, 0x4458
    ctx->pc = 0x335c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17496));
    // 0x335c2c: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x335c2cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335c30: 0x26024428  addiu       $v0, $s0, 0x4428
    ctx->pc = 0x335c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17448));
    // 0x335c34: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x335c34u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335c38: 0x26024438  addiu       $v0, $s0, 0x4438
    ctx->pc = 0x335c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17464));
    // 0x335c3c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x335c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x335c40: 0x26024448  addiu       $v0, $s0, 0x4448
    ctx->pc = 0x335c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17480));
    // 0x335c44: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x335c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x335c48: 0x261e1de8  addiu       $fp, $s0, 0x1DE8
    ctx->pc = 0x335c48u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 7656));
    // 0x335c4c: 0x26034958  addiu       $v1, $s0, 0x4958
    ctx->pc = 0x335c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 18776));
    // 0x335c50: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x335c50u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x335c54: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x335c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x335c58: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x335c58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x335c5c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x335c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x335c60: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x335c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x335c64: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x335c64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x335c68: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x335c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x335c6c: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x335c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x335c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335c74: 0x26660008  addiu       $a2, $s3, 0x8
    ctx->pc = 0x335c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x335c78: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x335c78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x335c7c: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x335c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x335c80: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x335c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x335c84: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x335c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x335c88: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x335c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x335c8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x335c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x335c90: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x335c90u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x335c94: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x335c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x335c98: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x335c98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x335c9c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x335c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x335ca0: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x335ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x335ca4: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x335ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x335ca8: 0xffc00008  sd          $zero, 0x8($fp)
    ctx->pc = 0x335ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 0));
    // 0x335cac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x335cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x335cb0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x335cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x335cb4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x335cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x335cb8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x335cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x335cbc: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x335cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x335cc0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x335cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x335cc4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x335cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x335cc8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x335cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x335ccc: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x335cccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x335cd0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x335cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x335cd4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x335cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x335cd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x335cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x335cdc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x335cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x335ce0: 0x3463103f  ori         $v1, $v1, 0x103F
    ctx->pc = 0x335ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4159);
    // 0x335ce4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x335ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x335ce8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x335ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x335cec: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x335cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x335cf0: 0x24623440  addiu       $v0, $v1, 0x3440
    ctx->pc = 0x335cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 13376));
    // 0x335cf4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x335cf4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335cf8: 0x9202683f  lbu         $v0, 0x683F($s0)
    ctx->pc = 0x335cf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x335cfc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x335cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x335d00: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x335d00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x335d04: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x335d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x335d08: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x335d08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x335d0c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x335d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x335d10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x335d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x335d14: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x335d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x335d18: 0x2444663e  addiu       $a0, $v0, 0x663E
    ctx->pc = 0x335d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26174));
    // 0x335d1c: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x335D1Cu;
    SET_GPR_U32(ctx, 31, 0x335D24u);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x335D1Cu, 0x335D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335D24u;
label_335d24:
    // 0x335d24: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x335d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x335d28: 0x8fa6010c  lw          $a2, 0x10C($sp)
    ctx->pc = 0x335d28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x335d2c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x335d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x335d30: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x335d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x335d34: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x335d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x335d38: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x335d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x335d3c: 0x24429740  addiu       $v0, $v0, -0x68C0
    ctx->pc = 0x335d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940480));
    // 0x335d40: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x335d40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x335d44: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x335d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x335d48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x335d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x335d4c: 0x10620102  beq         $v1, $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x335D4Cu;
    {
        const bool branch_taken_0x335d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x335d4c) {
            ctx->pc = 0x336158u;
            goto label_336158;
        }
    }
    ctx->pc = 0x335D54u;
    // 0x335d54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x335d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x335d58: 0x10620086  beq         $v1, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x335D58u;
    {
        const bool branch_taken_0x335d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x335d58) {
            ctx->pc = 0x335F74u;
            goto label_335f74;
        }
    }
    ctx->pc = 0x335D60u;
    // 0x335d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335d64: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x335D64u;
    {
        const bool branch_taken_0x335d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x335d64) {
            ctx->pc = 0x335E18u;
            goto label_335e18;
        }
    }
    ctx->pc = 0x335D6Cu;
    // 0x335d6c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x335D6Cu;
    {
        const bool branch_taken_0x335d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335d6c) {
            ctx->pc = 0x335D7Cu;
            goto label_335d7c;
        }
    }
    ctx->pc = 0x335D74u;
    // 0x335d74: 0x10000258  b           . + 4 + (0x258 << 2)
    ctx->pc = 0x335D74u;
    {
        const bool branch_taken_0x335d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335d74) {
            ctx->pc = 0x3366D8u;
            goto label_3366d8;
        }
    }
    ctx->pc = 0x335D7Cu;
label_335d7c:
    // 0x335d7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x335d7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335d80: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335d84: 0xe4203428  swc1        $f0, 0x3428($at)
    ctx->pc = 0x335d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x893428u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893428u, _value); } while (0); }
    // 0x335d88: 0x9203683f  lbu         $v1, 0x683F($s0)
    ctx->pc = 0x335d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x335d8c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x335d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x335d90: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x335d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x335d94: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x335d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x335d98: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x335d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x335d9c: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x335d9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x335da0: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x335da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x335da4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x335da4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x335da8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x335da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x335dac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x335dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x335db0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x335db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x335db4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x335db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x335db8: 0x2444663e  addiu       $a0, $v0, 0x663E
    ctx->pc = 0x335db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26174));
    // 0x335dbc: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x335DBCu;
    SET_GPR_U32(ctx, 31, 0x335DC4u);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x335DBCu, 0x335DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335DC4u;
label_335dc4:
    // 0x335dc4: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x335dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x335dc8: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x335dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x335dcc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x335dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x335dd0: 0x34420085  ori         $v0, $v0, 0x85
    ctx->pc = 0x335dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)133);
    // 0x335dd4: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x335dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x335dd8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x335dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x335ddc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x335ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x335de0: 0x8fa40114  lw          $a0, 0x114($sp)
    ctx->pc = 0x335de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x335de4: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x335de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x335de8: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x335de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x335dec: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x335decu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x335df0: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x335DF0u;
    SET_GPR_U32(ctx, 31, 0x335DF8u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x335DF0u, 0x335DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335DF8u;
label_335df8:
    // 0x335df8: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x335df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x335dfc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x335dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x335e00: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x335e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x335e04: 0x8e025dd0  lw          $v0, 0x5DD0($s0)
    ctx->pc = 0x335e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x335e08: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x335e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x335e0c: 0xae035dd0  sw          $v1, 0x5DD0($s0)
    ctx->pc = 0x335e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 3));
    // 0x335e10: 0x10000231  b           . + 4 + (0x231 << 2)
    ctx->pc = 0x335E10u;
    {
        const bool branch_taken_0x335e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335e10) {
            ctx->pc = 0x3366D8u;
            goto label_3366d8;
        }
    }
    ctx->pc = 0x335E18u;
label_335e18:
    // 0x335e18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x335e18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335e1c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335e20: 0xe4203428  swc1        $f0, 0x3428($at)
    ctx->pc = 0x335e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x893428u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893428u, _value); } while (0); }
    // 0x335e24: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x335E24u;
    SET_GPR_U32(ctx, 31, 0x335E2Cu);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x335E24u, 0x335E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335E2Cu;
label_335e2c:
    // 0x335e2c: 0x1440022a  bnez        $v0, . + 4 + (0x22A << 2)
    ctx->pc = 0x335E2Cu;
    {
        const bool branch_taken_0x335e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335e2c) {
            ctx->pc = 0x3366D8u;
            goto label_3366d8;
        }
    }
    ctx->pc = 0x335E34u;
    // 0x335e34: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x335e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x335e38: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x335e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x335e3c: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x335e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x335e40: 0xae04685c  sw          $a0, 0x685C($s0)
    ctx->pc = 0x335e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 4));
    // 0x335e44: 0x8e026870  lw          $v0, 0x6870($s0)
    ctx->pc = 0x335e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26736)));
    // 0x335e48: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x335e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x335e4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x335E4Cu;
    {
        const bool branch_taken_0x335e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335e4c) {
            ctx->pc = 0x335E64u;
            goto label_335e64;
        }
    }
    ctx->pc = 0x335E54u;
    // 0x335e54: 0x8e036870  lw          $v1, 0x6870($s0)
    ctx->pc = 0x335e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26736)));
    // 0x335e58: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x335e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x335e5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x335e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x335e60: 0xae036870  sw          $v1, 0x6870($s0)
    ctx->pc = 0x335e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26736), GPR_U32(ctx, 3));
label_335e64:
    // 0x335e64: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335e68: 0xac203430  sw          $zero, 0x3430($at)
    ctx->pc = 0x335e68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x893430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893430u, _value); } while (0);
    // 0x335e6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335e70: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335e74: 0xac2249a0  sw          $v0, 0x49A0($at)
    ctx->pc = 0x335e74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8949A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8949A0u, _value); } while (0);
    // 0x335e78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x335e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x335e7c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335e80: 0xac2249a8  sw          $v0, 0x49A8($at)
    ctx->pc = 0x335e80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8949A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8949A8u, _value); } while (0);
    // 0x335e84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x335e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x335e88: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335e8c: 0xa02249b8  sb          $v0, 0x49B8($at)
    ctx->pc = 0x335e8cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8949B8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8949B8u, _value); } while (0);
    // 0x335e90: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x335e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x335e94: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x335e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x335e98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x335e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335e9c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335ea0: 0xe42049b4  swc1        $f0, 0x49B4($at)
    ctx->pc = 0x335ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8949B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8949B4u, _value); } while (0); }
    // 0x335ea4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x335ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x335ea8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335eac: 0xa02249b9  sb          $v0, 0x49B9($at)
    ctx->pc = 0x335eacu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8949B9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8949B9u, _value); } while (0);
    // 0x335eb0: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x335eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x335eb4: 0x3442adfd  ori         $v0, $v0, 0xADFD
    ctx->pc = 0x335eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x335eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x335eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335ebc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335ec0: 0xe42049b0  swc1        $f0, 0x49B0($at)
    ctx->pc = 0x335ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8949B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8949B0u, _value); } while (0); }
    // 0x335ec4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x335ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x335ec8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x335ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x335ecc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x335eccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335ed0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335ed4: 0xe42049bc  swc1        $f0, 0x49BC($at)
    ctx->pc = 0x335ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8949BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8949BCu, _value); } while (0); }
    // 0x335ed8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x335ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x335edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x335edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335ee0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335ee4: 0xe42049c0  swc1        $f0, 0x49C0($at)
    ctx->pc = 0x335ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8949C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8949C0u, _value); } while (0); }
    // 0x335ee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x335ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x335eec: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335ef0: 0xa02249c5  sb          $v0, 0x49C5($at)
    ctx->pc = 0x335ef0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8949C5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8949C5u, _value); } while (0);
    // 0x335ef4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x335ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x335ef8: 0x24826158  addiu       $v0, $a0, 0x6158
    ctx->pc = 0x335ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 24920));
    // 0x335efc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335f00: 0xac2249d0  sw          $v0, 0x49D0($at)
    ctx->pc = 0x335f00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8949D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8949D0u, _value); } while (0);
    // 0x335f04: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x335f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x335f08: 0x248449d8  addiu       $a0, $a0, 0x49D8
    ctx->pc = 0x335f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18904));
    // 0x335f0c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x335f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x335f10: 0x2445e7d0  addiu       $a1, $v0, -0x1830
    ctx->pc = 0x335f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x335f14: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x335f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x335f18: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x335F18u;
    SET_GPR_U32(ctx, 31, 0x335F20u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x335F20u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x335F20u) { return; }
    ctx->pc = 0x335F20u;
label_335f20:
    // 0x335f20: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x335f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x335f24: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x335f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335f28: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335f2c: 0xa4224a00  sh          $v0, 0x4A00($at)
    ctx->pc = 0x335f2cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894A00u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894A00u, _value); } while (0);
    // 0x335f30: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x335f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x335f34: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x335f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335f38: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335f3c: 0xa4224a02  sh          $v0, 0x4A02($at)
    ctx->pc = 0x335f3cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894A02u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894A02u, _value); } while (0);
    // 0x335f40: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x335f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x335f44: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x335f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x335f48: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335f4c: 0xa4224a04  sh          $v0, 0x4A04($at)
    ctx->pc = 0x335f4cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894A04u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894A04u, _value); } while (0);
    // 0x335f50: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x335f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x335f54: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x335f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335f58: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335f5c: 0xa4224a06  sh          $v0, 0x4A06($at)
    ctx->pc = 0x335f5cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894A06u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894A06u, _value); } while (0);
    // 0x335f60: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x335f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x335f64: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x335f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x335f68: 0xae025dd0  sw          $v0, 0x5DD0($s0)
    ctx->pc = 0x335f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 2));
    // 0x335f6c: 0x100001da  b           . + 4 + (0x1DA << 2)
    ctx->pc = 0x335F6Cu;
    {
        const bool branch_taken_0x335f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335f6c) {
            ctx->pc = 0x3366D8u;
            goto label_3366d8;
        }
    }
    ctx->pc = 0x335F74u;
label_335f74:
    // 0x335f74: 0xc6015df0  lwc1        $f1, 0x5DF0($s0)
    ctx->pc = 0x335f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x335f78: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335f7c: 0xc4203428  lwc1        $f0, 0x3428($at)
    ctx->pc = 0x335f7cu;
    { uint32_t bits = FAST_READ32(0x893428u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x335f80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x335f80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x335f84: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335f88: 0xe4203428  swc1        $f0, 0x3428($at)
    ctx->pc = 0x335f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x893428u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893428u, _value); } while (0); }
    // 0x335f8c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x335f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x335f90: 0x244449d8  addiu       $a0, $v0, 0x49D8
    ctx->pc = 0x335f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18904));
    // 0x335f94: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x335f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x335f98: 0x2465e7d0  addiu       $a1, $v1, -0x1830
    ctx->pc = 0x335f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961104));
    // 0x335f9c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x335f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x335fa0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x335FA0u;
    SET_GPR_U32(ctx, 31, 0x335FA8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x335FA8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x335FA8u) { return; }
    ctx->pc = 0x335FA8u;
label_335fa8:
    // 0x335fa8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x335fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x335fac: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x335facu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x335fb0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x335fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x335fb4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x335fb4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x335fb8: 0x0  nop
    ctx->pc = 0x335fb8u;
    // NOP
    // 0x335fbc: 0x0  nop
    ctx->pc = 0x335fbcu;
    // NOP
    // 0x335fc0: 0x1010  mfhi        $v0
    ctx->pc = 0x335fc0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x335fc4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x335FC4u;
    {
        const bool branch_taken_0x335fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335fc4) {
            ctx->pc = 0x336014u;
            goto label_336014;
        }
    }
    ctx->pc = 0x335FCCu;
    // 0x335fcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x335fccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x335fd0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335fd4: 0x8c2249a8  lw          $v0, 0x49A8($at)
    ctx->pc = 0x335fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8949A8u));
    // 0x335fd8: 0x24440027  addiu       $a0, $v0, 0x27
    ctx->pc = 0x335fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 39));
    // 0x335fdc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x335fdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x335fe0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x335fe0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x335fe4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x335fe4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x335fe8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x335FE8u;
    SET_GPR_U32(ctx, 31, 0x335FF0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x335FE8u, 0x335FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335FF0u;
label_335ff0:
    // 0x335ff0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335ff4: 0x8c2249a8  lw          $v0, 0x49A8($at)
    ctx->pc = 0x335ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8949A8u));
    // 0x335ff8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x335ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x335ffc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336000: 0xac2349a8  sw          $v1, 0x49A8($at)
    ctx->pc = 0x336000u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8949A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8949A8u, _value); } while (0);
    // 0x336004: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x336004u;
    {
        const bool branch_taken_0x336004 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x336004) {
            ctx->pc = 0x336014u;
            goto label_336014;
        }
    }
    ctx->pc = 0x33600Cu;
    // 0x33600c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33600cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336010: 0xac2049a8  sw          $zero, 0x49A8($at)
    ctx->pc = 0x336010u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8949A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8949A8u, _value); } while (0);
label_336014:
    // 0x336014: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x336014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x336018: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x336018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33601c: 0x244449b0  addiu       $a0, $v0, 0x49B0
    ctx->pc = 0x33601cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18864));
    // 0x336020: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x336020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x336024: 0x2445bf58  addiu       $a1, $v0, -0x40A8
    ctx->pc = 0x336024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950744));
    // 0x336028: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x336028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33602c: 0x244649d0  addiu       $a2, $v0, 0x49D0
    ctx->pc = 0x33602cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 18896));
    // 0x336030: 0xc0a4474  jal         func_2911D0
    ctx->pc = 0x336030u;
    SET_GPR_U32(ctx, 31, 0x336038u);
    ctx->pc = 0x2911D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911D0u, 0x336030u, 0x336038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336038u;
label_336038:
    // 0x336038: 0x104001a7  beqz        $v0, . + 4 + (0x1A7 << 2)
    ctx->pc = 0x336038u;
    {
        const bool branch_taken_0x336038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336038) {
            ctx->pc = 0x3366D8u;
            goto label_3366d8;
        }
    }
    ctx->pc = 0x336040u;
    // 0x336040: 0x8e025dd0  lw          $v0, 0x5DD0($s0)
    ctx->pc = 0x336040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x336044: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x336044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x336048: 0xae025dd0  sw          $v0, 0x5DD0($s0)
    ctx->pc = 0x336048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 2));
    // 0x33604c: 0x9212683f  lbu         $s2, 0x683F($s0)
    ctx->pc = 0x33604cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x336050: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x336050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x336054: 0x82055deb  lb          $a1, 0x5DEB($s0)
    ctx->pc = 0x336054u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x336058: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x336058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x33605c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x33605cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x336060: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x336060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x336064: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x336064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x336068: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x336068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33606c: 0x9042663e  lbu         $v0, 0x663E($v0)
    ctx->pc = 0x33606cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 26174)));
    // 0x336070: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x336070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x336074: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x336074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x336078: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x336078u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33607c: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x33607cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x336080: 0x9204683f  lbu         $a0, 0x683F($s0)
    ctx->pc = 0x336080u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x336084: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x336084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x336088: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x336088u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x33608c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x33608cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x336090: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x336090u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x336094: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x336094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x336098: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x336098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33609c: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x33609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3360a0: 0x9042663f  lbu         $v0, 0x663F($v0)
    ctx->pc = 0x3360a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 26175)));
    // 0x3360a4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3360a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3360a8: 0xafa4011c  sw          $a0, 0x11C($sp)
    ctx->pc = 0x3360a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 4));
    // 0x3360ac: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3360acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3360b0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3360b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3360b4: 0x8fa5011c  lw          $a1, 0x11C($sp)
    ctx->pc = 0x3360b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x3360b8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3360b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3360bc: 0xc0ce20c  jal         func_338830
    ctx->pc = 0x3360BCu;
    SET_GPR_U32(ctx, 31, 0x3360C4u);
    ctx->pc = 0x338830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338830u, 0x3360BCu, 0x3360C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3360C4u;
label_3360c4:
    // 0x3360c4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x3360c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x3360c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3360c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3360cc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3360ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x3360d0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3360d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3360d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3360d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3360d8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3360d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x3360dc: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3360dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3360e0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x3360e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3360e4: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x3360e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x3360e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3360e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3360ec: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x3360ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x3360f0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3360f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3360f4: 0xc0ce20c  jal         func_338830
    ctx->pc = 0x3360F4u;
    SET_GPR_U32(ctx, 31, 0x3360FCu);
    ctx->pc = 0x338830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338830u, 0x3360F4u, 0x3360FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3360FCu;
label_3360fc:
    // 0x3360fc: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x3360fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x336100: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x336100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x336104: 0x652006  srlv        $a0, $a1, $v1
    ctx->pc = 0x336104u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x336108: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x336108u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33610c: 0x8c4319ec  lw          $v1, 0x19EC($v0)
    ctx->pc = 0x33610cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6636)));
    // 0x336110: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x336110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x336114: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x336114u;
    {
        const bool branch_taken_0x336114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x336114) {
            ctx->pc = 0x33613Cu;
            goto label_33613c;
        }
    }
    ctx->pc = 0x33611Cu;
    // 0x33611c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x33611cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336120: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x336120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x336124: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x336124u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336128: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x336128u;
    SET_GPR_U32(ctx, 31, 0x336130u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x336128u, 0x336130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336130u;
label_336130:
    // 0x336130: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x336130u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x336134: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x336134u;
    {
        const bool branch_taken_0x336134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336134) {
            ctx->pc = 0x3366D8u;
            goto label_3366d8;
        }
    }
    ctx->pc = 0x33613Cu;
label_33613c:
    // 0x33613c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x33613cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336140: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x336140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x336144: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x336144u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336148: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x336148u;
    SET_GPR_U32(ctx, 31, 0x336150u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x336148u, 0x336150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336150u;
label_336150:
    // 0x336150: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x336150u;
    {
        const bool branch_taken_0x336150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336150) {
            ctx->pc = 0x3366D8u;
            goto label_3366d8;
        }
    }
    ctx->pc = 0x336158u;
label_336158:
    // 0x336158: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x336158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33615c: 0x2442e7d0  addiu       $v0, $v0, -0x1830
    ctx->pc = 0x33615cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x336160: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x336160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x336164: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x336164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x336168: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x336168u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x33616c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x33616cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x336170: 0x3442103b  ori         $v0, $v0, 0x103B
    ctx->pc = 0x336170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4155);
    // 0x336174: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x336174u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x336178: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x336178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33617c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33617cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x336180: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x336180u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x336184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x336184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336188: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x336188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x33618c: 0x24470018  addiu       $a3, $v0, 0x18
    ctx->pc = 0x33618cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x336190: 0x90e60004  lbu         $a2, 0x4($a3)
    ctx->pc = 0x336190u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x336194: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x336194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x336198: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x336198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33619c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x33619cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3361a0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3361a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3361a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3361a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3361a8: 0xa0e20004  sb          $v0, 0x4($a3)
    ctx->pc = 0x3361a8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3361ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3361acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3361b0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3361b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x3361b4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3361b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3361b8: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x3361b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x3361bc: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x3361bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x3361c0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x3361c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3361c4: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x3361c4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
    // 0x3361c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3361c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3361cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3361ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3361d0: 0x3c028800  lui         $v0, 0x8800
    ctx->pc = 0x3361d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34816 << 16));
    // 0x3361d4: 0x34423b14  ori         $v0, $v0, 0x3B14
    ctx->pc = 0x3361d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15124);
    // 0x3361d8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3361d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3361dc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3361dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3361e0: 0x94224a04  lhu         $v0, 0x4A04($at)
    ctx->pc = 0x3361e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A04u));
    // 0x3361e4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3361e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3361e8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3361e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3361ec: 0x94224a00  lhu         $v0, 0x4A00($at)
    ctx->pc = 0x3361ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A00u));
    // 0x3361f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3361f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3361f4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3361f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3361f8: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x3361f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x3361fc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3361fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336200: 0x94224a06  lhu         $v0, 0x4A06($at)
    ctx->pc = 0x336200u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A06u));
    // 0x336204: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x336204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336208: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33620c: 0x94224a02  lhu         $v0, 0x4A02($at)
    ctx->pc = 0x33620cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A02u));
    // 0x336210: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336214: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x336214u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x336218: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x336218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x33621c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x33621cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x336220: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x336220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x336224: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x336224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x336228: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x336228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x33622c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x33622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x336230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336234: 0x0  nop
    ctx->pc = 0x336234u;
    // NOP
    // 0x336238: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x336238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33623c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x33623cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x336240: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x336240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x336244: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x336244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x336248: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x336248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x33624c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33624cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336250: 0x0  nop
    ctx->pc = 0x336250u;
    // NOP
    // 0x336254: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x336254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x336258: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x336258u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33625c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x33625cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x336260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336264: 0x0  nop
    ctx->pc = 0x336264u;
    // NOP
    // 0x336268: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x336268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33626c: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x33626cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x336270: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x336270u;
    SET_GPR_U32(ctx, 31, 0x336278u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x336270u, 0x336278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336278u;
label_336278:
    // 0x336278: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x336278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x33627c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x33627cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x336280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336284: 0x0  nop
    ctx->pc = 0x336284u;
    // NOP
    // 0x336288: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x336288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33628c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x33628cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x336290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x336290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x336294: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x336294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x336298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33629c: 0x0  nop
    ctx->pc = 0x33629cu;
    // NOP
    // 0x3362a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3362a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3362a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3362a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3362a8: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x3362a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3362ac: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3362ACu;
    SET_GPR_U32(ctx, 31, 0x3362B4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3362ACu, 0x3362B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3362B4u;
label_3362b4:
    // 0x3362b4: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x3362b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x3362b8: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3362b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x3362bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3362bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3362c0: 0x0  nop
    ctx->pc = 0x3362c0u;
    // NOP
    // 0x3362c4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3362c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3362c8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3362c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3362cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3362ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3362d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3362d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3362d4: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x3362d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x3362d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3362d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3362dc: 0x0  nop
    ctx->pc = 0x3362dcu;
    // NOP
    // 0x3362e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3362e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3362e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3362e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3362e8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x3362e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3362ec: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3362ECu;
    SET_GPR_U32(ctx, 31, 0x3362F4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3362ECu, 0x3362F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3362F4u;
label_3362f4:
    // 0x3362f4: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x3362f4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3362f8: 0xafbe0104  sw          $fp, 0x104($sp)
    ctx->pc = 0x3362f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 30));
    // 0x3362fc: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x3362fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x336300: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x336300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x336304: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x336304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x336308: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x336308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x33630c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x33630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x336310: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x336310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x336314: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x336314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x336318: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x336318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x33631c: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x33631cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x336320: 0x24c57000  addiu       $a1, $a2, 0x7000
    ctx->pc = 0x336320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x336324: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x336324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x336328: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x336328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x33632c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x33632cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x336330: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x336330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x336334: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x336334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x336338: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x336338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x33633c: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x33633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x336340: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x336340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x336344: 0x3402fffb  ori         $v0, $zero, 0xFFFB
    ctx->pc = 0x336344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x336348: 0x2623001c  addiu       $v1, $s1, 0x1C
    ctx->pc = 0x336348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x33634c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33634cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x336350: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x336350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x336354: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x336354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x336358: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x336358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x33635c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x33635cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336360: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x336360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x336364: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x336364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x336368: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x336368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x33636c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x33636cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x336370: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x336370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x336374: 0x26220024  addiu       $v0, $s1, 0x24
    ctx->pc = 0x336374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x336378: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x336378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x33637c: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x33637cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x336380: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x336380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x336384: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x336384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x336388: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x336388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x33638c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x33638cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x336390: 0x24827000  addiu       $v0, $a0, 0x7000
    ctx->pc = 0x336390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x336394: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x336394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336398: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x336398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x33639c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33639cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3363a0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x3363a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x3363a4: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x3363a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3363a8: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x3363a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3363ac: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x3363acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3363b0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3363b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3363b4: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x3363b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x3363b8: 0x26220034  addiu       $v0, $s1, 0x34
    ctx->pc = 0x3363b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x3363bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3363bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3363c0: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x3363c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x3363c4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x3363c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3363c8: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x3363c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x3363cc: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x3363ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3363d0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x3363d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3363d4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3363d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3363d8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x3363d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x3363dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3363dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3363e0: 0x2821825  or          $v1, $s4, $v0
    ctx->pc = 0x3363e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x3363e4: 0x2622003c  addiu       $v0, $s1, 0x3C
    ctx->pc = 0x3363e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x3363e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3363e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3363ec: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x3363ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x3363f0: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x3363f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3363f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3363f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3363f8: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3363f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3363fc: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x3363fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x336400: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x336400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x336404: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x336404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x336408: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33640c: 0x94224a00  lhu         $v0, 0x4A00($at)
    ctx->pc = 0x33640cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A00u));
    // 0x336410: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336414: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x336414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x336418: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33641c: 0x94224a02  lhu         $v0, 0x4A02($at)
    ctx->pc = 0x33641cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A02u));
    // 0x336420: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336424: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x336424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x336428: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x336428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33642c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x33642cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x336430: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x336430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x336434: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x336434u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x336438: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33643c: 0x94244a04  lhu         $a0, 0x4A04($at)
    ctx->pc = 0x33643cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x894A04u));
    // 0x336440: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x336440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x336444: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x336444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x336448: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33644c: 0x94224a02  lhu         $v0, 0x4A02($at)
    ctx->pc = 0x33644cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A02u));
    // 0x336450: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336454: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x336454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x336458: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x336458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33645c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33645cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x336460: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x336460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x336464: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x336464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x336468: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33646c: 0x94234a00  lhu         $v1, 0x4A00($at)
    ctx->pc = 0x33646cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x894A00u));
    // 0x336470: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x336470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x336474: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x336474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x336478: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33647c: 0x94224a06  lhu         $v0, 0x4A06($at)
    ctx->pc = 0x33647cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A06u));
    // 0x336480: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336484: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x336484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x336488: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x336488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x33648c: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x33648cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x336490: 0x2622002c  addiu       $v0, $s1, 0x2C
    ctx->pc = 0x336490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x336494: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x336494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x336498: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33649c: 0x94224a04  lhu         $v0, 0x4A04($at)
    ctx->pc = 0x33649cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A04u));
    // 0x3364a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3364a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3364a4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3364a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3364a8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3364a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3364ac: 0x94224a06  lhu         $v0, 0x4A06($at)
    ctx->pc = 0x3364acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A06u));
    // 0x3364b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3364b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3364b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3364b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3364b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3364b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3364bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3364bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3364c0: 0x26220038  addiu       $v0, $s1, 0x38
    ctx->pc = 0x3364c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x3364c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3364c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3364c8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3364c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3364cc: 0x244249d8  addiu       $v0, $v0, 0x49D8
    ctx->pc = 0x3364ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18904));
    // 0x3364d0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3364d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3364d4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3364d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3364d8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x3364d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3364dc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3364DCu;
    SET_GPR_U32(ctx, 31, 0x3364E4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3364DCu, 0x3364E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3364E4u;
label_3364e4:
    // 0x3364e4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3364e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3364e8: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x3364e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x3364ec: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3364ECu;
    SET_GPR_U32(ctx, 31, 0x3364F4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3364ECu, 0x3364F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3364F4u;
label_3364f4:
    // 0x3364f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3364f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3364f8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3364f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3364fc: 0x24454a08  addiu       $a1, $v0, 0x4A08
    ctx->pc = 0x3364fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 18952));
    // 0x336500: 0x70a0be28  paddub      $s7, $a1, $zero
    ctx->pc = 0x336500u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x336504: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x336504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x336508: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x336508u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
    // 0x33650c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x33650cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x336510: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x336510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x336514: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x336514u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x336518: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33651c: 0x94224a00  lhu         $v0, 0x4A00($at)
    ctx->pc = 0x33651cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A00u));
    // 0x336520: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336524: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x336524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x336528: 0x3443000a  ori         $v1, $v0, 0xA
    ctx->pc = 0x336528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x33652c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33652cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336530: 0x94224a04  lhu         $v0, 0x4A04($at)
    ctx->pc = 0x336530u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A04u));
    // 0x336534: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336538: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x336538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x33653c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33653cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x336540: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336544: 0x94224a02  lhu         $v0, 0x4A02($at)
    ctx->pc = 0x336544u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894A02u));
    // 0x336548: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33654c: 0x22638  dsll        $a0, $v0, 24
    ctx->pc = 0x33654cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 24);
    // 0x336550: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x336550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x336554: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336558: 0x94254a06  lhu         $a1, 0x4A06($at)
    ctx->pc = 0x336558u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x894A06u));
    // 0x33655c: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x33655cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x336560: 0x610bc  dsll32      $v0, $a2, 2
    ctx->pc = 0x336560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 2));
    // 0x336564: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x336564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x336568: 0xfee20008  sd          $v0, 0x8($s7)
    ctx->pc = 0x336568u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 2));
    // 0x33656c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x33656cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x336570: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x336570u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x336574: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x336574u;
    SET_GPR_U32(ctx, 31, 0x33657Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x336574u, 0x33657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33657Cu;
label_33657c:
    // 0x33657c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x33657cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x336580: 0x8c226570  lw          $v0, 0x6570($at)
    ctx->pc = 0x336580u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x396570u));
    // 0x336584: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x336584u;
    {
        const bool branch_taken_0x336584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336584) {
            ctx->pc = 0x3365A0u;
            goto label_3365a0;
        }
    }
    ctx->pc = 0x33658Cu;
    // 0x33658c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x33658cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x336590: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x336590u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x336594: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x336594u;
    SET_GPR_U32(ctx, 31, 0x33659Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x336594u, 0x33659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33659Cu;
label_33659c:
    // 0x33659c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x33659cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3365a0:
    // 0x3365a0: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x3365a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3365a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3365a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3365a8: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x3365a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x3365ac: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3365ACu;
    SET_GPR_U32(ctx, 31, 0x3365B4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3365ACu, 0x3365B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3365B4u;
label_3365b4:
    // 0x3365b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3365b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3365b8: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x3365b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x3365bc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3365bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3365c0: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x3365c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3365c4: 0x10800037  beqz        $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3365C4u;
    {
        const bool branch_taken_0x3365c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3365c4) {
            ctx->pc = 0x3366A4u;
            goto label_3366a4;
        }
    }
    ctx->pc = 0x3365CCu;
    // 0x3365cc: 0x9202683f  lbu         $v0, 0x683F($s0)
    ctx->pc = 0x3365ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x3365d0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3365d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3365d4: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x3365d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x3365d8: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x3365d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3365dc: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x3365dcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x3365e0: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x3365e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3365e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3365e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3365e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3365e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3365ec: 0x2452663e  addiu       $s2, $v0, 0x663E
    ctx->pc = 0x3365ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 26174));
    // 0x3365f0: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x3365f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3365f4: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x3365f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3365f8: 0xc0ce20c  jal         func_338830
    ctx->pc = 0x3365F8u;
    SET_GPR_U32(ctx, 31, 0x336600u);
    ctx->pc = 0x338830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338830u, 0x3365F8u, 0x336600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336600u;
label_336600:
    // 0x336600: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x336600u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x336604: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x336604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x336608: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x336608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x33660c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x33660cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x336610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x336610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x336614: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x336614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x336618: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x336618u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33661c: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x33661cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x336620: 0xc0ce20c  jal         func_338830
    ctx->pc = 0x336620u;
    SET_GPR_U32(ctx, 31, 0x336628u);
    ctx->pc = 0x338830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338830u, 0x336620u, 0x336628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336628u;
label_336628:
    // 0x336628: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x336628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x33662c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33662cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x336630: 0x621806  srlv        $v1, $v0, $v1
    ctx->pc = 0x336630u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x336634: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x336634u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x336638: 0x8c4219ec  lw          $v0, 0x19EC($v0)
    ctx->pc = 0x336638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6636)));
    // 0x33663c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33663cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x336640: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x336640u;
    {
        const bool branch_taken_0x336640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336640) {
            ctx->pc = 0x336690u;
            goto label_336690;
        }
    }
    ctx->pc = 0x336648u;
    // 0x336648: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x336648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33664c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x33664cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x336650: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x336650u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336654: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x336654u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336658: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x336658u;
    SET_GPR_U32(ctx, 31, 0x336660u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x336658u, 0x336660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336660u;
label_336660:
    // 0x336660: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x336660u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x336664: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x336664u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x336668: 0xc0ce20c  jal         func_338830
    ctx->pc = 0x336668u;
    SET_GPR_U32(ctx, 31, 0x336670u);
    ctx->pc = 0x338830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338830u, 0x336668u, 0x336670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336670u;
label_336670:
    // 0x336670: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x336670u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x336674: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x336674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x336678: 0xac251a8c  sw          $a1, 0x1A8C($at)
    ctx->pc = 0x336678u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A8Cu, _value); } while (0);
    // 0x33667c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33667cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336680: 0xae025dcc  sw          $v0, 0x5DCC($s0)
    ctx->pc = 0x336680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 2));
    // 0x336684: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x336684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x336688: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x336688u;
    {
        const bool branch_taken_0x336688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336688) {
            ctx->pc = 0x3366A4u;
            goto label_3366a4;
        }
    }
    ctx->pc = 0x336690u;
label_336690:
    // 0x336690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336694: 0xae025dcc  sw          $v0, 0x5DCC($s0)
    ctx->pc = 0x336694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 2));
    // 0x336698: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x336698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x33669c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33669cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3366a0: 0xac203430  sw          $zero, 0x3430($at)
    ctx->pc = 0x3366a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x893430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893430u, _value); } while (0);
label_3366a4:
    // 0x3366a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3366a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3366a8: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x3366a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x3366ac: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3366acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3366b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3366b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3366b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3366B4u;
    {
        const bool branch_taken_0x3366b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3366b4) {
            ctx->pc = 0x3366D8u;
            goto label_3366d8;
        }
    }
    ctx->pc = 0x3366BCu;
    // 0x3366bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3366bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3366c0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3366c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x3366c4: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3366c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3366c8: 0xae025dcc  sw          $v0, 0x5DCC($s0)
    ctx->pc = 0x3366c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 2));
    // 0x3366cc: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x3366ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x3366d0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3366d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3366d4: 0xac203430  sw          $zero, 0x3430($at)
    ctx->pc = 0x3366d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x893430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893430u, _value); } while (0);
label_3366d8:
    // 0x3366d8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3366d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3366dc: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x3366dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3366e0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3366E0u;
    SET_GPR_U32(ctx, 31, 0x3366E8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3366E0u, 0x3366E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3366E8u;
label_3366e8:
    // 0x3366e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3366e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3366ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3366ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3366f0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3366f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3366f4: 0xc4203428  lwc1        $f0, 0x3428($at)
    ctx->pc = 0x3366f4u;
    { uint32_t bits = FAST_READ32(0x893428u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3366f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3366f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3366fc: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x3366fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x336700: 0xc6015e00  lwc1        $f1, 0x5E00($s0)
    ctx->pc = 0x336700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x336704: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x336704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336708: 0x0  nop
    ctx->pc = 0x336708u;
    // NOP
    // 0x33670c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33670cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x336710: 0x0  nop
    ctx->pc = 0x336710u;
    // NOP
    // 0x336714: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x336714u;
    {
        const bool branch_taken_0x336714 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x336714) {
            ctx->pc = 0x336728u;
            goto label_336728;
        }
    }
    ctx->pc = 0x33671Cu;
    // 0x33671c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33671cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336720: 0x0  nop
    ctx->pc = 0x336720u;
    // NOP
    // 0x336724: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x336724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
label_336728:
    // 0x336728: 0xc60c5e00  lwc1        $f12, 0x5E00($s0)
    ctx->pc = 0x336728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33672c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x33672Cu;
    SET_GPR_U32(ctx, 31, 0x336734u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x33672Cu, 0x336734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336734u;
label_336734:
    // 0x336734: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x336734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x336738: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x336738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33673c: 0x3c031c07  lui         $v1, 0x1C07
    ctx->pc = 0x33673cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7175 << 16));
    // 0x336740: 0x3464050a  ori         $a0, $v1, 0x50A
    ctx->pc = 0x336740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1290);
    // 0x336744: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x336744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x336748: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x336748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x33674c: 0x24a520c8  addiu       $a1, $a1, 0x20C8
    ctx->pc = 0x33674cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8392));
    // 0x336750: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x336750u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x336754: 0xc059b14  jal         func_166C50
    ctx->pc = 0x336754u;
    SET_GPR_U32(ctx, 31, 0x33675Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x336754u, 0x33675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33675Cu;
label_33675c:
    // 0x33675c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x33675cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x336760: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x336760u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x336764: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x336764u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x336768: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x336768u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33676c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x33676cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x336770: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x336770u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x336774: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x336774u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x336778: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x336778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33677c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33677cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x336780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336788: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x336788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x33678c: 0x3e00008  jr          $ra
    ctx->pc = 0x33678Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33678Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336794u;
}
