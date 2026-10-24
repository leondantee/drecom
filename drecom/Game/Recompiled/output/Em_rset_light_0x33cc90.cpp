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

// Function: Em_rset_light
// Address: 0x33cc90 - 0x33d044
void Em_rset_light_0x33cc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_rset_light_0x33cc90");
#endif

    switch (ctx->pc) {
        case 0x33cef0u: goto label_33cef0;
        case 0x33cf00u: goto label_33cf00;
        case 0x33cf1cu: goto label_33cf1c;
        case 0x33cf68u: goto label_33cf68;
        case 0x33cf78u: goto label_33cf78;
        case 0x33cf94u: goto label_33cf94;
        case 0x33cfc4u: goto label_33cfc4;
        case 0x33cfd4u: goto label_33cfd4;
        case 0x33cff0u: goto label_33cff0;
        default: break;
    }

    ctx->pc = 0x33cc90u;

    // 0x33cc90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33cc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33cc94: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x33cc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x33cc98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33cc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33cc9c: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x33cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x33cca0: 0x24705450  addiu       $s0, $v1, 0x5450
    ctx->pc = 0x33cca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21584));
    // 0x33cca4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x33cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x33cca8: 0x24639f40  addiu       $v1, $v1, -0x60C0
    ctx->pc = 0x33cca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942528));
    // 0x33ccac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x33ccacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33ccb0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x33ccb0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3A9F40u));
    // 0x33ccb4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x33ccb4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x33ccb8: 0x920300b8  lbu         $v1, 0xB8($s0)
    ctx->pc = 0x33ccb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x895508u));
    // 0x33ccbc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33ccbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33ccc0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33ccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33ccc4: 0x108300b5  beq         $a0, $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x33CCC4u;
    {
        const bool branch_taken_0x33ccc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ccc4) {
            ctx->pc = 0x33CF9Cu;
            goto label_33cf9c;
        }
    }
    ctx->pc = 0x33CCCCu;
    // 0x33cccc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33ccccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33ccd0: 0x1083009b  beq         $a0, $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x33CCD0u;
    {
        const bool branch_taken_0x33ccd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ccd0) {
            ctx->pc = 0x33CF40u;
            goto label_33cf40;
        }
    }
    ctx->pc = 0x33CCD8u;
    // 0x33ccd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33ccdc: 0x1083007a  beq         $a0, $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x33CCDCu;
    {
        const bool branch_taken_0x33ccdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ccdc) {
            ctx->pc = 0x33CEC8u;
            goto label_33cec8;
        }
    }
    ctx->pc = 0x33CCE4u;
    // 0x33cce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33cce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cce8: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x33CCE8u;
    {
        const bool branch_taken_0x33cce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33cce8) {
            ctx->pc = 0x33CD30u;
            goto label_33cd30;
        }
    }
    ctx->pc = 0x33CCF0u;
    // 0x33ccf0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33CCF0u;
    {
        const bool branch_taken_0x33ccf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ccf0) {
            ctx->pc = 0x33CD00u;
            goto label_33cd00;
        }
    }
    ctx->pc = 0x33CCF8u;
    // 0x33ccf8: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x33CCF8u;
    {
        const bool branch_taken_0x33ccf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ccf8) {
            ctx->pc = 0x33D030u;
            goto label_33d030;
        }
    }
    ctx->pc = 0x33CD00u;
label_33cd00:
    // 0x33cd00: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cd04: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33cd08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33cd0c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x33cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x33cd10: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x33cd14: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x33cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x33cd18: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x33cd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33cd1c: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x33cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x33cd20: 0x34630007  ori         $v1, $v1, 0x7
    ctx->pc = 0x33cd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
    // 0x33cd24: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x33cd24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
    // 0x33cd28: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x33CD28u;
    {
        const bool branch_taken_0x33cd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cd28) {
            ctx->pc = 0x33D030u;
            goto label_33d030;
        }
    }
    ctx->pc = 0x33CD30u;
