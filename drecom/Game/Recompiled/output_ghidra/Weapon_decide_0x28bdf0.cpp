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

// Function: Weapon_decide
// Address: 0x28bdf0 - 0x28d8ec
void Weapon_decide_0x28bdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Weapon_decide_0x28bdf0");
#endif

    switch (ctx->pc) {
        case 0x28bf4cu: goto label_28bf4c;
        case 0x28bfd8u: goto label_28bfd8;
        case 0x28c14cu: goto label_28c14c;
        case 0x28c1c4u: goto label_28c1c4;
        case 0x28c238u: goto label_28c238;
        case 0x28c49cu: goto label_28c49c;
        case 0x28c4b4u: goto label_28c4b4;
        case 0x28c4e8u: goto label_28c4e8;
        case 0x28c500u: goto label_28c500;
        case 0x28c51cu: goto label_28c51c;
        case 0x28c534u: goto label_28c534;
        case 0x28c54cu: goto label_28c54c;
        case 0x28c564u: goto label_28c564;
        case 0x28c62cu: goto label_28c62c;
        case 0x28c658u: goto label_28c658;
        case 0x28c680u: goto label_28c680;
        case 0x28c69cu: goto label_28c69c;
        case 0x28c740u: goto label_28c740;
        case 0x28c75cu: goto label_28c75c;
        case 0x28c790u: goto label_28c790;
        case 0x28c7b0u: goto label_28c7b0;
        case 0x28c7e8u: goto label_28c7e8;
        case 0x28c80cu: goto label_28c80c;
        case 0x28c840u: goto label_28c840;
        case 0x28c864u: goto label_28c864;
        case 0x28c930u: goto label_28c930;
        case 0x28c944u: goto label_28c944;
        case 0x28c974u: goto label_28c974;
        case 0x28c984u: goto label_28c984;
        case 0x28c994u: goto label_28c994;
        case 0x28c9a4u: goto label_28c9a4;
        case 0x28ca20u: goto label_28ca20;
        case 0x28ca3cu: goto label_28ca3c;
        case 0x28ca8cu: goto label_28ca8c;
        case 0x28caa8u: goto label_28caa8;
        case 0x28cb24u: goto label_28cb24;
        case 0x28cb3cu: goto label_28cb3c;
        case 0x28cbacu: goto label_28cbac;
        case 0x28cc8cu: goto label_28cc8c;
        case 0x28cce0u: goto label_28cce0;
        case 0x28cd50u: goto label_28cd50;
        case 0x28cde4u: goto label_28cde4;
        case 0x28ce40u: goto label_28ce40;
        case 0x28cf0cu: goto label_28cf0c;
        case 0x28cf18u: goto label_28cf18;
        case 0x28d008u: goto label_28d008;
        case 0x28d028u: goto label_28d028;
        case 0x28d064u: goto label_28d064;
        case 0x28d080u: goto label_28d080;
        case 0x28d0bcu: goto label_28d0bc;
        case 0x28d0d8u: goto label_28d0d8;
        case 0x28d10cu: goto label_28d10c;
        case 0x28d128u: goto label_28d128;
        case 0x28d288u: goto label_28d288;
        case 0x28d29cu: goto label_28d29c;
        case 0x28d2b4u: goto label_28d2b4;
        case 0x28d2c4u: goto label_28d2c4;
        case 0x28d2d8u: goto label_28d2d8;
        case 0x28d2ecu: goto label_28d2ec;
        case 0x28d38cu: goto label_28d38c;
        case 0x28d3e4u: goto label_28d3e4;
        case 0x28d428u: goto label_28d428;
        case 0x28d4c4u: goto label_28d4c4;
        case 0x28d524u: goto label_28d524;
        case 0x28d624u: goto label_28d624;
        case 0x28d6a0u: goto label_28d6a0;
        case 0x28d6d4u: goto label_28d6d4;
        case 0x28d738u: goto label_28d738;
        case 0x28d780u: goto label_28d780;
        case 0x28d7acu: goto label_28d7ac;
        case 0x28d7dcu: goto label_28d7dc;
        default: break;
    }

    ctx->pc = 0x28bdf0u;

    // 0x28bdf0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x28bdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x28bdf4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x28bdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x28bdf8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x28bdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x28bdfc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28bdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x28be00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28be00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28be04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28be04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28be08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28be08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28be0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28be0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28be10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28be10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28be14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28be14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28be18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28be18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28be1c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x28be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x28be20: 0x24636150  addiu       $v1, $v1, 0x6150
    ctx->pc = 0x28be20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x28be24: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x28be24u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28be28: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x28be28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x28be2c: 0x24742100  addiu       $s4, $v1, 0x2100
    ctx->pc = 0x28be2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 8448));
    // 0x28be30: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x28be30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x28be34: 0x246321d0  addiu       $v1, $v1, 0x21D0
    ctx->pc = 0x28be34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8656));
    // 0x28be38: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x28be38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x28be3c: 0x261129e8  addiu       $s1, $s0, 0x29E8
    ctx->pc = 0x28be3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 10728));
    // 0x28be40: 0x26074458  addiu       $a3, $s0, 0x4458
    ctx->pc = 0x28be40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 17496));
    // 0x28be44: 0x70e0b628  paddub      $s6, $a3, $zero
    ctx->pc = 0x28be44u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28be48: 0x26034428  addiu       $v1, $s0, 0x4428
    ctx->pc = 0x28be48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 17448));
    // 0x28be4c: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x28be4cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28be50: 0x26034438  addiu       $v1, $s0, 0x4438
    ctx->pc = 0x28be50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 17464));
    // 0x28be54: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x28be54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x28be58: 0x26064448  addiu       $a2, $s0, 0x4448
    ctx->pc = 0x28be58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 17480));
    // 0x28be5c: 0xafa60138  sw          $a2, 0x138($sp)
    ctx->pc = 0x28be5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 6));
    // 0x28be60: 0x26031de8  addiu       $v1, $s0, 0x1DE8
    ctx->pc = 0x28be60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 7656));
    // 0x28be64: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x28be64u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28be68: 0x26034958  addiu       $v1, $s0, 0x4958
    ctx->pc = 0x28be68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 18776));
    // 0x28be6c: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x28be6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x28be70: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x28be70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x28be74: 0x246321e0  addiu       $v1, $v1, 0x21E0
    ctx->pc = 0x28be74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8672));
    // 0x28be78: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x28be78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x28be7c: 0x8e075dd0  lw          $a3, 0x5DD0($s0)
    ctx->pc = 0x28be7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28be80: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x28be80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28be84: 0x10e60682  beq         $a3, $a2, . + 4 + (0x682 << 2)
    ctx->pc = 0x28BE84u;
    {
        const bool branch_taken_0x28be84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x28be84) {
            ctx->pc = 0x28D890u;
            goto label_28d890;
        }
    }
    ctx->pc = 0x28BE8Cu;
    // 0x28be8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x28be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28be90: 0x10e305b3  beq         $a3, $v1, . + 4 + (0x5B3 << 2)
    ctx->pc = 0x28BE90u;
    {
        const bool branch_taken_0x28be90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x28be90) {
            ctx->pc = 0x28D560u;
            goto label_28d560;
        }
    }
    ctx->pc = 0x28BE98u;
    // 0x28be98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28be98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28be9c: 0x10e3040c  beq         $a3, $v1, . + 4 + (0x40C << 2)
    ctx->pc = 0x28BE9Cu;
    {
        const bool branch_taken_0x28be9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x28be9c) {
            ctx->pc = 0x28CED0u;
            goto label_28ced0;
        }
    }
    ctx->pc = 0x28BEA4u;
    // 0x28bea4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28bea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bea8: 0x10e501d4  beq         $a3, $a1, . + 4 + (0x1D4 << 2)
    ctx->pc = 0x28BEA8u;
    {
        const bool branch_taken_0x28bea8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x28bea8) {
            ctx->pc = 0x28C5FCu;
            goto label_28c5fc;
        }
    }
    ctx->pc = 0x28BEB0u;
    // 0x28beb0: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x28BEB0u;
    {
        const bool branch_taken_0x28beb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x28beb0) {
            ctx->pc = 0x28BEC0u;
            goto label_28bec0;
        }
    }
    ctx->pc = 0x28BEB8u;
    // 0x28beb8: 0x1000067f  b           . + 4 + (0x67F << 2)
    ctx->pc = 0x28BEB8u;
    {
        const bool branch_taken_0x28beb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28beb8) {
            ctx->pc = 0x28D8B8u;
            goto label_28d8b8;
        }
    }
    ctx->pc = 0x28BEC0u;
label_28bec0:
    // 0x28bec0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28bec4: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x28bec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28bec8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28becc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28beccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28bed0: 0x34641015  ori         $a0, $v1, 0x1015
    ctx->pc = 0x28bed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4117);
    // 0x28bed4: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x28bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28bed8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x28bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x28bedc: 0x24150060  addiu       $s5, $zero, 0x60
    ctx->pc = 0x28bedcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x28bee0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x28bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28bee4: 0xfc750008  sd          $s5, 0x8($v1)
    ctx->pc = 0x28bee4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 21));
    // 0x28bee8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28beec: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x28beecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x28bef0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28bef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28bef4: 0x34751009  ori         $s5, $v1, 0x1009
    ctx->pc = 0x28bef4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x28bef8: 0xafd50004  sw          $s5, 0x4($fp)
    ctx->pc = 0x28bef8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 21));
    // 0x28befc: 0x24030730  addiu       $v1, $zero, 0x730
    ctx->pc = 0x28befcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1840));
    // 0x28bf00: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x28bf00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28bf04: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x28bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x28bf08: 0x3452000a  ori         $s2, $v0, 0xA
    ctx->pc = 0x28bf08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x28bf0c: 0x2431025  or          $v0, $s2, $v1
    ctx->pc = 0x28bf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x28bf10: 0xffc20008  sd          $v0, 0x8($fp)
    ctx->pc = 0x28bf10u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 2));
    // 0x28bf14: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x28bf14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x28bf18: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x28bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x28bf1c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x28bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x28bf20: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x28bf20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x28bf24: 0x34c51009  ori         $a1, $a2, 0x1009
    ctx->pc = 0x28bf24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4105);
    // 0x28bf28: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x28bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x28bf2c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x28bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x28bf30: 0x8fa60150  lw          $a2, 0x150($sp)
    ctx->pc = 0x28bf30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x28bf34: 0xfcc00008  sd          $zero, 0x8($a2)
    ctx->pc = 0x28bf34u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 0));
    // 0x28bf38: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x28bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28bf3c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28bf3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28bf40: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x28bf40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x28bf44: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28BF44u;
    SET_GPR_U32(ctx, 31, 0x28BF4Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28BF44u, 0x28BF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF4Cu;
label_28bf4c:
    // 0x28bf4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28bf4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28bf50: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28bf54: 0x8fb50148  lw          $s5, 0x148($sp)
    ctx->pc = 0x28bf54u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x28bf58: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x28bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x28bf5c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28bf60: 0x3463103f  ori         $v1, $v1, 0x103F
    ctx->pc = 0x28bf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4159);
    // 0x28bf64: 0x8fa60148  lw          $a2, 0x148($sp)
    ctx->pc = 0x28bf64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x28bf68: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x28bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x28bf6c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bf6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bf70: 0xa4202242  sh          $zero, 0x2242($at)
    ctx->pc = 0x28bf70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622242u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622242u, _value); } while (0);
    // 0x28bf74: 0x3003ffff  andi        $v1, $zero, 0xFFFF
    ctx->pc = 0x28bf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x28bf78: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bf7c: 0xa4232240  sh          $v1, 0x2240($at)
    ctx->pc = 0x28bf7cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622240u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622240u, _value); } while (0);
    // 0x28bf80: 0x241301cc  addiu       $s3, $zero, 0x1CC
    ctx->pc = 0x28bf80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x28bf84: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bf84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bf88: 0xa4332246  sh          $s3, 0x2246($at)
    ctx->pc = 0x28bf88u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x622246u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622246u, _value); } while (0);
    // 0x28bf8c: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x28bf8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x28bf90: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bf90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bf94: 0xa4232244  sh          $v1, 0x2244($at)
    ctx->pc = 0x28bf94u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622244u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622244u, _value); } while (0);
    // 0x28bf98: 0x92066624  lbu         $a2, 0x6624($s0)
    ctx->pc = 0x28bf98u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28bf9c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28bf9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28bfa0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28BFA0u;
    {
        const bool branch_taken_0x28bfa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bfa0) {
            ctx->pc = 0x28BFBCu;
            goto label_28bfbc;
        }
    }
    ctx->pc = 0x28BFA8u;
    // 0x28bfa8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28bfac: 0x2472e7d0  addiu       $s2, $v1, -0x1830
    ctx->pc = 0x28bfacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961104));
    // 0x28bfb0: 0xafb20158  sw          $s2, 0x158($sp)
    ctx->pc = 0x28bfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 18));
    // 0x28bfb4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28BFB4u;
    {
        const bool branch_taken_0x28bfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bfb4) {
            ctx->pc = 0x28BFE8u;
            goto label_28bfe8;
        }
    }
    ctx->pc = 0x28BFBCu;
label_28bfbc:
    // 0x28bfbc: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28bfbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28bfc0: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x28bfc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28bfc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28bfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bfc8: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28BFC8u;
    {
        const bool branch_taken_0x28bfc8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x28bfc8) {
            ctx->pc = 0x28BFE8u;
            goto label_28bfe8;
        }
    }
    ctx->pc = 0x28BFD0u;
    // 0x28bfd0: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28BFD0u;
    SET_GPR_U32(ctx, 31, 0x28BFD8u);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28BFD0u, 0x28BFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BFD8u;
label_28bfd8:
    // 0x28bfd8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28bfd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28bfdc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28bfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28bfe0: 0x2463e910  addiu       $v1, $v1, -0x16F0
    ctx->pc = 0x28bfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961424));
    // 0x28bfe4: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x28bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
