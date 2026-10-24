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

// Function: Weapon_select
// Address: 0x28d8f0 - 0x28ec70
void Weapon_select_0x28d8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Weapon_select_0x28d8f0");
#endif

    switch (ctx->pc) {
        case 0x28d99cu: goto label_28d99c;
        case 0x28da4cu: goto label_28da4c;
        case 0x28db30u: goto label_28db30;
        case 0x28db58u: goto label_28db58;
        case 0x28dc0cu: goto label_28dc0c;
        case 0x28dc34u: goto label_28dc34;
        case 0x28dc9cu: goto label_28dc9c;
        case 0x28dcd8u: goto label_28dcd8;
        case 0x28de58u: goto label_28de58;
        case 0x28df54u: goto label_28df54;
        case 0x28df84u: goto label_28df84;
        case 0x28e020u: goto label_28e020;
        case 0x28e084u: goto label_28e084;
        case 0x28e0c4u: goto label_28e0c4;
        case 0x28e0e8u: goto label_28e0e8;
        case 0x28e10cu: goto label_28e10c;
        case 0x28e158u: goto label_28e158;
        case 0x28e178u: goto label_28e178;
        case 0x28e1ccu: goto label_28e1cc;
        case 0x28e1e8u: goto label_28e1e8;
        case 0x28e280u: goto label_28e280;
        case 0x28e2c0u: goto label_28e2c0;
        case 0x28e418u: goto label_28e418;
        case 0x28e47cu: goto label_28e47c;
        case 0x28e4e4u: goto label_28e4e4;
        case 0x28e57cu: goto label_28e57c;
        case 0x28e5e0u: goto label_28e5e0;
        case 0x28e82cu: goto label_28e82c;
        case 0x28e848u: goto label_28e848;
        case 0x28e87cu: goto label_28e87c;
        case 0x28e89cu: goto label_28e89c;
        case 0x28e8c8u: goto label_28e8c8;
        case 0x28e8f8u: goto label_28e8f8;
        case 0x28e930u: goto label_28e930;
        case 0x28e964u: goto label_28e964;
        case 0x28e97cu: goto label_28e97c;
        case 0x28e994u: goto label_28e994;
        case 0x28e9a8u: goto label_28e9a8;
        case 0x28e9c0u: goto label_28e9c0;
        case 0x28ea08u: goto label_28ea08;
        case 0x28ea38u: goto label_28ea38;
        case 0x28eafcu: goto label_28eafc;
        case 0x28eb6cu: goto label_28eb6c;
        case 0x28eba0u: goto label_28eba0;
        case 0x28ebe0u: goto label_28ebe0;
        case 0x28ec34u: goto label_28ec34;
        default: break;
    }

    ctx->pc = 0x28d8f0u;

    // 0x28d8f0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x28d8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x28d8f4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x28d8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x28d8f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x28d8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x28d8fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28d8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x28d900: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28d900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28d904: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28d904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28d908: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28d908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28d90c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28d90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28d910: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28d910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28d914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28d914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28d918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28d918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28d91c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28d920: 0x24436150  addiu       $v1, $v0, 0x6150
    ctx->pc = 0x28d920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x28d924: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x28d924u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28d928: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x28d928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x28d92c: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x28d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x28d930: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x28d930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x28d934: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x28d934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x28d938: 0x2464cb10  addiu       $a0, $v1, -0x34F0
    ctx->pc = 0x28d938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953744));
    // 0x28d93c: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x28d93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
    // 0x28d940: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28d940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28d944: 0x24452260  addiu       $a1, $v0, 0x2260
    ctx->pc = 0x28d944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8800));
    // 0x28d948: 0x70a09628  paddub      $s2, $a1, $zero
    ctx->pc = 0x28d948u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x28d94c: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x28d94cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x28d950: 0x24c226a0  addiu       $v0, $a2, 0x26A0
    ctx->pc = 0x28d950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 9888));
    // 0x28d954: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x28d954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x28d958: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28d958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28d95c: 0x244426c0  addiu       $a0, $v0, 0x26C0
    ctx->pc = 0x28d95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9920));
    // 0x28d960: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x28d960u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x28d964: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28d964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28d968: 0x244526b0  addiu       $a1, $v0, 0x26B0
    ctx->pc = 0x28d968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 9904));
    // 0x28d96c: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x28d96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x28d970: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x28d970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x28d974: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x28d974u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28d978: 0x3c031c07  lui         $v1, 0x1C07
    ctx->pc = 0x28d978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7175 << 16));
    // 0x28d97c: 0x34622d08  ori         $v0, $v1, 0x2D08
    ctx->pc = 0x28d97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11528);
    // 0x28d980: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x28d980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x28d984: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28d984u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d988: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28d988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28d98c: 0x24451690  addiu       $a1, $v0, 0x1690
    ctx->pc = 0x28d98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5776));
    // 0x28d990: 0x8e065dcc  lw          $a2, 0x5DCC($s0)
    ctx->pc = 0x28d990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24012)));
    // 0x28d994: 0xc059b14  jal         func_166C50
    ctx->pc = 0x28D994u;
    SET_GPR_U32(ctx, 31, 0x28D99Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x28D994u, 0x28D99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D99Cu;
label_28d99c:
    // 0x28d99c: 0x260229e8  addiu       $v0, $s0, 0x29E8
    ctx->pc = 0x28d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10728));
    // 0x28d9a0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x28d9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x28d9a4: 0x26154458  addiu       $s5, $s0, 0x4458
    ctx->pc = 0x28d9a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 17496));
    // 0x28d9a8: 0x26024428  addiu       $v0, $s0, 0x4428
    ctx->pc = 0x28d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17448));
    // 0x28d9ac: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x28d9acu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d9b0: 0x26024438  addiu       $v0, $s0, 0x4438
    ctx->pc = 0x28d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17464));
    // 0x28d9b4: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x28d9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x28d9b8: 0x26034448  addiu       $v1, $s0, 0x4448
    ctx->pc = 0x28d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 17480));
    // 0x28d9bc: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x28d9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x28d9c0: 0x26021de8  addiu       $v0, $s0, 0x1DE8
    ctx->pc = 0x28d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 7656));
    // 0x28d9c4: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x28d9c4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d9c8: 0x26024958  addiu       $v0, $s0, 0x4958
    ctx->pc = 0x28d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 18776));
    // 0x28d9cc: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x28d9ccu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d9d0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28d9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28d9d4: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x28d9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x28d9d8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28d9dc: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x28d9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x28d9e0: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x28d9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x28d9e4: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x28d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x28d9e8: 0xfee40008  sd          $a0, 0x8($s7)
    ctx->pc = 0x28d9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 4));
    // 0x28d9ec: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x28d9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x28d9f0: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x28d9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x28d9f4: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x28d9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x28d9f8: 0x34a21009  ori         $v0, $a1, 0x1009
    ctx->pc = 0x28d9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4105);
    // 0x28d9fc: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x28d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x28da00: 0x24020730  addiu       $v0, $zero, 0x730
    ctx->pc = 0x28da00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1840));
    // 0x28da04: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x28da04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28da08: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x28da08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x28da0c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x28da0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x28da10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28da10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28da14: 0xffc20008  sd          $v0, 0x8($fp)
    ctx->pc = 0x28da14u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 2));
    // 0x28da18: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28da18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28da1c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x28da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28da20: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28da20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28da24: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28da24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28da28: 0x34431009  ori         $v1, $v0, 0x1009
    ctx->pc = 0x28da28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x28da2c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x28da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28da30: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x28da30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x28da34: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x28da34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28da38: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x28da38u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x28da3c: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x28da3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x28da40: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x28da40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28da44: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28DA44u;
    SET_GPR_U32(ctx, 31, 0x28DA4Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28DA44u, 0x28DA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA4Cu;
label_28da4c:
    // 0x28da4c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28da50: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x28da50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x28da54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28da54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28da58: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28da58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28da5c: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x28da5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x28da60: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x28da60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x28da64: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x28da64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x28da68: 0x8e065dd0  lw          $a2, 0x5DD0($s0)
    ctx->pc = 0x28da68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28da6c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x28da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28da70: 0x10c301e2  beq         $a2, $v1, . + 4 + (0x1E2 << 2)
    ctx->pc = 0x28DA70u;
    {
        const bool branch_taken_0x28da70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x28da70) {
            ctx->pc = 0x28E1FCu;
            goto label_28e1fc;
        }
    }
    ctx->pc = 0x28DA78u;
    // 0x28da78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28da78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28da7c: 0x10c20148  beq         $a2, $v0, . + 4 + (0x148 << 2)
    ctx->pc = 0x28DA7Cu;
    {
        const bool branch_taken_0x28da7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x28da7c) {
            ctx->pc = 0x28DFA0u;
            goto label_28dfa0;
        }
    }
    ctx->pc = 0x28DA84u;
    // 0x28da84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28da84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28da88: 0x10c20077  beq         $a2, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x28DA88u;
    {
        const bool branch_taken_0x28da88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x28da88) {
            ctx->pc = 0x28DC68u;
            goto label_28dc68;
        }
    }
    ctx->pc = 0x28DA90u;
    // 0x28da90: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DA90u;
    {
        const bool branch_taken_0x28da90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x28da90) {
            ctx->pc = 0x28DAA0u;
            goto label_28daa0;
        }
    }
    ctx->pc = 0x28DA98u;
    // 0x28da98: 0x10000421  b           . + 4 + (0x421 << 2)
    ctx->pc = 0x28DA98u;
    {
        const bool branch_taken_0x28da98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28da98) {
            ctx->pc = 0x28EB20u;
            goto label_28eb20;
        }
    }
    ctx->pc = 0x28DAA0u;
