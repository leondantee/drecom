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

// Function: Weapon_select_movie_init2
// Address: 0x28ec70 - 0x28f060
void Weapon_select_movie_init2_0x28ec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Weapon_select_movie_init2_0x28ec70");
#endif

    switch (ctx->pc) {
        case 0x28ecd8u: goto label_28ecd8;
        case 0x28edecu: goto label_28edec;
        case 0x28ee04u: goto label_28ee04;
        case 0x28ee74u: goto label_28ee74;
        case 0x28eec8u: goto label_28eec8;
        case 0x28ef10u: goto label_28ef10;
        case 0x28efa4u: goto label_28efa4;
        case 0x28efc0u: goto label_28efc0;
        default: break;
    }

    ctx->pc = 0x28ec70u;

    // 0x28ec70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28ec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28ec74: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x28ec74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x28ec78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28ec78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28ec7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28ec7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28ec80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28ec80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28ec84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28ec84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28ec88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28ec8c: 0x24506150  addiu       $s0, $v0, 0x6150
    ctx->pc = 0x28ec8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x28ec90: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ec90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ec94: 0x8c232848  lw          $v1, 0x2848($at)
    ctx->pc = 0x28ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622848u));
    // 0x28ec98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ec9c: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x28EC9Cu;
    {
        const bool branch_taken_0x28ec9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ec9c) {
            ctx->pc = 0x28EE5Cu;
            goto label_28ee5c;
        }
    }
    ctx->pc = 0x28ECA4u;
    // 0x28eca4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28ECA4u;
    {
        const bool branch_taken_0x28eca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eca4) {
            ctx->pc = 0x28ECB4u;
            goto label_28ecb4;
        }
    }
    ctx->pc = 0x28ECACu;
    // 0x28ecac: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x28ECACu;
    {
        const bool branch_taken_0x28ecac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ecac) {
            ctx->pc = 0x28F03Cu;
            goto label_28f03c;
        }
    }
    ctx->pc = 0x28ECB4u;
label_28ecb4:
    // 0x28ecb4: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x28ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28ecb8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28ecb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x28ecbc: 0x144000df  bnez        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x28ECBCu;
    {
        const bool branch_taken_0x28ecbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ecbc) {
            ctx->pc = 0x28F03Cu;
            goto label_28f03c;
        }
    }
    ctx->pc = 0x28ECC4u;
    // 0x28ecc4: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x28ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x28ecc8: 0x26050720  addiu       $a1, $s0, 0x720
    ctx->pc = 0x28ecc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1824));
    // 0x28eccc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x28ecccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28ecd0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x28ECD0u;
    SET_GPR_U32(ctx, 31, 0x28ECD8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x28ECD8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28ECD8u) { return; }
    ctx->pc = 0x28ECD8u;