label_28bfe8:
    // 0x28bfe8: 0x26024970  addiu       $v0, $s0, 0x4970
    ctx->pc = 0x28bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 18800));
    // 0x28bfec: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x28bfecu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28bff0: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x28bff0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x28bff4: 0xaee80000  sw          $t0, 0x0($s7)
    ctx->pc = 0x28bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 8));
    // 0x28bff8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28bffc: 0x3446103b  ori         $a2, $v0, 0x103B
    ctx->pc = 0x28bffcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4155);
    // 0x28c000: 0xaee60004  sw          $a2, 0x4($s7)
    ctx->pc = 0x28c000u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 6));
    // 0x28c004: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x28c004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28c008: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x28c008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28c00c: 0xfee30008  sd          $v1, 0x8($s7)
    ctx->pc = 0x28c00cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 3));
    // 0x28c010: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28c010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c014: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x28c014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x28c018: 0x24430018  addiu       $v1, $v0, 0x18
    ctx->pc = 0x28c018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x28c01c: 0x90660004  lbu         $a2, 0x4($v1)
    ctx->pc = 0x28c01cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28c020: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x28c020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x28c024: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x28c024u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28c028: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x28c028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x28c02c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x28c02cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x28c030: 0xc71025  or          $v0, $a2, $a3
    ctx->pc = 0x28c030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x28c034: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x28c034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x28c038: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28c038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28c03c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x28c03cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x28c040: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28c040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28c044: 0x34461043  ori         $a2, $v0, 0x1043
    ctx->pc = 0x28c044u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x28c048: 0xaec60004  sw          $a2, 0x4($s6)
    ctx->pc = 0x28c048u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 6));
    // 0x28c04c: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x28c04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x28c050: 0xfec30008  sd          $v1, 0x8($s6)
    ctx->pc = 0x28c050u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 3));
    // 0x28c054: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x28c054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x28c058: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x28c058u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x28c05c: 0x3c028800  lui         $v0, 0x8800
    ctx->pc = 0x28c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34816 << 16));
    // 0x28c060: 0x34423b14  ori         $v0, $v0, 0x3B14
    ctx->pc = 0x28c060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15124);
    // 0x28c064: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x28c064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x28c068: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x28c068u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x28c06c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x28c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x28c070: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x28c070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x28c074: 0x34c30040  ori         $v1, $a2, 0x40
    ctx->pc = 0x28c074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x28c078: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x28c078u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x28c07c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c080: 0x94232244  lhu         $v1, 0x2244($at)
    ctx->pc = 0x28c080u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x622244u));
    // 0x28c084: 0x3069ffff  andi        $t1, $v1, 0xFFFF
    ctx->pc = 0x28c084u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28c088: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c08c: 0x94262240  lhu         $a2, 0x2240($at)
    ctx->pc = 0x28c08cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x622240u));
    // 0x28c090: 0x30c8ffff  andi        $t0, $a2, 0xFFFF
    ctx->pc = 0x28c090u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x28c094: 0x1283823  subu        $a3, $t1, $t0
    ctx->pc = 0x28c094u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x28c098: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x28c098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
    // 0x28c09c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c0a0: 0x94262246  lhu         $a2, 0x2246($at)
    ctx->pc = 0x28c0a0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x622246u));
    // 0x28c0a4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x28c0a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x28c0a8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c0ac: 0x94232242  lhu         $v1, 0x2242($at)
    ctx->pc = 0x28c0acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x622242u));
    // 0x28c0b0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x28c0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28c0b4: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x28c0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x28c0b8: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x28c0b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28c0bc: 0xc21823  subu        $v1, $a2, $v0
    ctx->pc = 0x28c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x28c0c0: 0xafa30170  sw          $v1, 0x170($sp)
    ctx->pc = 0x28c0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
    // 0x28c0c4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x28c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x28c0c8: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x28c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
    // 0x28c0cc: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x28c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x28c0d0: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x28c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x28c0d4: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x28c0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x28c0d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28c0d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c0dc: 0x0  nop
    ctx->pc = 0x28c0dcu;
    // NOP
    // 0x28c0e0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28c0e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28c0e4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x28c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x28c0e8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x28c0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28c0ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28c0ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c0f0: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x28c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x28c0f4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28C0F4u;
    {
        const bool branch_taken_0x28c0f4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28c0f4) {
            ctx->pc = 0x28C110u;
            goto label_28c110;
        }
    }
    ctx->pc = 0x28C0FCu;
    // 0x28c0fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c100: 0x0  nop
    ctx->pc = 0x28c100u;
    // NOP
    // 0x28c104: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28c108: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28C108u;
    {
        const bool branch_taken_0x28c108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c108) {
            ctx->pc = 0x28C12Cu;
            goto label_28c12c;
        }
    }
    ctx->pc = 0x28C110u;
label_28c110:
    // 0x28c110: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x28c110u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x28c114: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28c118: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28c118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28c11c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28c11cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c120: 0x0  nop
    ctx->pc = 0x28c120u;
    // NOP
    // 0x28c124: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28c128: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28c128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28c12c:
    // 0x28c12c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28c12cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28c130: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28c130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28c134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c138: 0x0  nop
    ctx->pc = 0x28c138u;
    // NOP
    // 0x28c13c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28c13cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28c140: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x28c140u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28c144: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C144u;
    SET_GPR_U32(ctx, 31, 0x28C14Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C144u, 0x28C14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C14Cu;
label_28c14c:
    // 0x28c14c: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x28c14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x28c150: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x28c150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x28c154: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x28c154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x28c158: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x28c158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x28c15c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x28c15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x28c160: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x28c160u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28c164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c168: 0x0  nop
    ctx->pc = 0x28c168u;
    // NOP
    // 0x28c16c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28c16cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28c170: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28c170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28c174: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28c174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c178: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x28c178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x28c17c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28C17Cu;
    {
        const bool branch_taken_0x28c17c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28c17c) {
            ctx->pc = 0x28C198u;
            goto label_28c198;
        }
    }
    ctx->pc = 0x28C184u;
    // 0x28c184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c188: 0x0  nop
    ctx->pc = 0x28c188u;
    // NOP
    // 0x28c18c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c18cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28c190: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28C190u;
    {
        const bool branch_taken_0x28c190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c190) {
            ctx->pc = 0x28C1B4u;
            goto label_28c1b4;
        }
    }
    ctx->pc = 0x28C198u;
label_28c198:
    // 0x28c198: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x28c198u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x28c19c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x28c19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28c1a0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x28c1a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x28c1a4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28c1a4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c1a8: 0x0  nop
    ctx->pc = 0x28c1a8u;
    // NOP
    // 0x28c1ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c1acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28c1b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28c1b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28c1b4:
    // 0x28c1b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28c1b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28c1b8: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x28c1b8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28c1bc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C1BCu;
    SET_GPR_U32(ctx, 31, 0x28C1C4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C1BCu, 0x28C1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C1C4u;
label_28c1c4:
    // 0x28c1c4: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x28c1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x28c1c8: 0x8fa6015c  lw          $a2, 0x15C($sp)
    ctx->pc = 0x28c1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x28c1cc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28c1ccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c1d0: 0x0  nop
    ctx->pc = 0x28c1d0u;
    // NOP
    // 0x28c1d4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28c1d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28c1d8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x28c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x28c1dc: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x28c1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28c1e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28c1e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c1e4: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x28c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x28c1e8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28C1E8u;
    {
        const bool branch_taken_0x28c1e8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28c1e8) {
            ctx->pc = 0x28C204u;
            goto label_28c204;
        }
    }
    ctx->pc = 0x28C1F0u;
    // 0x28c1f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c1f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c1f4: 0x0  nop
    ctx->pc = 0x28c1f4u;
    // NOP
    // 0x28c1f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c1f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28c1fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28C1FCu;
    {
        const bool branch_taken_0x28c1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c1fc) {
            ctx->pc = 0x28C228u;
            goto label_28c228;
        }
    }
    ctx->pc = 0x28C204u;
label_28c204:
    // 0x28c204: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x28c204u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x28c208: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28c20c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x28c20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x28c210: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x28c210u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28c214: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28c214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28c218: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28c218u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c21c: 0x0  nop
    ctx->pc = 0x28c21cu;
    // NOP
    // 0x28c220: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28c224: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28c224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28c228:
    // 0x28c228: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28c228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28c22c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x28c22cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28c230: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C230u;
    SET_GPR_U32(ctx, 31, 0x28C238u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C230u, 0x28C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C238u;
label_28c238:
    // 0x28c238: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x28c238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x28c23c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x28c23cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28c240: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x28c240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x28c244: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x28c244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x28c248: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x28c248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x28c24c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x28c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28c250: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x28c250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
    // 0x28c254: 0x8fa6015c  lw          $a2, 0x15C($sp)
    ctx->pc = 0x28c254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x28c258: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x28c258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x28c25c: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x28c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x28c260: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x28c260u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28c264: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x28c264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x28c268: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x28c268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28c26c: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x28c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x28c270: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28c270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28c274: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x28c274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x28c278: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x28c278u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28c27c: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x28c27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x28c280: 0x26830018  addiu       $v1, $s4, 0x18
    ctx->pc = 0x28c280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x28c284: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28c284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28c288: 0x3402fffb  ori         $v0, $zero, 0xFFFB
    ctx->pc = 0x28c288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28c28c: 0x2683001c  addiu       $v1, $s4, 0x1C
    ctx->pc = 0x28c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x28c290: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28c290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28c294: 0x8fa30164  lw          $v1, 0x164($sp)
    ctx->pc = 0x28c294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x28c298: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x28c298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28c29c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28c2a0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28c2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28c2a4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x28c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x28c2a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28c2ac: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x28c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28c2b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28c2b4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x28c2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x28c2b8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x28c2b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28c2bc: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x28c2bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28c2c0: 0x26850024  addiu       $a1, $s4, 0x24
    ctx->pc = 0x28c2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
    // 0x28c2c4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x28c2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x28c2c8: 0x3402fffb  ori         $v0, $zero, 0xFFFB
    ctx->pc = 0x28c2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28c2cc: 0x26840028  addiu       $a0, $s4, 0x28
    ctx->pc = 0x28c2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    // 0x28c2d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x28c2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x28c2d4: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x28c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x28c2d8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x28c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28c2dc: 0x24827000  addiu       $v0, $a0, 0x7000
    ctx->pc = 0x28c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x28c2e0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x28c2e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28c2e4: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x28c2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x28c2e8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x28c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x28c2ec: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x28c2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28c2f0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x28c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28c2f4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x28c2f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x28c2f8: 0x26830030  addiu       $v1, $s4, 0x30
    ctx->pc = 0x28c2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x28c2fc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x28c2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x28c300: 0x3404fffb  ori         $a0, $zero, 0xFFFB
    ctx->pc = 0x28c300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28c304: 0x26830034  addiu       $v1, $s4, 0x34
    ctx->pc = 0x28c304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
    // 0x28c308: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x28c308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x28c30c: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x28c30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x28c310: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x28c310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x28c314: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x28c314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x28c318: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x28c318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28c31c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x28c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x28c320: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28c320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28c324: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x28c324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28c328: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x28c328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28c32c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x28c32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x28c330: 0x2684003c  addiu       $a0, $s4, 0x3C
    ctx->pc = 0x28c330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
    // 0x28c334: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x28c334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x28c338: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x28c338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28c33c: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x28c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x28c340: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x28c340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x28c344: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x28c344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x28c348: 0x34448080  ori         $a0, $v0, 0x8080
    ctx->pc = 0x28c348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x28c34c: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x28c34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x28c350: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x28c350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x28c354: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28c354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28c358: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x28c358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28c35c: 0x14800033  bnez        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x28C35Cu;
    {
        const bool branch_taken_0x28c35c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c35c) {
            ctx->pc = 0x28C42Cu;
            goto label_28c42c;
        }
    }
    ctx->pc = 0x28C364u;
    // 0x28c364: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c368: 0x94232240  lhu         $v1, 0x2240($at)
    ctx->pc = 0x28c368u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x622240u));
    // 0x28c36c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x28c36cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28c370: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x28c370u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x28c374: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c378: 0x94242242  lhu         $a0, 0x2242($at)
    ctx->pc = 0x28c378u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x622242u));
    // 0x28c37c: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x28c37cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x28c380: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x28c380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x28c384: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x28c384u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28c388: 0xc41825  or          $v1, $a2, $a0
    ctx->pc = 0x28c388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x28c38c: 0x26840014  addiu       $a0, $s4, 0x14
    ctx->pc = 0x28c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x28c390: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x28c390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x28c394: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c398: 0x94222244  lhu         $v0, 0x2244($at)
    ctx->pc = 0x28c398u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622244u));
    // 0x28c39c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x28c39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28c3a0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x28c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x28c3a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c3a8: 0x94232242  lhu         $v1, 0x2242($at)
    ctx->pc = 0x28c3a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x622242u));
    // 0x28c3ac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28c3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28c3b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28c3b4: 0x3ac00  sll         $s5, $v1, 16
    ctx->pc = 0x28c3b4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28c3b8: 0x551825  or          $v1, $v0, $s5
    ctx->pc = 0x28c3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x28c3bc: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x28c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x28c3c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28c3c4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c3c8: 0x94222240  lhu         $v0, 0x2240($at)
    ctx->pc = 0x28c3c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622240u));
    // 0x28c3cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28c3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28c3d0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x28c3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28c3d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c3d8: 0x94222246  lhu         $v0, 0x2246($at)
    ctx->pc = 0x28c3d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622246u));
    // 0x28c3dc: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x28c3dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28c3e0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x28c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x28c3e4: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x28c3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28c3e8: 0x851825  or          $v1, $a0, $a1
    ctx->pc = 0x28c3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x28c3ec: 0x2687002c  addiu       $a3, $s4, 0x2C
    ctx->pc = 0x28c3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
    // 0x28c3f0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x28c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x28c3f4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c3f8: 0x94232244  lhu         $v1, 0x2244($at)
    ctx->pc = 0x28c3f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x622244u));
    // 0x28c3fc: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x28c3fcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28c400: 0x152900  sll         $a1, $s5, 4
    ctx->pc = 0x28c400u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x28c404: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c408: 0x94232246  lhu         $v1, 0x2246($at)
    ctx->pc = 0x28c408u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x622246u));
    // 0x28c40c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28c40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28c410: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28c410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28c414: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x28c414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28c418: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x28c418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28c41c: 0x26950038  addiu       $s5, $s4, 0x38
    ctx->pc = 0x28c41cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x28c420: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x28c420u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x28c424: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x28C424u;
    {
        const bool branch_taken_0x28c424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c424) {
            ctx->pc = 0x28C470u;
            goto label_28c470;
        }
    }
    ctx->pc = 0x28C42Cu;