label_28daa0:
    // 0x28daa0: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28daa4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x28daa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28daa8: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x28DAA8u;
    {
        const bool branch_taken_0x28daa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28daa8) {
            ctx->pc = 0x28DB8Cu;
            goto label_28db8c;
        }
    }
    ctx->pc = 0x28DAB0u;
    // 0x28dab0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28dab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dab4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dab8: 0xe4202248  swc1        $f0, 0x2248($at)
    ctx->pc = 0x28dab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622248u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622248u, _value); } while (0); }
    // 0x28dabc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dac0: 0xac2027c0  sw          $zero, 0x27C0($at)
    ctx->pc = 0x28dac0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6227C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227C0u, _value); } while (0);
    // 0x28dac4: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28dac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28dac8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28dac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28dacc: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x28DACCu;
    {
        const bool branch_taken_0x28dacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dacc) {
            ctx->pc = 0x28DB3Cu;
            goto label_28db3c;
        }
    }
    ctx->pc = 0x28DAD4u;
    // 0x28dad4: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x28dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x28dad8: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x28dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x28dadc: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x28dadcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28dae0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x28dae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28dae4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x28dae4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x28dae8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28daec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x28daecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x28daf0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x28daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28daf4: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x28daf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x28daf8: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x28daf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x28dafc: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x28dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x28db00: 0x346200a4  ori         $v0, $v1, 0xA4
    ctx->pc = 0x28db00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)164);
    // 0x28db04: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x28db04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x28db08: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x28db08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x28db0c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x28db0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28db10: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x28db10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x28db14: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28db14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28db18: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x28db18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x28db1c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x28db1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x28db20: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28db20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28db24: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28db24u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28db28: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x28DB28u;
    SET_GPR_U32(ctx, 31, 0x28DB30u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x28DB28u, 0x28DB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB30u;
label_28db30:
    // 0x28db30: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x28db30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x28db34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28DB34u;
    {
        const bool branch_taken_0x28db34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28db34) {
            ctx->pc = 0x28DB5Cu;
            goto label_28db5c;
        }
    }
    ctx->pc = 0x28DB3Cu;
label_28db3c:
    // 0x28db3c: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28db3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28db40: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28db40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28db44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28db44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28db48: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DB48u;
    {
        const bool branch_taken_0x28db48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28db48) {
            ctx->pc = 0x28DB5Cu;
            goto label_28db5c;
        }
    }
    ctx->pc = 0x28DB50u;
    // 0x28db50: 0xc0a3b1c  jal         func_28EC70
    ctx->pc = 0x28DB50u;
    SET_GPR_U32(ctx, 31, 0x28DB58u);
    ctx->pc = 0x28EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC70u, 0x28DB50u, 0x28DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB58u;
label_28db58:
    // 0x28db58: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x28db58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_28db5c:
    // 0x28db5c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x28db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x28db60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28db60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28db64: 0x106203ee  beq         $v1, $v0, . + 4 + (0x3EE << 2)
    ctx->pc = 0x28DB64u;
    {
        const bool branch_taken_0x28db64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28db64) {
            ctx->pc = 0x28EB20u;
            goto label_28eb20;
        }
    }
    ctx->pc = 0x28DB6Cu;
    // 0x28db6c: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28db70: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x28db70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x28db74: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x28db74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x28db78: 0x8e025dd0  lw          $v0, 0x5DD0($s0)
    ctx->pc = 0x28db78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28db7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28db80: 0xae025dd0  sw          $v0, 0x5DD0($s0)
    ctx->pc = 0x28db80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 2));
    // 0x28db84: 0x100003e6  b           . + 4 + (0x3E6 << 2)
    ctx->pc = 0x28DB84u;
    {
        const bool branch_taken_0x28db84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28db84) {
            ctx->pc = 0x28EB20u;
            goto label_28eb20;
        }
    }
    ctx->pc = 0x28DB8Cu;
label_28db8c:
    // 0x28db8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28db8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28db90: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28db90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28db94: 0xe4202248  swc1        $f0, 0x2248($at)
    ctx->pc = 0x28db94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622248u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622248u, _value); } while (0); }
    // 0x28db98: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28db98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28db9c: 0xac2027c0  sw          $zero, 0x27C0($at)
    ctx->pc = 0x28db9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6227C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227C0u, _value); } while (0);
    // 0x28dba0: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28dba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28dba4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28dba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28dba8: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x28DBA8u;
    {
        const bool branch_taken_0x28dba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dba8) {
            ctx->pc = 0x28DC18u;
            goto label_28dc18;
        }
    }
    ctx->pc = 0x28DBB0u;
    // 0x28dbb0: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x28dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x28dbb4: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x28dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x28dbb8: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x28dbb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28dbbc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x28dbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28dbc0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28dbc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28dbc4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x28dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28dbc8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x28dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x28dbcc: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x28dbccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28dbd0: 0xafb300f8  sw          $s3, 0xF8($sp)
    ctx->pc = 0x28dbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 19));
    // 0x28dbd4: 0x8fb400f8  lw          $s4, 0xF8($sp)
    ctx->pc = 0x28dbd4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x28dbd8: 0x141400  sll         $v0, $s4, 16
    ctx->pc = 0x28dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x28dbdc: 0x344300a4  ori         $v1, $v0, 0xA4
    ctx->pc = 0x28dbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)164);
    // 0x28dbe0: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x28dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
    // 0x28dbe4: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x28dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x28dbe8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x28dbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28dbec: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x28dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x28dbf0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28dbf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28dbf4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x28dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x28dbf8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x28dbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x28dbfc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28dbfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28dc00: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28dc00u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28dc04: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x28DC04u;
    SET_GPR_U32(ctx, 31, 0x28DC0Cu);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x28DC04u, 0x28DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC0Cu;
label_28dc0c:
    // 0x28dc0c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x28dc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x28dc10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28DC10u;
    {
        const bool branch_taken_0x28dc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dc10) {
            ctx->pc = 0x28DC38u;
            goto label_28dc38;
        }
    }
    ctx->pc = 0x28DC18u;
label_28dc18:
    // 0x28dc18: 0x92066624  lbu         $a2, 0x6624($s0)
    ctx->pc = 0x28dc18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28dc1c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28dc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28dc20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dc24: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DC24u;
    {
        const bool branch_taken_0x28dc24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28dc24) {
            ctx->pc = 0x28DC38u;
            goto label_28dc38;
        }
    }
    ctx->pc = 0x28DC2Cu;
    // 0x28dc2c: 0xc0a3b1c  jal         func_28EC70
    ctx->pc = 0x28DC2Cu;
    SET_GPR_U32(ctx, 31, 0x28DC34u);
    ctx->pc = 0x28EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC70u, 0x28DC2Cu, 0x28DC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC34u;
label_28dc34:
    // 0x28dc34: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x28dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_28dc38:
    // 0x28dc38: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x28dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x28dc3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28dc40: 0x106203b7  beq         $v1, $v0, . + 4 + (0x3B7 << 2)
    ctx->pc = 0x28DC40u;
    {
        const bool branch_taken_0x28dc40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28dc40) {
            ctx->pc = 0x28EB20u;
            goto label_28eb20;
        }
    }
    ctx->pc = 0x28DC48u;
    // 0x28dc48: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28dc4c: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x28dc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x28dc50: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x28dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x28dc54: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28dc58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28dc5c: 0xae035dd0  sw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 3));
    // 0x28dc60: 0x100003af  b           . + 4 + (0x3AF << 2)
    ctx->pc = 0x28DC60u;
    {
        const bool branch_taken_0x28dc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dc60) {
            ctx->pc = 0x28EB20u;
            goto label_28eb20;
        }
    }
    ctx->pc = 0x28DC68u;
label_28dc68:
    // 0x28dc68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28dc68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dc6c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dc70: 0xe4202248  swc1        $f0, 0x2248($at)
    ctx->pc = 0x28dc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622248u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622248u, _value); } while (0); }
    // 0x28dc74: 0x8e06685c  lw          $a2, 0x685C($s0)
    ctx->pc = 0x28dc74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28dc78: 0x30c30002  andi        $v1, $a2, 0x2
    ctx->pc = 0x28dc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x28dc7c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x28DC7Cu;
    {
        const bool branch_taken_0x28dc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dc7c) {
            ctx->pc = 0x28DCFCu;
            goto label_28dcfc;
        }
    }
    ctx->pc = 0x28DC84u;
    // 0x28dc84: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28dc84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28dc88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28dc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28dc8c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x28DC8Cu;
    {
        const bool branch_taken_0x28dc8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dc8c) {
            ctx->pc = 0x28DCBCu;
            goto label_28dcbc;
        }
    }
    ctx->pc = 0x28DC94u;
    // 0x28dc94: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x28DC94u;
    SET_GPR_U32(ctx, 31, 0x28DC9Cu);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x28DC94u, 0x28DC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC9Cu;
label_28dc9c:
    // 0x28dc9c: 0x144003a0  bnez        $v0, . + 4 + (0x3A0 << 2)
    ctx->pc = 0x28DC9Cu;
    {
        const bool branch_taken_0x28dc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dc9c) {
            ctx->pc = 0x28EB20u;
            goto label_28eb20;
        }
    }
    ctx->pc = 0x28DCA4u;
    // 0x28dca4: 0x8e13685c  lw          $s3, 0x685C($s0)
    ctx->pc = 0x28dca4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28dca8: 0x2414fffd  addiu       $s4, $zero, -0x3
    ctx->pc = 0x28dca8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28dcac: 0x2741024  and         $v0, $s3, $s4
    ctx->pc = 0x28dcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 20));
    // 0x28dcb0: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x28dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x28dcb4: 0x1000039a  b           . + 4 + (0x39A << 2)
    ctx->pc = 0x28DCB4u;
    {
        const bool branch_taken_0x28dcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dcb4) {
            ctx->pc = 0x28EB20u;
            goto label_28eb20;
        }
    }
    ctx->pc = 0x28DCBCu;
label_28dcbc:
    // 0x28dcbc: 0x92066624  lbu         $a2, 0x6624($s0)
    ctx->pc = 0x28dcbcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28dcc0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28dcc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28dcc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dcc8: 0x14620395  bne         $v1, $v0, . + 4 + (0x395 << 2)
    ctx->pc = 0x28DCC8u;
    {
        const bool branch_taken_0x28dcc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28dcc8) {
            ctx->pc = 0x28EB20u;
            goto label_28eb20;
        }
    }
    ctx->pc = 0x28DCD0u;
    // 0x28dcd0: 0xc0a3b1c  jal         func_28EC70
    ctx->pc = 0x28DCD0u;
    SET_GPR_U32(ctx, 31, 0x28DCD8u);
    ctx->pc = 0x28EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC70u, 0x28DCD0u, 0x28DCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DCD8u;
label_28dcd8:
    // 0x28dcd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dcdc: 0x14430390  bne         $v0, $v1, . + 4 + (0x390 << 2)
    ctx->pc = 0x28DCDCu;
    {
        const bool branch_taken_0x28dcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28dcdc) {
            ctx->pc = 0x28EB20u;
            goto label_28eb20;
        }
    }
    ctx->pc = 0x28DCE4u;
    // 0x28dce4: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x28dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28dce8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x28dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28dcec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28dcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28dcf0: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x28dcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x28dcf4: 0x1000038a  b           . + 4 + (0x38A << 2)
    ctx->pc = 0x28DCF4u;
    {
        const bool branch_taken_0x28dcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dcf4) {
            ctx->pc = 0x28EB20u;
            goto label_28eb20;
        }
    }
    ctx->pc = 0x28DCFCu;
