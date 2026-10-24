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

// Function: Search_enemy_joy
// Address: 0x15bc90 - 0x15bf78
void Search_enemy_joy_0x15bc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Search_enemy_joy_0x15bc90");
#endif

    switch (ctx->pc) {
        case 0x15bce8u: goto label_15bce8;
        case 0x15bd54u: goto label_15bd54;
        case 0x15bd60u: goto label_15bd60;
        case 0x15bdc8u: goto label_15bdc8;
        case 0x15bddcu: goto label_15bddc;
        case 0x15be48u: goto label_15be48;
        case 0x15beacu: goto label_15beac;
        default: break;
    }

    ctx->pc = 0x15bc90u;

    // 0x15bc90: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x15bc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x15bc94: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x15bc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x15bc98: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15bc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x15bc9c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15bc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x15bca0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15bca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15bca4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15bca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15bca8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15bca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15bcac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15bcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15bcb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15bcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15bcb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15bcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15bcb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15bcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15bcbc: 0xe7ac00c0  swc1        $f12, 0xC0($sp)
    ctx->pc = 0x15bcbcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x15bcc0: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x15bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x15bcc4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15bcc8: 0x2453dbc0  addiu       $s3, $v0, -0x2440
    ctx->pc = 0x15bcc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x15bccc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15bcd0: 0x24514f50  addiu       $s1, $v0, 0x4F50
    ctx->pc = 0x15bcd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 20304));
    // 0x15bcd4: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x15bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x15bcd8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x15bcd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x15bcdc: 0x24450170  addiu       $a1, $v0, 0x170
    ctx->pc = 0x15bcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15bce0: 0xc056cf4  jal         func_15B3D0
    ctx->pc = 0x15BCE0u;
    SET_GPR_U32(ctx, 31, 0x15BCE8u);
    ctx->pc = 0x15B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B3D0u, 0x15BCE0u, 0x15BCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BCE8u;
label_15bce8:
    // 0x15bce8: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x15bce8u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15bcec: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x15bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x15bcf0: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x15bcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x15bcf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15bcf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bcf8: 0x0  nop
    ctx->pc = 0x15bcf8u;
    // NOP
    // 0x15bcfc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x15bcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x15bd00: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x15bd00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15bd04: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x15bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x15bd08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15bd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15bd0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15bd0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bd10: 0x0  nop
    ctx->pc = 0x15bd10u;
    // NOP
    // 0x15bd14: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x15bd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x15bd18: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x15bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x15bd1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bd20: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15BD20u;
    {
        const bool branch_taken_0x15bd20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15bd20) {
            ctx->pc = 0x15BD44u;
            goto label_15bd44;
        }
    }
    ctx->pc = 0x15BD28u;
    // 0x15bd28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BD28u;
    {
        const bool branch_taken_0x15bd28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bd28) {
            ctx->pc = 0x15BD38u;
            goto label_15bd38;
        }
    }
    ctx->pc = 0x15BD30u;
    // 0x15bd30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15BD30u;
    {
        const bool branch_taken_0x15bd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bd30) {
            ctx->pc = 0x15BD48u;
            goto label_15bd48;
        }
    }
    ctx->pc = 0x15BD38u;
label_15bd38:
    // 0x15bd38: 0x241e0005  addiu       $fp, $zero, 0x5
    ctx->pc = 0x15bd38u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15bd3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15BD3Cu;
    {
        const bool branch_taken_0x15bd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bd3c) {
            ctx->pc = 0x15BD48u;
            goto label_15bd48;
        }
    }
    ctx->pc = 0x15BD44u;
label_15bd44:
    // 0x15bd44: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x15bd44u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15bd48:
    // 0x15bd48: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x15bd48u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15bd4c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x15BD4Cu;
    {
        const bool branch_taken_0x15bd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bd4c) {
            ctx->pc = 0x15BF08u;
            goto label_15bf08;
        }
    }
    ctx->pc = 0x15BD54u;
label_15bd54:
    // 0x15bd54: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x15bd54u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15bd58: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x15BD58u;
    {
        const bool branch_taken_0x15bd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bd58) {
            ctx->pc = 0x15BED0u;
            goto label_15bed0;
        }
    }
    ctx->pc = 0x15BD60u;
