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

// Function: Em0f_R0_init
// Address: 0x30bcd0 - 0x30c2bc
void Em0f_R0_init_0x30bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R0_init_0x30bcd0");
#endif

    switch (ctx->pc) {
        case 0x30bdd0u: goto label_30bdd0;
        case 0x30be50u: goto label_30be50;
        case 0x30bec0u: goto label_30bec0;
        case 0x30beccu: goto label_30becc;
        case 0x30bef0u: goto label_30bef0;
        case 0x30befcu: goto label_30befc;
        case 0x30bf38u: goto label_30bf38;
        case 0x30bf44u: goto label_30bf44;
        case 0x30bf80u: goto label_30bf80;
        case 0x30bf8cu: goto label_30bf8c;
        case 0x30c004u: goto label_30c004;
        case 0x30c028u: goto label_30c028;
        case 0x30c04cu: goto label_30c04c;
        case 0x30c070u: goto label_30c070;
        case 0x30c094u: goto label_30c094;
        case 0x30c0b8u: goto label_30c0b8;
        case 0x30c0dcu: goto label_30c0dc;
        case 0x30c100u: goto label_30c100;
        case 0x30c148u: goto label_30c148;
        case 0x30c164u: goto label_30c164;
        case 0x30c1c0u: goto label_30c1c0;
        default: break;
    }

    ctx->pc = 0x30bcd0u;

    // 0x30bcd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x30bcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x30bcd4: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x30bcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x30bcd8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x30bcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x30bcdc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30bcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30bce0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30bce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30bce4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30bce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30bce8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30bce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30bcec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30bcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30bcf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30bcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30bcf4: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x30bcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x30bcf8: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x30bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x30bcfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30bcfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30bd00: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bd04: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x30bd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x30bd08: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x30bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x30bd0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30bd0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30bd10: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bd14: 0xe46011e4  swc1        $f0, 0x11E4($v1)
    ctx->pc = 0x30bd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4580), bits); }
    // 0x30bd18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bd1c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bd20: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30bd20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30bd24: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30bd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bd28: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x30bd28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x30bd2c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bd30: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30bd30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30bd34: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30bd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bd38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30bd38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30bd3c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30bd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bd40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30bd40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30bd44: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bd48: 0xac601330  sw          $zero, 0x1330($v1)
    ctx->pc = 0x30bd48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 0));
    // 0x30bd4c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bd50: 0xac60133c  sw          $zero, 0x133C($v1)
    ctx->pc = 0x30bd50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4924), GPR_U32(ctx, 0));
    // 0x30bd54: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30bd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bd58: 0xac601344  sw          $zero, 0x1344($v1)
    ctx->pc = 0x30bd58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4932), GPR_U32(ctx, 0));
    // 0x30bd5c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30bd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bd60: 0xac601364  sw          $zero, 0x1364($v1)
    ctx->pc = 0x30bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4964), GPR_U32(ctx, 0));
    // 0x30bd64: 0x3c0346bb  lui         $v1, 0x46BB
    ctx->pc = 0x30bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18107 << 16));
    // 0x30bd68: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x30bd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x30bd6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30bd6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30bd70: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bd74: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x30bd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
    // 0x30bd78: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30bd7c: 0x246497f0  addiu       $a0, $v1, -0x6810
    ctx->pc = 0x30bd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940656));
    // 0x30bd80: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bd84: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x30bd84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x30bd88: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x30bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x30bd8c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30bd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bd90: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x30bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x30bd94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30bd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bd98: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bd9c: 0xa0641219  sb          $a0, 0x1219($v1)
    ctx->pc = 0x30bd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x30bda0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bda4: 0x90631308  lbu         $v1, 0x1308($v1)
    ctx->pc = 0x30bda4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x30bda8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30bda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30bdac: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x30bdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x30bdb0: 0x146000e5  bnez        $v1, . + 4 + (0xE5 << 2)
    ctx->pc = 0x30BDB0u;
    {
        const bool branch_taken_0x30bdb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30bdb0) {
            ctx->pc = 0x30C148u;
            goto label_30c148;
        }
    }
    ctx->pc = 0x30BDB8u;
    // 0x30bdb8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x30bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bdbc: 0x245510b0  addiu       $s5, $v0, 0x10B0
    ctx->pc = 0x30bdbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x30bdc0: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x30bdc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x30bdc4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30bdc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30bdc8: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x30BDC8u;
    SET_GPR_U32(ctx, 31, 0x30BDD0u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x30BDC8u, 0x30BDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BDD0u;
label_30bdd0:
    // 0x30bdd0: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x30bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x30bdd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30bdd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30bdd8: 0x0  nop
    ctx->pc = 0x30bdd8u;
    // NOP
    // 0x30bddc: 0xe6a000d0  swc1        $f0, 0xD0($s5)
    ctx->pc = 0x30bddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 208), bits); }
    // 0x30bde0: 0xe6a000d4  swc1        $f0, 0xD4($s5)
    ctx->pc = 0x30bde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 212), bits); }
    // 0x30bde4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x30bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x30bde8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30bde8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30bdec: 0x0  nop
    ctx->pc = 0x30bdecu;
    // NOP
    // 0x30bdf0: 0xe6a000d8  swc1        $f0, 0xD8($s5)
    ctx->pc = 0x30bdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 216), bits); }
    // 0x30bdf4: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x30bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x30bdf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30bdf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30bdfc: 0x0  nop
    ctx->pc = 0x30bdfcu;
    // NOP
    // 0x30be00: 0xe6a000e4  swc1        $f0, 0xE4($s5)
    ctx->pc = 0x30be00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 228), bits); }
    // 0x30be04: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x30be04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30be08: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x30be08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x30be0c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x30be0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x30be10: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x30be10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x30be14: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x30be14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30be18: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x30be18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x30be1c: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x30be1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x30be20: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x30be20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30be24: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30be24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30be28: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x30be28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x30be2c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x30be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x30be30: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x30be30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x30be34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30be34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30be38: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x30be38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30be3c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x30be3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30be40: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30be40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30be44: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x30be44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30be48: 0xc05d190  jal         func_174640
    ctx->pc = 0x30BE48u;
    SET_GPR_U32(ctx, 31, 0x30BE50u);
    ctx->pc = 0x174640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174640u, 0x30BE48u, 0x30BE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BE50u;