label_28dcfc:
    // 0x28dcfc: 0x8e026870  lw          $v0, 0x6870($s0)
    ctx->pc = 0x28dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26736)));
    // 0x28dd00: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28dd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x28dd04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DD04u;
    {
        const bool branch_taken_0x28dd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dd04) {
            ctx->pc = 0x28DD1Cu;
            goto label_28dd1c;
        }
    }
    ctx->pc = 0x28DD0Cu;
    // 0x28dd0c: 0x8e036870  lw          $v1, 0x6870($s0)
    ctx->pc = 0x28dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26736)));
    // 0x28dd10: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x28dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28dd14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28dd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28dd18: 0xae026870  sw          $v0, 0x6870($s0)
    ctx->pc = 0x28dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26736), GPR_U32(ctx, 2));
label_28dd1c:
    // 0x28dd1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dd20: 0xac202250  sw          $zero, 0x2250($at)
    ctx->pc = 0x28dd20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622250u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622250u, _value); } while (0);
    // 0x28dd24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28dd28: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dd28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dd2c: 0xac2227d0  sw          $v0, 0x27D0($at)
    ctx->pc = 0x28dd2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6227D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227D0u, _value); } while (0);
    // 0x28dd30: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x28dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x28dd34: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x28dd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x28dd38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28dd38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dd3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dd40: 0xe42027e4  swc1        $f0, 0x27E4($at)
    ctx->pc = 0x28dd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6227E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227E4u, _value); } while (0); }
    // 0x28dd44: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x28dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x28dd48: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dd48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dd4c: 0xa02227e9  sb          $v0, 0x27E9($at)
    ctx->pc = 0x28dd4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6227E9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6227E9u, _value); } while (0);
    // 0x28dd50: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x28dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x28dd54: 0x3443adfd  ori         $v1, $v0, 0xADFD
    ctx->pc = 0x28dd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x28dd58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28dd58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dd5c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dd60: 0xe42027e0  swc1        $f0, 0x27E0($at)
    ctx->pc = 0x28dd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6227E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227E0u, _value); } while (0); }
    // 0x28dd64: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x28dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x28dd68: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x28dd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28dd6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28dd6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dd70: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dd74: 0xe42027ec  swc1        $f0, 0x27EC($at)
    ctx->pc = 0x28dd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6227ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227ECu, _value); } while (0); }
    // 0x28dd78: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28dd7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28dd7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dd80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dd84: 0xe42027f0  swc1        $f0, 0x27F0($at)
    ctx->pc = 0x28dd84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6227F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227F0u, _value); } while (0); }
    // 0x28dd88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28dd8c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dd90: 0xa02227f5  sb          $v0, 0x27F5($at)
    ctx->pc = 0x28dd90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6227F5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6227F5u, _value); } while (0);
    // 0x28dd94: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28dd94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28dd98: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x28dd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28dd9c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x28DD9Cu;
    {
        const bool branch_taken_0x28dd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dd9c) {
            ctx->pc = 0x28DE8Cu;
            goto label_28de8c;
        }
    }
    ctx->pc = 0x28DDA4u;
    // 0x28dda4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28dda8: 0xa2025e04  sb          $v0, 0x5E04($s0)
    ctx->pc = 0x28dda8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 2));
    // 0x28ddac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ddb0: 0xa2025dfc  sb          $v0, 0x5DFC($s0)
    ctx->pc = 0x28ddb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24060), (uint8_t)GPR_U32(ctx, 2));
    // 0x28ddb4: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x28ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x28ddb8: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x28ddb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x28ddbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ddbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ddc0: 0x0  nop
    ctx->pc = 0x28ddc0u;
    // NOP
    // 0x28ddc4: 0xe6005df0  swc1        $f0, 0x5DF0($s0)
    ctx->pc = 0x28ddc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24048), bits); }
    // 0x28ddc8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x28ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x28ddcc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x28ddccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28ddd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ddd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ddd4: 0x0  nop
    ctx->pc = 0x28ddd4u;
    // NOP
    // 0x28ddd8: 0xe6005df4  swc1        $f0, 0x5DF4($s0)
    ctx->pc = 0x28ddd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24052), bits); }
    // 0x28dddc: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x28dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x28dde0: 0x3462c28f  ori         $v0, $v1, 0xC28F
    ctx->pc = 0x28dde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x28dde4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28dde4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dde8: 0x0  nop
    ctx->pc = 0x28dde8u;
    // NOP
    // 0x28ddec: 0xe6005df8  swc1        $f0, 0x5DF8($s0)
    ctx->pc = 0x28ddecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24056), bits); }
    // 0x28ddf0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x28ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x28ddf4: 0xae025db0  sw          $v0, 0x5DB0($s0)
    ctx->pc = 0x28ddf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23984), GPR_U32(ctx, 2));
    // 0x28ddf8: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x28ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x28ddfc: 0x3443adfd  ori         $v1, $v0, 0xADFD
    ctx->pc = 0x28ddfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x28de00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28de00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28de04: 0x0  nop
    ctx->pc = 0x28de04u;
    // NOP
    // 0x28de08: 0xe6005dbc  swc1        $f0, 0x5DBC($s0)
    ctx->pc = 0x28de08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 23996), bits); }
    // 0x28de0c: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x28de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x28de10: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x28de10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x28de14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28de14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28de18: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28de18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28de1c: 0xe42027e4  swc1        $f0, 0x27E4($at)
    ctx->pc = 0x28de1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6227E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227E4u, _value); } while (0); }
    // 0x28de20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28de20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28de24: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28de24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28de28: 0xa02327e8  sb          $v1, 0x27E8($at)
    ctx->pc = 0x28de28u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6227E8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6227E8u, _value); } while (0);
    // 0x28de2c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28de30: 0x24426158  addiu       $v0, $v0, 0x6158
    ctx->pc = 0x28de30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24920));
    // 0x28de34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28de34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28de38: 0xac222800  sw          $v0, 0x2800($at)
    ctx->pc = 0x28de38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622800u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622800u, _value); } while (0);
    // 0x28de3c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28de40: 0x24442808  addiu       $a0, $v0, 0x2808
    ctx->pc = 0x28de40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10248));
    // 0x28de44: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28de44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28de48: 0x2445e7d0  addiu       $a1, $v0, -0x1830
    ctx->pc = 0x28de48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x28de4c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x28de4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x28de50: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x28DE50u;
    SET_GPR_U32(ctx, 31, 0x28DE58u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x28DE58u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28DE58u) { return; }
    ctx->pc = 0x28DE58u;
label_28de58:
    // 0x28de58: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28de58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28de5c: 0xa4202832  sh          $zero, 0x2832($at)
    ctx->pc = 0x28de5cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622832u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622832u, _value); } while (0);
    // 0x28de60: 0x3002ffff  andi        $v0, $zero, 0xFFFF
    ctx->pc = 0x28de60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x28de64: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28de64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28de68: 0xa4222830  sh          $v0, 0x2830($at)
    ctx->pc = 0x28de68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622830u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622830u, _value); } while (0);
    // 0x28de6c: 0x240201cc  addiu       $v0, $zero, 0x1CC
    ctx->pc = 0x28de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x28de70: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28de70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28de74: 0xa4222836  sh          $v0, 0x2836($at)
    ctx->pc = 0x28de74u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622836u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622836u, _value); } while (0);
    // 0x28de78: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28de78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28de7c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28de7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28de80: 0xa4222834  sh          $v0, 0x2834($at)
    ctx->pc = 0x28de80u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622834u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622834u, _value); } while (0);
    // 0x28de84: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x28DE84u;
    {
        const bool branch_taken_0x28de84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28de84) {
            ctx->pc = 0x28DF84u;
            goto label_28df84;
        }
    }
    ctx->pc = 0x28DE8Cu;
label_28de8c:
    // 0x28de8c: 0x92066624  lbu         $a2, 0x6624($s0)
    ctx->pc = 0x28de8cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28de90: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28de90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28de94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28de94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28de98: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x28DE98u;
    {
        const bool branch_taken_0x28de98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28de98) {
            ctx->pc = 0x28DF84u;
            goto label_28df84;
        }
    }
    ctx->pc = 0x28DEA0u;
    // 0x28dea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dea4: 0xa2025e04  sb          $v0, 0x5E04($s0)
    ctx->pc = 0x28dea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 2));
    // 0x28dea8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x28dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28deac: 0xa2025dfc  sb          $v0, 0x5DFC($s0)
    ctx->pc = 0x28deacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24060), (uint8_t)GPR_U32(ctx, 2));
    // 0x28deb0: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x28deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x28deb4: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x28deb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x28deb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28deb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28debc: 0x0  nop
    ctx->pc = 0x28debcu;
    // NOP
    // 0x28dec0: 0xe6005df0  swc1        $f0, 0x5DF0($s0)
    ctx->pc = 0x28dec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24048), bits); }
    // 0x28dec4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x28dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x28dec8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x28dec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28decc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28deccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ded0: 0x0  nop
    ctx->pc = 0x28ded0u;
    // NOP
    // 0x28ded4: 0xe6005df4  swc1        $f0, 0x5DF4($s0)
    ctx->pc = 0x28ded4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24052), bits); }
    // 0x28ded8: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x28ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x28dedc: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x28dedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x28dee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28dee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dee4: 0x0  nop
    ctx->pc = 0x28dee4u;
    // NOP
    // 0x28dee8: 0xe6005df8  swc1        $f0, 0x5DF8($s0)
    ctx->pc = 0x28dee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24056), bits); }
    // 0x28deec: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x28deecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x28def0: 0xae025db0  sw          $v0, 0x5DB0($s0)
    ctx->pc = 0x28def0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23984), GPR_U32(ctx, 2));
    // 0x28def4: 0x3c023ecd  lui         $v0, 0x3ECD
    ctx->pc = 0x28def4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16077 << 16));
    // 0x28def8: 0x3442e32f  ori         $v0, $v0, 0xE32F
    ctx->pc = 0x28def8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58159);
    // 0x28defc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28defcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28df00: 0x0  nop
    ctx->pc = 0x28df00u;
    // NOP
    // 0x28df04: 0xe6005dbc  swc1        $f0, 0x5DBC($s0)
    ctx->pc = 0x28df04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 23996), bits); }
    // 0x28df08: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x28df08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x28df0c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x28df0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x28df10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28df10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28df14: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28df14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28df18: 0xe42027e4  swc1        $f0, 0x27E4($at)
    ctx->pc = 0x28df18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6227E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227E4u, _value); } while (0); }
    // 0x28df1c: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x28df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x28df20: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28df20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28df24: 0xa02327e8  sb          $v1, 0x27E8($at)
    ctx->pc = 0x28df24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6227E8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6227E8u, _value); } while (0);
    // 0x28df28: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28df28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28df2c: 0x2442615c  addiu       $v0, $v0, 0x615C
    ctx->pc = 0x28df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24924));
    // 0x28df30: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28df30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28df34: 0xac222800  sw          $v0, 0x2800($at)
    ctx->pc = 0x28df34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622800u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622800u, _value); } while (0);
    // 0x28df38: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28df38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28df3c: 0x24442808  addiu       $a0, $v0, 0x2808
    ctx->pc = 0x28df3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10248));
    // 0x28df40: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28df40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28df44: 0x2445e910  addiu       $a1, $v0, -0x16F0
    ctx->pc = 0x28df44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961424));
    // 0x28df48: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x28df48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x28df4c: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x28DF4Cu;
    SET_GPR_U32(ctx, 31, 0x28DF54u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x28DF54u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28DF54u) { return; }
    ctx->pc = 0x28DF54u;