label_15bd60:
    // 0x15bd60: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15bd64: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15bd68: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x15bd68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15bd6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15bd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15bd70: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x15BD70u;
    {
        const bool branch_taken_0x15bd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bd70) {
            ctx->pc = 0x15BEC8u;
            goto label_15bec8;
        }
    }
    ctx->pc = 0x15BD78u;
    // 0x15bd78: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15bd7c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15bd80: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x15bd80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15bd84: 0x8e6213e8  lw          $v0, 0x13E8($s3)
    ctx->pc = 0x15bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5096)));
    // 0x15bd88: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x15BD88u;
    {
        const bool branch_taken_0x15bd88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x15bd88) {
            ctx->pc = 0x15BDA8u;
            goto label_15bda8;
        }
    }
    ctx->pc = 0x15BD90u;
    // 0x15bd90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bd94: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15bd98: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15bd9c: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x15bd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x15bda0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x15BDA0u;
    {
        const bool branch_taken_0x15bda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bda0) {
            ctx->pc = 0x15BEC8u;
            goto label_15bec8;
        }
    }
    ctx->pc = 0x15BDA8u;
label_15bda8:
    // 0x15bda8: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15bdac: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x15bdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15bdb0: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15bdb4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15bdb8: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x15bdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15bdbc: 0xc44d0008  lwc1        $f13, 0x8($v0)
    ctx->pc = 0x15bdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15bdc0: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15BDC0u;
    SET_GPR_U32(ctx, 31, 0x15BDC8u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15BDC0u, 0x15BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BDC8u;
label_15bdc8:
    // 0x15bdc8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x15bdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x15bdcc: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x15bdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15bdd0: 0xc7ad00c0  lwc1        $f13, 0xC0($sp)
    ctx->pc = 0x15bdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15bdd4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x15BDD4u;
    SET_GPR_U32(ctx, 31, 0x15BDDCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x15BDD4u, 0x15BDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BDDCu;
label_15bddc:
    // 0x15bddc: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x15bddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x15bde0: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x15bde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bde4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15bde4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bde8: 0x0  nop
    ctx->pc = 0x15bde8u;
    // NOP
    // 0x15bdec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15bdecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bdf0: 0x0  nop
    ctx->pc = 0x15bdf0u;
    // NOP
    // 0x15bdf4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15BDF4u;
    {
        const bool branch_taken_0x15bdf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15bdf4) {
            ctx->pc = 0x15BE10u;
            goto label_15be10;
        }
    }
    ctx->pc = 0x15BDFCu;
    // 0x15bdfc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15be00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15be00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15be04: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x15be04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15be08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15be08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15be0c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x15be0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_15be10:
    // 0x15be10: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x15be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15be14: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x15be14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15be18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15be18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15be1c: 0x0  nop
    ctx->pc = 0x15be1cu;
    // NOP
    // 0x15be20: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x15BE20u;
    {
        const bool branch_taken_0x15be20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15be20) {
            ctx->pc = 0x15BEC8u;
            goto label_15bec8;
        }
    }
    ctx->pc = 0x15BE28u;
    // 0x15be28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15be28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15be2c: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15be30: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15be34: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x15be34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x15be38: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15be38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15be3c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x15be3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15be40: 0xc067588  jal         func_19D620
    ctx->pc = 0x15BE40u;
    SET_GPR_U32(ctx, 31, 0x15BE48u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x15BE40u, 0x15BE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BE48u;
label_15be48:
    // 0x15be48: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x15be48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x15be4c: 0xc64111e8  lwc1        $f1, 0x11E8($s2)
    ctx->pc = 0x15be4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15be50: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x15be50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15be54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15be54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15be58: 0x0  nop
    ctx->pc = 0x15be58u;
    // NOP
    // 0x15be5c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x15BE5Cu;
    {
        const bool branch_taken_0x15be5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15be5c) {
            ctx->pc = 0x15BEC8u;
            goto label_15bec8;
        }
    }
    ctx->pc = 0x15BE64u;
    // 0x15be64: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x15be64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15be68: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x15be68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15be6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15be6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15be70: 0x0  nop
    ctx->pc = 0x15be70u;
    // NOP
    // 0x15be74: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x15BE74u;
    {
        const bool branch_taken_0x15be74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15be74) {
            ctx->pc = 0x15BEC8u;
            goto label_15bec8;
        }
    }
    ctx->pc = 0x15BE7Cu;
    // 0x15be7c: 0x924210a9  lbu         $v0, 0x10A9($s2)
    ctx->pc = 0x15be7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4265)));
    // 0x15be80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15be80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15be84: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x15be84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15be88: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x15be88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x15be8c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15be90: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x15be90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x15be94: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15be94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15be98: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x15be98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x15be9c: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x15be9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15bea0: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x15bea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x15bea4: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15BEA4u;
    SET_GPR_U32(ctx, 31, 0x15BEACu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15BEA4u, 0x15BEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BEACu;
label_15beac:
    // 0x15beac: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x15beacu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15beb0: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x15BEB0u;
    {
        const bool branch_taken_0x15beb0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x15beb0) {
            ctx->pc = 0x15BEC8u;
            goto label_15bec8;
        }
    }
    ctx->pc = 0x15BEB8u;
    // 0x15beb8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x15beb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bebc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x15bebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x15bec0: 0x7200ae28  paddub      $s5, $s0, $zero
    ctx->pc = 0x15bec0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15bec4: 0x0  nop
    ctx->pc = 0x15bec4u;
    // NOP
