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

// Function: Em0c_R1_mv02
// Address: 0x225b40 - 0x226378
void Em0c_R1_mv02_0x225b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_mv02_0x225b40");
#endif

    switch (ctx->pc) {
        case 0x225cfcu: goto label_225cfc;
        case 0x225d04u: goto label_225d04;
        case 0x225d54u: goto label_225d54;
        case 0x225d5cu: goto label_225d5c;
        case 0x225df8u: goto label_225df8;
        case 0x225e14u: goto label_225e14;
        case 0x225e2cu: goto label_225e2c;
        case 0x225e38u: goto label_225e38;
        case 0x225e90u: goto label_225e90;
        case 0x225eb8u: goto label_225eb8;
        case 0x225eccu: goto label_225ecc;
        case 0x225fb4u: goto label_225fb4;
        case 0x225fd0u: goto label_225fd0;
        case 0x225fe4u: goto label_225fe4;
        case 0x226050u: goto label_226050;
        case 0x2260f8u: goto label_2260f8;
        case 0x22610cu: goto label_22610c;
        case 0x2261bcu: goto label_2261bc;
        case 0x2261d8u: goto label_2261d8;
        case 0x2261f0u: goto label_2261f0;
        case 0x226204u: goto label_226204;
        case 0x226310u: goto label_226310;
        case 0x226334u: goto label_226334;
        case 0x226368u: goto label_226368;
        default: break;
    }

    ctx->pc = 0x225b40u;

    // 0x225b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225b44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x225b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x225b48: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x225b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x225b4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225b50: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x225b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x225b54: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x225b54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x225b58: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x225b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x225b5c: 0x10850177  beq         $a0, $a1, . + 4 + (0x177 << 2)
    ctx->pc = 0x225B5Cu;
    {
        const bool branch_taken_0x225b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x225b5c) {
            ctx->pc = 0x22613Cu;
            goto label_22613c;
        }
    }
    ctx->pc = 0x225B64u;
    // 0x225b64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x225b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225b68: 0x10830120  beq         $a0, $v1, . + 4 + (0x120 << 2)
    ctx->pc = 0x225B68u;
    {
        const bool branch_taken_0x225b68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x225b68) {
            ctx->pc = 0x225FECu;
            goto label_225fec;
        }
    }
    ctx->pc = 0x225B70u;
    // 0x225b70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x225b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x225b74: 0x108300ef  beq         $a0, $v1, . + 4 + (0xEF << 2)
    ctx->pc = 0x225B74u;
    {
        const bool branch_taken_0x225b74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x225b74) {
            ctx->pc = 0x225F34u;
            goto label_225f34;
        }
    }
    ctx->pc = 0x225B7Cu;
    // 0x225b7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225b80: 0x1083007d  beq         $a0, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x225B80u;
    {
        const bool branch_taken_0x225b80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x225b80) {
            ctx->pc = 0x225D78u;
            goto label_225d78;
        }
    }
    ctx->pc = 0x225B88u;
    // 0x225b88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x225B88u;
    {
        const bool branch_taken_0x225b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x225b88) {
            ctx->pc = 0x225B98u;
            goto label_225b98;
        }
    }
    ctx->pc = 0x225B90u;
    // 0x225b90: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x225B90u;
    {
        const bool branch_taken_0x225b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225b90) {
            ctx->pc = 0x226208u;
            goto label_226208;
        }
    }
    ctx->pc = 0x225B98u;