label_28c42c:
    // 0x28c42c: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28c42cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28c430: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x28c430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28c434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28c434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c438: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28C438u;
    {
        const bool branch_taken_0x28c438 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x28c438) {
            ctx->pc = 0x28C470u;
            goto label_28c470;
        }
    }
    ctx->pc = 0x28C440u;
    // 0x28c440: 0x26830014  addiu       $v1, $s4, 0x14
    ctx->pc = 0x28c440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x28c444: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x28c444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x28c448: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x28c448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x28c44c: 0x26830020  addiu       $v1, $s4, 0x20
    ctx->pc = 0x28c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x28c450: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x28c450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x28c454: 0x3c061c00  lui         $a2, 0x1C00
    ctx->pc = 0x28c454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7168 << 16));
    // 0x28c458: 0x2684002c  addiu       $a0, $s4, 0x2C
    ctx->pc = 0x28c458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
    // 0x28c45c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x28c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x28c460: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x28c460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x28c464: 0x34452000  ori         $a1, $v0, 0x2000
    ctx->pc = 0x28c464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x28c468: 0x26820038  addiu       $v0, $s4, 0x38
    ctx->pc = 0x28c468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x28c46c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x28c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_28c470:
    // 0x28c470: 0x8fb50158  lw          $s5, 0x158($sp)
    ctx->pc = 0x28c470u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x28c474: 0xae950008  sw          $s5, 0x8($s4)
    ctx->pc = 0x28c474u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 21));
    // 0x28c478: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28c478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28c47c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28c47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28c480: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x28C480u;
    {
        const bool branch_taken_0x28c480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c480) {
            ctx->pc = 0x28C4C0u;
            goto label_28c4c0;
        }
    }
    ctx->pc = 0x28C488u;
    // 0x28c488: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x28c488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28c48c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28c48cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c490: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x28c490u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28c494: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C494u;
    SET_GPR_U32(ctx, 31, 0x28C49Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C494u, 0x28C49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C49Cu;
label_28c49c:
    // 0x28c49c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28c49cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c4a0: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x28c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28c4a4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28c4a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c4a8: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x28c4a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x28c4ac: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C4ACu;
    SET_GPR_U32(ctx, 31, 0x28C4B4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C4ACu, 0x28C4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C4B4u;
label_28c4b4:
    // 0x28c4b4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x28c4b4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c4b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x28C4B8u;
    {
        const bool branch_taken_0x28c4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c4b8) {
            ctx->pc = 0x28C504u;
            goto label_28c504;
        }
    }
    ctx->pc = 0x28C4C0u;
label_28c4c0:
    // 0x28c4c0: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28c4c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28c4c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28c4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28c4c8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x28c4c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c4cc: 0x1471000d  bne         $v1, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x28C4CCu;
    {
        const bool branch_taken_0x28c4cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x28c4cc) {
            ctx->pc = 0x28C504u;
            goto label_28c504;
        }
    }
    ctx->pc = 0x28C4D4u;
    // 0x28c4d4: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x28c4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28c4d8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x28c4d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28c4dc: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x28c4dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28c4e0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C4E0u;
    SET_GPR_U32(ctx, 31, 0x28C4E8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C4E0u, 0x28C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C4E8u;
label_28c4e8:
    // 0x28c4e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28c4e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c4ec: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x28c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28c4f0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28c4f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c4f4: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x28c4f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x28c4f8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C4F8u;
    SET_GPR_U32(ctx, 31, 0x28C500u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C4F8u, 0x28C500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C500u;
label_28c500:
    // 0x28c500: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28c500u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28c504:
    // 0x28c504: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x28c504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28c508: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28c508u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c50c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x28c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28c510: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28c510u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c514: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C514u;
    SET_GPR_U32(ctx, 31, 0x28C51Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C514u, 0x28C51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C51Cu;
label_28c51c:
    // 0x28c51c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28c51cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c520: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x28c520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28c524: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28c524u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c528: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x28c528u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x28c52c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C52Cu;
    SET_GPR_U32(ctx, 31, 0x28C534u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C52Cu, 0x28C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C534u;
label_28c534:
    // 0x28c534: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28c534u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c538: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x28c538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28c53c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28c53cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28c540: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x28c540u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x28c544: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C544u;
    SET_GPR_U32(ctx, 31, 0x28C54Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C544u, 0x28C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C54Cu;
label_28c54c:
    // 0x28c54c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28c54cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c550: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x28c550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28c554: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28c554u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c558: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x28c558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x28c55c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C55Cu;
    SET_GPR_U32(ctx, 31, 0x28C564u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C55Cu, 0x28C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C564u;
label_28c564:
    // 0x28c564: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28c564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28c568: 0xa2035e04  sb          $v1, 0x5E04($s0)
    ctx->pc = 0x28c568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 3));
    // 0x28c56c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c570: 0x8c2420d8  lw          $a0, 0x20D8($at)
    ctx->pc = 0x28c570u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6220D8u));
    // 0x28c574: 0x28810014  slti        $at, $a0, 0x14
    ctx->pc = 0x28c574u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x28c578: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x28C578u;
    {
        const bool branch_taken_0x28c578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c578) {
            ctx->pc = 0x28C5BCu;
            goto label_28c5bc;
        }
    }
    ctx->pc = 0x28C580u;
    // 0x28c580: 0x3c03bd57  lui         $v1, 0xBD57
    ctx->pc = 0x28c580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48471 << 16));
    // 0x28c584: 0x34639436  ori         $v1, $v1, 0x9436
    ctx->pc = 0x28c584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37942);
    // 0x28c588: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28c588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c58c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c590: 0x8c3520d8  lw          $s5, 0x20D8($at)
    ctx->pc = 0x28c590u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x6220D8u));
    // 0x28c594: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x28c594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28c598: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c59c: 0xac2320d8  sw          $v1, 0x20D8($at)
    ctx->pc = 0x28c59cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6220D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220D8u, _value); } while (0);
    // 0x28c5a0: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x28c5a0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c5a4: 0x0  nop
    ctx->pc = 0x28c5a4u;
    // NOP
    // 0x28c5a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c5a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28c5ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28c5acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28c5b0: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28c5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x28c5b4: 0x100004c0  b           . + 4 + (0x4C0 << 2)
    ctx->pc = 0x28C5B4u;
    {
        const bool branch_taken_0x28c5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c5b4) {
            ctx->pc = 0x28D8B8u;
            goto label_28d8b8;
        }
    }
    ctx->pc = 0x28C5BCu;
label_28c5bc:
    // 0x28c5bc: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28c5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28c5c0: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x28c5c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28c5c4: 0xae155dd0  sw          $s5, 0x5DD0($s0)
    ctx->pc = 0x28c5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 21));
    // 0x28c5c8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x28c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x28c5cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28c5ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c5d0: 0x0  nop
    ctx->pc = 0x28c5d0u;
    // NOP
    // 0x28c5d4: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28c5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x28c5d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c5dc: 0xa203663d  sb          $v1, 0x663D($s0)
    ctx->pc = 0x28c5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26173), (uint8_t)GPR_U32(ctx, 3));
    // 0x28c5e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c5e4: 0xac2020f0  sw          $zero, 0x20F0($at)
    ctx->pc = 0x28c5e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F0u, _value); } while (0);
    // 0x28c5e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28c5ec: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28c5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28c5f0: 0xac2362e0  sw          $v1, 0x62E0($at)
    ctx->pc = 0x28c5f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3962E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3962E0u, _value); } while (0);
    // 0x28c5f4: 0x100004b0  b           . + 4 + (0x4B0 << 2)
    ctx->pc = 0x28C5F4u;
    {
        const bool branch_taken_0x28c5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c5f4) {
            ctx->pc = 0x28D8B8u;
            goto label_28d8b8;
        }
    }
    ctx->pc = 0x28C5FCu;
label_28c5fc:
    // 0x28c5fc: 0x26125d70  addiu       $s2, $s0, 0x5D70
    ctx->pc = 0x28c5fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 23920));
    // 0x28c600: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x28c600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x28c604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c608: 0x0  nop
    ctx->pc = 0x28c608u;
    // NOP
    // 0x28c60c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x28c60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x28c610: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x28c610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x28c614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c618: 0x0  nop
    ctx->pc = 0x28c618u;
    // NOP
    // 0x28c61c: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x28c61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x28c620: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x28c620u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28c624: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x28C624u;
    {
        const bool branch_taken_0x28c624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c624) {
            ctx->pc = 0x28C688u;
            goto label_28c688;
        }
    }
    ctx->pc = 0x28C62Cu;
label_28c62c:
    // 0x28c62c: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x28c62cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28c630: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x28c630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x28c634: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x28c634u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28c638: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x28c638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x28c63c: 0x24c262a0  addiu       $v0, $a2, 0x62A0
    ctx->pc = 0x28c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 25248));
    // 0x28c640: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x28c640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28c644: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28c644u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c648: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x28c648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x28c64c: 0x24656110  addiu       $a1, $v1, 0x6110
    ctx->pc = 0x28c64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 24848));
    // 0x28c650: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x28C650u;
    SET_GPR_U32(ctx, 31, 0x28C658u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x28C658u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28C658u) { return; }
    ctx->pc = 0x28C658u;
label_28c658:
    // 0x28c658: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28c658u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c65c: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x28c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28c660: 0x243a821  addu        $s5, $s2, $v1
    ctx->pc = 0x28c660u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x28c664: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x28c664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28c668: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x28c668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x28c66c: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x28c66cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x28c670: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28c670u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c674: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x28c674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x28c678: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x28C678u;
    SET_GPR_U32(ctx, 31, 0x28C680u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x28C680u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28C680u) { return; }
    ctx->pc = 0x28C680u;
label_28c680:
    // 0x28c680: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28c680u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c684: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28c684u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_28c688:
    // 0x28c688: 0x2a630004  slti        $v1, $s3, 0x4
    ctx->pc = 0x28c688u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28c68c: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x28C68Cu;
    {
        const bool branch_taken_0x28c68c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c68c) {
            ctx->pc = 0x28C62Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c62c;
        }
    }
    ctx->pc = 0x28C694u;
    // 0x28c694: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28C694u;
    SET_GPR_U32(ctx, 31, 0x28C69Cu);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28C694u, 0x28C69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C69Cu;