label_28ecd8:
    // 0x28ecd8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28ecdc: 0xae020220  sw          $v0, 0x220($s0)
    ctx->pc = 0x28ecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 2));
    // 0x28ece0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28ece4: 0x2442e910  addiu       $v0, $v0, -0x16F0
    ctx->pc = 0x28ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961424));
    // 0x28ece8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ece8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ecec: 0xac222840  sw          $v0, 0x2840($at)
    ctx->pc = 0x28ececu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622840u, _value); } while (0);
    // 0x28ecf0: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28ecf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28ecf4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28ecf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ecf8: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x28ECF8u;
    {
        const bool branch_taken_0x28ecf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ecf8) {
            ctx->pc = 0x28ED8Cu;
            goto label_28ed8c;
        }
    }
    ctx->pc = 0x28ED00u;
    // 0x28ed00: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x28ed00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28ed04: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x28ed04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28ed08: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28ed08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28ed0c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x28ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28ed10: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x28ED10u;
    {
        const bool branch_taken_0x28ed10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ed10) {
            ctx->pc = 0x28ED80u;
            goto label_28ed80;
        }
    }
    ctx->pc = 0x28ED18u;
    // 0x28ed18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28ed1c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28ED1Cu;
    {
        const bool branch_taken_0x28ed1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ed1c) {
            ctx->pc = 0x28ED74u;
            goto label_28ed74;
        }
    }
    ctx->pc = 0x28ED24u;
    // 0x28ed24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28ed28: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28ED28u;
    {
        const bool branch_taken_0x28ed28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ed28) {
            ctx->pc = 0x28ED68u;
            goto label_28ed68;
        }
    }
    ctx->pc = 0x28ED30u;
    // 0x28ed30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ed34: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28ED34u;
    {
        const bool branch_taken_0x28ed34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ed34) {
            ctx->pc = 0x28ED5Cu;
            goto label_28ed5c;
        }
    }
    ctx->pc = 0x28ED3Cu;
    // 0x28ed3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ed40: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28ED40u;
    {
        const bool branch_taken_0x28ed40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ed40) {
            ctx->pc = 0x28ED50u;
            goto label_28ed50;
        }
    }
    ctx->pc = 0x28ED48u;
    // 0x28ed48: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x28ED48u;
    {
        const bool branch_taken_0x28ed48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed48) {
            ctx->pc = 0x28EDDCu;
            goto label_28eddc;
        }
    }
    ctx->pc = 0x28ED50u;
label_28ed50:
    // 0x28ed50: 0x2411009b  addiu       $s1, $zero, 0x9B
    ctx->pc = 0x28ed50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x28ed54: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x28ED54u;
    {
        const bool branch_taken_0x28ed54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed54) {
            ctx->pc = 0x28EDDCu;
            goto label_28eddc;
        }
    }
    ctx->pc = 0x28ED5Cu;
label_28ed5c:
    // 0x28ed5c: 0x2411009c  addiu       $s1, $zero, 0x9C
    ctx->pc = 0x28ed5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x28ed60: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x28ED60u;
    {
        const bool branch_taken_0x28ed60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed60) {
            ctx->pc = 0x28EDDCu;
            goto label_28eddc;
        }
    }
    ctx->pc = 0x28ED68u;
label_28ed68:
    // 0x28ed68: 0x2411009b  addiu       $s1, $zero, 0x9B
    ctx->pc = 0x28ed68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x28ed6c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x28ED6Cu;
    {
        const bool branch_taken_0x28ed6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed6c) {
            ctx->pc = 0x28EDDCu;
            goto label_28eddc;
        }
    }
    ctx->pc = 0x28ED74u;
label_28ed74:
    // 0x28ed74: 0x2411009b  addiu       $s1, $zero, 0x9B
    ctx->pc = 0x28ed74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x28ed78: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x28ED78u;
    {
        const bool branch_taken_0x28ed78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed78) {
            ctx->pc = 0x28EDDCu;
            goto label_28eddc;
        }
    }
    ctx->pc = 0x28ED80u;
label_28ed80:
    // 0x28ed80: 0x2411009b  addiu       $s1, $zero, 0x9B
    ctx->pc = 0x28ed80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x28ed84: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x28ED84u;
    {
        const bool branch_taken_0x28ed84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed84) {
            ctx->pc = 0x28EDDCu;
            goto label_28eddc;
        }
    }
    ctx->pc = 0x28ED8Cu;
label_28ed8c:
    // 0x28ed8c: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28ed8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28ed90: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28ed90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ed94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ed98: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28ED98u;
    {
        const bool branch_taken_0x28ed98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28ed98) {
            ctx->pc = 0x28EDDCu;
            goto label_28eddc;
        }
    }
    ctx->pc = 0x28EDA0u;
    // 0x28eda0: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x28eda0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28eda4: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x28eda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28eda8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28eda8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28edac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28edacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28edb0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28EDB0u;
    {
        const bool branch_taken_0x28edb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28edb0) {
            ctx->pc = 0x28EDD8u;
            goto label_28edd8;
        }
    }
    ctx->pc = 0x28EDB8u;
    // 0x28edb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28edbc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28EDBCu;
    {
        const bool branch_taken_0x28edbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28edbc) {
            ctx->pc = 0x28EDCCu;
            goto label_28edcc;
        }
    }
    ctx->pc = 0x28EDC4u;
    // 0x28edc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28EDC4u;
    {
        const bool branch_taken_0x28edc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28edc4) {
            ctx->pc = 0x28EDDCu;
            goto label_28eddc;
        }
    }
    ctx->pc = 0x28EDCCu;