label_28df54:
    // 0x28df54: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28df54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28df58: 0xa4202830  sh          $zero, 0x2830($at)
    ctx->pc = 0x28df58u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622830u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622830u, _value); } while (0);
    // 0x28df5c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28df5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28df60: 0xa4202832  sh          $zero, 0x2832($at)
    ctx->pc = 0x28df60u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622832u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622832u, _value); } while (0);
    // 0x28df64: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x28df64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x28df68: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28df68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28df6c: 0xa4232834  sh          $v1, 0x2834($at)
    ctx->pc = 0x28df6cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622834u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622834u, _value); } while (0);
    // 0x28df70: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x28df70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x28df74: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28df74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28df78: 0xa4222836  sh          $v0, 0x2836($at)
    ctx->pc = 0x28df78u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622836u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622836u, _value); } while (0);
    // 0x28df7c: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28DF7Cu;
    SET_GPR_U32(ctx, 31, 0x28DF84u);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28DF7Cu, 0x28DF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF84u;
label_28df84:
    // 0x28df84: 0x8e025dd0  lw          $v0, 0x5DD0($s0)
    ctx->pc = 0x28df84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28df88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28df88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28df8c: 0xae025dd0  sw          $v0, 0x5DD0($s0)
    ctx->pc = 0x28df8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 2));
    // 0x28df90: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28df90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28df94: 0xac2027c0  sw          $zero, 0x27C0($at)
    ctx->pc = 0x28df94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6227C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227C0u, _value); } while (0);
    // 0x28df98: 0x100002e1  b           . + 4 + (0x2E1 << 2)
    ctx->pc = 0x28DF98u;
    {
        const bool branch_taken_0x28df98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28df98) {
            ctx->pc = 0x28EB20u;
            goto label_28eb20;
        }
    }
    ctx->pc = 0x28DFA0u;
label_28dfa0:
    // 0x28dfa0: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28dfa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28dfa4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28dfa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28dfa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dfac: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x28DFACu;
    {
        const bool branch_taken_0x28dfac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28dfac) {
            ctx->pc = 0x28E020u;
            goto label_28e020;
        }
    }
    ctx->pc = 0x28DFB4u;
    // 0x28dfb4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28dfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28dfb8: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x28dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x28dfbc: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x28dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x28dfc0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x28dfc0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x28dfc4: 0x0  nop
    ctx->pc = 0x28dfc4u;
    // NOP
    // 0x28dfc8: 0x0  nop
    ctx->pc = 0x28dfc8u;
    // NOP
    // 0x28dfcc: 0x1010  mfhi        $v0
    ctx->pc = 0x28dfccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x28dfd0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28DFD0u;
    {
        const bool branch_taken_0x28dfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dfd0) {
            ctx->pc = 0x28E020u;
            goto label_28e020;
        }
    }
    ctx->pc = 0x28DFD8u;
    // 0x28dfd8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dfd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dfdc: 0x8c2327c8  lw          $v1, 0x27C8($at)
    ctx->pc = 0x28dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6227C8u));
    // 0x28dfe0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x28dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28dfe4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dfe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dfe8: 0xac2227c8  sw          $v0, 0x27C8($at)
    ctx->pc = 0x28dfe8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6227C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227C8u, _value); } while (0);
    // 0x28dfec: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DFECu;
    {
        const bool branch_taken_0x28dfec = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x28dfec) {
            ctx->pc = 0x28DFFCu;
            goto label_28dffc;
        }
    }
    ctx->pc = 0x28DFF4u;
    // 0x28dff4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dff8: 0xac2027c8  sw          $zero, 0x27C8($at)
    ctx->pc = 0x28dff8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6227C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227C8u, _value); } while (0);
label_28dffc:
    // 0x28dffc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e000: 0x8c2227c8  lw          $v0, 0x27C8($at)
    ctx->pc = 0x28e000u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6227C8u));
    // 0x28e004: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x28e004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x28e008: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x28e008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e00c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28e00cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28e010: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28e010u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e014: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28e014u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e018: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28E018u;
    SET_GPR_U32(ctx, 31, 0x28E020u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28E018u, 0x28E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E020u;
label_28e020:
    // 0x28e020: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e024: 0xc4212248  lwc1        $f1, 0x2248($at)
    ctx->pc = 0x28e024u;
    { uint32_t bits = FAST_READ32(0x622248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e028: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e02c: 0xc42027e4  lwc1        $f0, 0x27E4($at)
    ctx->pc = 0x28e02cu;
    { uint32_t bits = FAST_READ32(0x6227E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e030: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28e030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28e034: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e038: 0xe4202248  swc1        $f0, 0x2248($at)
    ctx->pc = 0x28e038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622248u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622248u, _value); } while (0); }
    // 0x28e03c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28e03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28e040: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x28e040u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x28e044: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x28e044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28e048: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x28e048u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x28e04c: 0x0  nop
    ctx->pc = 0x28e04cu;
    // NOP
    // 0x28e050: 0x0  nop
    ctx->pc = 0x28e050u;
    // NOP
    // 0x28e054: 0x1010  mfhi        $v0
    ctx->pc = 0x28e054u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x28e058: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28E058u;
    {
        const bool branch_taken_0x28e058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e058) {
            ctx->pc = 0x28E0A8u;
            goto label_28e0a8;
        }
    }
    ctx->pc = 0x28E060u;
    // 0x28e060: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28e060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28e064: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e068: 0x8c2227d0  lw          $v0, 0x27D0($at)
    ctx->pc = 0x28e068u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6227D0u));
    // 0x28e06c: 0x24420027  addiu       $v0, $v0, 0x27
    ctx->pc = 0x28e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 39));
    // 0x28e070: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x28e070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e074: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28e074u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e078: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28e078u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e07c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28E07Cu;
    SET_GPR_U32(ctx, 31, 0x28E084u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28E07Cu, 0x28E084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E084u;
label_28e084:
    // 0x28e084: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e088: 0x8c2327d0  lw          $v1, 0x27D0($at)
    ctx->pc = 0x28e088u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6227D0u));
    // 0x28e08c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x28e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28e090: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e094: 0xac2227d0  sw          $v0, 0x27D0($at)
    ctx->pc = 0x28e094u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6227D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227D0u, _value); } while (0);
    // 0x28e098: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E098u;
    {
        const bool branch_taken_0x28e098 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28e098) {
            ctx->pc = 0x28E0A8u;
            goto label_28e0a8;
        }
    }
    ctx->pc = 0x28E0A0u;
    // 0x28e0a0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e0a4: 0xac2027d0  sw          $zero, 0x27D0($at)
    ctx->pc = 0x28e0a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6227D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227D0u, _value); } while (0);
label_28e0a8:
    // 0x28e0a8: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28e0a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e0ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28e0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e0b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e0b4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E0B4u;
    {
        const bool branch_taken_0x28e0b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28e0b4) {
            ctx->pc = 0x28E0CCu;
            goto label_28e0cc;
        }
    }
    ctx->pc = 0x28E0BCu;
    // 0x28e0bc: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28E0BCu;
    SET_GPR_U32(ctx, 31, 0x28E0C4u);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28E0BCu, 0x28E0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E0C4u;
label_28e0c4:
    // 0x28e0c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28E0C4u;
    {
        const bool branch_taken_0x28e0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e0c4) {
            ctx->pc = 0x28E0E8u;
            goto label_28e0e8;
        }
    }
    ctx->pc = 0x28E0CCu;
label_28e0cc:
    // 0x28e0cc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x28e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x28e0d0: 0x24642808  addiu       $a0, $v1, 0x2808
    ctx->pc = 0x28e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10248));
    // 0x28e0d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28e0d8: 0x2445e7d0  addiu       $a1, $v0, -0x1830
    ctx->pc = 0x28e0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x28e0dc: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x28e0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x28e0e0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x28E0E0u;
    SET_GPR_U32(ctx, 31, 0x28E0E8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x28E0E8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28E0E8u) { return; }
    ctx->pc = 0x28E0E8u;
label_28e0e8:
    // 0x28e0e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28e0e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28e0ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28e0f0: 0x244427e0  addiu       $a0, $v0, 0x27E0
    ctx->pc = 0x28e0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10208));
    // 0x28e0f4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x28e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x28e0f8: 0x2445bf58  addiu       $a1, $v0, -0x40A8
    ctx->pc = 0x28e0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950744));
    // 0x28e0fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28e100: 0x24462800  addiu       $a2, $v0, 0x2800
    ctx->pc = 0x28e100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10240));
    // 0x28e104: 0xc0a4474  jal         func_2911D0
    ctx->pc = 0x28E104u;
    SET_GPR_U32(ctx, 31, 0x28E10Cu);
    ctx->pc = 0x2911D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911D0u, 0x28E104u, 0x28E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E10Cu;