label_28c69c:
    // 0x28c69c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28c69cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c6a0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28c6a4: 0x2463e910  addiu       $v1, $v1, -0x16F0
    ctx->pc = 0x28c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961424));
    // 0x28c6a8: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x28c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    // 0x28c6ac: 0x26125d70  addiu       $s2, $s0, 0x5D70
    ctx->pc = 0x28c6acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 23920));
    // 0x28c6b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28c6b4: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x28c6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x28c6b8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28c6bc: 0x3466103b  ori         $a2, $v1, 0x103B
    ctx->pc = 0x28c6bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4155);
    // 0x28c6c0: 0xaee60004  sw          $a2, 0x4($s7)
    ctx->pc = 0x28c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 6));
    // 0x28c6c4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x28c6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28c6c8: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x28c6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x28c6cc: 0xfee30008  sd          $v1, 0x8($s7)
    ctx->pc = 0x28c6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 3));
    // 0x28c6d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c6d4: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x28c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x28c6d8: 0x24480018  addiu       $t0, $v0, 0x18
    ctx->pc = 0x28c6d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x28c6dc: 0x91060004  lbu         $a2, 0x4($t0)
    ctx->pc = 0x28c6dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x28c6e0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x28c6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x28c6e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28c6e8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x28c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x28c6ec: 0xc33824  and         $a3, $a2, $v1
    ctx->pc = 0x28c6ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x28c6f0: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x28c6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x28c6f4: 0xa1020004  sb          $v0, 0x4($t0)
    ctx->pc = 0x28c6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x28c6f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28c6fc: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x28c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x28c700: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28c700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28c704: 0x34461043  ori         $a2, $v0, 0x1043
    ctx->pc = 0x28c704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x28c708: 0xaec60004  sw          $a2, 0x4($s6)
    ctx->pc = 0x28c708u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 6));
    // 0x28c70c: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x28c70cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x28c710: 0xfec70008  sd          $a3, 0x8($s6)
    ctx->pc = 0x28c710u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 7));
    // 0x28c714: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28c714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28c718: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x28c718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x28c71c: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x28c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x28c720: 0x34463a14  ori         $a2, $v0, 0x3A14
    ctx->pc = 0x28c720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14868);
    // 0x28c724: 0xae260004  sw          $a2, 0x4($s1)
    ctx->pc = 0x28c724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
    // 0x28c728: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28c728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28c72c: 0x34460040  ori         $a2, $v0, 0x40
    ctx->pc = 0x28c72cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x28c730: 0xae260004  sw          $a2, 0x4($s1)
    ctx->pc = 0x28c730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
    // 0x28c734: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x28c734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c738: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C738u;
    SET_GPR_U32(ctx, 31, 0x28C740u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C738u, 0x28C740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C740u;
label_28c740:
    // 0x28c740: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28c740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28c744: 0x24667000  addiu       $a2, $v1, 0x7000
    ctx->pc = 0x28c744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x28c748: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x28c748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x28c74c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x28c74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x28c750: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x28c750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c754: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C754u;
    SET_GPR_U32(ctx, 31, 0x28C75Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C754u, 0x28C75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C75Cu;
label_28c75c:
    // 0x28c75c: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x28c75cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28c760: 0x24c37900  addiu       $v1, $a2, 0x7900
    ctx->pc = 0x28c760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x28c764: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x28c764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28c768: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x28c768u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x28c76c: 0x434825  or          $t1, $v0, $v1
    ctx->pc = 0x28c76cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c770: 0x2626001c  addiu       $a2, $s1, 0x1C
    ctx->pc = 0x28c770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x28c774: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x28c774u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x28c778: 0x3408fffb  ori         $t0, $zero, 0xFFFB
    ctx->pc = 0x28c778u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28c77c: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x28c77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x28c780: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x28c780u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x28c784: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x28c784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c788: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C788u;
    SET_GPR_U32(ctx, 31, 0x28C790u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C788u, 0x28C790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C790u;
label_28c790:
    // 0x28c790: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28c790u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c794: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x28c794u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x28c798: 0x24c37000  addiu       $v1, $a2, 0x7000
    ctx->pc = 0x28c798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x28c79c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x28c79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28c7a0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x28c7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x28c7a4: 0xc64c0014  lwc1        $f12, 0x14($s2)
    ctx->pc = 0x28c7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c7a8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C7A8u;
    SET_GPR_U32(ctx, 31, 0x28C7B0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C7A8u, 0x28C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C7B0u;
label_28c7b0:
    // 0x28c7b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28c7b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c7b4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28c7b8: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x28c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x28c7bc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x28c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28c7c0: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x28c7c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28c7c4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x28c7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c7c8: 0x2622002c  addiu       $v0, $s1, 0x2C
    ctx->pc = 0x28c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x28c7cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28c7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28c7d0: 0x3402fffb  ori         $v0, $zero, 0xFFFB
    ctx->pc = 0x28c7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28c7d4: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x28c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x28c7d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28c7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28c7dc: 0xc64c0020  lwc1        $f12, 0x20($s2)
    ctx->pc = 0x28c7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c7e0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C7E0u;
    SET_GPR_U32(ctx, 31, 0x28C7E8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C7E0u, 0x28C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C7E8u;
label_28c7e8:
    // 0x28c7e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28c7ec: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28c7f0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x28c7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x28c7f4: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x28c7f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x28c7f8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28c7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28c7fc: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x28c7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x28c800: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x28c800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c804: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C804u;
    SET_GPR_U32(ctx, 31, 0x28C80Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C804u, 0x28C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C80Cu;
label_28c80c:
    // 0x28c80c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28c810: 0x24467900  addiu       $a2, $v0, 0x7900
    ctx->pc = 0x28c810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28c814: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x28c814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x28c818: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x28c818u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28c81c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28c81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c820: 0x2626003c  addiu       $a2, $s1, 0x3C
    ctx->pc = 0x28c820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x28c824: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x28c824u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x28c828: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x28c828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28c82c: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x28c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x28c830: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28c830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28c834: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x28c834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c838: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C838u;
    SET_GPR_U32(ctx, 31, 0x28C840u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C838u, 0x28C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C840u;
label_28c840:
    // 0x28c840: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28c840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28c844: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x28c844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x28c848: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x28c848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x28c84c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x28c84cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28c850: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28c850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28c854: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x28c854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x28c858: 0xc64c0034  lwc1        $f12, 0x34($s2)
    ctx->pc = 0x28c858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c85c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C85Cu;
    SET_GPR_U32(ctx, 31, 0x28C864u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C85Cu, 0x28C864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C864u;
label_28c864:
    // 0x28c864: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x28c864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28c868: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x28c868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x28c86c: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x28c86cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28c870: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x28c870u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28c874: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x28c874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x28c878: 0x2622004c  addiu       $v0, $s1, 0x4C
    ctx->pc = 0x28c878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x28c87c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28c87cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28c880: 0x3406fffb  ori         $a2, $zero, 0xFFFB
    ctx->pc = 0x28c880u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28c884: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x28c884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x28c888: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x28c888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x28c88c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x28c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x28c890: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x28c890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x28c894: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x28c894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28c898: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x28c898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x28c89c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x28c89cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28c8a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28c8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28c8a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28c8a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c8a8: 0x0  nop
    ctx->pc = 0x28c8a8u;
    // NOP
    // 0x28c8ac: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x28c8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x28c8b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28c8b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c8b4: 0x0  nop
    ctx->pc = 0x28c8b4u;
    // NOP
    // 0x28c8b8: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x28c8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x28c8bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28c8c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c8c4: 0x0  nop
    ctx->pc = 0x28c8c4u;
    // NOP
    // 0x28c8c8: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x28c8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x28c8cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28c8ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c8d0: 0x0  nop
    ctx->pc = 0x28c8d0u;
    // NOP
    // 0x28c8d4: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x28c8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x28c8d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28c8d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c8dc: 0x0  nop
    ctx->pc = 0x28c8dcu;
    // NOP
    // 0x28c8e0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x28c8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x28c8e4: 0x3c033f60  lui         $v1, 0x3F60
    ctx->pc = 0x28c8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16224 << 16));
    // 0x28c8e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28c8e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c8ec: 0x0  nop
    ctx->pc = 0x28c8ecu;
    // NOP
    // 0x28c8f0: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x28c8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x28c8f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28c8f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c8f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c8fc: 0x0  nop
    ctx->pc = 0x28c8fcu;
    // NOP
    // 0x28c900: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x28c900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x28c904: 0x3c033f60  lui         $v1, 0x3F60
    ctx->pc = 0x28c904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16224 << 16));
    // 0x28c908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28c908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c90c: 0x0  nop
    ctx->pc = 0x28c90cu;
    // NOP
    // 0x28c910: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x28c910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x28c914: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x28c914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x28c918: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x28c918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x28c91c: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x28c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28c920: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28c920u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c924: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x28c924u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x28c928: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C928u;
    SET_GPR_U32(ctx, 31, 0x28C930u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C928u, 0x28C930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C930u;
label_28c930:
    // 0x28c930: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x28c930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28c934: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28c934u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c938: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x28c938u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x28c93c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C93Cu;
    SET_GPR_U32(ctx, 31, 0x28C944u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C93Cu, 0x28C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C944u;
label_28c944:
    // 0x28c944: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28c944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28c948: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x28c948u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x28c94c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28c950: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x28c950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x28c954: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x28c954u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28c958: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x28c958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x28c95c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x28c95cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x28c960: 0xffc00008  sd          $zero, 0x8($fp)
    ctx->pc = 0x28c960u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 0));
    // 0x28c964: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x28c964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28c968: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x28c968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28c96c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C96Cu;
    SET_GPR_U32(ctx, 31, 0x28C974u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C96Cu, 0x28C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C974u;
label_28c974:
    // 0x28c974: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x28c974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28c978: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x28c978u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x28c97c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C97Cu;
    SET_GPR_U32(ctx, 31, 0x28C984u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C97Cu, 0x28C984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C984u;
label_28c984:
    // 0x28c984: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x28c984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28c988: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x28c988u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x28c98c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C98Cu;
    SET_GPR_U32(ctx, 31, 0x28C994u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C98Cu, 0x28C994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C994u;
label_28c994:
    // 0x28c994: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x28c994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28c998: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x28c998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x28c99c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C99Cu;
    SET_GPR_U32(ctx, 31, 0x28C9A4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C99Cu, 0x28C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C9A4u;
label_28c9a4:
    // 0x28c9a4: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28c9a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28c9a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28c9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28c9ac: 0x1460006a  bnez        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x28C9ACu;
    {
        const bool branch_taken_0x28c9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c9ac) {
            ctx->pc = 0x28CB58u;
            goto label_28cb58;
        }
    }
    ctx->pc = 0x28C9B4u;
    // 0x28c9b4: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x28c9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x28c9b8: 0x8024bf38  lb          $a0, -0x40C8($at)
    ctx->pc = 0x28c9b8u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x62BF38u));
    // 0x28c9bc: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x28c9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x28c9c0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28c9c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28c9c4: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x28c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28c9c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c9cc: 0x10830042  beq         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x28C9CCu;
    {
        const bool branch_taken_0x28c9cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28c9cc) {
            ctx->pc = 0x28CAD8u;
            goto label_28cad8;
        }
    }
    ctx->pc = 0x28C9D4u;
    // 0x28c9d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C9D4u;
    {
        const bool branch_taken_0x28c9d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c9d4) {
            ctx->pc = 0x28C9E4u;
            goto label_28c9e4;
        }
    }
    ctx->pc = 0x28C9DCu;
    // 0x28c9dc: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x28C9DCu;
    {
        const bool branch_taken_0x28c9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c9dc) {
            ctx->pc = 0x28CBACu;
            goto label_28cbac;
        }
    }
    ctx->pc = 0x28C9E4u;
label_28c9e4:
    // 0x28c9e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c9e8: 0x8c2420f0  lw          $a0, 0x20F0($at)
    ctx->pc = 0x28c9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6220F0u));
    // 0x28c9ec: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x28c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28c9f0: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x28C9F0u;
    {
        const bool branch_taken_0x28c9f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x28c9f0) {
            ctx->pc = 0x28CA50u;
            goto label_28ca50;
        }
    }
    ctx->pc = 0x28C9F8u;
    // 0x28c9f8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28c9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28c9fc: 0x8c2362e0  lw          $v1, 0x62E0($at)
    ctx->pc = 0x28c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3962E0u));
    // 0x28ca00: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x28CA00u;
    {
        const bool branch_taken_0x28ca00 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x28ca00) {
            ctx->pc = 0x28CA50u;
            goto label_28ca50;
        }
    }
    ctx->pc = 0x28CA08u;
    // 0x28ca08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28ca08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28ca0c: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x28ca0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x28ca10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28ca10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28ca14: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28ca14u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28ca18: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28CA18u;
    SET_GPR_U32(ctx, 31, 0x28CA20u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28CA18u, 0x28CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CA20u;
label_28ca20:
    // 0x28ca20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28ca20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28ca24: 0x24020201  addiu       $v0, $zero, 0x201
    ctx->pc = 0x28ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x28ca28: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28ca28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ca2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28ca2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28ca30: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28ca30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28ca34: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28CA34u;
    SET_GPR_U32(ctx, 31, 0x28CA3Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28CA34u, 0x28CA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CA3Cu;
label_28ca3c:
    // 0x28ca3c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28ca3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28ca40: 0x8c2362e0  lw          $v1, 0x62E0($at)
    ctx->pc = 0x28ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3962E0u));
    // 0x28ca44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28ca44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28ca48: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28ca48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28ca4c: 0xac2362e0  sw          $v1, 0x62E0($at)
    ctx->pc = 0x28ca4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3962E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3962E0u, _value); } while (0);
label_28ca50:
    // 0x28ca50: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ca50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ca54: 0x8c2420f0  lw          $a0, 0x20F0($at)
    ctx->pc = 0x28ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6220F0u));
    // 0x28ca58: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x28ca58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x28ca5c: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x28CA5Cu;
    {
        const bool branch_taken_0x28ca5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x28ca5c) {
            ctx->pc = 0x28CABCu;
            goto label_28cabc;
        }
    }
    ctx->pc = 0x28CA64u;
    // 0x28ca64: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28ca64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28ca68: 0x8c2462e0  lw          $a0, 0x62E0($at)
    ctx->pc = 0x28ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3962E0u));
    // 0x28ca6c: 0x18800013  blez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28CA6Cu;
    {
        const bool branch_taken_0x28ca6c = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x28ca6c) {
            ctx->pc = 0x28CABCu;
            goto label_28cabc;
        }
    }
    ctx->pc = 0x28CA74u;
    // 0x28ca74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28ca74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28ca78: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x28ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x28ca7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28ca7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28ca80: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28ca80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28ca84: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28CA84u;
    SET_GPR_U32(ctx, 31, 0x28CA8Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28CA84u, 0x28CA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CA8Cu;
label_28ca8c:
    // 0x28ca8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28ca8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28ca90: 0x24050201  addiu       $a1, $zero, 0x201
    ctx->pc = 0x28ca90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x28ca94: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x28ca94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x28ca98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28ca98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28ca9c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28ca9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28caa0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28CAA0u;
    SET_GPR_U32(ctx, 31, 0x28CAA8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28CAA0u, 0x28CAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CAA8u;
label_28caa8:
    // 0x28caa8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28caa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28caac: 0x8c2462e0  lw          $a0, 0x62E0($at)
    ctx->pc = 0x28caacu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3962E0u));
    // 0x28cab0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x28cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x28cab4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28cab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28cab8: 0xac2362e0  sw          $v1, 0x62E0($at)
    ctx->pc = 0x28cab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3962E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3962E0u, _value); } while (0);
label_28cabc:
    // 0x28cabc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cac0: 0x8c2420f0  lw          $a0, 0x20F0($at)
    ctx->pc = 0x28cac0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6220F0u));
    // 0x28cac4: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x28cac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28cac8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cacc: 0xac2620f0  sw          $a2, 0x20F0($at)
    ctx->pc = 0x28caccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6220F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F0u, _value); } while (0);
    // 0x28cad0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x28CAD0u;
    {
        const bool branch_taken_0x28cad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cad0) {
            ctx->pc = 0x28CBACu;
            goto label_28cbac;
        }
    }
    ctx->pc = 0x28CAD8u;
label_28cad8:
    // 0x28cad8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cadc: 0x8c2420f0  lw          $a0, 0x20F0($at)
    ctx->pc = 0x28cadcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6220F0u));
    // 0x28cae0: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x28cae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28cae4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cae8: 0xac2520f0  sw          $a1, 0x20F0($at)
    ctx->pc = 0x28cae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6220F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F0u, _value); } while (0);
    // 0x28caec: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x28caecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x28caf0: 0x1483002e  bne         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x28CAF0u;
    {
        const bool branch_taken_0x28caf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x28caf0) {
            ctx->pc = 0x28CBACu;
            goto label_28cbac;
        }
    }
    ctx->pc = 0x28CAF8u;
    // 0x28caf8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28caf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28cafc: 0x8c2462e0  lw          $a0, 0x62E0($at)
    ctx->pc = 0x28cafcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3962E0u));
    // 0x28cb00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28cb04: 0x14830029  bne         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x28CB04u;
    {
        const bool branch_taken_0x28cb04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x28cb04) {
            ctx->pc = 0x28CBACu;
            goto label_28cbac;
        }
    }
    ctx->pc = 0x28CB0Cu;
    // 0x28cb0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28cb0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28cb10: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x28cb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x28cb14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28cb14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cb18: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28cb18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cb1c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28CB1Cu;
    SET_GPR_U32(ctx, 31, 0x28CB24u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28CB1Cu, 0x28CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB24u;
label_28cb24:
    // 0x28cb24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28cb24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28cb28: 0x24040201  addiu       $a0, $zero, 0x201
    ctx->pc = 0x28cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x28cb2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28cb2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cb30: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28cb30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cb34: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28CB34u;
    SET_GPR_U32(ctx, 31, 0x28CB3Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28CB34u, 0x28CB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB3Cu;
label_28cb3c:
    // 0x28cb3c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28cb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28cb40: 0x8c2362e0  lw          $v1, 0x62E0($at)
    ctx->pc = 0x28cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3962E0u));
    // 0x28cb44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28cb48: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28cb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28cb4c: 0xac2362e0  sw          $v1, 0x62E0($at)
    ctx->pc = 0x28cb4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3962E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3962E0u, _value); } while (0);
    // 0x28cb50: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x28CB50u;
    {
        const bool branch_taken_0x28cb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cb50) {
            ctx->pc = 0x28CBACu;
            goto label_28cbac;
        }
    }
    ctx->pc = 0x28CB58u;
label_28cb58:
    // 0x28cb58: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28cb58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28cb5c: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x28cb5cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28cb60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cb64: 0x16a30011  bne         $s5, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x28CB64u;
    {
        const bool branch_taken_0x28cb64 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x28cb64) {
            ctx->pc = 0x28CBACu;
            goto label_28cbac;
        }
    }
    ctx->pc = 0x28CB6Cu;
    // 0x28cb6c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cb70: 0x8c2220f0  lw          $v0, 0x20F0($at)
    ctx->pc = 0x28cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6220F0u));
    // 0x28cb74: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x28cb74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28cb78: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x28CB78u;
    {
        const bool branch_taken_0x28cb78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cb78) {
            ctx->pc = 0x28CB88u;
            goto label_28cb88;
        }
    }
    ctx->pc = 0x28CB80u;
    // 0x28cb80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cb84: 0xac2020f0  sw          $zero, 0x20F0($at)
    ctx->pc = 0x28cb84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F0u, _value); } while (0);
label_28cb88:
    // 0x28cb88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cb8c: 0x8c2220f0  lw          $v0, 0x20F0($at)
    ctx->pc = 0x28cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6220F0u));
    // 0x28cb90: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x28cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x28cb94: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x28cb94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28cb98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28cb98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28cb9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28cb9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cba0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28cba0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cba4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28CBA4u;
    SET_GPR_U32(ctx, 31, 0x28CBACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28CBA4u, 0x28CBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CBACu;
label_28cbac:
    // 0x28cbac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28cbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cbb0: 0xa2065e04  sb          $a2, 0x5E04($s0)
    ctx->pc = 0x28cbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 6));
    // 0x28cbb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28cbb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28cbb8: 0x0  nop
    ctx->pc = 0x28cbb8u;
    // NOP
    // 0x28cbbc: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28cbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x28cbc0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x28cbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x28cbc4: 0x8c23c294  lw          $v1, -0x3D6C($at)
    ctx->pc = 0x28cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FC294u));
    // 0x28cbc8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CBC8u;
    {
        const bool branch_taken_0x28cbc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cbc8) {
            ctx->pc = 0x28CBDCu;
            goto label_28cbdc;
        }
    }
    ctx->pc = 0x28CBD0u;
    // 0x28cbd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28cbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cbd4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cbd8: 0xac2520e0  sw          $a1, 0x20E0($at)
    ctx->pc = 0x28cbd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6220E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220E0u, _value); } while (0);