label_28edcc:
    // 0x28edcc: 0x2411009d  addiu       $s1, $zero, 0x9D
    ctx->pc = 0x28edccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x28edd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28EDD0u;
    {
        const bool branch_taken_0x28edd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28edd0) {
            ctx->pc = 0x28EDDCu;
            goto label_28eddc;
        }
    }
    ctx->pc = 0x28EDD8u;
label_28edd8:
    // 0x28edd8: 0x24110084  addiu       $s1, $zero, 0x84
    ctx->pc = 0x28edd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_28eddc:
    // 0x28eddc: 0x260565a0  addiu       $a1, $s0, 0x65A0
    ctx->pc = 0x28eddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 26016));
    // 0x28ede0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x28ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28ede4: 0xc068b9c  jal         func_1A2E70
    ctx->pc = 0x28EDE4u;
    SET_GPR_U32(ctx, 31, 0x28EDECu);
    ctx->pc = 0x1A2E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2E70u, 0x28EDE4u, 0x28EDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EDECu;
label_28edec:
    // 0x28edec: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x28edecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x28edf0: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x28edf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x28edf4: 0x8c25c9d0  lw          $a1, -0x3630($at)
    ctx->pc = 0x28edf4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x62C9D0u));
    // 0x28edf8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28edf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28edfc: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x28EDFCu;
    SET_GPR_U32(ctx, 31, 0x28EE04u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x28EDFCu, 0x28EE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EE04u;
label_28ee04:
    // 0x28ee04: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x28ee04u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ee08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ee0c: 0x12420010  beq         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28EE0Cu;
    {
        const bool branch_taken_0x28ee0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ee0c) {
            ctx->pc = 0x28EE50u;
            goto label_28ee50;
        }
    }
    ctx->pc = 0x28EE14u;
    // 0x28ee14: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x28ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28ee18: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28ee18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x28ee1c: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x28ee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x28ee20: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x28ee20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x28ee24: 0x8c23c9d0  lw          $v1, -0x3630($at)
    ctx->pc = 0x28ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x62C9D0u));
    // 0x28ee28: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28ee2c: 0x24422838  addiu       $v0, $v0, 0x2838
    ctx->pc = 0x28ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10296));
    // 0x28ee30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28ee30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622838u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622838u, _value); } while (0);
    // 0x28ee34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ee34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ee38: 0x8c222848  lw          $v0, 0x2848($at)
    ctx->pc = 0x28ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622848u));
    // 0x28ee3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28ee40: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ee40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ee44: 0xac222848  sw          $v0, 0x2848($at)
    ctx->pc = 0x28ee44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622848u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622848u, _value); } while (0);
    // 0x28ee48: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x28EE48u;
    {
        const bool branch_taken_0x28ee48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ee48) {
            ctx->pc = 0x28F03Cu;
            goto label_28f03c;
        }
    }
    ctx->pc = 0x28EE50u;
label_28ee50:
    // 0x28ee50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ee54: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x28EE54u;
    {
        const bool branch_taken_0x28ee54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ee54) {
            ctx->pc = 0x28F040u;
            goto label_28f040;
        }
    }
    ctx->pc = 0x28EE5Cu;