label_28e10c:
    // 0x28e10c: 0x10400284  beqz        $v0, . + 4 + (0x284 << 2)
    ctx->pc = 0x28E10Cu;
    {
        const bool branch_taken_0x28e10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e10c) {
            ctx->pc = 0x28EB20u;
            goto label_28eb20;
        }
    }
    ctx->pc = 0x28E114u;
    // 0x28e114: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28e114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e118: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x28e118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28e11c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x28E11Cu;
    {
        const bool branch_taken_0x28e11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e11c) {
            ctx->pc = 0x28E180u;
            goto label_28e180;
        }
    }
    ctx->pc = 0x28E124u;
    // 0x28e124: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x28e124u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28e128: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x28e128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28e12c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x28e12cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x28e130: 0x82065de8  lb          $a2, 0x5DE8($s0)
    ctx->pc = 0x28e130u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24040)));
    // 0x28e134: 0x6163c  dsll32      $v0, $a2, 24
    ctx->pc = 0x28e134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
    // 0x28e138: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x28e138u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x28e13c: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E13Cu;
    {
        const bool branch_taken_0x28e13c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x28e13c) {
            ctx->pc = 0x28E160u;
            goto label_28e160;
        }
    }
    ctx->pc = 0x28E144u;
    // 0x28e144: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x28e144u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e148: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28e148u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e14c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28e14cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e150: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x28E150u;
    SET_GPR_U32(ctx, 31, 0x28E158u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x28E150u, 0x28E158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E158u;
label_28e158:
    // 0x28e158: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x28E158u;
    {
        const bool branch_taken_0x28e158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e158) {
            ctx->pc = 0x28E1E8u;
            goto label_28e1e8;
        }
    }
    ctx->pc = 0x28E160u;
label_28e160:
    // 0x28e160: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x28e160u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e164: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x28e164u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e168: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x28e168u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x28e16c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28e16cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e170: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x28E170u;
    SET_GPR_U32(ctx, 31, 0x28E178u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x28E170u, 0x28E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E178u;
label_28e178:
    // 0x28e178: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x28E178u;
    {
        const bool branch_taken_0x28e178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e178) {
            ctx->pc = 0x28E1E8u;
            goto label_28e1e8;
        }
    }
    ctx->pc = 0x28E180u;
label_28e180:
    // 0x28e180: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28e180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e184: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28e184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e18c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28E18Cu;
    {
        const bool branch_taken_0x28e18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28e18c) {
            ctx->pc = 0x28E1E8u;
            goto label_28e1e8;
        }
    }
    ctx->pc = 0x28E194u;
    // 0x28e194: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x28e194u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28e198: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x28e198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28e19c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28e19cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28e1a0: 0x82025de9  lb          $v0, 0x5DE9($s0)
    ctx->pc = 0x28e1a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24041)));
    // 0x28e1a4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x28e1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28e1a8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x28e1a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x28e1ac: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x28e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28e1b0: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E1B0u;
    {
        const bool branch_taken_0x28e1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x28e1b0) {
            ctx->pc = 0x28E1D4u;
            goto label_28e1d4;
        }
    }
    ctx->pc = 0x28E1B8u;
    // 0x28e1b8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x28e1b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e1bc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x28e1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28e1c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28e1c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e1c4: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x28E1C4u;
    SET_GPR_U32(ctx, 31, 0x28E1CCu);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x28E1C4u, 0x28E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E1CCu;
label_28e1cc:
    // 0x28e1cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28E1CCu;
    {
        const bool branch_taken_0x28e1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e1cc) {
            ctx->pc = 0x28E1E8u;
            goto label_28e1e8;
        }
    }
    ctx->pc = 0x28E1D4u;
label_28e1d4:
    // 0x28e1d4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x28e1d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e1d8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x28e1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28e1dc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28e1dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e1e0: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x28E1E0u;
    SET_GPR_U32(ctx, 31, 0x28E1E8u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x28E1E0u, 0x28E1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E1E8u;
label_28e1e8:
    // 0x28e1e8: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28e1ec: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x28e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28e1f0: 0xae025dd0  sw          $v0, 0x5DD0($s0)
    ctx->pc = 0x28e1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 2));
    // 0x28e1f4: 0x1000024a  b           . + 4 + (0x24A << 2)
    ctx->pc = 0x28E1F4u;
    {
        const bool branch_taken_0x28e1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e1f4) {
            ctx->pc = 0x28EB20u;
            goto label_28eb20;
        }
    }
    ctx->pc = 0x28E1FCu;
label_28e1fc:
    // 0x28e1fc: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28e1fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e200: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28e200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e204: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28e204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e208: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x28E208u;
    {
        const bool branch_taken_0x28e208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28e208) {
            ctx->pc = 0x28E280u;
            goto label_28e280;
        }
    }
    ctx->pc = 0x28E210u;
    // 0x28e210: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28e210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28e214: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x28e214u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x28e218: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x28e218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x28e21c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x28e21cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x28e220: 0x0  nop
    ctx->pc = 0x28e220u;
    // NOP
    // 0x28e224: 0x0  nop
    ctx->pc = 0x28e224u;
    // NOP
    // 0x28e228: 0x1010  mfhi        $v0
    ctx->pc = 0x28e228u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x28e22c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28E22Cu;
    {
        const bool branch_taken_0x28e22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e22c) {
            ctx->pc = 0x28E280u;
            goto label_28e280;
        }
    }
    ctx->pc = 0x28E234u;
    // 0x28e234: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e238: 0x8c2227c8  lw          $v0, 0x27C8($at)
    ctx->pc = 0x28e238u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6227C8u));
    // 0x28e23c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x28e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28e240: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e244: 0xac2327c8  sw          $v1, 0x27C8($at)
    ctx->pc = 0x28e244u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6227C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227C8u, _value); } while (0);
    // 0x28e248: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E248u;
    {
        const bool branch_taken_0x28e248 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x28e248) {
            ctx->pc = 0x28E258u;
            goto label_28e258;
        }
    }
    ctx->pc = 0x28E250u;
    // 0x28e250: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e254: 0xac2027c8  sw          $zero, 0x27C8($at)
    ctx->pc = 0x28e254u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6227C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227C8u, _value); } while (0);
label_28e258:
    // 0x28e258: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28e258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28e25c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e260: 0x8c2427c8  lw          $a0, 0x27C8($at)
    ctx->pc = 0x28e260u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6227C8u));
    // 0x28e264: 0x24850200  addiu       $a1, $a0, 0x200
    ctx->pc = 0x28e264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x28e268: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x28e268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x28e26c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28e26cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e270: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28e270u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e274: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28e274u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e278: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28E278u;
    SET_GPR_U32(ctx, 31, 0x28E280u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28E278u, 0x28E280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E280u;
label_28e280:
    // 0x28e280: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28e280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e284: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x28e284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28e288: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E288u;
    {
        const bool branch_taken_0x28e288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e288) {
            ctx->pc = 0x28E2A4u;
            goto label_28e2a4;
        }
    }
    ctx->pc = 0x28E290u;
    // 0x28e290: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28e290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28e294: 0x2443e7d0  addiu       $v1, $v0, -0x1830
    ctx->pc = 0x28e294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x28e298: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x28e298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x28e29c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28E29Cu;
    {
        const bool branch_taken_0x28e29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e29c) {
            ctx->pc = 0x28E2CCu;
            goto label_28e2cc;
        }
    }
    ctx->pc = 0x28E2A4u;
label_28e2a4:
    // 0x28e2a4: 0x92066624  lbu         $a2, 0x6624($s0)
    ctx->pc = 0x28e2a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e2a8: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28e2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28e2ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e2b0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E2B0u;
    {
        const bool branch_taken_0x28e2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28e2b0) {
            ctx->pc = 0x28E2CCu;
            goto label_28e2cc;
        }
    }
    ctx->pc = 0x28E2B8u;
    // 0x28e2b8: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28E2B8u;
    SET_GPR_U32(ctx, 31, 0x28E2C0u);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28E2B8u, 0x28E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E2C0u;
label_28e2c0:
    // 0x28e2c0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28e2c4: 0x2462e910  addiu       $v0, $v1, -0x16F0
    ctx->pc = 0x28e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961424));
    // 0x28e2c8: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x28e2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_28e2cc:
    // 0x28e2cc: 0x26024970  addiu       $v0, $s0, 0x4970
    ctx->pc = 0x28e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 18800));
    // 0x28e2d0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x28e2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x28e2d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28e2d8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x28e2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x28e2dc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28e2e0: 0x3442103b  ori         $v0, $v0, 0x103B
    ctx->pc = 0x28e2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4155);
    // 0x28e2e4: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x28e2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x28e2e8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x28e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28e2ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28e2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28e2f0: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x28e2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x28e2f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e2f8: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x28e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x28e2fc: 0x24670018  addiu       $a3, $v1, 0x18
    ctx->pc = 0x28e2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x28e300: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x28e300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x28e304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28e304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28e308: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28e308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28e30c: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x28e30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x28e310: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x28e310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x28e314: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x28e314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e318: 0xa0e20004  sb          $v0, 0x4($a3)
    ctx->pc = 0x28e318u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x28e31c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28e320: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x28e320u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x28e324: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28e324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28e328: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x28e328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x28e32c: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x28e32cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x28e330: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x28e330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x28e334: 0xfea30008  sd          $v1, 0x8($s5)
    ctx->pc = 0x28e334u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 3));
    // 0x28e338: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28e338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28e33c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x28e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x28e340: 0x3c038800  lui         $v1, 0x8800
    ctx->pc = 0x28e340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34816 << 16));
    // 0x28e344: 0x34623b14  ori         $v0, $v1, 0x3B14
    ctx->pc = 0x28e344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15124);
    // 0x28e348: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x28e348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x28e34c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e350: 0x94222834  lhu         $v0, 0x2834($at)
    ctx->pc = 0x28e350u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622834u));
    // 0x28e354: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28e354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e358: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e35c: 0x94222830  lhu         $v0, 0x2830($at)
    ctx->pc = 0x28e35cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622830u));
    // 0x28e360: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28e360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e364: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x28e364u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e368: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x28e368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x28e36c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e370: 0x94222836  lhu         $v0, 0x2836($at)
    ctx->pc = 0x28e370u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622836u));
    // 0x28e374: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28e374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e378: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e37c: 0x94222832  lhu         $v0, 0x2832($at)
    ctx->pc = 0x28e37cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622832u));
    // 0x28e380: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28e380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e384: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x28e384u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e388: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x28e388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x28e38c: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28e38cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e390: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28e390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e394: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x28E394u;
    {
        const bool branch_taken_0x28e394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e394) {
            ctx->pc = 0x28E500u;
            goto label_28e500;
        }
    }
    ctx->pc = 0x28E39Cu;
    // 0x28e39c: 0x24130100  addiu       $s3, $zero, 0x100
    ctx->pc = 0x28e39cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x28e3a0: 0x241400e0  addiu       $s4, $zero, 0xE0
    ctx->pc = 0x28e3a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x28e3a4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28e3a4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e3a8: 0x0  nop
    ctx->pc = 0x28e3a8u;
    // NOP
    // 0x28e3ac: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28e3acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28e3b0: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x28e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x28e3b4: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x28e3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x28e3b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28e3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e3bc: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x28e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x28e3c0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E3C0u;
    {
        const bool branch_taken_0x28e3c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28e3c0) {
            ctx->pc = 0x28E3DCu;
            goto label_28e3dc;
        }
    }
    ctx->pc = 0x28E3C8u;
    // 0x28e3c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e3c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e3cc: 0x0  nop
    ctx->pc = 0x28e3ccu;
    // NOP
    // 0x28e3d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e3d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e3d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28E3D4u;
    {
        const bool branch_taken_0x28e3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e3d4) {
            ctx->pc = 0x28E3F8u;
            goto label_28e3f8;
        }
    }
    ctx->pc = 0x28E3DCu;