label_28cbdc:
    // 0x28cbdc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28cbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28cbe0: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x28cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x28cbe4: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x28cbe4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x28cbe8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x28cbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x28cbec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CBECu;
    {
        const bool branch_taken_0x28cbec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cbec) {
            ctx->pc = 0x28CC00u;
            goto label_28cc00;
        }
    }
    ctx->pc = 0x28CBF4u;
    // 0x28cbf4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x28cbf4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cbf8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cbf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cbfc: 0xac3520e0  sw          $s5, 0x20E0($at)
    ctx->pc = 0x28cbfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x6220E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220E0u, _value); } while (0);
label_28cc00:
    // 0x28cc00: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cc04: 0x8c2520f8  lw          $a1, 0x20F8($at)
    ctx->pc = 0x28cc04u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6220F8u));
    // 0x28cc08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28cc0c: 0x10a30086  beq         $a1, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x28CC0Cu;
    {
        const bool branch_taken_0x28cc0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x28cc0c) {
            ctx->pc = 0x28CE28u;
            goto label_28ce28;
        }
    }
    ctx->pc = 0x28CC14u;
    // 0x28cc14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cc18: 0x10a3002b  beq         $a1, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x28CC18u;
    {
        const bool branch_taken_0x28cc18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x28cc18) {
            ctx->pc = 0x28CCC8u;
            goto label_28ccc8;
        }
    }
    ctx->pc = 0x28CC20u;
    // 0x28cc20: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28CC20u;
    {
        const bool branch_taken_0x28cc20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cc20) {
            ctx->pc = 0x28CC30u;
            goto label_28cc30;
        }
    }
    ctx->pc = 0x28CC28u;
    // 0x28cc28: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x28CC28u;
    {
        const bool branch_taken_0x28cc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cc28) {
            ctx->pc = 0x28CE70u;
            goto label_28ce70;
        }
    }
    ctx->pc = 0x28CC30u;
label_28cc30:
    // 0x28cc30: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28cc34: 0x30640002  andi        $a0, $v1, 0x2
    ctx->pc = 0x28cc34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28cc38: 0x1480008d  bnez        $a0, . + 4 + (0x8D << 2)
    ctx->pc = 0x28CC38u;
    {
        const bool branch_taken_0x28cc38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cc38) {
            ctx->pc = 0x28CE70u;
            goto label_28ce70;
        }
    }
    ctx->pc = 0x28CC40u;
    // 0x28cc40: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x28cc40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28cc44: 0xa2025de8  sb          $v0, 0x5DE8($s0)
    ctx->pc = 0x28cc44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24040), (uint8_t)GPR_U32(ctx, 2));
    // 0x28cc48: 0x26150520  addiu       $s5, $s0, 0x520
    ctx->pc = 0x28cc48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    // 0x28cc4c: 0x82025de8  lb          $v0, 0x5DE8($s0)
    ctx->pc = 0x28cc4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24040)));
    // 0x28cc50: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x28cc50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28cc54: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x28cc54u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x28cc58: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x28cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x28cc5c: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x28cc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x28cc60: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x28cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x28cc64: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x28cc64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28cc68: 0x3483008c  ori         $v1, $a0, 0x8C
    ctx->pc = 0x28cc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)140);
    // 0x28cc6c: 0xafa3017c  sw          $v1, 0x17C($sp)
    ctx->pc = 0x28cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
    // 0x28cc70: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x28cc70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28cc74: 0x8fa4017c  lw          $a0, 0x17C($sp)
    ctx->pc = 0x28cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x28cc78: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x28cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x28cc7c: 0x3445b000  ori         $a1, $v0, 0xB000
    ctx->pc = 0x28cc7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x28cc80: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28cc80u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cc84: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x28CC84u;
    SET_GPR_U32(ctx, 31, 0x28CC8Cu);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x28CC84u, 0x28CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CC8Cu;
label_28cc8c:
    // 0x28cc8c: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x28cc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x28cc90: 0x8fb50174  lw          $s5, 0x174($sp)
    ctx->pc = 0x28cc90u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x28cc94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28cc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28cc98: 0x12a30075  beq         $s5, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x28CC98u;
    {
        const bool branch_taken_0x28cc98 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x28cc98) {
            ctx->pc = 0x28CE70u;
            goto label_28ce70;
        }
    }
    ctx->pc = 0x28CCA0u;
    // 0x28cca0: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28cca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28cca4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x28cca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x28cca8: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x28cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
    // 0x28ccac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ccacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ccb0: 0x8c2320f8  lw          $v1, 0x20F8($at)
    ctx->pc = 0x28ccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6220F8u));
    // 0x28ccb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28ccb8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ccb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ccbc: 0xac2320f8  sw          $v1, 0x20F8($at)
    ctx->pc = 0x28ccbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
    // 0x28ccc0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x28CCC0u;
    {
        const bool branch_taken_0x28ccc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ccc0) {
            ctx->pc = 0x28CE70u;
            goto label_28ce70;
        }
    }
    ctx->pc = 0x28CCC8u;
label_28ccc8:
    // 0x28ccc8: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28cccc: 0x30740002  andi        $s4, $v1, 0x2
    ctx->pc = 0x28ccccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28ccd0: 0x1280002f  beqz        $s4, . + 4 + (0x2F << 2)
    ctx->pc = 0x28CCD0u;
    {
        const bool branch_taken_0x28ccd0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ccd0) {
            ctx->pc = 0x28CD90u;
            goto label_28cd90;
        }
    }
    ctx->pc = 0x28CCD8u;
    // 0x28ccd8: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x28CCD8u;
    SET_GPR_U32(ctx, 31, 0x28CCE0u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x28CCD8u, 0x28CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CCE0u;
label_28cce0:
    // 0x28cce0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28cce0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28cce4: 0x14600062  bnez        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x28CCE4u;
    {
        const bool branch_taken_0x28cce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cce4) {
            ctx->pc = 0x28CE70u;
            goto label_28ce70;
        }
    }
    ctx->pc = 0x28CCECu;
    // 0x28ccec: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28ccecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28ccf0: 0x2411fffd  addiu       $s1, $zero, -0x3
    ctx->pc = 0x28ccf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28ccf4: 0x713824  and         $a3, $v1, $s1
    ctx->pc = 0x28ccf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x28ccf8: 0xae07685c  sw          $a3, 0x685C($s0)
    ctx->pc = 0x28ccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 7));
    // 0x28ccfc: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x28ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x28cd00: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x28cd00u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28cd04: 0x82035de8  lb          $v1, 0x5DE8($s0)
    ctx->pc = 0x28cd04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24040)));
    // 0x28cd08: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x28cd08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28cd0c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x28cd0cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x28cd10: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x28cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x28cd14: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x28cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28cd18: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x28cd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
    // 0x28cd1c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x28cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x28cd20: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x28cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28cd24: 0x346700a4  ori         $a3, $v1, 0xA4
    ctx->pc = 0x28cd24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)164);
    // 0x28cd28: 0xafa7017c  sw          $a3, 0x17C($sp)
    ctx->pc = 0x28cd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 7));
    // 0x28cd2c: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x28cd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28cd30: 0x8fa3017c  lw          $v1, 0x17C($sp)
    ctx->pc = 0x28cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x28cd34: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28cd34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28cd38: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28cd38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x28cd3c: 0x34a34000  ori         $v1, $a1, 0x4000
    ctx->pc = 0x28cd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x28cd40: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28cd40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28cd44: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28cd44u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cd48: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x28CD48u;
    SET_GPR_U32(ctx, 31, 0x28CD50u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x28CD48u, 0x28CD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD50u;
label_28cd50:
    // 0x28cd50: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x28cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x28cd54: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x28cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x28cd58: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x28cd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28cd5c: 0x10640044  beq         $v1, $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x28CD5Cu;
    {
        const bool branch_taken_0x28cd5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x28cd5c) {
            ctx->pc = 0x28CE70u;
            goto label_28ce70;
        }
    }
    ctx->pc = 0x28CD64u;
    // 0x28cd64: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28cd68: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x28cd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x28cd6c: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x28cd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
    // 0x28cd70: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x28cd70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x28cd74: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cd78: 0x8c2320f8  lw          $v1, 0x20F8($at)
    ctx->pc = 0x28cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6220F8u));
    // 0x28cd7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28cd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28cd80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cd84: 0xac2320f8  sw          $v1, 0x20F8($at)
    ctx->pc = 0x28cd84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
    // 0x28cd88: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x28CD88u;
    {
        const bool branch_taken_0x28cd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cd88) {
            ctx->pc = 0x28CE70u;
            goto label_28ce70;
        }
    }
    ctx->pc = 0x28CD90u;
label_28cd90:
    // 0x28cd90: 0x26150120  addiu       $s5, $s0, 0x120
    ctx->pc = 0x28cd90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x28cd94: 0x82035de8  lb          $v1, 0x5DE8($s0)
    ctx->pc = 0x28cd94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24040)));
    // 0x28cd98: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x28cd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28cd9c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28cd9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28cda0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28cda4: 0x39040  sll         $s2, $v1, 1
    ctx->pc = 0x28cda4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28cda8: 0xafb20178  sw          $s2, 0x178($sp)
    ctx->pc = 0x28cda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 18));
    // 0x28cdac: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x28cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x28cdb0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28cdb4: 0x344400a4  ori         $a0, $v0, 0xA4
    ctx->pc = 0x28cdb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)164);
    // 0x28cdb8: 0xafa4017c  sw          $a0, 0x17C($sp)
    ctx->pc = 0x28cdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 4));
    // 0x28cdbc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x28cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28cdc0: 0x8fa5017c  lw          $a1, 0x17C($sp)
    ctx->pc = 0x28cdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x28cdc4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x28cdc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x28cdc8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x28cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x28cdcc: 0x34464000  ori         $a2, $v0, 0x4000
    ctx->pc = 0x28cdccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x28cdd0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x28cdd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28cdd4: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x28cdd4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28cdd8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28cdd8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cddc: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x28CDDCu;
    SET_GPR_U32(ctx, 31, 0x28CDE4u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x28CDDCu, 0x28CDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CDE4u;
label_28cde4:
    // 0x28cde4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28cde4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28cde8: 0xafa60174  sw          $a2, 0x174($sp)
    ctx->pc = 0x28cde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 6));
    // 0x28cdec: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x28cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x28cdf0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28cdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28cdf4: 0x1065001e  beq         $v1, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x28CDF4u;
    {
        const bool branch_taken_0x28cdf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x28cdf4) {
            ctx->pc = 0x28CE70u;
            goto label_28ce70;
        }
    }
    ctx->pc = 0x28CDFCu;
    // 0x28cdfc: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28ce00: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x28ce00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x28ce04: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x28ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
    // 0x28ce08: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x28ce08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x28ce0c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ce0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ce10: 0x8c2320f8  lw          $v1, 0x20F8($at)
    ctx->pc = 0x28ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6220F8u));
    // 0x28ce14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28ce18: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ce18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ce1c: 0xac2320f8  sw          $v1, 0x20F8($at)
    ctx->pc = 0x28ce1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
    // 0x28ce20: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28CE20u;
    {
        const bool branch_taken_0x28ce20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ce20) {
            ctx->pc = 0x28CE70u;
            goto label_28ce70;
        }
    }
    ctx->pc = 0x28CE28u;
label_28ce28:
    // 0x28ce28: 0x8e06685c  lw          $a2, 0x685C($s0)
    ctx->pc = 0x28ce28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28ce2c: 0x30c30002  andi        $v1, $a2, 0x2
    ctx->pc = 0x28ce2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x28ce30: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x28CE30u;
    {
        const bool branch_taken_0x28ce30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ce30) {
            ctx->pc = 0x28CE70u;
            goto label_28ce70;
        }
    }
    ctx->pc = 0x28CE38u;
    // 0x28ce38: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x28CE38u;
    SET_GPR_U32(ctx, 31, 0x28CE40u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x28CE38u, 0x28CE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE40u;
label_28ce40:
    // 0x28ce40: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28ce40u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ce44: 0x1660000a  bnez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x28CE44u;
    {
        const bool branch_taken_0x28ce44 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ce44) {
            ctx->pc = 0x28CE70u;
            goto label_28ce70;
        }
    }
    ctx->pc = 0x28CE4Cu;
    // 0x28ce4c: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28ce50: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x28ce50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28ce54: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x28ce54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x28ce58: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x28ce58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
    // 0x28ce5c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ce5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ce60: 0x8c2320f8  lw          $v1, 0x20F8($at)
    ctx->pc = 0x28ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6220F8u));
    // 0x28ce64: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x28ce64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28ce68: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ce68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ce6c: 0xac3220f8  sw          $s2, 0x20F8($at)
    ctx->pc = 0x28ce6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
label_28ce70:
    // 0x28ce70: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ce70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ce74: 0x8c2320e0  lw          $v1, 0x20E0($at)
    ctx->pc = 0x28ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6220E0u));
    // 0x28ce78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28ce78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ce7c: 0x1466028e  bne         $v1, $a2, . + 4 + (0x28E << 2)
    ctx->pc = 0x28CE7Cu;
    {
        const bool branch_taken_0x28ce7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x28ce7c) {
            ctx->pc = 0x28D8B8u;
            goto label_28d8b8;
        }
    }
    ctx->pc = 0x28CE84u;
    // 0x28ce84: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ce84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ce88: 0x8c2320f8  lw          $v1, 0x20F8($at)
    ctx->pc = 0x28ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6220F8u));
    // 0x28ce8c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x28ce8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28ce90: 0x14660289  bne         $v1, $a2, . + 4 + (0x289 << 2)
    ctx->pc = 0x28CE90u;
    {
        const bool branch_taken_0x28ce90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x28ce90) {
            ctx->pc = 0x28D8B8u;
            goto label_28d8b8;
        }
    }
    ctx->pc = 0x28CE98u;
    // 0x28ce98: 0xa200663d  sb          $zero, 0x663D($s0)
    ctx->pc = 0x28ce98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26173), (uint8_t)GPR_U32(ctx, 0));
    // 0x28ce9c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ce9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cea0: 0xac2020e0  sw          $zero, 0x20E0($at)
    ctx->pc = 0x28cea0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220E0u, _value); } while (0);
    // 0x28cea4: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28cea8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28ceac: 0xae035dd0  sw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 3));
    // 0x28ceb0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ceb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ceb4: 0xac2020d0  sw          $zero, 0x20D0($at)
    ctx->pc = 0x28ceb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220D0u, _value); } while (0);
    // 0x28ceb8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ceb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cebc: 0xac2020d8  sw          $zero, 0x20D8($at)
    ctx->pc = 0x28cebcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220D8u, _value); } while (0);
    // 0x28cec0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cec4: 0xac2020f8  sw          $zero, 0x20F8($at)
    ctx->pc = 0x28cec4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
    // 0x28cec8: 0x1000027b  b           . + 4 + (0x27B << 2)
    ctx->pc = 0x28CEC8u;
    {
        const bool branch_taken_0x28cec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cec8) {
            ctx->pc = 0x28D8B8u;
            goto label_28d8b8;
        }
    }
    ctx->pc = 0x28CED0u;