label_33cd30:
    // 0x33cd30: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x33cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cd34: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33cd38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cd3c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33cd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33cd40: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33cd44: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x33cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x33cd48: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x33cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cd4c: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x33cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x33cd50: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x33cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x33cd54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33cd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33cd58: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x33cd58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x33cd5c: 0x3c02429c  lui         $v0, 0x429C
    ctx->pc = 0x33cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17052 << 16));
    // 0x33cd60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cd60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cd64: 0x0  nop
    ctx->pc = 0x33cd64u;
    // NOP
    // 0x33cd68: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x33cd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x33cd6c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x33cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x33cd70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cd70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cd74: 0x0  nop
    ctx->pc = 0x33cd74u;
    // NOP
    // 0x33cd78: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x33cd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x33cd7c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x33cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x33cd80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cd80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cd84: 0x0  nop
    ctx->pc = 0x33cd84u;
    // NOP
    // 0x33cd88: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x33cd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x33cd8c: 0x3c023e9c  lui         $v0, 0x3E9C
    ctx->pc = 0x33cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16028 << 16));
    // 0x33cd90: 0x34429c9d  ori         $v0, $v0, 0x9C9D
    ctx->pc = 0x33cd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40093);
    // 0x33cd94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cd94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cd98: 0x0  nop
    ctx->pc = 0x33cd98u;
    // NOP
    // 0x33cd9c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x33cd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x33cda0: 0x3c023d20  lui         $v0, 0x3D20
    ctx->pc = 0x33cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15648 << 16));
    // 0x33cda4: 0x3442a0a1  ori         $v0, $v0, 0xA0A1
    ctx->pc = 0x33cda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41121);
    // 0x33cda8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cda8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cdac: 0x0  nop
    ctx->pc = 0x33cdacu;
    // NOP
    // 0x33cdb0: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x33cdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x33cdb4: 0x3c023d20  lui         $v0, 0x3D20
    ctx->pc = 0x33cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15648 << 16));
    // 0x33cdb8: 0x3442a0a1  ori         $v0, $v0, 0xA0A1
    ctx->pc = 0x33cdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41121);
    // 0x33cdbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cdbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cdc0: 0x0  nop
    ctx->pc = 0x33cdc0u;
    // NOP
    // 0x33cdc4: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x33cdc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x33cdc8: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x33cdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cdcc: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x33cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cdd0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33cdd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cdd8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33cdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33cddc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33cde0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x33cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x33cde4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cde8: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x33cde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x33cdec: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x33cdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cdf0: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x33cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cdf4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33cdf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cdfc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33ce00: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33ce04: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x33ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x33ce08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ce0c: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x33ce0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x33ce10: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x33ce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ce14: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x33ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33ce18: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33ce1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ce20: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33ce24: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33ce28: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x33ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x33ce2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ce30: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x33ce30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x33ce34: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x33ce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ce38: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x33ce38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33ce3c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33ce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33ce40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ce44: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33ce44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33ce48: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33ce4c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x33ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x33ce50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ce54: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x33ce54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x33ce58: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x33ce58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ce5c: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x33ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33ce60: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33ce64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ce68: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33ce6c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33ce70: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x33ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x33ce74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ce78: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x33ce78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x33ce7c: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x33ce7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ce80: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x33ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33ce84: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33ce88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ce8c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33ce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33ce90: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33ce94: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x33ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x33ce98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ce9c: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x33ce9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x33cea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33cea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cea4: 0x0  nop
    ctx->pc = 0x33cea4u;
    // NOP
    // 0x33cea8: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x33cea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x33ceac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x33ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x33ceb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33ceb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ceb4: 0x0  nop
    ctx->pc = 0x33ceb4u;
    // NOP
    // 0x33ceb8: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x33ceb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x33cebc: 0x920200b8  lbu         $v0, 0xB8($s0)
    ctx->pc = 0x33cebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x33cec0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33cec4: 0xa20200b8  sb          $v0, 0xB8($s0)
    ctx->pc = 0x33cec4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 2));