label_30be50:
    // 0x30be50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x30be50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x30be54: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x30be54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x30be58: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x30be58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x30be5c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x30be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x30be60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30be60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30be64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x30be64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x30be68: 0xac220ae8  sw          $v0, 0xAE8($at)
    ctx->pc = 0x30be68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x30be6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x30be6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x30be70: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x30be70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x30be74: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x30be74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30be78: 0x24421340  addiu       $v0, $v0, 0x1340
    ctx->pc = 0x30be78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4928));
    // 0x30be7c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x30be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x30be80: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x30be80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x30be84: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x30be84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x30be88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30be88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x30be8c: 0x24420580  addiu       $v0, $v0, 0x580
    ctx->pc = 0x30be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x30be90: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x30be90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x30be94: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30be94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30be98: 0x24429910  addiu       $v0, $v0, -0x66F0
    ctx->pc = 0x30be98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940944));
    // 0x30be9c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x30be9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30bea0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30bea0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399910u));
    // 0x30bea4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30bea4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30bea8: 0x2404170c  addiu       $a0, $zero, 0x170C
    ctx->pc = 0x30bea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5900));
    // 0x30beac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30beacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30beb0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x30beb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30beb4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x30beb4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30beb8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30BEB8u;
    SET_GPR_U32(ctx, 31, 0x30BEC0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30BEB8u, 0x30BEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BEC0u;
label_30bec0:
    // 0x30bec0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30bec0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30bec4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30BEC4u;
    SET_GPR_U32(ctx, 31, 0x30BECCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30BEC4u, 0x30BECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BECCu;
label_30becc:
    // 0x30becc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30beccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bed0: 0x24631348  addiu       $v1, $v1, 0x1348
    ctx->pc = 0x30bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4936));
    // 0x30bed4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x30bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x30bed8: 0x2404170c  addiu       $a0, $zero, 0x170C
    ctx->pc = 0x30bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5900));
    // 0x30bedc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30bedcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30bee0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x30bee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30bee4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x30bee4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30bee8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30BEE8u;
    SET_GPR_U32(ctx, 31, 0x30BEF0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30BEE8u, 0x30BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BEF0u;
label_30bef0:
    // 0x30bef0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30bef0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30bef4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30BEF4u;
    SET_GPR_U32(ctx, 31, 0x30BEFCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30BEF4u, 0x30BEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BEFCu;
label_30befc:
    // 0x30befc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30befcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bf00: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x30bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x30bf04: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x30bf04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x30bf08: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x30bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x30bf0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30bf0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30bf10: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x30bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bf14: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x30bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x30bf18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30bf1c: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x30bf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x30bf20: 0x2404170c  addiu       $a0, $zero, 0x170C
    ctx->pc = 0x30bf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5900));
    // 0x30bf24: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30bf24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30bf28: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x30bf28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30bf2c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x30bf2cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30bf30: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30BF30u;
    SET_GPR_U32(ctx, 31, 0x30BF38u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30BF30u, 0x30BF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BF38u;
label_30bf38:
    // 0x30bf38: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30bf38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30bf3c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30BF3Cu;
    SET_GPR_U32(ctx, 31, 0x30BF44u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30BF3Cu, 0x30BF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BF44u;
label_30bf44:
    // 0x30bf44: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bf48: 0x24631350  addiu       $v1, $v1, 0x1350
    ctx->pc = 0x30bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4944));
    // 0x30bf4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x30bf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x30bf50: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x30bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x30bf54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30bf54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30bf58: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x30bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bf5c: 0x24421350  addiu       $v0, $v0, 0x1350
    ctx->pc = 0x30bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x30bf60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30bf64: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x30bf64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x30bf68: 0x2404170c  addiu       $a0, $zero, 0x170C
    ctx->pc = 0x30bf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5900));
    // 0x30bf6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30bf6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30bf70: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x30bf70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30bf74: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x30bf74u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30bf78: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30BF78u;
    SET_GPR_U32(ctx, 31, 0x30BF80u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30BF78u, 0x30BF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BF80u;
label_30bf80:
    // 0x30bf80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30bf80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30bf84: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30BF84u;
    SET_GPR_U32(ctx, 31, 0x30BF8Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30BF84u, 0x30BF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BF8Cu;
label_30bf8c:
    // 0x30bf8c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bf90: 0x24631354  addiu       $v1, $v1, 0x1354
    ctx->pc = 0x30bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4948));
    // 0x30bf94: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x30bf94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x30bf98: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x30bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x30bf9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30bf9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30bfa0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x30bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bfa4: 0x24421354  addiu       $v0, $v0, 0x1354
    ctx->pc = 0x30bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4948));
    // 0x30bfa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30bfac: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x30bfacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x30bfb0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x30bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x30bfb4: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x30bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x30bfb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x30bfbc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x30bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x30bfc0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x30bfc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x30bfc4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x30bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x30bfc8: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x30bfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x30bfcc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x30bfccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x30bfd0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x30bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x30bfd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30bfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30bfd8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x30bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x30bfdc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x30bfdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x30bfe0: 0x8c340ae8  lw          $s4, 0xAE8($at)
    ctx->pc = 0x30bfe0u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x30bfe4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x30bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30bfe8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30bfec: 0x245106c0  addiu       $s1, $v0, 0x6C0
    ctx->pc = 0x30bfecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x30bff0: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x30bff0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x30bff4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x30bff4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x30bff8: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x30bff8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x30bffc: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x30BFFCu;
    SET_GPR_U32(ctx, 31, 0x30C004u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x30BFFCu, 0x30C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C004u;
label_30c004:
    // 0x30c004: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x30c004u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30c008: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x30c008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c00c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30c010: 0x24511680  addiu       $s1, $v0, 0x1680
    ctx->pc = 0x30c010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5760));
    // 0x30c014: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x30c014u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x30c018: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x30c018u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x30c01c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x30c01cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x30c020: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x30C020u;
    SET_GPR_U32(ctx, 31, 0x30C028u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x30C020u, 0x30C028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C028u;
label_30c028:
    // 0x30c028: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x30c028u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30c02c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x30c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c030: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30c030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30c034: 0x24510cf0  addiu       $s1, $v0, 0xCF0
    ctx->pc = 0x30c034u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x30c038: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x30c038u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x30c03c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x30c03cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x30c040: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x30c040u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x30c044: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x30C044u;
    SET_GPR_U32(ctx, 31, 0x30C04Cu);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x30C044u, 0x30C04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C04Cu;
label_30c04c:
    // 0x30c04c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x30c04cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30c050: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x30c050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c054: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30c054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30c058: 0x24511440  addiu       $s1, $v0, 0x1440
    ctx->pc = 0x30c058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5184));
    // 0x30c05c: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x30c05cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x30c060: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x30c060u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x30c064: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x30c064u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x30c068: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x30C068u;
    SET_GPR_U32(ctx, 31, 0x30C070u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x30C068u, 0x30C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C070u;
label_30c070:
    // 0x30c070: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x30c070u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30c074: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x30c074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c078: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30c078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30c07c: 0x245113b0  addiu       $s1, $v0, 0x13B0
    ctx->pc = 0x30c07cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5040));
    // 0x30c080: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x30c080u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x30c084: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x30c084u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x30c088: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x30c088u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x30c08c: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x30C08Cu;
    SET_GPR_U32(ctx, 31, 0x30C094u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x30C08Cu, 0x30C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C094u;
label_30c094:
    // 0x30c094: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x30c094u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30c098: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x30c098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c09c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30c0a0: 0x24511320  addiu       $s1, $v0, 0x1320
    ctx->pc = 0x30c0a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4896));
    // 0x30c0a4: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x30c0a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x30c0a8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x30c0a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x30c0ac: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x30c0acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x30c0b0: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x30C0B0u;
    SET_GPR_U32(ctx, 31, 0x30C0B8u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x30C0B0u, 0x30C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C0B8u;
label_30c0b8:
    // 0x30c0b8: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x30c0b8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30c0bc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x30c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c0c0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30c0c4: 0x24511710  addiu       $s1, $v0, 0x1710
    ctx->pc = 0x30c0c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5904));
    // 0x30c0c8: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x30c0c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x30c0cc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x30c0ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x30c0d0: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x30c0d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x30c0d4: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x30C0D4u;
    SET_GPR_U32(ctx, 31, 0x30C0DCu);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x30C0D4u, 0x30C0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C0DCu;