label_28ced0:
    // 0x28ced0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28ced0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ced4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ced4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ced8: 0xe42020c8  swc1        $f0, 0x20C8($at)
    ctx->pc = 0x28ced8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6220C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220C8u, _value); } while (0); }
    // 0x28cedc: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28cedcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28cee0: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x28cee0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28cee4: 0x1500000e  bnez        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x28CEE4u;
    {
        const bool branch_taken_0x28cee4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cee4) {
            ctx->pc = 0x28CF20u;
            goto label_28cf20;
        }
    }
    ctx->pc = 0x28CEECu;
    // 0x28ceec: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x28ceecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x28cef0: 0x8c26c294  lw          $a2, -0x3D6C($at)
    ctx->pc = 0x28cef0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5FC294u));
    // 0x28cef4: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CEF4u;
    {
        const bool branch_taken_0x28cef4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cef4) {
            ctx->pc = 0x28CF0Cu;
            goto label_28cf0c;
        }
    }
    ctx->pc = 0x28CEFCu;
    // 0x28cefc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x28cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28cf00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28cf00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28cf04: 0xc0d7558  jal         func_35D560
    ctx->pc = 0x28CF04u;
    SET_GPR_U32(ctx, 31, 0x28CF0Cu);
    ctx->pc = 0x35D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D560u, 0x28CF04u, 0x28CF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CF0Cu;
label_28cf0c:
    // 0x28cf0c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x28cf0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cf10: 0xc062b40  jal         func_18AD00
    ctx->pc = 0x28CF10u;
    SET_GPR_U32(ctx, 31, 0x28CF18u);
    ctx->pc = 0x18AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD00u, 0x28CF10u, 0x28CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CF18u;
label_28cf18:
    // 0x28cf18: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28cf18u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28cf1c: 0xa2006855  sb          $zero, 0x6855($s0)
    ctx->pc = 0x28cf1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26709), (uint8_t)GPR_U32(ctx, 0));
label_28cf20:
    // 0x28cf20: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cf20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cf24: 0xac2020d8  sw          $zero, 0x20D8($at)
    ctx->pc = 0x28cf24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220D8u, _value); } while (0);
    // 0x28cf28: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x28cf28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x28cf2c: 0x24e2e7d0  addiu       $v0, $a3, -0x1830
    ctx->pc = 0x28cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961104));
    // 0x28cf30: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x28cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x28cf34: 0x26034970  addiu       $v1, $s0, 0x4970
    ctx->pc = 0x28cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 18800));
    // 0x28cf38: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x28cf38u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28cf3c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x28cf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x28cf40: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x28cf40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x28cf44: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x28cf44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x28cf48: 0x34e21009  ori         $v0, $a3, 0x1009
    ctx->pc = 0x28cf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4105);
    // 0x28cf4c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x28cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x28cf50: 0x24020730  addiu       $v0, $zero, 0x730
    ctx->pc = 0x28cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1840));
    // 0x28cf54: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x28cf54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28cf58: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x28cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x28cf5c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x28cf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x28cf60: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x28cf60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x28cf64: 0xffc60008  sd          $a2, 0x8($fp)
    ctx->pc = 0x28cf64u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 6));
    // 0x28cf68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28cf6c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x28cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x28cf70: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x28cf70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x28cf74: 0x34c3103b  ori         $v1, $a2, 0x103B
    ctx->pc = 0x28cf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4155);
    // 0x28cf78: 0xaee30004  sw          $v1, 0x4($s7)
    ctx->pc = 0x28cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 3));
    // 0x28cf7c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x28cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28cf80: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x28cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x28cf84: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x28cf84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x28cf88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28cf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28cf8c: 0xfee20008  sd          $v0, 0x8($s7)
    ctx->pc = 0x28cf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 2));
    // 0x28cf90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28cf90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cf94: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x28cf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x28cf98: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x28cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x28cf9c: 0x90690004  lbu         $t1, 0x4($v1)
    ctx->pc = 0x28cf9cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28cfa0: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x28cfa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x28cfa4: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x28cfa4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x28cfa8: 0x2407fffb  addiu       $a3, $zero, -0x5
    ctx->pc = 0x28cfa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x28cfac: 0x1273024  and         $a2, $t1, $a3
    ctx->pc = 0x28cfacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x28cfb0: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x28cfb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x28cfb4: 0xa0660004  sb          $a2, 0x4($v1)
    ctx->pc = 0x28cfb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x28cfb8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28cfbc: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x28cfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x28cfc0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28cfc4: 0x34621043  ori         $v0, $v1, 0x1043
    ctx->pc = 0x28cfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x28cfc8: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x28cfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x28cfcc: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x28cfccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28cfd0: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x28cfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x28cfd4: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x28cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x28cfd8: 0xfec30008  sd          $v1, 0x8($s6)
    ctx->pc = 0x28cfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 3));
    // 0x28cfdc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28cfe0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28cfe4: 0x3c037400  lui         $v1, 0x7400
    ctx->pc = 0x28cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29696 << 16));
    // 0x28cfe8: 0x34633a14  ori         $v1, $v1, 0x3A14
    ctx->pc = 0x28cfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14868);
    // 0x28cfec: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x28cfecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x28cff0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28cff4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x28cff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x28cff8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28cff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x28cffc: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x28cffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d000: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28D000u;
    SET_GPR_U32(ctx, 31, 0x28D008u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28D000u, 0x28D008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D008u;
label_28d008:
    // 0x28d008: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28d008u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d00c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x28d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28d010: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28d010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28d014: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28d014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28d018: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x28d018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x28d01c: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x28d01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d020: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28D020u;
    SET_GPR_U32(ctx, 31, 0x28D028u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28D020u, 0x28D028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D028u;
label_28d028:
    // 0x28d028: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x28d028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x28d02c: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x28d02cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28d030: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28d030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28d034: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x28d034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28d038: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x28d038u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28d03c: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x28d03cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x28d040: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x28d040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x28d044: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x28d044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x28d048: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28d048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28d04c: 0x3406fffb  ori         $a2, $zero, 0xFFFB
    ctx->pc = 0x28d04cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28d050: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x28d050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x28d054: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x28d054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x28d058: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x28d058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d05c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28D05Cu;
    SET_GPR_U32(ctx, 31, 0x28D064u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28D05Cu, 0x28D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D064u;
label_28d064:
    // 0x28d064: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28d064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28d068: 0x24437000  addiu       $v1, $v0, 0x7000
    ctx->pc = 0x28d068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28d06c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x28d06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28d070: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x28d070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x28d074: 0xc64c0014  lwc1        $f12, 0x14($s2)
    ctx->pc = 0x28d074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d078: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28D078u;
    SET_GPR_U32(ctx, 31, 0x28D080u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28D078u, 0x28D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D080u;
label_28d080:
    // 0x28d080: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x28d080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x28d084: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x28d084u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28d088: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28d088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28d08c: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x28d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28d090: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x28d090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28d094: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x28d094u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28d098: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x28d098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28d09c: 0x2623002c  addiu       $v1, $s1, 0x2C
    ctx->pc = 0x28d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x28d0a0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x28d0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x28d0a4: 0x3402fffb  ori         $v0, $zero, 0xFFFB
    ctx->pc = 0x28d0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28d0a8: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x28d0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x28d0ac: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x28d0acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x28d0b0: 0xc64c0020  lwc1        $f12, 0x20($s2)
    ctx->pc = 0x28d0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d0b4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28D0B4u;
    SET_GPR_U32(ctx, 31, 0x28D0BCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28D0B4u, 0x28D0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D0BCu;
label_28d0bc:
    // 0x28d0bc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28d0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28d0c0: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x28d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x28d0c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28d0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28d0c8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x28d0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x28d0cc: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x28d0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d0d0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28D0D0u;
    SET_GPR_U32(ctx, 31, 0x28D0D8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28D0D0u, 0x28D0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D0D8u;
label_28d0d8:
    // 0x28d0d8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x28d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28d0dc: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x28d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x28d0e0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x28d0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28d0e4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x28d0e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28d0e8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x28d0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28d0ec: 0x2622003c  addiu       $v0, $s1, 0x3C
    ctx->pc = 0x28d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x28d0f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28d0f4: 0x3402fffb  ori         $v0, $zero, 0xFFFB
    ctx->pc = 0x28d0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28d0f8: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x28d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x28d0fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28d0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28d100: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x28d100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d104: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28D104u;
    SET_GPR_U32(ctx, 31, 0x28D10Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28D104u, 0x28D10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D10Cu;
label_28d10c:
    // 0x28d10c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28d110: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28d110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28d114: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28d114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28d118: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x28d118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x28d11c: 0xc64c0034  lwc1        $f12, 0x34($s2)
    ctx->pc = 0x28d11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d120: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28D120u;
    SET_GPR_U32(ctx, 31, 0x28D128u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28D120u, 0x28D128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D128u;
label_28d128:
    // 0x28d128: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28d128u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d12c: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x28d12cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x28d130: 0x24a27900  addiu       $v0, $a1, 0x7900
    ctx->pc = 0x28d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
    // 0x28d134: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x28d134u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28d138: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x28d138u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28d13c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x28d13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x28d140: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x28d140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x28d144: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x28d144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x28d148: 0x3402fffb  ori         $v0, $zero, 0xFFFB
    ctx->pc = 0x28d148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28d14c: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x28d14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x28d150: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x28d150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x28d154: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x28d154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x28d158: 0x34458080  ori         $a1, $v0, 0x8080
    ctx->pc = 0x28d158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x28d15c: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x28d15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28d160: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x28d160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x28d164: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28d164u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d168: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x28d168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28d16c: 0x1480001f  bnez        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x28D16Cu;
    {
        const bool branch_taken_0x28d16c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d16c) {
            ctx->pc = 0x28D1ECu;
            goto label_28d1ec;
        }
    }
    ctx->pc = 0x28D174u;
    // 0x28d174: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d178: 0x0  nop
    ctx->pc = 0x28d178u;
    // NOP
    // 0x28d17c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x28d17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x28d180: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d184: 0x0  nop
    ctx->pc = 0x28d184u;
    // NOP
    // 0x28d188: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x28d188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x28d18c: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x28d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x28d190: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d190u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d194: 0x0  nop
    ctx->pc = 0x28d194u;
    // NOP
    // 0x28d198: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x28d198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x28d19c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d19cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d1a0: 0x0  nop
    ctx->pc = 0x28d1a0u;
    // NOP
    // 0x28d1a4: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x28d1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x28d1a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d1a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d1ac: 0x0  nop
    ctx->pc = 0x28d1acu;
    // NOP
    // 0x28d1b0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x28d1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x28d1b4: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x28d1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
    // 0x28d1b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28d1b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d1bc: 0x0  nop
    ctx->pc = 0x28d1bcu;
    // NOP
    // 0x28d1c0: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x28d1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x28d1c4: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x28d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x28d1c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d1c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d1cc: 0x0  nop
    ctx->pc = 0x28d1ccu;
    // NOP
    // 0x28d1d0: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x28d1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x28d1d4: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x28d1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
    // 0x28d1d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28d1d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d1dc: 0x0  nop
    ctx->pc = 0x28d1dcu;
    // NOP
    // 0x28d1e0: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x28d1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x28d1e4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x28D1E4u;
    {
        const bool branch_taken_0x28d1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d1e4) {
            ctx->pc = 0x28D270u;
            goto label_28d270;
        }
    }
    ctx->pc = 0x28D1ECu;
label_28d1ec:
    // 0x28d1ec: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28d1ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d1f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28d1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28d1f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28d1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d1f8: 0x1464001d  bne         $v1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x28D1F8u;
    {
        const bool branch_taken_0x28d1f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x28d1f8) {
            ctx->pc = 0x28D270u;
            goto label_28d270;
        }
    }
    ctx->pc = 0x28D200u;
    // 0x28d200: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d204: 0x0  nop
    ctx->pc = 0x28d204u;
    // NOP
    // 0x28d208: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x28d208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x28d20c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d20cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d210: 0x0  nop
    ctx->pc = 0x28d210u;
    // NOP
    // 0x28d214: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x28d214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x28d218: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28d218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28d21c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28d21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d220: 0x0  nop
    ctx->pc = 0x28d220u;
    // NOP
    // 0x28d224: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x28d224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x28d228: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d22c: 0x0  nop
    ctx->pc = 0x28d22cu;
    // NOP
    // 0x28d230: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x28d230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x28d234: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d238: 0x0  nop
    ctx->pc = 0x28d238u;
    // NOP
    // 0x28d23c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x28d23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x28d240: 0x3c023f60  lui         $v0, 0x3F60
    ctx->pc = 0x28d240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16224 << 16));
    // 0x28d244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28d244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d248: 0x0  nop
    ctx->pc = 0x28d248u;
    // NOP
    // 0x28d24c: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x28d24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x28d250: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28d250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28d254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28d254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d258: 0x0  nop
    ctx->pc = 0x28d258u;
    // NOP
    // 0x28d25c: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x28d25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x28d260: 0x3c033f60  lui         $v1, 0x3F60
    ctx->pc = 0x28d260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16224 << 16));
    // 0x28d264: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d268: 0x0  nop
    ctx->pc = 0x28d268u;
    // NOP
    // 0x28d26c: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x28d26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_28d270:
    // 0x28d270: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x28d270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x28d274: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x28d274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x28d278: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x28d278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28d27c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x28d27cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x28d280: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28D280u;
    SET_GPR_U32(ctx, 31, 0x28D288u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28D280u, 0x28D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D288u;
label_28d288:
    // 0x28d288: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28d288u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d28c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x28d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28d290: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x28d290u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x28d294: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28D294u;
    SET_GPR_U32(ctx, 31, 0x28D29Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28D294u, 0x28D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D29Cu;
label_28d29c:
    // 0x28d29c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28d29cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d2a0: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x28d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28d2a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28d2a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d2a8: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x28d2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28d2ac: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28D2ACu;
    SET_GPR_U32(ctx, 31, 0x28D2B4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28D2ACu, 0x28D2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2B4u;
label_28d2b4:
    // 0x28d2b4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x28d2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28d2b8: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x28d2b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x28d2bc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28D2BCu;
    SET_GPR_U32(ctx, 31, 0x28D2C4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28D2BCu, 0x28D2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2C4u;
label_28d2c4:
    // 0x28d2c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28d2c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d2c8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x28d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28d2cc: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x28d2ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x28d2d0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28D2D0u;
    SET_GPR_U32(ctx, 31, 0x28D2D8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28D2D0u, 0x28D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2D8u;
label_28d2d8:
    // 0x28d2d8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28d2d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d2dc: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x28d2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28d2e0: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x28d2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x28d2e4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28D2E4u;
    SET_GPR_U32(ctx, 31, 0x28D2ECu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28D2E4u, 0x28D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2ECu;
label_28d2ec:
    // 0x28d2ec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28d2ecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d2f0: 0x8e04685c  lw          $a0, 0x685C($s0)
    ctx->pc = 0x28d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28d2f4: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x28d2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x28d2f8: 0x1460004d  bnez        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x28D2F8u;
    {
        const bool branch_taken_0x28d2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d2f8) {
            ctx->pc = 0x28D430u;
            goto label_28d430;
        }
    }
    ctx->pc = 0x28D300u;
    // 0x28d300: 0x92046624  lbu         $a0, 0x6624($s0)
    ctx->pc = 0x28d300u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d304: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x28d304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x28d308: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28d308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d30c: 0x14440037  bne         $v0, $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x28D30Cu;
    {
        const bool branch_taken_0x28d30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x28d30c) {
            ctx->pc = 0x28D3ECu;
            goto label_28d3ec;
        }
    }
    ctx->pc = 0x28D314u;
    // 0x28d314: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x28d314u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28d318: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x28d318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28d31c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28d31cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28d320: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28d320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28d324: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x28d324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28d328: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28d328u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28d32c: 0xa2035de9  sb          $v1, 0x5DE9($s0)
    ctx->pc = 0x28d32cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24041), (uint8_t)GPR_U32(ctx, 3));
    // 0x28d330: 0x26150520  addiu       $s5, $s0, 0x520
    ctx->pc = 0x28d330u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    // 0x28d334: 0x26a30008  addiu       $v1, $s5, 0x8
    ctx->pc = 0x28d334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x28d338: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x28d338u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28d33c: 0x82025de9  lb          $v0, 0x5DE9($s0)
    ctx->pc = 0x28d33cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24041)));
    // 0x28d340: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x28d340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28d344: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x28d344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x28d348: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d34c: 0xac222998  sw          $v0, 0x2998($at)
    ctx->pc = 0x28d34cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622998u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622998u, _value); } while (0);
    // 0x28d350: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d354: 0x8c222998  lw          $v0, 0x2998($at)
    ctx->pc = 0x28d354u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622998u));
    // 0x28d358: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x28d358u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28d35c: 0x34820087  ori         $v0, $a0, 0x87
    ctx->pc = 0x28d35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)135);
    // 0x28d360: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d364: 0xac2229a0  sw          $v0, 0x29A0($at)
    ctx->pc = 0x28d364u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6229A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6229A0u, _value); } while (0);
    // 0x28d368: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x28d368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28d36c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d370: 0x8c2329a0  lw          $v1, 0x29A0($at)
    ctx->pc = 0x28d370u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6229A0u));
    // 0x28d374: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28d374u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28d378: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x28d378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x28d37c: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x28d37cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x28d380: 0x24070081  addiu       $a3, $zero, 0x81
    ctx->pc = 0x28d380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x28d384: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x28D384u;
    SET_GPR_U32(ctx, 31, 0x28D38Cu);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x28D384u, 0x28D38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D38Cu;