label_28e3dc:
    // 0x28e3dc: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x28e3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x28e3e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28e3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28e3e4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x28e3e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x28e3e8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28e3e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e3ec: 0x0  nop
    ctx->pc = 0x28e3ecu;
    // NOP
    // 0x28e3f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e3f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e3f4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e3f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28e3f8:
    // 0x28e3f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28e3f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e3fc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28e400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e404: 0x0  nop
    ctx->pc = 0x28e404u;
    // NOP
    // 0x28e408: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28e408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28e40c: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x28e40cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28e410: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28E410u;
    SET_GPR_U32(ctx, 31, 0x28E418u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28E410u, 0x28E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E418u;
label_28e418:
    // 0x28e418: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28e418u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e41c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x28e41cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e420: 0x0  nop
    ctx->pc = 0x28e420u;
    // NOP
    // 0x28e424: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28e424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28e428: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28e428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28e42c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28e42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e430: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x28e430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x28e434: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E434u;
    {
        const bool branch_taken_0x28e434 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x28e434) {
            ctx->pc = 0x28E450u;
            goto label_28e450;
        }
    }
    ctx->pc = 0x28E43Cu;
    // 0x28e43c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28e43cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e440: 0x0  nop
    ctx->pc = 0x28e440u;
    // NOP
    // 0x28e444: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e448: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28E448u;
    {
        const bool branch_taken_0x28e448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e448) {
            ctx->pc = 0x28E46Cu;
            goto label_28e46c;
        }
    }
    ctx->pc = 0x28E450u;
label_28e450:
    // 0x28e450: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x28e450u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x28e454: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x28e454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x28e458: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28e458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e45c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28e45cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e460: 0x0  nop
    ctx->pc = 0x28e460u;
    // NOP
    // 0x28e464: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e468: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28e46c:
    // 0x28e46c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28e46cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e470: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x28e470u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28e474: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28E474u;
    SET_GPR_U32(ctx, 31, 0x28E47Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28E474u, 0x28E47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E47Cu;
label_28e47c:
    // 0x28e47c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x28e47cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e480: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28e480u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e484: 0x0  nop
    ctx->pc = 0x28e484u;
    // NOP
    // 0x28e488: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28e488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28e48c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x28e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x28e490: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x28e490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28e494: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28e494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e498: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x28e498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x28e49c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E49Cu;
    {
        const bool branch_taken_0x28e49c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x28e49c) {
            ctx->pc = 0x28E4B8u;
            goto label_28e4b8;
        }
    }
    ctx->pc = 0x28E4A4u;
    // 0x28e4a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28e4a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e4a8: 0x0  nop
    ctx->pc = 0x28e4a8u;
    // NOP
    // 0x28e4ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e4acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e4b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28E4B0u;
    {
        const bool branch_taken_0x28e4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e4b0) {
            ctx->pc = 0x28E4D4u;
            goto label_28e4d4;
        }
    }
    ctx->pc = 0x28E4B8u;
label_28e4b8:
    // 0x28e4b8: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x28e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x28e4bc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x28e4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x28e4c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28e4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28e4c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e4c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e4c8: 0x0  nop
    ctx->pc = 0x28e4c8u;
    // NOP
    // 0x28e4cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e4ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e4d0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e4d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28e4d4:
    // 0x28e4d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28e4d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e4d8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x28e4d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28e4dc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28E4DCu;
    SET_GPR_U32(ctx, 31, 0x28E4E4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28E4DCu, 0x28E4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4E4u;
label_28e4e4:
    // 0x28e4e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28e4e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e4e8: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x28e4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x28e4ec: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x28e4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x28e4f0: 0x2861821  addu        $v1, $s4, $a2
    ctx->pc = 0x28e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x28e4f4: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x28e4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x28e4f8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x28E4F8u;
    {
        const bool branch_taken_0x28e4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e4f8) {
            ctx->pc = 0x28E5FCu;
            goto label_28e5fc;
        }
    }
    ctx->pc = 0x28E500u;
label_28e500:
    // 0x28e500: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28e500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e504: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28e504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e50c: 0x1462003b  bne         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x28E50Cu;
    {
        const bool branch_taken_0x28e50c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28e50c) {
            ctx->pc = 0x28E5FCu;
            goto label_28e5fc;
        }
    }
    ctx->pc = 0x28E514u;
    // 0x28e514: 0x24130100  addiu       $s3, $zero, 0x100
    ctx->pc = 0x28e514u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x28e518: 0x241400e0  addiu       $s4, $zero, 0xE0
    ctx->pc = 0x28e518u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x28e51c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28e51cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e520: 0x0  nop
    ctx->pc = 0x28e520u;
    // NOP
    // 0x28e524: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28e524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28e528: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28e528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28e52c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28e52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e530: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x28e530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x28e534: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E534u;
    {
        const bool branch_taken_0x28e534 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x28e534) {
            ctx->pc = 0x28E550u;
            goto label_28e550;
        }
    }
    ctx->pc = 0x28E53Cu;
    // 0x28e53c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28e53cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e540: 0x0  nop
    ctx->pc = 0x28e540u;
    // NOP
    // 0x28e544: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e548: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28E548u;
    {
        const bool branch_taken_0x28e548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e548) {
            ctx->pc = 0x28E56Cu;
            goto label_28e56c;
        }
    }
    ctx->pc = 0x28E550u;
label_28e550:
    // 0x28e550: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x28e550u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x28e554: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x28e554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x28e558: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28e558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e55c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28e55cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e560: 0x0  nop
    ctx->pc = 0x28e560u;
    // NOP
    // 0x28e564: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e568: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28e56c:
    // 0x28e56c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28e56cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e570: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x28e570u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28e574: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28E574u;
    SET_GPR_U32(ctx, 31, 0x28E57Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28E574u, 0x28E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E57Cu;
label_28e57c:
    // 0x28e57c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28e57cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e580: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x28e580u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e584: 0x0  nop
    ctx->pc = 0x28e584u;
    // NOP
    // 0x28e588: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28e588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28e58c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x28e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x28e590: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28e590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e594: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x28e594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x28e598: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E598u;
    {
        const bool branch_taken_0x28e598 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28e598) {
            ctx->pc = 0x28E5B4u;
            goto label_28e5b4;
        }
    }
    ctx->pc = 0x28E5A0u;
    // 0x28e5a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e5a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e5a4: 0x0  nop
    ctx->pc = 0x28e5a4u;
    // NOP
    // 0x28e5a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e5a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e5ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28E5ACu;
    {
        const bool branch_taken_0x28e5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e5ac) {
            ctx->pc = 0x28E5D0u;
            goto label_28e5d0;
        }
    }
    ctx->pc = 0x28E5B4u;
label_28e5b4:
    // 0x28e5b4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x28e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x28e5b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28e5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28e5bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28e5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e5c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28e5c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e5c4: 0x0  nop
    ctx->pc = 0x28e5c4u;
    // NOP
    // 0x28e5c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e5c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e5cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e5ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28e5d0:
    // 0x28e5d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28e5d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e5d4: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x28e5d4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28e5d8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28E5D8u;
    SET_GPR_U32(ctx, 31, 0x28E5E0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28E5D8u, 0x28E5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E5E0u;
label_28e5e0:
    // 0x28e5e0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x28e5e0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e5e4: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x28e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x28e5e8: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x28e5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x28e5ec: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x28e5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x28e5f0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x28e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x28e5f4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x28e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x28e5f8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x28e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_28e5fc:
    // 0x28e5fc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28e600: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x28e600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x28e604: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x28e604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x28e608: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x28e608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28e60c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28e610: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28e610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e614: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x28e614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x28e618: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x28e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28e61c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28e620: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28e620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e624: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x28e624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x28e628: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28e628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28e62c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x28e62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x28e630: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x28e630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28e634: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28e634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28e638: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x28e638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28e63c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28e640: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28e644: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28e644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e648: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x28e648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x28e64c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x28e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28e650: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28e650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28e654: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28e654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e658: 0x26420024  addiu       $v0, $s2, 0x24
    ctx->pc = 0x28e658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x28e65c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28e65cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28e660: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x28e660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x28e664: 0x26420028  addiu       $v0, $s2, 0x28
    ctx->pc = 0x28e664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x28e668: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28e668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28e66c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x28e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28e670: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28e670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28e674: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28e674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e678: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x28e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28e67c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28e680: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x28e680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28e684: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x28e684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28e688: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x28e688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x28e68c: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x28e68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x28e690: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x28e690u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x28e694: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x28e694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x28e698: 0x26420034  addiu       $v0, $s2, 0x34
    ctx->pc = 0x28e698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x28e69c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x28e69cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x28e6a0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x28e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28e6a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28e6a8: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28e6ac: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x28e6acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e6b0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x28e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28e6b4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x28e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28e6b8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x28e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28e6bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28e6c0: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x28e6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x28e6c4: 0x2642003c  addiu       $v0, $s2, 0x3C
    ctx->pc = 0x28e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x28e6c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28e6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28e6cc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x28e6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x28e6d0: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x28e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x28e6d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28e6d8: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x28e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x28e6dc: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x28e6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x28e6e0: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x28e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x28e6e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28e6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28e6e8: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28e6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e6ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28e6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e6f0: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x28E6F0u;
    {
        const bool branch_taken_0x28e6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e6f0) {
            ctx->pc = 0x28E7C0u;
            goto label_28e7c0;
        }
    }
    ctx->pc = 0x28E6F8u;
    // 0x28e6f8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e6fc: 0x94222830  lhu         $v0, 0x2830($at)
    ctx->pc = 0x28e6fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622830u));
    // 0x28e700: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28e700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e704: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28e704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28e708: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e70c: 0x94222832  lhu         $v0, 0x2832($at)
    ctx->pc = 0x28e70cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622832u));
    // 0x28e710: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28e710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e714: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28e714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28e718: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x28e718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28e71c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x28e71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x28e720: 0x26450014  addiu       $a1, $s2, 0x14
    ctx->pc = 0x28e720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x28e724: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x28e724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x28e728: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e72c: 0x94262834  lhu         $a2, 0x2834($at)
    ctx->pc = 0x28e72cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x622834u));
    // 0x28e730: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x28e730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x28e734: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28e734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28e738: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e73c: 0x94222832  lhu         $v0, 0x2832($at)
    ctx->pc = 0x28e73cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622832u));
    // 0x28e740: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28e740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e744: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28e744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28e748: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28e748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28e74c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x28e74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e750: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x28e750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x28e754: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28e754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28e758: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e75c: 0x94222830  lhu         $v0, 0x2830($at)
    ctx->pc = 0x28e75cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622830u));
    // 0x28e760: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28e760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e764: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x28e764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28e768: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e76c: 0x94222836  lhu         $v0, 0x2836($at)
    ctx->pc = 0x28e76cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622836u));
    // 0x28e770: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28e770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e774: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x28e774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28e778: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28e778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28e77c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x28e77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x28e780: 0x2644002c  addiu       $a0, $s2, 0x2C
    ctx->pc = 0x28e780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x28e784: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x28e784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x28e788: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e78c: 0x94222834  lhu         $v0, 0x2834($at)
    ctx->pc = 0x28e78cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622834u));
    // 0x28e790: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28e790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e794: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28e794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28e798: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e79c: 0x94222836  lhu         $v0, 0x2836($at)
    ctx->pc = 0x28e79cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622836u));
    // 0x28e7a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28e7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e7a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28e7a8: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x28e7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28e7ac: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x28e7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x28e7b0: 0x26430038  addiu       $v1, $s2, 0x38
    ctx->pc = 0x28e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x28e7b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28e7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28e7b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x28E7B8u;
    {
        const bool branch_taken_0x28e7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e7b8) {
            ctx->pc = 0x28E804u;
            goto label_28e804;
        }
    }
    ctx->pc = 0x28E7C0u;