label_30c0dc:
    // 0x30c0dc: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x30c0dcu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30c0e0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x30c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c0e4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30c0e8: 0x245117a0  addiu       $s1, $v0, 0x17A0
    ctx->pc = 0x30c0e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6048));
    // 0x30c0ec: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x30c0ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x30c0f0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x30c0f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x30c0f4: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x30c0f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x30c0f8: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x30C0F8u;
    SET_GPR_U32(ctx, 31, 0x30C100u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x30C0F8u, 0x30C100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C100u;
label_30c100:
    // 0x30c100: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x30c100u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30c104: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x30c104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x30c108: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x30c108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x30c10c: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x30c10cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x30c110: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x30c110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x30c114: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x30c114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x30c118: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30c118u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x30c11c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x30c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x30c120: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x30c120u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x30c124: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x30c124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x30c128: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x30c128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x30c12c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x30c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x30c130: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x30c130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x30c134: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30c134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30c138: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x30c138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x30c13c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x30c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c140: 0xc0c4704  jal         func_311C10
    ctx->pc = 0x30C140u;
    SET_GPR_U32(ctx, 31, 0x30C148u);
    ctx->pc = 0x311C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311C10u, 0x30C140u, 0x30C148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C148u;
label_30c148:
    // 0x30c148: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c14c: 0xac601338  sw          $zero, 0x1338($v1)
    ctx->pc = 0x30c14cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 0));
    // 0x30c150: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c154: 0xac601368  sw          $zero, 0x1368($v1)
    ctx->pc = 0x30c154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4968), GPR_U32(ctx, 0));
    // 0x30c158: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x30c158u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30c15c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x30C15Cu;
    {
        const bool branch_taken_0x30c15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c15c) {
            ctx->pc = 0x30C1A8u;
            goto label_30c1a8;
        }
    }
    ctx->pc = 0x30C164u;
