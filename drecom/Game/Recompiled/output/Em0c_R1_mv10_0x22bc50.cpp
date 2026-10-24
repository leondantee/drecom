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

// Function: Em0c_R1_mv10
// Address: 0x22bc50 - 0x22c154
void Em0c_R1_mv10_0x22bc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_mv10_0x22bc50");
#endif

    switch (ctx->pc) {
        case 0x22bcd0u: goto label_22bcd0;
        case 0x22bcf4u: goto label_22bcf4;
        case 0x22bdf4u: goto label_22bdf4;
        case 0x22be94u: goto label_22be94;
        case 0x22beb0u: goto label_22beb0;
        case 0x22bec8u: goto label_22bec8;
        case 0x22bed4u: goto label_22bed4;
        default: break;
    }

    ctx->pc = 0x22bc50u;

    // 0x22bc50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x22bc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x22bc54: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x22bc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x22bc58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22bc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22bc5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22bc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22bc60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22bc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22bc64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22bc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22bc68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22bc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22bc6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22bc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22bc70: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x22bc70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x22bc74: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22bc78: 0x2455dbc0  addiu       $s5, $v0, -0x2440
    ctx->pc = 0x22bc78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x22bc7c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bc80: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22bc84: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x22bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x22bc88: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x22bc88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22bc8c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x22bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22bc90: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x22bc90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x22bc94: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x22bc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bc98: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x22bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x22bc9c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x22bc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x22bca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bca4: 0x0  nop
    ctx->pc = 0x22bca4u;
    // NOP
    // 0x22bca8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22bca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22bcac: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x22bcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x22bcb0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bcb4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22bcb8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22bcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22bcbc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x22bcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22bcc0: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x22bcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x22bcc4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x22bcc4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22bcc8: 0xc059e1c  jal         func_167870
    ctx->pc = 0x22BCC8u;
    SET_GPR_U32(ctx, 31, 0x22BCD0u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x22BCC8u, 0x22BCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BCD0u;
label_22bcd0:
    // 0x22bcd0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x22bcd0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22bcd4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bcd8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22bcdc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22bce0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x22bce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x22bce4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x22bce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22bce8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x22bce8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22bcec: 0xc059e1c  jal         func_167870
    ctx->pc = 0x22BCECu;
    SET_GPR_U32(ctx, 31, 0x22BCF4u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x22BCECu, 0x22BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BCF4u;
label_22bcf4:
    // 0x22bcf4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x22bcf4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22bcf8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bcfc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x22bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x22bd00: 0x24713b60  addiu       $s1, $v1, 0x3B60
    ctx->pc = 0x22bd00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 15200));
    // 0x22bd04: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bd08: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x22bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x22bd0c: 0x24720510  addiu       $s2, $v1, 0x510
    ctx->pc = 0x22bd0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x22bd10: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x22bd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x22bd14: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bd18: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bd1c: 0xa464005e  sh          $a0, 0x5E($v1)
    ctx->pc = 0x22bd1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 4));
    // 0x22bd20: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bd24: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x22bd24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22bd28: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x22bd28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22bd2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22bd30: 0x1083004d  beq         $a0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x22BD30u;
    {
        const bool branch_taken_0x22bd30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22bd30) {
            ctx->pc = 0x22BE68u;
            goto label_22be68;
        }
    }
    ctx->pc = 0x22BD38u;
    // 0x22bd38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BD38u;
    {
        const bool branch_taken_0x22bd38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bd38) {
            ctx->pc = 0x22BD48u;
            goto label_22bd48;
        }
    }
    ctx->pc = 0x22BD40u;
    // 0x22bd40: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x22BD40u;
    {
        const bool branch_taken_0x22bd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bd40) {
            ctx->pc = 0x22BF54u;
            goto label_22bf54;
        }
    }
    ctx->pc = 0x22BD48u;