label_33cec8:
    // 0x33cec8: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x33cec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cecc: 0xc60000c4  lwc1        $f0, 0xC4($s0)
    ctx->pc = 0x33ceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ced0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33ced0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33ced4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x33ced4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x33ced8: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33cedc: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cee0: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x33cee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x33cee4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x33cee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33cee8: 0xc05db20  jal         func_176C80
    ctx->pc = 0x33CEE8u;
    SET_GPR_U32(ctx, 31, 0x33CEF0u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x33CEE8u, 0x33CEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CEF0u;
label_33cef0:
    // 0x33cef0: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cef4: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x33cef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33cef8: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x33CEF8u;
    SET_GPR_U32(ctx, 31, 0x33CF00u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x33CEF8u, 0x33CF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CF00u;
label_33cf00:
    // 0x33cf00: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x33cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x33cf04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33cf04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33cf08: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x33cf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cf0c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x33cf0cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33cf10: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cf14: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x33CF14u;
    SET_GPR_U32(ctx, 31, 0x33CF1Cu);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x33CF14u, 0x33CF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CF1Cu;
label_33cf1c:
    // 0x33cf1c: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x33cf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cf20: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x33cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x33cf24: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x33cf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x33cf28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33cf28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cf2c: 0x0  nop
    ctx->pc = 0x33cf2cu;
    // NOP
    // 0x33cf30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x33cf30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33cf34: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x33cf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x33cf38: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x33CF38u;
    {
        const bool branch_taken_0x33cf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cf38) {
            ctx->pc = 0x33D030u;
            goto label_33d030;
        }
    }
    ctx->pc = 0x33CF40u;
label_33cf40:
    // 0x33cf40: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x33cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cf44: 0xc60000c4  lwc1        $f0, 0xC4($s0)
    ctx->pc = 0x33cf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cf48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33cf48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33cf4c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x33cf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x33cf50: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33cf54: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cf58: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x33cf58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x33cf5c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x33cf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33cf60: 0xc05db20  jal         func_176C80
    ctx->pc = 0x33CF60u;
    SET_GPR_U32(ctx, 31, 0x33CF68u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x33CF60u, 0x33CF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CF68u;
label_33cf68:
    // 0x33cf68: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cf6c: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x33cf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33cf70: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x33CF70u;
    SET_GPR_U32(ctx, 31, 0x33CF78u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x33CF70u, 0x33CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CF78u;
label_33cf78:
    // 0x33cf78: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x33cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x33cf7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33cf7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33cf80: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x33cf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cf84: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x33cf84u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33cf88: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cf8c: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x33CF8Cu;
    SET_GPR_U32(ctx, 31, 0x33CF94u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x33CF8Cu, 0x33CF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CF94u;
label_33cf94:
    // 0x33cf94: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x33CF94u;
    {
        const bool branch_taken_0x33cf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cf94) {
            ctx->pc = 0x33D030u;
            goto label_33d030;
        }
    }
    ctx->pc = 0x33CF9Cu;
label_33cf9c:
    // 0x33cf9c: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x33cf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cfa0: 0xc60000c4  lwc1        $f0, 0xC4($s0)
    ctx->pc = 0x33cfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cfa4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33cfa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33cfa8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x33cfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x33cfac: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33cfb0: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cfb4: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x33cfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x33cfb8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x33cfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33cfbc: 0xc05db20  jal         func_176C80
    ctx->pc = 0x33CFBCu;
    SET_GPR_U32(ctx, 31, 0x33CFC4u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x33CFBCu, 0x33CFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CFC4u;
label_33cfc4:
    // 0x33cfc4: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cfc8: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x33cfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33cfcc: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x33CFCCu;
    SET_GPR_U32(ctx, 31, 0x33CFD4u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x33CFCCu, 0x33CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CFD4u;
label_33cfd4:
    // 0x33cfd4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x33cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x33cfd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33cfd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33cfdc: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x33cfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cfe0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x33cfe0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33cfe4: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cfe8: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x33CFE8u;
    SET_GPR_U32(ctx, 31, 0x33CFF0u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x33CFE8u, 0x33CFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CFF0u;
label_33cff0:
    // 0x33cff0: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x33cff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cff4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x33cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x33cff8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x33cff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x33cffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33cffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d000: 0x0  nop
    ctx->pc = 0x33d000u;
    // NOP
    // 0x33d004: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x33d004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d008: 0x0  nop
    ctx->pc = 0x33d008u;
    // NOP
    // 0x33d00c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x33D00Cu;
    {
        const bool branch_taken_0x33d00c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33d00c) {
            ctx->pc = 0x33D030u;
            goto label_33d030;
        }
    }
    ctx->pc = 0x33D014u;
    // 0x33d014: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x33d014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d018: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x33d018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x33d01c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x33d01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x33d020: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33d020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d024: 0x0  nop
    ctx->pc = 0x33d024u;
    // NOP
    // 0x33d028: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33d028u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33d02c: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x33d02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
label_33d030:
    // 0x33d030: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x33d030u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33d034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33d034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d038: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x33d038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33d03c: 0x3e00008  jr          $ra
    ctx->pc = 0x33D03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D044u;
}