label_225b98:
    // 0x225b98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225b9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ba0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x225ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x225ba4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ba8: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x225ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x225bac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225bb0: 0xa480127c  sh          $zero, 0x127C($a0)
    ctx->pc = 0x225bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x225bb4: 0x3c03c100  lui         $v1, 0xC100
    ctx->pc = 0x225bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49408 << 16));
    // 0x225bb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225bb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225bbc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225bc0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225bc4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x225bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x225bc8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x225bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x225bcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225bccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225bd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225bd4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225bd8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x225bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x225bdc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x225bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x225be0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225be0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225be4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225be8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225bec: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x225becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x225bf0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x225bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x225bf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225bf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225bf8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225bfc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x225bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225c00: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x225c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x225c04: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x225c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x225c08: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x225c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x225c0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225c0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225c10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225c14: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225c18: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x225c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x225c1c: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x225c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x225c20: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x225c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x225c24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225c24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225c28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225c2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225c30: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x225c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x225c34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225c38: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225c3c: 0x946500aa  lhu         $a1, 0xAA($v1)
    ctx->pc = 0x225c3cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 170)));
    // 0x225c40: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x225c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x225c44: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x225c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x225c48: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x225C48u;
    {
        const bool branch_taken_0x225c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x225c48) {
            ctx->pc = 0x225CDCu;
            goto label_225cdc;
        }
    }
    ctx->pc = 0x225C50u;
    // 0x225c50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225c54: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x225c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225c58: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x225c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x225c5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x225c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225c60: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x225c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x225c64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x225c68: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x225c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x225c6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225c70: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x225c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225c74: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x225c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x225c78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x225c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225c7c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x225c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x225c80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x225c84: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x225c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x225c88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225c8c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x225c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225c90: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x225c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x225c94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x225c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225c98: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x225c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x225c9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x225ca0: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x225ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x225ca4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x225ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ca8: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x225ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x225cac: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x225cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x225cb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x225cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225cb4: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x225cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225cb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x225cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x225cbc: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x225cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x225cc0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225cc4: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x225cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x225cc8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x225cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x225ccc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x225cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225cd0: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x225cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225cd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x225cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x225cd8: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x225cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