label_28d38c:
    // 0x28d38c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28d38cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d390: 0xafa30174  sw          $v1, 0x174($sp)
    ctx->pc = 0x28d390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
    // 0x28d394: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x28d394u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x28d398: 0x8fa50174  lw          $a1, 0x174($sp)
    ctx->pc = 0x28d398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x28d39c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28d3a0: 0x10a30061  beq         $a1, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x28D3A0u;
    {
        const bool branch_taken_0x28d3a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x28d3a0) {
            ctx->pc = 0x28D528u;
            goto label_28d528;
        }
    }
    ctx->pc = 0x28D3A8u;
    // 0x28d3a8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d3ac: 0xac2020f8  sw          $zero, 0x20F8($at)
    ctx->pc = 0x28d3acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
    // 0x28d3b0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28d3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28d3b4: 0xac2062e0  sw          $zero, 0x62E0($at)
    ctx->pc = 0x28d3b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3962E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3962E0u, _value); } while (0);
    // 0x28d3b8: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28d3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28d3bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28d3c0: 0xae035dd0  sw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28d3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 3));
    // 0x28d3c4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d3c8: 0xac2020d8  sw          $zero, 0x20D8($at)
    ctx->pc = 0x28d3c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220D8u, _value); } while (0);
    // 0x28d3cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28d3ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28d3d0: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x28d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x28d3d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28d3d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28d3d8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28d3d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28d3dc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28D3DCu;
    SET_GPR_U32(ctx, 31, 0x28D3E4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28D3DCu, 0x28D3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D3E4u;
label_28d3e4:
    // 0x28d3e4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x28D3E4u;
    {
        const bool branch_taken_0x28d3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d3e4) {
            ctx->pc = 0x28D528u;
            goto label_28d528;
        }
    }
    ctx->pc = 0x28D3ECu;
label_28d3ec:
    // 0x28d3ec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d3f0: 0xac2020f8  sw          $zero, 0x20F8($at)
    ctx->pc = 0x28d3f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
    // 0x28d3f4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28d3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28d3f8: 0xac2062e0  sw          $zero, 0x62E0($at)
    ctx->pc = 0x28d3f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3962E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3962E0u, _value); } while (0);
    // 0x28d3fc: 0x8e155dd0  lw          $s5, 0x5DD0($s0)
    ctx->pc = 0x28d3fcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28d400: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x28d400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28d404: 0xae025dd0  sw          $v0, 0x5DD0($s0)
    ctx->pc = 0x28d404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 2));
    // 0x28d408: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d40c: 0xac2020d8  sw          $zero, 0x20D8($at)
    ctx->pc = 0x28d40cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220D8u, _value); } while (0);
    // 0x28d410: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28d410u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28d414: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x28d414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x28d418: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28d418u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28d41c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28d41cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28d420: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28D420u;
    SET_GPR_U32(ctx, 31, 0x28D428u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28D420u, 0x28D428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D428u;
label_28d428:
    // 0x28d428: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x28D428u;
    {
        const bool branch_taken_0x28d428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d428) {
            ctx->pc = 0x28D528u;
            goto label_28d528;
        }
    }
    ctx->pc = 0x28D430u;
label_28d430:
    // 0x28d430: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28d430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d434: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x28d434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28d438: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28d438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d43c: 0x1483003a  bne         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x28D43Cu;
    {
        const bool branch_taken_0x28d43c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x28d43c) {
            ctx->pc = 0x28D528u;
            goto label_28d528;
        }
    }
    ctx->pc = 0x28D444u;
    // 0x28d444: 0x82065dea  lb          $a2, 0x5DEA($s0)
    ctx->pc = 0x28d444u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28d448: 0x6263c  dsll32      $a0, $a2, 24
    ctx->pc = 0x28d448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 24));
    // 0x28d44c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x28d44cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x28d450: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x28d450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x28d454: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x28d454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x28d458: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x28d458u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x28d45c: 0xa2025de9  sb          $v0, 0x5DE9($s0)
    ctx->pc = 0x28d45cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24041), (uint8_t)GPR_U32(ctx, 2));
    // 0x28d460: 0x26020520  addiu       $v0, $s0, 0x520
    ctx->pc = 0x28d460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    // 0x28d464: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28d464u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d468: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x28d468u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x28d46c: 0x82035de9  lb          $v1, 0x5DE9($s0)
    ctx->pc = 0x28d46cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24041)));
    // 0x28d470: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x28d470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28d474: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28d474u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28d478: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d47c: 0xac232998  sw          $v1, 0x2998($at)
    ctx->pc = 0x28d47cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622998u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622998u, _value); } while (0);
    // 0x28d480: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d484: 0x8c232998  lw          $v1, 0x2998($at)
    ctx->pc = 0x28d484u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622998u));
    // 0x28d488: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x28d488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28d48c: 0x34630087  ori         $v1, $v1, 0x87
    ctx->pc = 0x28d48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)135);
    // 0x28d490: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d494: 0xac2329a0  sw          $v1, 0x29A0($at)
    ctx->pc = 0x28d494u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6229A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6229A0u, _value); } while (0);
    // 0x28d498: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x28d498u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28d49c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d4a0: 0x8c2329a0  lw          $v1, 0x29A0($at)
    ctx->pc = 0x28d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6229A0u));
    // 0x28d4a4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28d4a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28d4a8: 0x3c110002  lui         $s1, 0x2
    ctx->pc = 0x28d4a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)2 << 16));
    // 0x28d4ac: 0x36234000  ori         $v1, $s1, 0x4000
    ctx->pc = 0x28d4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
    // 0x28d4b0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28d4b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28d4b4: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x28d4b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28d4b8: 0x24070081  addiu       $a3, $zero, 0x81
    ctx->pc = 0x28d4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x28d4bc: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x28D4BCu;
    SET_GPR_U32(ctx, 31, 0x28D4C4u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x28D4BCu, 0x28D4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D4C4u;
label_28d4c4:
    // 0x28d4c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28d4c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d4c8: 0xafa30174  sw          $v1, 0x174($sp)
    ctx->pc = 0x28d4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
    // 0x28d4cc: 0x26a30008  addiu       $v1, $s5, 0x8
    ctx->pc = 0x28d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x28d4d0: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x28d4d0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28d4d4: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x28d4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x28d4d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28d4dc: 0x10c30012  beq         $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x28D4DCu;
    {
        const bool branch_taken_0x28d4dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x28d4dc) {
            ctx->pc = 0x28D528u;
            goto label_28d528;
        }
    }
    ctx->pc = 0x28D4E4u;
    // 0x28d4e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d4e8: 0xac2020f8  sw          $zero, 0x20F8($at)
    ctx->pc = 0x28d4e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
    // 0x28d4ec: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28d4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28d4f0: 0xac2062e0  sw          $zero, 0x62E0($at)
    ctx->pc = 0x28d4f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3962E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3962E0u, _value); } while (0);
    // 0x28d4f4: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28d4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28d4f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28d4fc: 0xae035dd0  sw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28d4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 3));
    // 0x28d500: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d504: 0xac2020d8  sw          $zero, 0x20D8($at)
    ctx->pc = 0x28d504u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220D8u, _value); } while (0);
    // 0x28d508: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28d508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28d50c: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x28d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x28d510: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28d510u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28d514: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28d514u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28d518: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28d518u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28d51c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28D51Cu;
    SET_GPR_U32(ctx, 31, 0x28D524u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28D51Cu, 0x28D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D524u;
label_28d524:
    // 0x28d524: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28d524u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28d528:
    // 0x28d528: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d52c: 0x8c2620d0  lw          $a2, 0x20D0($at)
    ctx->pc = 0x28d52cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6220D0u));
    // 0x28d530: 0x28c10014  slti        $at, $a2, 0x14
    ctx->pc = 0x28d530u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x28d534: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x28D534u;
    {
        const bool branch_taken_0x28d534 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d534) {
            ctx->pc = 0x28D550u;
            goto label_28d550;
        }
    }
    ctx->pc = 0x28D53Cu;
    // 0x28d53c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d540: 0x8c2320d0  lw          $v1, 0x20D0($at)
    ctx->pc = 0x28d540u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6220D0u));
    // 0x28d544: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28d544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28d548: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d54c: 0xac2320d0  sw          $v1, 0x20D0($at)
    ctx->pc = 0x28d54cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6220D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220D0u, _value); } while (0);
label_28d550:
    // 0x28d550: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d554: 0xac2020e8  sw          $zero, 0x20E8($at)
    ctx->pc = 0x28d554u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220E8u, _value); } while (0);
    // 0x28d558: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x28D558u;
    {
        const bool branch_taken_0x28d558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d558) {
            ctx->pc = 0x28D8B8u;
            goto label_28d8b8;
        }
    }
    ctx->pc = 0x28D560u;
label_28d560:
    // 0x28d560: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d564: 0x8c2520f8  lw          $a1, 0x20F8($at)
    ctx->pc = 0x28d564u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6220F8u));
    // 0x28d568: 0x14a00060  bnez        $a1, . + 4 + (0x60 << 2)
    ctx->pc = 0x28D568u;
    {
        const bool branch_taken_0x28d568 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d568) {
            ctx->pc = 0x28D6ECu;
            goto label_28d6ec;
        }
    }
    ctx->pc = 0x28D570u;
    // 0x28d570: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d574: 0xac2020e8  sw          $zero, 0x20E8($at)
    ctx->pc = 0x28d574u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220E8u, _value); } while (0);
    // 0x28d578: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28d578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28d57c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d580: 0xa02221f8  sb          $v0, 0x21F8($at)
    ctx->pc = 0x28d580u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6221F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6221F8u, _value); } while (0);
    // 0x28d584: 0x3c043cf5  lui         $a0, 0x3CF5
    ctx->pc = 0x28d584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15605 << 16));
    // 0x28d588: 0x3483c28f  ori         $v1, $a0, 0xC28F
    ctx->pc = 0x28d588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49807);
    // 0x28d58c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d58cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d590: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d594: 0xe42021f4  swc1        $f0, 0x21F4($at)
    ctx->pc = 0x28d594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6221F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6221F4u, _value); } while (0); }
    // 0x28d598: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x28d598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x28d59c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d5a0: 0xa02321f9  sb          $v1, 0x21F9($at)
    ctx->pc = 0x28d5a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6221F9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6221F9u, _value); } while (0);
    // 0x28d5a4: 0x3c153d80  lui         $s5, 0x3D80
    ctx->pc = 0x28d5a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)15744 << 16));
    // 0x28d5a8: 0x36a3adfd  ori         $v1, $s5, 0xADFD
    ctx->pc = 0x28d5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)44541);
    // 0x28d5ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d5acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d5b0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d5b4: 0xe42021f0  swc1        $f0, 0x21F0($at)
    ctx->pc = 0x28d5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6221F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6221F0u, _value); } while (0); }
    // 0x28d5b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28d5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28d5bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d5bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d5c0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d5c4: 0xe42021fc  swc1        $f0, 0x21FC($at)
    ctx->pc = 0x28d5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6221FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6221FCu, _value); } while (0); }
    // 0x28d5c8: 0x3c153dcc  lui         $s5, 0x3DCC
    ctx->pc = 0x28d5c8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)15820 << 16));
    // 0x28d5cc: 0x36a3cccd  ori         $v1, $s5, 0xCCCD
    ctx->pc = 0x28d5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)52429);
    // 0x28d5d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d5d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d5d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d5d8: 0xe4202200  swc1        $f0, 0x2200($at)
    ctx->pc = 0x28d5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622200u, _value); } while (0); }
    // 0x28d5dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d5e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d5e4: 0xa0232205  sb          $v1, 0x2205($at)
    ctx->pc = 0x28d5e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622205u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x622205u, _value); } while (0);
    // 0x28d5e8: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28d5e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d5ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28d5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28d5f0: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x28D5F0u;
    {
        const bool branch_taken_0x28d5f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d5f0) {
            ctx->pc = 0x28D658u;
            goto label_28d658;
        }
    }
    ctx->pc = 0x28D5F8u;
    // 0x28d5f8: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x28d5f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
    // 0x28d5fc: 0x26426158  addiu       $v0, $s2, 0x6158
    ctx->pc = 0x28d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24920));
    // 0x28d600: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d604: 0xac222210  sw          $v0, 0x2210($at)
    ctx->pc = 0x28d604u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622210u, _value); } while (0);
    // 0x28d608: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28d608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28d60c: 0x24442218  addiu       $a0, $v0, 0x2218
    ctx->pc = 0x28d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8728));
    // 0x28d610: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28d610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28d614: 0x2465e7d0  addiu       $a1, $v1, -0x1830
    ctx->pc = 0x28d614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961104));
    // 0x28d618: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x28d618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x28d61c: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x28D61Cu;
    SET_GPR_U32(ctx, 31, 0x28D624u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x28D624u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28D624u) { return; }
    ctx->pc = 0x28D624u;