label_22bd48:
    // 0x22bd48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22bd4c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bd50: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22bd50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22bd54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22bd54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bd58: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bd5c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22bd60: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22bd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22bd64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22bd64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bd68: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bd6c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22bd70: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22bd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22bd74: 0x3c0240a6  lui         $v0, 0x40A6
    ctx->pc = 0x22bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16550 << 16));
    // 0x22bd78: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x22bd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x22bd7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bd7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bd80: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bd84: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22bd88: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22bd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22bd8c: 0x3c0240a6  lui         $v0, 0x40A6
    ctx->pc = 0x22bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16550 << 16));
    // 0x22bd90: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x22bd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x22bd94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bd94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bd98: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bd9c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22bda0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x22bda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22bda4: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x22bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x22bda8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22bdac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bdacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bdb0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bdb4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22bdb8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x22bdb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x22bdbc: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x22bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x22bdc0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22bdc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bdc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bdc8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bdcc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22bdd0: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x22bdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x22bdd4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bdd8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22bdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bddc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22bddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22bde0: 0x24061e22  addiu       $a2, $zero, 0x1E22
    ctx->pc = 0x22bde0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7714));
    // 0x22bde4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22bde4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22bde8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22bde8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22bdec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22BDECu;
    SET_GPR_U32(ctx, 31, 0x22BDF4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22BDECu, 0x22BDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BDF4u;
label_22bdf4:
    // 0x22bdf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22bdf8: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x22bdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22bdfc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22be00: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x22be00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x22be04: 0x24504010  addiu       $s0, $v0, 0x4010
    ctx->pc = 0x22be04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16400));
    // 0x22be08: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x22be08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x22be0c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x22be0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x22be10: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x22be10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x22be14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22be14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22be18: 0x0  nop
    ctx->pc = 0x22be18u;
    // NOP
    // 0x22be1c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x22be1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x22be20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22be20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22be24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22be24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22be28: 0x0  nop
    ctx->pc = 0x22be28u;
    // NOP
    // 0x22be2c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x22be2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x22be30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22be30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22be34: 0x0  nop
    ctx->pc = 0x22be34u;
    // NOP
    // 0x22be38: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x22be38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x22be3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22be3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22be40: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x22be40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22be44: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x22be44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x22be48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22be48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22be4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22be4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22be50: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x22be50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x22be54: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22be54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22be58: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22be58u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22be5c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22be60: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22be60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22be64: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x22be64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
label_22be68:
    // 0x22be68: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22be68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22be6c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22be70: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x22be70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x22be74: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x22be74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x22be78: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x22be78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22be7c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22be7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22be80: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x22be80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22be84: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22be84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22be88: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22be88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22be8c: 0xc05c848  jal         func_172120
    ctx->pc = 0x22BE8Cu;
    SET_GPR_U32(ctx, 31, 0x22BE94u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22BE8Cu, 0x22BE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE94u;
label_22be94:
    // 0x22be94: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x22be94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x22be98: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22be98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22be9c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22be9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bea0: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x22bea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bea4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22bea4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22bea8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22BEA8u;
    SET_GPR_U32(ctx, 31, 0x22BEB0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22BEA8u, 0x22BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BEB0u;
label_22beb0:
    // 0x22beb0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22beb4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22beb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22beb8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22beb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bebc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22bebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22bec0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22BEC0u;
    SET_GPR_U32(ctx, 31, 0x22BEC8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22BEC0u, 0x22BEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BEC8u;
label_22bec8:
    // 0x22bec8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22bec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22becc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22BECCu;
    SET_GPR_U32(ctx, 31, 0x22BED4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22BECCu, 0x22BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BED4u;
label_22bed4:
    // 0x22bed4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bed8: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x22bed8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x22bedc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x22bedcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22bee0: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x22bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x22bee4: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x22BEE4u;
    {
        const bool branch_taken_0x22bee4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22bee4) {
            ctx->pc = 0x22BF14u;
            goto label_22bf14;
        }
    }
    ctx->pc = 0x22BEECu;
    // 0x22beec: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x22beecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x22bef0: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x22bef0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x22bef4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x22bef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22bef8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x22bef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x22befc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BEFCu;
    {
        const bool branch_taken_0x22befc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22befc) {
            ctx->pc = 0x22BF14u;
            goto label_22bf14;
        }
    }
    ctx->pc = 0x22BF04u;
    // 0x22bf04: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x22bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x22bf08: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x22bf08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x22bf0c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x22bf0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x22bf10: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x22bf10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_22bf14:
    // 0x22bf14: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bf18: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22bf18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22bf1c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x22BF1Cu;
    {
        const bool branch_taken_0x22bf1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bf1c) {
            ctx->pc = 0x22BF54u;
            goto label_22bf54;
        }
    }
    ctx->pc = 0x22BF24u;
    // 0x22bf24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22bf28: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bf2c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x22bf2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x22bf30: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x22bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x22bf34: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bf38: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x22bf38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x22bf3c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bf40: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x22bf40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22bf44: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bf48: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x22bf48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22bf4c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bf50: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x22bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_22bf54:
    // 0x22bf54: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bf58: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bf5c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22bf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bf60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22bf60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bf64: 0x0  nop
    ctx->pc = 0x22bf64u;
    // NOP
    // 0x22bf68: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22bf68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bf6c: 0x0  nop
    ctx->pc = 0x22bf6cu;
    // NOP
    // 0x22bf70: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x22BF70u;
    {
        const bool branch_taken_0x22bf70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bf70) {
            ctx->pc = 0x22C054u;
            goto label_22c054;
        }
    }
    ctx->pc = 0x22BF78u;
    // 0x22bf78: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bf7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22bf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bf80: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22bf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bf84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22bf84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bf88: 0x0  nop
    ctx->pc = 0x22bf88u;
    // NOP
    // 0x22bf8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22bf8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bf90: 0x0  nop
    ctx->pc = 0x22bf90u;
    // NOP
    // 0x22bf94: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x22BF94u;
    {
        const bool branch_taken_0x22bf94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bf94) {
            ctx->pc = 0x22BFFCu;
            goto label_22bffc;
        }
    }
    ctx->pc = 0x22BF9Cu;
    // 0x22bf9c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bfa0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22bfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bfa4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22bfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bfa8: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x22bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22bfac: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22bfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22bfb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22bfb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bfb4: 0x0  nop
    ctx->pc = 0x22bfb4u;
    // NOP
    // 0x22bfb8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22bfb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22bfbc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22bfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22bfc0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bfc4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22bfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bfc8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22bfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bfcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22bfccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bfd0: 0x0  nop
    ctx->pc = 0x22bfd0u;
    // NOP
    // 0x22bfd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22bfd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bfd8: 0x0  nop
    ctx->pc = 0x22bfd8u;
    // NOP
    // 0x22bfdc: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x22BFDCu;
    {
        const bool branch_taken_0x22bfdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bfdc) {
            ctx->pc = 0x22C054u;
            goto label_22c054;
        }
    }
    ctx->pc = 0x22BFE4u;
    // 0x22bfe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22bfe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bfe8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bfec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bff0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22bff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x22bff4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22BFF4u;
    {
        const bool branch_taken_0x22bff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bff4) {
            ctx->pc = 0x22C054u;
            goto label_22c054;
        }
    }
    ctx->pc = 0x22BFFCu;