label_225cdc:
    // 0x225cdc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ce0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ce4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x225ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x225ce8: 0x24067808  addiu       $a2, $zero, 0x7808
    ctx->pc = 0x225ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30728));
    // 0x225cec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x225cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225cf0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x225cf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x225cf4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x225CF4u;
    SET_GPR_U32(ctx, 31, 0x225CFCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x225CF4u, 0x225CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CFCu;
label_225cfc:
    // 0x225cfc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x225CFCu;
    SET_GPR_U32(ctx, 31, 0x225D04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x225CFCu, 0x225D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D04u;
label_225d04:
    // 0x225d04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x225d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x225d08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x225d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x225d0c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x225D0Cu;
    {
        const bool branch_taken_0x225d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225d0c) {
            ctx->pc = 0x225D54u;
            goto label_225d54;
        }
    }
    ctx->pc = 0x225D14u;
    // 0x225d14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225d18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225d1c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x225d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x225d20: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x225d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x225d24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225d28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225d2c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x225d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225d30: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x225d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x225d34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225d38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225d3c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x225d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x225d40: 0x2406780a  addiu       $a2, $zero, 0x780A
    ctx->pc = 0x225d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30730));
    // 0x225d44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x225d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225d48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x225d48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x225d4c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x225D4Cu;
    SET_GPR_U32(ctx, 31, 0x225D54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x225D4Cu, 0x225D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D54u;
label_225d54:
    // 0x225d54: 0xc067694  jal         func_19DA50
    ctx->pc = 0x225D54u;
    SET_GPR_U32(ctx, 31, 0x225D5Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x225D54u, 0x225D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D5Cu;
label_225d5c:
    // 0x225d5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x225d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x225d60: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x225d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x225d64: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x225d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x225d68: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x225d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x225d6c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x225d6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x225d70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225d74: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x225d74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
label_225d78:
    // 0x225d78: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x225d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x225d7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x225d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x225d80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225d84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225d88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x225d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225d8c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x225d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x225d90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225d94: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x225d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225d98: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x225d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x225d9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225da0: 0x0  nop
    ctx->pc = 0x225da0u;
    // NOP
    // 0x225da4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225da4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225da8: 0x0  nop
    ctx->pc = 0x225da8u;
    // NOP
    // 0x225dac: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x225DACu;
    {
        const bool branch_taken_0x225dac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225dac) {
            ctx->pc = 0x225DCCu;
            goto label_225dcc;
        }
    }
    ctx->pc = 0x225DB4u;
    // 0x225db4: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x225db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x225db8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x225db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x225dbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225dc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225dc4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x225dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225dc8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x225dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_225dcc:
    // 0x225dcc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225dd0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x225dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225dd4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225dd8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x225dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225ddc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x225ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x225de0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x225de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x225de4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x225de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x225de8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x225de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x225dec: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x225decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x225df0: 0xc05c848  jal         func_172120
    ctx->pc = 0x225DF0u;
    SET_GPR_U32(ctx, 31, 0x225DF8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x225DF0u, 0x225DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DF8u;
label_225df8:
    // 0x225df8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x225df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x225dfc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e00: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x225e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225e04: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x225e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225e08: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x225e08u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x225e0c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x225E0Cu;
    SET_GPR_U32(ctx, 31, 0x225E14u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x225E0Cu, 0x225E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E14u;
label_225e14:
    // 0x225e14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e18: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x225e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x225e1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e20: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x225e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x225e24: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x225E24u;
    SET_GPR_U32(ctx, 31, 0x225E2Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x225E24u, 0x225E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E2Cu;
label_225e2c:
    // 0x225e2c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e30: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x225E30u;
    SET_GPR_U32(ctx, 31, 0x225E38u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x225E30u, 0x225E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E38u;
label_225e38:
    // 0x225e38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e3c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x225e3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x225e40: 0x106000f1  beqz        $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x225E40u;
    {
        const bool branch_taken_0x225e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x225e40) {
            ctx->pc = 0x226208u;
            goto label_226208;
        }
    }
    ctx->pc = 0x225E48u;
    // 0x225e48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e4c: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x225e4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x225e50: 0x146000ed  bnez        $v1, . + 4 + (0xED << 2)
    ctx->pc = 0x225E50u;
    {
        const bool branch_taken_0x225e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x225e50) {
            ctx->pc = 0x226208u;
            goto label_226208;
        }
    }
    ctx->pc = 0x225E58u;
    // 0x225e58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e5c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x225e5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x225e60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x225e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x225e64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x225e64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x225e68: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x225E68u;
    {
        const bool branch_taken_0x225e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225e68) {
            ctx->pc = 0x225E98u;
            goto label_225e98;
        }
    }
    ctx->pc = 0x225E70u;
    // 0x225e70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e74: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e78: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x225e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x225e7c: 0x24067809  addiu       $a2, $zero, 0x7809
    ctx->pc = 0x225e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30729));
    // 0x225e80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x225e80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225e84: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x225e84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x225e88: 0xc0965d0  jal         func_259740
    ctx->pc = 0x225E88u;
    SET_GPR_U32(ctx, 31, 0x225E90u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x225E88u, 0x225E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E90u;
label_225e90:
    // 0x225e90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x225E90u;
    {
        const bool branch_taken_0x225e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225e90) {
            ctx->pc = 0x225EB8u;
            goto label_225eb8;
        }
    }
    ctx->pc = 0x225E98u;