label_28d624:
    // 0x28d624: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d628: 0xa4202242  sh          $zero, 0x2242($at)
    ctx->pc = 0x28d628u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622242u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622242u, _value); } while (0);
    // 0x28d62c: 0x3006ffff  andi        $a2, $zero, 0xFFFF
    ctx->pc = 0x28d62cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x28d630: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d634: 0xa4262240  sh          $a2, 0x2240($at)
    ctx->pc = 0x28d634u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x622240u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622240u, _value); } while (0);
    // 0x28d638: 0x240301cc  addiu       $v1, $zero, 0x1CC
    ctx->pc = 0x28d638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x28d63c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d640: 0xa4232246  sh          $v1, 0x2246($at)
    ctx->pc = 0x28d640u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622246u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622246u, _value); } while (0);
    // 0x28d644: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x28d644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28d648: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d64c: 0xa4252244  sh          $a1, 0x2244($at)
    ctx->pc = 0x28d64cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x622244u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622244u, _value); } while (0);
    // 0x28d650: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x28D650u;
    {
        const bool branch_taken_0x28d650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d650) {
            ctx->pc = 0x28D6D8u;
            goto label_28d6d8;
        }
    }
    ctx->pc = 0x28D658u;
label_28d658:
    // 0x28d658: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28d658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d65c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28d65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28d660: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x28d660u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d664: 0x1475001c  bne         $v1, $s5, . + 4 + (0x1C << 2)
    ctx->pc = 0x28D664u;
    {
        const bool branch_taken_0x28d664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x28d664) {
            ctx->pc = 0x28D6D8u;
            goto label_28d6d8;
        }
    }
    ctx->pc = 0x28D66Cu;
    // 0x28d66c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x28d66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x28d670: 0x2463615c  addiu       $v1, $v1, 0x615C
    ctx->pc = 0x28d670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24924));
    // 0x28d674: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d678: 0xac232210  sw          $v1, 0x2210($at)
    ctx->pc = 0x28d678u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622210u, _value); } while (0);
    // 0x28d67c: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x28d67cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x28d680: 0x24c32218  addiu       $v1, $a2, 0x2218
    ctx->pc = 0x28d680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8728));
    // 0x28d684: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28d684u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28d688: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x28d688u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x28d68c: 0x2663e910  addiu       $v1, $s3, -0x16F0
    ctx->pc = 0x28d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961424));
    // 0x28d690: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28d690u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28d694: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x28d694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x28d698: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x28D698u;
    SET_GPR_U32(ctx, 31, 0x28D6A0u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x28D6A0u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28D6A0u) { return; }
    ctx->pc = 0x28D6A0u;
label_28d6a0:
    // 0x28d6a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28d6a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d6a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d6a8: 0xa4202240  sh          $zero, 0x2240($at)
    ctx->pc = 0x28d6a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622240u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622240u, _value); } while (0);
    // 0x28d6ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d6acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d6b0: 0xa4202242  sh          $zero, 0x2242($at)
    ctx->pc = 0x28d6b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622242u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622242u, _value); } while (0);
    // 0x28d6b4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x28d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x28d6b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d6bc: 0xa4232244  sh          $v1, 0x2244($at)
    ctx->pc = 0x28d6bcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622244u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622244u, _value); } while (0);
    // 0x28d6c0: 0x241201c0  addiu       $s2, $zero, 0x1C0
    ctx->pc = 0x28d6c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x28d6c4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d6c8: 0xa4322246  sh          $s2, 0x2246($at)
    ctx->pc = 0x28d6c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x622246u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622246u, _value); } while (0);
    // 0x28d6cc: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28D6CCu;
    SET_GPR_U32(ctx, 31, 0x28D6D4u);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28D6CCu, 0x28D6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D6D4u;
label_28d6d4:
    // 0x28d6d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28d6d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28d6d8:
    // 0x28d6d8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d6dc: 0x8c2620f8  lw          $a2, 0x20F8($at)
    ctx->pc = 0x28d6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6220F8u));
    // 0x28d6e0: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x28d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28d6e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d6e8: 0xac2320f8  sw          $v1, 0x20F8($at)
    ctx->pc = 0x28d6e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
label_28d6ec:
    // 0x28d6ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28d6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28d6f0: 0x8c26013c  lw          $a2, 0x13C($at)
    ctx->pc = 0x28d6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x28d6f4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x28d6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28d6f8: 0xc3001b  divu        $zero, $a2, $v1
    ctx->pc = 0x28d6f8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x28d6fc: 0x0  nop
    ctx->pc = 0x28d6fcu;
    // NOP
    // 0x28d700: 0x0  nop
    ctx->pc = 0x28d700u;
    // NOP
    // 0x28d704: 0x1810  mfhi        $v1
    ctx->pc = 0x28d704u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28d708: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x28D708u;
    {
        const bool branch_taken_0x28d708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d708) {
            ctx->pc = 0x28D764u;
            goto label_28d764;
        }
    }
    ctx->pc = 0x28D710u;
    // 0x28d710: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d714: 0x8c2220e8  lw          $v0, 0x20E8($at)
    ctx->pc = 0x28d714u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6220E8u));
    // 0x28d718: 0x24480027  addiu       $t0, $v0, 0x27
    ctx->pc = 0x28d718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 39));
    // 0x28d71c: 0x3106ffff  andi        $a2, $t0, 0xFFFF
    ctx->pc = 0x28d71cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x28d720: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28d720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28d724: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28d724u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28d728: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28d728u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28d72c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28d72cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28d730: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28D730u;
    SET_GPR_U32(ctx, 31, 0x28D738u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28D730u, 0x28D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D738u;
label_28d738:
    // 0x28d738: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d73c: 0x8c2220e8  lw          $v0, 0x20E8($at)
    ctx->pc = 0x28d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6220E8u));
    // 0x28d740: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x28d740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28d744: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d748: 0xac2320e8  sw          $v1, 0x20E8($at)
    ctx->pc = 0x28d748u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6220E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220E8u, _value); } while (0);
    // 0x28d74c: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x28d74cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x28d750: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D750u;
    {
        const bool branch_taken_0x28d750 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d750) {
            ctx->pc = 0x28D764u;
            goto label_28d764;
        }
    }
    ctx->pc = 0x28D758u;
    // 0x28d758: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x28d758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28d75c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d760: 0xac2720e8  sw          $a3, 0x20E8($at)
    ctx->pc = 0x28d760u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6220E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220E8u, _value); } while (0);
label_28d764:
    // 0x28d764: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28d764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d768: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28d768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28d76c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28d76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d770: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D770u;
    {
        const bool branch_taken_0x28d770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x28d770) {
            ctx->pc = 0x28D780u;
            goto label_28d780;
        }
    }
    ctx->pc = 0x28D778u;
    // 0x28d778: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28D778u;
    SET_GPR_U32(ctx, 31, 0x28D780u);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28D778u, 0x28D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D780u;
label_28d780:
    // 0x28d780: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28d780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28d784: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x28d784u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x28d788: 0x24e221f0  addiu       $v0, $a3, 0x21F0
    ctx->pc = 0x28d788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8688));
    // 0x28d78c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28d78cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d790: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x28d790u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
    // 0x28d794: 0x24c2c1e0  addiu       $v0, $a2, -0x3E20
    ctx->pc = 0x28d794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951392));
    // 0x28d798: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28d798u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d79c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28d7a0: 0x24462210  addiu       $a2, $v0, 0x2210
    ctx->pc = 0x28d7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
    // 0x28d7a4: 0xc0a4474  jal         func_2911D0
    ctx->pc = 0x28D7A4u;
    SET_GPR_U32(ctx, 31, 0x28D7ACu);
    ctx->pc = 0x2911D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911D0u, 0x28D7A4u, 0x28D7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7ACu;
label_28d7ac:
    // 0x28d7ac: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28D7ACu;
    {
        const bool branch_taken_0x28d7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d7ac) {
            ctx->pc = 0x28D7ECu;
            goto label_28d7ec;
        }
    }
    ctx->pc = 0x28D7B4u;
    // 0x28d7b4: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28d7b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d7b8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x28d7b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28d7bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d7c0: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x28d7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x28d7c4: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x28d7c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x28d7c8: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D7C8u;
    {
        const bool branch_taken_0x28d7c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x28d7c8) {
            ctx->pc = 0x28D7E0u;
            goto label_28d7e0;
        }
    }
    ctx->pc = 0x28D7D0u;
    // 0x28d7d0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x28d7d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28d7d4: 0xc062b40  jal         func_18AD00
    ctx->pc = 0x28D7D4u;
    SET_GPR_U32(ctx, 31, 0x28D7DCu);
    ctx->pc = 0x18AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD00u, 0x28D7D4u, 0x28D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7DCu;
label_28d7dc:
    // 0x28d7dc: 0xa2006855  sb          $zero, 0x6855($s0)
    ctx->pc = 0x28d7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26709), (uint8_t)GPR_U32(ctx, 0));
label_28d7e0:
    // 0x28d7e0: 0x8e065dd0  lw          $a2, 0x5DD0($s0)
    ctx->pc = 0x28d7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28d7e4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x28d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28d7e8: 0xae035dd0  sw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28d7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 3));
label_28d7ec:
    // 0x28d7ec: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28d7ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d7f0: 0x306900ff  andi        $t1, $v1, 0xFF
    ctx->pc = 0x28d7f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28d7f4: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D7F4u;
    {
        const bool branch_taken_0x28d7f4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d7f4) {
            ctx->pc = 0x28D80Cu;
            goto label_28d80c;
        }
    }
    ctx->pc = 0x28D7FCu;
    // 0x28d7fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28d7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28d800: 0xa2065e04  sb          $a2, 0x5E04($s0)
    ctx->pc = 0x28d800u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 6));
    // 0x28d804: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28D804u;
    {
        const bool branch_taken_0x28d804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d804) {
            ctx->pc = 0x28D828u;
            goto label_28d828;
        }
    }
    ctx->pc = 0x28D80Cu;
label_28d80c:
    // 0x28d80c: 0x92086624  lbu         $t0, 0x6624($s0)
    ctx->pc = 0x28d80cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d810: 0x310700ff  andi        $a3, $t0, 0xFF
    ctx->pc = 0x28d810u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x28d814: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28d814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d818: 0x14e60003  bne         $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D818u;
    {
        const bool branch_taken_0x28d818 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x28d818) {
            ctx->pc = 0x28D828u;
            goto label_28d828;
        }
    }
    ctx->pc = 0x28D820u;
    // 0x28d820: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28d820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d824: 0xa2065e04  sb          $a2, 0x5E04($s0)
    ctx->pc = 0x28d824u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 6));
label_28d828:
    // 0x28d828: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d82c: 0xc42120c8  lwc1        $f1, 0x20C8($at)
    ctx->pc = 0x28d82cu;
    { uint32_t bits = FAST_READ32(0x6220C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d830: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d834: 0xc42021f4  lwc1        $f0, 0x21F4($at)
    ctx->pc = 0x28d834u;
    { uint32_t bits = FAST_READ32(0x6221F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d838: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28d838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28d83c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d840: 0xe42020c8  swc1        $f0, 0x20C8($at)
    ctx->pc = 0x28d840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6220C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220C8u, _value); } while (0); }
    // 0x28d844: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d848: 0xc42020c8  lwc1        $f0, 0x20C8($at)
    ctx->pc = 0x28d848u;
    { uint32_t bits = FAST_READ32(0x6220C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d84c: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28d84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x28d850: 0xc6015e00  lwc1        $f1, 0x5E00($s0)
    ctx->pc = 0x28d850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d854: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28d854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28d858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d85c: 0x0  nop
    ctx->pc = 0x28d85cu;
    // NOP
    // 0x28d860: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28d860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d864: 0x0  nop
    ctx->pc = 0x28d864u;
    // NOP
    // 0x28d868: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x28D868u;
    {
        const bool branch_taken_0x28d868 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28d868) {
            ctx->pc = 0x28D8B8u;
            goto label_28d8b8;
        }
    }
    ctx->pc = 0x28D870u;
    // 0x28d870: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28d870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28d874: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x28d874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x28d878: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x28d878u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28d87c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d87cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d880: 0x0  nop
    ctx->pc = 0x28d880u;
    // NOP
    // 0x28d884: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28d884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x28d888: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28D888u;
    {
        const bool branch_taken_0x28d888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d888) {
            ctx->pc = 0x28D8B8u;
            goto label_28d8b8;
        }
    }
    ctx->pc = 0x28D890u;
label_28d890:
    // 0x28d890: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d894: 0xac2020f8  sw          $zero, 0x20F8($at)
    ctx->pc = 0x28d894u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
    // 0x28d898: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28d898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d89c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28d89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28d8a0: 0xac2362e0  sw          $v1, 0x62E0($at)
    ctx->pc = 0x28d8a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3962E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3962E0u, _value); } while (0);
    // 0x28d8a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d8a8: 0xae035dc8  sw          $v1, 0x5DC8($s0)
    ctx->pc = 0x28d8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 3));
    // 0x28d8ac: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28d8b0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x28d8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x28d8b4: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x28d8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
label_28d8b8:
    // 0x28d8b8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x28d8b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28d8bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28d8bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28d8c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28d8c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28d8c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28d8c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d8c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28d8c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d8cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28d8ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d8d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28d8d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d8d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28d8d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d8d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28d8d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d8dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28d8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d8e0: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x28d8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x28d8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x28D8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D8ECu;
}