label_30c164:
    // 0x30c164: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x30c164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30c168: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30c168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30c16c: 0x246397d0  addiu       $v1, $v1, -0x6830
    ctx->pc = 0x30c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940624));
    // 0x30c170: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30c170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30c174: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30c174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30c178: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x30c178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x30c17c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30c180: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30c180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30c184: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c188: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x30c188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x30c18c: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x30c18cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30c190: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x30c190u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x30c194: 0xae600064  sw          $zero, 0x64($s3)
    ctx->pc = 0x30c194u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 0));
    // 0x30c198: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x30c198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30c19c: 0xae630068  sw          $v1, 0x68($s3)
    ctx->pc = 0x30c19cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 3));
    // 0x30c1a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30c1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30c1a4: 0x0  nop
    ctx->pc = 0x30c1a4u;
    // NOP
label_30c1a8:
    // 0x30c1a8: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x30c1a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x30c1ac: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x30C1ACu;
    {
        const bool branch_taken_0x30c1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c1ac) {
            ctx->pc = 0x30C164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c164;
        }
    }
    ctx->pc = 0x30C1B4u;
    // 0x30c1b4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x30c1b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30c1b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30C1B8u;
    {
        const bool branch_taken_0x30c1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c1b8) {
            ctx->pc = 0x30C208u;
            goto label_30c208;
        }
    }
    ctx->pc = 0x30C1C0u;