label_28ee5c:
    // 0x28ee5c: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x28ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28ee60: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28ee60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x28ee64: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x28EE64u;
    {
        const bool branch_taken_0x28ee64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ee64) {
            ctx->pc = 0x28F03Cu;
            goto label_28f03c;
        }
    }
    ctx->pc = 0x28EE6Cu;
    // 0x28ee6c: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x28EE6Cu;
    SET_GPR_U32(ctx, 31, 0x28EE74u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x28EE6Cu, 0x28EE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EE74u;
label_28ee74:
    // 0x28ee74: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x28EE74u;
    {
        const bool branch_taken_0x28ee74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ee74) {
            ctx->pc = 0x28F03Cu;
            goto label_28f03c;
        }
    }
    ctx->pc = 0x28EE7Cu;
    // 0x28ee7c: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28ee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28ee80: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x28ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28ee84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28ee84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28ee88: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x28ee88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x28ee8c: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28ee8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28ee90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28ee90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ee94: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28EE94u;
    {
        const bool branch_taken_0x28ee94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ee94) {
            ctx->pc = 0x28EED0u;
            goto label_28eed0;
        }
    }
    ctx->pc = 0x28EE9Cu;
    // 0x28ee9c: 0x96020224  lhu         $v0, 0x224($s0)
    ctx->pc = 0x28ee9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x28eea0: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x28eea0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28eea4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28eea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28eea8: 0x8c242838  lw          $a0, 0x2838($at)
    ctx->pc = 0x28eea8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x622838u));
    // 0x28eeac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28eeacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28eeb0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x28eeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28eeb4: 0x27a80058  addiu       $t0, $sp, 0x58
    ctx->pc = 0x28eeb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x28eeb8: 0x27a9005c  addiu       $t1, $sp, 0x5C
    ctx->pc = 0x28eeb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x28eebc: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x28eebcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28eec0: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x28EEC0u;
    SET_GPR_U32(ctx, 31, 0x28EEC8u);
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x28EEC0u, 0x28EEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EEC8u;
label_28eec8:
    // 0x28eec8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28EEC8u;
    {
        const bool branch_taken_0x28eec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eec8) {
            ctx->pc = 0x28EF10u;
            goto label_28ef10;
        }
    }
    ctx->pc = 0x28EED0u;
label_28eed0:
    // 0x28eed0: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28eed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28eed4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28eed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28eed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eedc: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28EEDCu;
    {
        const bool branch_taken_0x28eedc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28eedc) {
            ctx->pc = 0x28EF10u;
            goto label_28ef10;
        }
    }
    ctx->pc = 0x28EEE4u;
    // 0x28eee4: 0x96020224  lhu         $v0, 0x224($s0)
    ctx->pc = 0x28eee4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x28eee8: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x28eee8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28eeec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28eeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28eef0: 0x8c242838  lw          $a0, 0x2838($at)
    ctx->pc = 0x28eef0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x622838u));
    // 0x28eef4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28eef4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28eef8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x28eef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28eefc: 0x27a80058  addiu       $t0, $sp, 0x58
    ctx->pc = 0x28eefcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x28ef00: 0x27a9005c  addiu       $t1, $sp, 0x5C
    ctx->pc = 0x28ef00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x28ef04: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x28ef04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28ef08: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x28EF08u;
    SET_GPR_U32(ctx, 31, 0x28EF10u);
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x28EF08u, 0x28EF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF10u;
label_28ef10:
    // 0x28ef10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28ef10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ef14: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ef14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ef18: 0x8c222840  lw          $v0, 0x2840($at)
    ctx->pc = 0x28ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622840u));
    // 0x28ef1c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x28ef1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28ef20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ef24: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ef24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ef28: 0x8c222840  lw          $v0, 0x2840($at)
    ctx->pc = 0x28ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622840u));
    // 0x28ef2c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x28ef2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x28ef30: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ef30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ef34: 0x8c222840  lw          $v0, 0x2840($at)
    ctx->pc = 0x28ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622840u));
    // 0x28ef38: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x28ef38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x28ef3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x28ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28ef40: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28ef40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28ef44: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ef44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ef48: 0x8c222840  lw          $v0, 0x2840($at)
    ctx->pc = 0x28ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622840u));
    // 0x28ef4c: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x28ef4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x28ef50: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x28ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x28ef54: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28ef54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28ef58: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ef58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ef5c: 0x8c222840  lw          $v0, 0x2840($at)
    ctx->pc = 0x28ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622840u));
    // 0x28ef60: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x28ef60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x28ef64: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ef64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ef68: 0x8c222840  lw          $v0, 0x2840($at)
    ctx->pc = 0x28ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622840u));
    // 0x28ef6c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x28ef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x28ef70: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x28ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28ef74: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x28ef74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x28ef78: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x28ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x28ef7c: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x28ef7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
    // 0x28ef80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28ef80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28ef84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28ef84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28ef88: 0x21bb8  dsll        $v1, $v0, 14
    ctx->pc = 0x28ef88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 14);
    // 0x28ef8c: 0x96020224  lhu         $v0, 0x224($s0)
    ctx->pc = 0x28ef8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x28ef90: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28ef90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28ef94: 0x439825  or          $s3, $v0, $v1
    ctx->pc = 0x28ef94u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28ef98: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x28ef98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28ef9c: 0xc05e774  jal         func_179DD0
    ctx->pc = 0x28EF9Cu;
    SET_GPR_U32(ctx, 31, 0x28EFA4u);
    ctx->pc = 0x179DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179DD0u, 0x28EF9Cu, 0x28EFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EFA4u;