label_22bffc:
    // 0x22bffc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c000: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22c000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c004: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22c004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c008: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x22c008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22c00c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22c00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22c010: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c014: 0x0  nop
    ctx->pc = 0x22c014u;
    // NOP
    // 0x22c018: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22c018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22c01c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22c01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22c020: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22c020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c024: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c028: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22c028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c02c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c02cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c030: 0x0  nop
    ctx->pc = 0x22c030u;
    // NOP
    // 0x22c034: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c038: 0x0  nop
    ctx->pc = 0x22c038u;
    // NOP
    // 0x22c03c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22C03Cu;
    {
        const bool branch_taken_0x22c03c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c03c) {
            ctx->pc = 0x22C054u;
            goto label_22c054;
        }
    }
    ctx->pc = 0x22C044u;
    // 0x22c044: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c048: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22c048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c04c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c050: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22c050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_22c054:
    // 0x22c054: 0x16600013  bnez        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x22C054u;
    {
        const bool branch_taken_0x22c054 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c054) {
            ctx->pc = 0x22C0A4u;
            goto label_22c0a4;
        }
    }
    ctx->pc = 0x22C05Cu;
    // 0x22c05c: 0x16800011  bnez        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x22C05Cu;
    {
        const bool branch_taken_0x22c05c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c05c) {
            ctx->pc = 0x22C0A4u;
            goto label_22c0a4;
        }
    }
    ctx->pc = 0x22C064u;
    // 0x22c064: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22c064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c068: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c06c: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22c06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c070: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22c070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c074: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c078: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c078u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c07c: 0x0  nop
    ctx->pc = 0x22c07cu;
    // NOP
    // 0x22c080: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22C080u;
    {
        const bool branch_taken_0x22c080 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c080) {
            ctx->pc = 0x22C0A4u;
            goto label_22c0a4;
        }
    }
    ctx->pc = 0x22C088u;
    // 0x22c088: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22c088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c08c: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x22c08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c090: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x22c090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x22c094: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c098: 0x0  nop
    ctx->pc = 0x22c098u;
    // NOP
    // 0x22c09c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22c09cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22c0a0: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x22c0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_22c0a4:
    // 0x22c0a4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c0a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c0ac: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22c0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c0b0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x22c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x22c0b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c0b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c0b8: 0x0  nop
    ctx->pc = 0x22c0b8u;
    // NOP
    // 0x22c0bc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x22c0bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22c0c0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c0c4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22c0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c0c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22c0c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c0cc: 0x0  nop
    ctx->pc = 0x22c0ccu;
    // NOP
    // 0x22c0d0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22C0D0u;
    {
        const bool branch_taken_0x22c0d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c0d0) {
            ctx->pc = 0x22C0F4u;
            goto label_22c0f4;
        }
    }
    ctx->pc = 0x22C0D8u;
    // 0x22c0d8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22c0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c0dc: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x22c0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c0e0: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x22c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x22c0e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c0e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c0e8: 0x0  nop
    ctx->pc = 0x22c0e8u;
    // NOP
    // 0x22c0ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22c0ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22c0f0: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x22c0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_22c0f4:
    // 0x22c0f4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c0f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c0fc: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22c0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c100: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22c100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22c104: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22c104u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c108: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22c108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c10c: 0x0  nop
    ctx->pc = 0x22c10cu;
    // NOP
    // 0x22c110: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22C110u;
    {
        const bool branch_taken_0x22c110 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c110) {
            ctx->pc = 0x22C12Cu;
            goto label_22c12c;
        }
    }
    ctx->pc = 0x22C118u;
    // 0x22c118: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22c118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22c11c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22c11cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c120: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22c120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c124: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c128: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22c128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
label_22c12c:
    // 0x22c12c: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x22c12cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22c130: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22c130u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22c134: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22c134u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c138: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22c138u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c13c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22c13cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c148: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x22c148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x22c14c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C154u;
}