label_225e98:
    // 0x225e98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e9c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ea0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x225ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x225ea4: 0x2406780b  addiu       $a2, $zero, 0x780B
    ctx->pc = 0x225ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30731));
    // 0x225ea8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x225ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225eac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x225eacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x225eb0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x225EB0u;
    SET_GPR_U32(ctx, 31, 0x225EB8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x225EB0u, 0x225EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EB8u;
label_225eb8:
    // 0x225eb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225ebc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ec0: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x225ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x225ec4: 0xc067654  jal         func_19D950
    ctx->pc = 0x225EC4u;
    SET_GPR_U32(ctx, 31, 0x225ECCu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x225EC4u, 0x225ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225ECCu;
label_225ecc:
    // 0x225ecc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x225eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x225ed0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x225ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225ed4: 0x0  nop
    ctx->pc = 0x225ed4u;
    // NOP
    // 0x225ed8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x225ed8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x225edc: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x225edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x225ee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225ee4: 0x0  nop
    ctx->pc = 0x225ee4u;
    // NOP
    // 0x225ee8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x225ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x225eec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ef0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225ef4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x225ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x225ef8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x225ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x225efc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225f00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225f04: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225f08: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x225f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x225f0c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x225f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x225f10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225f14: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225f18: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225f1c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x225f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x225f20: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x225f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x225f24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225f28: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x225f28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x225f2c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x225F2Cu;
    {
        const bool branch_taken_0x225f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225f2c) {
            ctx->pc = 0x226208u;
            goto label_226208;
        }
    }
    ctx->pc = 0x225F34u;
label_225f34:
    // 0x225f34: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x225f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x225f38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x225f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x225f3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225f40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225f44: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x225f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225f48: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x225f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x225f4c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225f50: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x225f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225f54: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x225f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x225f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225f5c: 0x0  nop
    ctx->pc = 0x225f5cu;
    // NOP
    // 0x225f60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225f64: 0x0  nop
    ctx->pc = 0x225f64u;
    // NOP
    // 0x225f68: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x225F68u;
    {
        const bool branch_taken_0x225f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225f68) {
            ctx->pc = 0x225F88u;
            goto label_225f88;
        }
    }
    ctx->pc = 0x225F70u;
    // 0x225f70: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x225f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x225f74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x225f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x225f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225f7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225f80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x225f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225f84: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x225f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_225f88:
    // 0x225f88: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225f8c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x225f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225f90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225f94: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x225f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225f98: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x225f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x225f9c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x225f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x225fa0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x225fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x225fa4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x225fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x225fa8: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x225fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x225fac: 0xc05c848  jal         func_172120
    ctx->pc = 0x225FACu;
    SET_GPR_U32(ctx, 31, 0x225FB4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x225FACu, 0x225FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FB4u;
label_225fb4:
    // 0x225fb4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x225fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x225fb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225fbc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x225fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225fc0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x225fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225fc4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x225fc4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x225fc8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x225FC8u;
    SET_GPR_U32(ctx, 31, 0x225FD0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x225FC8u, 0x225FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FD0u;
label_225fd0:
    // 0x225fd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225fd4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x225fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x225fd8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225fdc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x225FDCu;
    SET_GPR_U32(ctx, 31, 0x225FE4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x225FDCu, 0x225FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FE4u;
label_225fe4:
    // 0x225fe4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x225FE4u;
    {
        const bool branch_taken_0x225fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225fe4) {
            ctx->pc = 0x226208u;
            goto label_226208;
        }
    }
    ctx->pc = 0x225FECu;
label_225fec:
    // 0x225fec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x225fecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225ff0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ff4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x225ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225ff8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x225ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x225ffc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x225ffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226000: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226004: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226008: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x226008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22600c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22600cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x226010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226014: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226018: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22601c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22601cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x226020: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x226020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x226024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226028: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22602c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226030: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x226030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x226034: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x226034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x226038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22603c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22603cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226040: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226044: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x226044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x226048: 0xc067654  jal         func_19D950
    ctx->pc = 0x226048u;
    SET_GPR_U32(ctx, 31, 0x226050u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x226048u, 0x226050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226050u;
label_226050:
    // 0x226050: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x226050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x226054: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226058: 0x0  nop
    ctx->pc = 0x226058u;
    // NOP
    // 0x22605c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22605cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x226060: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x226060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x226064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226068: 0x0  nop
    ctx->pc = 0x226068u;
    // NOP
    // 0x22606c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22606cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x226070: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226074: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226078: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x226078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22607c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22607cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x226080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226084: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226088: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22608c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22608cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x226090: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x226090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x226094: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x226094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x226098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22609c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22609cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2260a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2260a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2260a4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2260a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2260a8: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x2260a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x2260ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2260acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2260b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2260b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2260b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2260b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2260b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2260b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2260bc: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2260bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2260c0: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2260c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2260c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2260c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2260c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2260c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2260cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2260ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2260d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2260d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2260d4: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2260d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2260d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2260d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2260dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2260dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2260e0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2260e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2260e4: 0x24067802  addiu       $a2, $zero, 0x7802
    ctx->pc = 0x2260e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30722));
    // 0x2260e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2260e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2260ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2260ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2260f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2260F0u;
    SET_GPR_U32(ctx, 31, 0x2260F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2260F0u, 0x2260F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260F8u;
label_2260f8:
    // 0x2260f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2260f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2260fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2260fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226100: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x226100u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x226104: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226104u;
    SET_GPR_U32(ctx, 31, 0x22610Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226104u, 0x22610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22610Cu;
label_22610c:
    // 0x22610c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22610cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226110: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x226110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x226114: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x226114u;
    {
        const bool branch_taken_0x226114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226114) {
            ctx->pc = 0x22613Cu;
            goto label_22613c;
        }
    }
    ctx->pc = 0x22611Cu;
    // 0x22611c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22611cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226120: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226124: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x226124u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x226128: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x226128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x22612c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22612cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226130: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226134: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226138: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x226138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_22613c:
    // 0x22613c: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x22613cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x226140: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x226140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x226144: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226148: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22614c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22614cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226150: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x226150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x226154: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226158: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x226158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22615c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x22615cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x226160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226164: 0x0  nop
    ctx->pc = 0x226164u;
    // NOP
    // 0x226168: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x226168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22616c: 0x0  nop
    ctx->pc = 0x22616cu;
    // NOP
    // 0x226170: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x226170u;
    {
        const bool branch_taken_0x226170 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x226170) {
            ctx->pc = 0x226190u;
            goto label_226190;
        }
    }
    ctx->pc = 0x226178u;
    // 0x226178: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x226178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x22617c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22617cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x226180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226184: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226188: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22618c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x22618cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_226190:
    // 0x226190: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x226190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226194: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x226194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226198: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22619c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22619cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2261a0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2261a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2261a4: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2261a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2261a8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2261a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2261ac: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2261acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2261b0: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x2261b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2261b4: 0xc05c848  jal         func_172120
    ctx->pc = 0x2261B4u;
    SET_GPR_U32(ctx, 31, 0x2261BCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2261B4u, 0x2261BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261BCu;
label_2261bc:
    // 0x2261bc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2261bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2261c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2261c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2261c4: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2261c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2261c8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2261c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2261cc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2261ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2261d0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2261D0u;
    SET_GPR_U32(ctx, 31, 0x2261D8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2261D0u, 0x2261D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261D8u;
label_2261d8:
    // 0x2261d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2261d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2261dc: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2261dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2261e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2261e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2261e4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2261e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2261e8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2261E8u;
    SET_GPR_U32(ctx, 31, 0x2261F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2261E8u, 0x2261F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261F0u;
label_2261f0:
    // 0x2261f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2261f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2261f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2261f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2261f8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2261f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2261fc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2261FCu;
    SET_GPR_U32(ctx, 31, 0x226204u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2261FCu, 0x226204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226204u;
label_226204:
    // 0x226204: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x226204u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_226208:
    // 0x226208: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x226208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22620c: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x22620cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x226210: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x226210u;
    {
        const bool branch_taken_0x226210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226210) {
            ctx->pc = 0x226288u;
            goto label_226288;
        }
    }
    ctx->pc = 0x226218u;
    // 0x226218: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22621c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22621cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226220: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x226220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226224: 0x3c033c49  lui         $v1, 0x3C49
    ctx->pc = 0x226224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15433 << 16));
    // 0x226228: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x226228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22622c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22622cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226230: 0x0  nop
    ctx->pc = 0x226230u;
    // NOP
    // 0x226234: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x226234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x226238: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x226238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22623c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22623cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226240: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226244: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x226244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226248: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x226248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x22624c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22624cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x226250: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226254: 0x0  nop
    ctx->pc = 0x226254u;
    // NOP
    // 0x226258: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x226258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22625c: 0x0  nop
    ctx->pc = 0x22625cu;
    // NOP
    // 0x226260: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x226260u;
    {
        const bool branch_taken_0x226260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x226260) {
            ctx->pc = 0x2262F0u;
            goto label_2262f0;
        }
    }
    ctx->pc = 0x226268u;
    // 0x226268: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x226268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x22626c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22626cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x226270: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226274: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226278: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22627c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22627cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x226280: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x226280u;
    {
        const bool branch_taken_0x226280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226280) {
            ctx->pc = 0x2262F0u;
            goto label_2262f0;
        }
    }
    ctx->pc = 0x226288u;