label_28efa4:
    // 0x28efa4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28efa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28efa8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28efa8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28efac: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x28efacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x28efb0: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x28efb0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x28efb4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x28efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x28efb8: 0xc05e774  jal         func_179DD0
    ctx->pc = 0x28EFB8u;
    SET_GPR_U32(ctx, 31, 0x28EFC0u);
    ctx->pc = 0x179DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179DD0u, 0x28EFB8u, 0x28EFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EFC0u;
label_28efc0:
    // 0x28efc0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28efc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28efc4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28efc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28efc8: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x28efc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x28efcc: 0x2621825  or          $v1, $s3, $v0
    ctx->pc = 0x28efccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x28efd0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x28efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28efd4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28efd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28efd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28efd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28efdc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28efdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28efe0: 0x8c222840  lw          $v0, 0x2840($at)
    ctx->pc = 0x28efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622840u));
    // 0x28efe4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x28efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x28efe8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x28efe8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x28efec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28efecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28eff0: 0x8c222840  lw          $v0, 0x2840($at)
    ctx->pc = 0x28eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622840u));
    // 0x28eff4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x28eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x28eff8: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x28eff8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x28effc: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x28effcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x28f000: 0x96020224  lhu         $v0, 0x224($s0)
    ctx->pc = 0x28f000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x28f004: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28f004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28f008: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x28f008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x28f00c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28f00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28f010: 0xa602022c  sh          $v0, 0x22C($s0)
    ctx->pc = 0x28f010u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 556), (uint16_t)GPR_U32(ctx, 2));
    // 0x28f014: 0x96020226  lhu         $v0, 0x226($s0)
    ctx->pc = 0x28f014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
    // 0x28f018: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28f018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28f01c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28f020: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28f020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28f024: 0xa602022e  sh          $v0, 0x22E($s0)
    ctx->pc = 0x28f024u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 558), (uint16_t)GPR_U32(ctx, 2));
    // 0x28f028: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f02c: 0xac202848  sw          $zero, 0x2848($at)
    ctx->pc = 0x28f02cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622848u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622848u, _value); } while (0);
    // 0x28f030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f034: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28F034u;
    {
        const bool branch_taken_0x28f034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f034) {
            ctx->pc = 0x28F040u;
            goto label_28f040;
        }
    }
    ctx->pc = 0x28F03Cu;
label_28f03c:
    // 0x28f03c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x28f03cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_28f040:
    // 0x28f040: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x28f040u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28f044: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28f044u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f048: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28f048u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f04c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28f04cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f050: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28f050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f054: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x28f054u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28f058: 0x3e00008  jr          $ra
    ctx->pc = 0x28F058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F060u;
}