label_28e7c0:
    // 0x28e7c0: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28e7c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e7c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28e7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e7c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e7cc: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28E7CCu;
    {
        const bool branch_taken_0x28e7cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28e7cc) {
            ctx->pc = 0x28E804u;
            goto label_28e804;
        }
    }
    ctx->pc = 0x28E7D4u;
    // 0x28e7d4: 0x26420014  addiu       $v0, $s2, 0x14
    ctx->pc = 0x28e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x28e7d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28e7dc: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x28e7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x28e7e0: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x28e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x28e7e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28e7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28e7e8: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x28e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x28e7ec: 0x2643002c  addiu       $v1, $s2, 0x2C
    ctx->pc = 0x28e7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x28e7f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28e7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28e7f4: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x28e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x28e7f8: 0x34442000  ori         $a0, $v0, 0x2000
    ctx->pc = 0x28e7f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x28e7fc: 0x26450038  addiu       $a1, $s2, 0x38
    ctx->pc = 0x28e7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x28e800: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x28e800u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_28e804:
    // 0x28e804: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x28e804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x28e808: 0xae460008  sw          $a2, 0x8($s2)
    ctx->pc = 0x28e808u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 6));
    // 0x28e80c: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28e80cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e810: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28e810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e814: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28E814u;
    {
        const bool branch_taken_0x28e814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e814) {
            ctx->pc = 0x28E854u;
            goto label_28e854;
        }
    }
    ctx->pc = 0x28E81Cu;
    // 0x28e81c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x28e81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28e820: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x28e820u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x28e824: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E824u;
    SET_GPR_U32(ctx, 31, 0x28E82Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E824u, 0x28E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E82Cu;
label_28e82c:
    // 0x28e82c: 0x26450044  addiu       $a1, $s2, 0x44
    ctx->pc = 0x28e82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x28e830: 0x70a09628  paddub      $s2, $a1, $zero
    ctx->pc = 0x28e830u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x28e834: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x28e834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28e838: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28e838u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e83c: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x28e83cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x28e840: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E840u;
    SET_GPR_U32(ctx, 31, 0x28E848u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E840u, 0x28E848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E848u;
label_28e848:
    // 0x28e848: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28e848u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e84c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x28E84Cu;
    {
        const bool branch_taken_0x28e84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e84c) {
            ctx->pc = 0x28E96Cu;
            goto label_28e96c;
        }
    }
    ctx->pc = 0x28E854u;
label_28e854:
    // 0x28e854: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28e854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e858: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28e858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e85c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e860: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x28E860u;
    {
        const bool branch_taken_0x28e860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28e860) {
            ctx->pc = 0x28E96Cu;
            goto label_28e96c;
        }
    }
    ctx->pc = 0x28E868u;
    // 0x28e868: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x28e868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28e86c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28e86cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e870: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x28e870u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x28e874: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E874u;
    SET_GPR_U32(ctx, 31, 0x28E87Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E874u, 0x28E87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E87Cu;
label_28e87c:
    // 0x28e87c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28e87cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e880: 0x26460044  addiu       $a2, $s2, 0x44
    ctx->pc = 0x28e880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x28e884: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x28e884u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28e888: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x28e888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28e88c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28e88cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e890: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x28e890u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x28e894: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E894u;
    SET_GPR_U32(ctx, 31, 0x28E89Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E894u, 0x28E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E89Cu;
label_28e89c:
    // 0x28e89c: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x28e89cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    // 0x28e8a0: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x28e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
    // 0x28e8a4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28e8a8: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x28e8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x28e8ac: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x28e8b0: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x28e8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x28e8b4: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x28e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28e8b8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28e8b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28e8bc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x28e8bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x28e8c0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E8C0u;
    SET_GPR_U32(ctx, 31, 0x28E8C8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E8C0u, 0x28E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E8C8u;
label_28e8c8:
    // 0x28e8c8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x28e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28e8cc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x28e8ccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e8d0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28e8d4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28e8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28e8d8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28e8dc: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x28e8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x28e8e0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28e8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x28e8e4: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x28e8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x28e8e8: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x28e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28e8ec: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x28e8ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x28e8f0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E8F0u;
    SET_GPR_U32(ctx, 31, 0x28E8F8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E8F0u, 0x28E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E8F8u;
label_28e8f8:
    // 0x28e8f8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28e8f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e8fc: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x28e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28e900: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x28e900u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e904: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x28e904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x28e908: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x28e908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x28e90c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28e910: 0x3462103b  ori         $v0, $v1, 0x103B
    ctx->pc = 0x28e910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4155);
    // 0x28e914: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28e914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x28e918: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x28e918u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x28e91c: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x28e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28e920: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28e920u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e924: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x28e924u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x28e928: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E928u;
    SET_GPR_U32(ctx, 31, 0x28E930u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E928u, 0x28E930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E930u;
label_28e930:
    // 0x28e930: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x28e930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28e934: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x28e934u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e938: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28e938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28e93c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28e93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28e940: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28e940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28e944: 0x3462103f  ori         $v0, $v1, 0x103F
    ctx->pc = 0x28e944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4159);
    // 0x28e948: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28e948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x28e94c: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x28e94cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x28e950: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x28e950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28e954: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28e954u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e958: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x28e958u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x28e95c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E95Cu;
    SET_GPR_U32(ctx, 31, 0x28E964u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E95Cu, 0x28E964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E964u;
label_28e964:
    // 0x28e964: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x28e964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28e968: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x28e968u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_28e96c:
    // 0x28e96c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x28e96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28e970: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x28e970u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x28e974: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E974u;
    SET_GPR_U32(ctx, 31, 0x28E97Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E974u, 0x28E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E97Cu;
label_28e97c:
    // 0x28e97c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28e97cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e980: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x28e980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28e984: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28e984u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e988: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x28e988u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x28e98c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E98Cu;
    SET_GPR_U32(ctx, 31, 0x28E994u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E98Cu, 0x28E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E994u;
label_28e994:
    // 0x28e994: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x28e994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28e998: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28e998u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28e99c: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x28e99cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x28e9a0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E9A0u;
    SET_GPR_U32(ctx, 31, 0x28E9A8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E9A0u, 0x28E9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E9A8u;
label_28e9a8:
    // 0x28e9a8: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x28e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28e9ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28e9acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e9b0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x28e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x28e9b4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28e9b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28e9b8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E9B8u;
    SET_GPR_U32(ctx, 31, 0x28E9C0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E9B8u, 0x28E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E9C0u;
label_28e9c0:
    // 0x28e9c0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28e9c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e9c4: 0x92036854  lbu         $v1, 0x6854($s0)
    ctx->pc = 0x28e9c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26708)));
    // 0x28e9c8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x28e9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28e9cc: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x28E9CCu;
    {
        const bool branch_taken_0x28e9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e9cc) {
            ctx->pc = 0x28EAE0u;
            goto label_28eae0;
        }
    }
    ctx->pc = 0x28E9D4u;
    // 0x28e9d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28e9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28e9d8: 0x8c22011c  lw          $v0, 0x11C($at)
    ctx->pc = 0x28e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x28e9dc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x28e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x28e9e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28e9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28e9e4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x28E9E4u;
    {
        const bool branch_taken_0x28e9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e9e4) {
            ctx->pc = 0x28EAA8u;
            goto label_28eaa8;
        }
    }
    ctx->pc = 0x28E9ECu;
    // 0x28e9ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28e9ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28e9f0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x28e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x28e9f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28e9f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e9f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28e9f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e9fc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28e9fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28ea00: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28EA00u;
    SET_GPR_U32(ctx, 31, 0x28EA08u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28EA00u, 0x28EA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA08u;
label_28ea08:
    // 0x28ea08: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28ea08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28ea0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28ea0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ea10: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28EA10u;
    {
        const bool branch_taken_0x28ea10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ea10) {
            ctx->pc = 0x28EA60u;
            goto label_28ea60;
        }
    }
    ctx->pc = 0x28EA18u;
    // 0x28ea18: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x28ea18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x28ea1c: 0x8c22c294  lw          $v0, -0x3D6C($at)
    ctx->pc = 0x28ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC294u));
    // 0x28ea20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28EA20u;
    {
        const bool branch_taken_0x28ea20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ea20) {
            ctx->pc = 0x28EA38u;
            goto label_28ea38;
        }
    }
    ctx->pc = 0x28EA28u;
    // 0x28ea28: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x28ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28ea2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28ea2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ea30: 0xc0d7558  jal         func_35D560
    ctx->pc = 0x28EA30u;
    SET_GPR_U32(ctx, 31, 0x28EA38u);
    ctx->pc = 0x35D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D560u, 0x28EA30u, 0x28EA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA38u;