label_226288:
    // 0x226288: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22628c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22628cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226290: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x226290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226294: 0x3c033c49  lui         $v1, 0x3C49
    ctx->pc = 0x226294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15433 << 16));
    // 0x226298: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x226298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22629c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22629cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2262a0: 0x0  nop
    ctx->pc = 0x2262a0u;
    // NOP
    // 0x2262a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2262a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2262a8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2262a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2262ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2262acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2262b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2262b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2262b4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2262b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2262b8: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x2262b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x2262bc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2262bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2262c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2262c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2262c4: 0x0  nop
    ctx->pc = 0x2262c4u;
    // NOP
    // 0x2262c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2262c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2262cc: 0x0  nop
    ctx->pc = 0x2262ccu;
    // NOP
    // 0x2262d0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2262D0u;
    {
        const bool branch_taken_0x2262d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2262d0) {
            ctx->pc = 0x2262F0u;
            goto label_2262f0;
        }
    }
    ctx->pc = 0x2262D8u;
    // 0x2262d8: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x2262d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x2262dc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2262dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2262e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2262e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2262e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2262e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2262e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2262e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2262ec: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2262ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2262f0:
    // 0x2262f0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2262f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2262f4: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x2262f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x2262f8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2262f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2262fc: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x2262fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x226300: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x226300u;
    {
        const bool branch_taken_0x226300 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x226300) {
            ctx->pc = 0x226368u;
            goto label_226368;
        }
    }
    ctx->pc = 0x226308u;
    // 0x226308: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226308u;
    SET_GPR_U32(ctx, 31, 0x226310u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226308u, 0x226310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226310u;
label_226310:
    // 0x226310: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x226310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226314: 0x24620258  addiu       $v0, $v1, 0x258
    ctx->pc = 0x226314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 600));
    // 0x226318: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x226318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x22631c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22631cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x226320: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x226320u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x226324: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226328: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x226328u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x22632c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22632Cu;
    SET_GPR_U32(ctx, 31, 0x226334u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22632Cu, 0x226334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226334u;
label_226334:
    // 0x226334: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x226334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226338: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x226338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x22633c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x22633Cu;
    {
        const bool branch_taken_0x22633c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22633c) {
            ctx->pc = 0x226368u;
            goto label_226368;
        }
    }
    ctx->pc = 0x226344u;
    // 0x226344: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x226344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226348: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x226348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x22634c: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x22634cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x226350: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x226350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x226354: 0x24040520  addiu       $a0, $zero, 0x520
    ctx->pc = 0x226354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x226358: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x226358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x22635c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22635cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x226360: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x226360u;
    SET_GPR_U32(ctx, 31, 0x226368u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x226360u, 0x226368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226368u;
label_226368:
    // 0x226368: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x226368u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22636c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22636cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x226370: 0x3e00008  jr          $ra
    ctx->pc = 0x226370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226378u;
}