label_15bec8:
    // 0x15bec8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15bec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15becc: 0x0  nop
    ctx->pc = 0x15beccu;
    // NOP
label_15bed0:
    // 0x15bed0: 0x216102b  sltu        $v0, $s0, $s6
    ctx->pc = 0x15bed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x15bed4: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x15BED4u;
    {
        const bool branch_taken_0x15bed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bed4) {
            ctx->pc = 0x15BD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15bd60;
        }
    }
    ctx->pc = 0x15BEDCu;
    // 0x15bedc: 0x6a1000e  bgez        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x15BEDCu;
    {
        const bool branch_taken_0x15bedc = (GPR_S32(ctx, 21) >= 0);
        if (branch_taken_0x15bedc) {
            ctx->pc = 0x15BF18u;
            goto label_15bf18;
        }
    }
    ctx->pc = 0x15BEE4u;
    // 0x15bee4: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x15bee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bee8: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x15bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x15beec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15beecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15bef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15bef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bef4: 0x0  nop
    ctx->pc = 0x15bef4u;
    // NOP
    // 0x15bef8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15bef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15befc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x15befcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x15bf00: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x15bf00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x15bf04: 0x0  nop
    ctx->pc = 0x15bf04u;
    // NOP
label_15bf08:
    // 0x15bf08: 0x2fe102a  slt         $v0, $s7, $fp
    ctx->pc = 0x15bf08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x15bf0c: 0x1440ff91  bnez        $v0, . + 4 + (-0x6F << 2)
    ctx->pc = 0x15BF0Cu;
    {
        const bool branch_taken_0x15bf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bf0c) {
            ctx->pc = 0x15BD54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15bd54;
        }
    }
    ctx->pc = 0x15BF14u;
    // 0x15bf14: 0x0  nop
    ctx->pc = 0x15bf14u;
    // NOP
label_15bf18:
    // 0x15bf18: 0x6a00008  bltz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x15BF18u;
    {
        const bool branch_taken_0x15bf18 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x15bf18) {
            ctx->pc = 0x15BF3Cu;
            goto label_15bf3c;
        }
    }
    ctx->pc = 0x15BF20u;
    // 0x15bf20: 0x151140  sll         $v0, $s5, 5
    ctx->pc = 0x15bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x15bf24: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15bf28: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15bf2c: 0xae6213ec  sw          $v0, 0x13EC($s3)
    ctx->pc = 0x15bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5100), GPR_U32(ctx, 2));
    // 0x15bf30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bf34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15BF34u;
    {
        const bool branch_taken_0x15bf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bf34) {
            ctx->pc = 0x15BF44u;
            goto label_15bf44;
        }
    }
    ctx->pc = 0x15BF3Cu;
label_15bf3c:
    // 0x15bf3c: 0xae6013ec  sw          $zero, 0x13EC($s3)
    ctx->pc = 0x15bf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5100), GPR_U32(ctx, 0));
    // 0x15bf40: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15bf40u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_15bf44:
    // 0x15bf44: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x15bf44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15bf48: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15bf48u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15bf4c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15bf4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15bf50: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15bf50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15bf54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15bf54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15bf58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15bf58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15bf5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15bf5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15bf60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15bf60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bf64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bf64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bf68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bf68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bf6c: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x15bf6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x15bf70: 0x3e00008  jr          $ra
    ctx->pc = 0x15BF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BF78u;
}