label_28ea38:
    // 0x28ea38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ea3c: 0xa2036854  sb          $v1, 0x6854($s0)
    ctx->pc = 0x28ea3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26708), (uint8_t)GPR_U32(ctx, 3));
    // 0x28ea40: 0x82075dea  lb          $a3, 0x5DEA($s0)
    ctx->pc = 0x28ea40u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28ea44: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x28ea44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x28ea48: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x28ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x28ea4c: 0xa04313f8  sb          $v1, 0x13F8($v0)
    ctx->pc = 0x28ea4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5112), (uint8_t)GPR_U32(ctx, 3));
    // 0x28ea50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ea54: 0xa2026609  sb          $v0, 0x6609($s0)
    ctx->pc = 0x28ea54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26121), (uint8_t)GPR_U32(ctx, 2));
    // 0x28ea58: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28EA58u;
    {
        const bool branch_taken_0x28ea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ea58) {
            ctx->pc = 0x28EAA8u;
            goto label_28eaa8;
        }
    }
    ctx->pc = 0x28EA60u;
label_28ea60:
    // 0x28ea60: 0x92066624  lbu         $a2, 0x6624($s0)
    ctx->pc = 0x28ea60u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28ea64: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28ea64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28ea68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ea6c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28EA6Cu;
    {
        const bool branch_taken_0x28ea6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28ea6c) {
            ctx->pc = 0x28EAA8u;
            goto label_28eaa8;
        }
    }
    ctx->pc = 0x28EA74u;
    // 0x28ea74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ea78: 0xae025dcc  sw          $v0, 0x5DCC($s0)
    ctx->pc = 0x28ea78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 2));
    // 0x28ea7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ea80: 0xae025dd0  sw          $v0, 0x5DD0($s0)
    ctx->pc = 0x28ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 2));
    // 0x28ea84: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x28ea84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28ea88: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x28ea88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28ea8c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28ea8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28ea90: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x28ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28ea94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28ea94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ea98: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x28ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x28ea9c: 0xa06213a6  sb          $v0, 0x13A6($v1)
    ctx->pc = 0x28ea9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5030), (uint8_t)GPR_U32(ctx, 2));
    // 0x28eaa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eaa4: 0xa202660a  sb          $v0, 0x660A($s0)
    ctx->pc = 0x28eaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26122), (uint8_t)GPR_U32(ctx, 2));
label_28eaa8:
    // 0x28eaa8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28eaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28eaac: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x28eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x28eab0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x28eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x28eab4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28eab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28eab8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28EAB8u;
    {
        const bool branch_taken_0x28eab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eab8) {
            ctx->pc = 0x28EB20u;
            goto label_28eb20;
        }
    }
    ctx->pc = 0x28EAC0u;
    // 0x28eac0: 0xa2006854  sb          $zero, 0x6854($s0)
    ctx->pc = 0x28eac0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26708), (uint8_t)GPR_U32(ctx, 0));
    // 0x28eac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eac8: 0xae025dcc  sw          $v0, 0x5DCC($s0)
    ctx->pc = 0x28eac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 2));
    // 0x28eacc: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x28eaccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x28ead0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ead0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ead4: 0xac202250  sw          $zero, 0x2250($at)
    ctx->pc = 0x28ead4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622250u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622250u, _value); } while (0);
    // 0x28ead8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28EAD8u;
    {
        const bool branch_taken_0x28ead8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ead8) {
            ctx->pc = 0x28EB20u;
            goto label_28eb20;
        }
    }
    ctx->pc = 0x28EAE0u;
label_28eae0:
    // 0x28eae0: 0x92026854  lbu         $v0, 0x6854($s0)
    ctx->pc = 0x28eae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26708)));
    // 0x28eae4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28eae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28eae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eaec: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28EAECu;
    {
        const bool branch_taken_0x28eaec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28eaec) {
            ctx->pc = 0x28EB20u;
            goto label_28eb20;
        }
    }
    ctx->pc = 0x28EAF4u;
    // 0x28eaf4: 0xc0a3b1c  jal         func_28EC70
    ctx->pc = 0x28EAF4u;
    SET_GPR_U32(ctx, 31, 0x28EAFCu);
    ctx->pc = 0x28EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC70u, 0x28EAF4u, 0x28EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EAFCu;
label_28eafc:
    // 0x28eafc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eb00: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28EB00u;
    {
        const bool branch_taken_0x28eb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28eb00) {
            ctx->pc = 0x28EB20u;
            goto label_28eb20;
        }
    }
    ctx->pc = 0x28EB08u;
    // 0x28eb08: 0xa2006854  sb          $zero, 0x6854($s0)
    ctx->pc = 0x28eb08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26708), (uint8_t)GPR_U32(ctx, 0));
    // 0x28eb0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eb10: 0xa2026855  sb          $v0, 0x6855($s0)
    ctx->pc = 0x28eb10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26709), (uint8_t)GPR_U32(ctx, 2));
    // 0x28eb14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28eb18: 0xae025dcc  sw          $v0, 0x5DCC($s0)
    ctx->pc = 0x28eb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 2));
    // 0x28eb1c: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x28eb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
label_28eb20:
    // 0x28eb20: 0x3c133f80  lui         $s3, 0x3F80
    ctx->pc = 0x28eb20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16256 << 16));
    // 0x28eb24: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x28eb24u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28eb28: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28eb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28eb2c: 0xc4202248  lwc1        $f0, 0x2248($at)
    ctx->pc = 0x28eb2cu;
    { uint32_t bits = FAST_READ32(0x622248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eb30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28eb30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28eb34: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28eb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x28eb38: 0xc6015e00  lwc1        $f1, 0x5E00($s0)
    ctx->pc = 0x28eb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28eb3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28eb3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28eb40: 0x0  nop
    ctx->pc = 0x28eb40u;
    // NOP
    // 0x28eb44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28eb44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28eb48: 0x0  nop
    ctx->pc = 0x28eb48u;
    // NOP
    // 0x28eb4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x28EB4Cu;
    {
        const bool branch_taken_0x28eb4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28eb4c) {
            ctx->pc = 0x28EB60u;
            goto label_28eb60;
        }
    }
    ctx->pc = 0x28EB54u;
    // 0x28eb54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28eb54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28eb58: 0x0  nop
    ctx->pc = 0x28eb58u;
    // NOP
    // 0x28eb5c: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28eb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
label_28eb60:
    // 0x28eb60: 0xc60c5e00  lwc1        $f12, 0x5E00($s0)
    ctx->pc = 0x28eb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28eb64: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x28EB64u;
    SET_GPR_U32(ctx, 31, 0x28EB6Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x28EB64u, 0x28EB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EB6Cu;
label_28eb6c:
    // 0x28eb6c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x28eb6cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28eb70: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x28eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x28eb74: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x28eb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28eb78: 0x3c061c07  lui         $a2, 0x1C07
    ctx->pc = 0x28eb78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7175 << 16));
    // 0x28eb7c: 0x34c2050a  ori         $v0, $a2, 0x50A
    ctx->pc = 0x28eb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1290);
    // 0x28eb80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28eb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28eb84: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28eb84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28eb88: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28eb8c: 0x24421670  addiu       $v0, $v0, 0x1670
    ctx->pc = 0x28eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5744));
    // 0x28eb90: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28eb90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28eb94: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x28eb94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28eb98: 0xc059b14  jal         func_166C50
    ctx->pc = 0x28EB98u;
    SET_GPR_U32(ctx, 31, 0x28EBA0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x28EB98u, 0x28EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EBA0u;
label_28eba0:
    // 0x28eba0: 0x92066624  lbu         $a2, 0x6624($s0)
    ctx->pc = 0x28eba0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28eba4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28eba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28eba8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x28EBA8u;
    {
        const bool branch_taken_0x28eba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28eba8) {
            ctx->pc = 0x28EBF0u;
            goto label_28ebf0;
        }
    }
    ctx->pc = 0x28EBB0u;
    // 0x28ebb0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28ebb4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x28ebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x28ebb8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28ebbc: 0x34621048  ori         $v0, $v1, 0x1048
    ctx->pc = 0x28ebbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4168);
    // 0x28ebc0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x28ebc4: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x28ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x28ebc8: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x28ebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x28ebcc: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x28ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28ebd0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28ebd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28ebd4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x28ebd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x28ebd8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28EBD8u;
    SET_GPR_U32(ctx, 31, 0x28EBE0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28EBD8u, 0x28EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EBE0u;
label_28ebe0:
    // 0x28ebe0: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x28ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28ebe4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x28ebe4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28ebe8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28EBE8u;
    {
        const bool branch_taken_0x28ebe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ebe8) {
            ctx->pc = 0x28EC3Cu;
            goto label_28ec3c;
        }
    }
    ctx->pc = 0x28EBF0u;
label_28ebf0:
    // 0x28ebf0: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28ebf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28ebf4: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x28ebf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28ebf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ebfc: 0x14c3000f  bne         $a2, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x28EBFCu;
    {
        const bool branch_taken_0x28ebfc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x28ebfc) {
            ctx->pc = 0x28EC3Cu;
            goto label_28ec3c;
        }
    }
    ctx->pc = 0x28EC04u;
    // 0x28ec04: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28ec08: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x28ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x28ec0c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28ec10: 0x34431048  ori         $v1, $v0, 0x1048
    ctx->pc = 0x28ec10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x28ec14: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x28ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x28ec18: 0x3c130003  lui         $s3, 0x3
    ctx->pc = 0x28ec18u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)3 << 16));
    // 0x28ec1c: 0xfe330008  sd          $s3, 0x8($s1)
    ctx->pc = 0x28ec1cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 19));
    // 0x28ec20: 0x2614000c  addiu       $s4, $s0, 0xC
    ctx->pc = 0x28ec20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28ec24: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x28ec24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28ec28: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x28ec28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x28ec2c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28EC2Cu;
    SET_GPR_U32(ctx, 31, 0x28EC34u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28EC2Cu, 0x28EC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EC34u;
label_28ec34:
    // 0x28ec34: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x28ec34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28ec38: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x28ec38u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_28ec3c:
    // 0x28ec3c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x28ec3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28ec40: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28ec40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28ec44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28ec44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28ec48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28ec48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28ec4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28ec4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28ec50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28ec50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28ec54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28ec54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ec58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28ec58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ec5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28ec5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ec60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28ec60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ec64: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x28ec64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28ec68: 0x3e00008  jr          $ra
    ctx->pc = 0x28EC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EC70u;
}