label_30c1c0:
    // 0x30c1c0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x30c1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30c1c4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30c1c8: 0x246397b0  addiu       $v1, $v1, -0x6850
    ctx->pc = 0x30c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940592));
    // 0x30c1cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30c1d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30c1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30c1d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30c1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30c1d8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30c1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30c1dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30c1e0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30c1e4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30c1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30c1e8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c1ec: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x30c1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x30c1f0: 0x64b021  addu        $s6, $v1, $a0
    ctx->pc = 0x30c1f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30c1f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30c1f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30c1f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c1fc: 0x0  nop
    ctx->pc = 0x30c1fcu;
    // NOP
    // 0x30c200: 0xe6c00128  swc1        $f0, 0x128($s6)
    ctx->pc = 0x30c200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 296), bits); }
    // 0x30c204: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30c204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_30c208:
    // 0x30c208: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x30c208u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x30c20c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x30C20Cu;
    {
        const bool branch_taken_0x30c20c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c20c) {
            ctx->pc = 0x30C1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c1c0;
        }
    }
    ctx->pc = 0x30C214u;
    // 0x30c214: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30c214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c218: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c21c: 0x24631358  addiu       $v1, $v1, 0x1358
    ctx->pc = 0x30c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4952));
    // 0x30c220: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x30c220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x30c224: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x30c224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x30c228: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x30c228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x30c22c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30c22cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c230: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c234: 0x2463135c  addiu       $v1, $v1, 0x135C
    ctx->pc = 0x30c234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4956));
    // 0x30c238: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x30c238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x30c23c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c240: 0xac601360  sw          $zero, 0x1360($v1)
    ctx->pc = 0x30c240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4960), GPR_U32(ctx, 0));
    // 0x30c244: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c248: 0xac60136c  sw          $zero, 0x136C($v1)
    ctx->pc = 0x30c248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4972), GPR_U32(ctx, 0));
    // 0x30c24c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c250: 0x90631308  lbu         $v1, 0x1308($v1)
    ctx->pc = 0x30c250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x30c254: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30c254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30c258: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x30c258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x30c25c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x30C25Cu;
    {
        const bool branch_taken_0x30c25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c25c) {
            ctx->pc = 0x30C290u;
            goto label_30c290;
        }
    }
    ctx->pc = 0x30C264u;
    // 0x30c264: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x30c264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30c268: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c26c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30c26cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c270: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c274: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x30c274u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c278: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c27c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30c27cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c280: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c284: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30c284u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c288: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c28c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30c28cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30c290:
    // 0x30c290: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x30c290u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30c294: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x30c294u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30c298: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30c298u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30c29c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30c29cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30c2a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30c2a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c2a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30c2a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c2a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30c2a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c2ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c2acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c2b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x30c2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30c2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x30C2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C2BCu;
}
