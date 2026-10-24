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

// Function: SndSeCall
// Address: 0x19ec60 - 0x19f090
void SndSeCall_0x19ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SndSeCall_0x19ec60");
#endif

    switch (ctx->pc) {
        case 0x19ed40u: goto label_19ed40;
        case 0x19ed7cu: goto label_19ed7c;
        case 0x19edb4u: goto label_19edb4;
        case 0x19ee00u: goto label_19ee00;
        case 0x19ee10u: goto label_19ee10;
        case 0x19ee20u: goto label_19ee20;
        case 0x19ef30u: goto label_19ef30;
        case 0x19ef68u: goto label_19ef68;
        case 0x19efccu: goto label_19efcc;
        case 0x19f01cu: goto label_19f01c;
        case 0x19f03cu: goto label_19f03c;
        case 0x19f05cu: goto label_19f05c;
        default: break;
    }

    ctx->pc = 0x19ec60u;

    // 0x19ec60: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x19ec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x19ec64: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x19ec64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x19ec68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x19ec68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x19ec6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19ec6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x19ec70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19ec70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19ec74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19ec74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19ec78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19ec78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19ec7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19ec7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19ec80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19ec80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19ec84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ec84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ec88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ec88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ec8c: 0xa7a400e0  sh          $a0, 0xE0($sp)
    ctx->pc = 0x19ec8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 4));
    // 0x19ec90: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x19ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
    // 0x19ec94: 0xe7ac00f0  swc1        $f12, 0xF0($sp)
    ctx->pc = 0x19ec94u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x19ec98: 0x97a300e0  lhu         $v1, 0xE0($sp)
    ctx->pc = 0x19ec98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19ec9c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19ec9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19eca0: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x19eca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x19eca4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19ECA4u;
    {
        const bool branch_taken_0x19eca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eca4) {
            ctx->pc = 0x19ECB8u;
            goto label_19ecb8;
        }
    }
    ctx->pc = 0x19ECACu;
    // 0x19ecac: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x19ecacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ecb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19ECB0u;
    {
        const bool branch_taken_0x19ecb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ecb0) {
            ctx->pc = 0x19ECBCu;
            goto label_19ecbc;
        }
    }
    ctx->pc = 0x19ECB8u;
label_19ecb8:
    // 0x19ecb8: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x19ecb8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19ecbc:
    // 0x19ecbc: 0x72a0f628  paddub      $fp, $s5, $zero
    ctx->pc = 0x19ecbcu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x19ecc0: 0x97a300e0  lhu         $v1, 0xE0($sp)
    ctx->pc = 0x19ecc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19ecc4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19ecc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19ecc8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x19ecc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x19eccc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19ECCCu;
    {
        const bool branch_taken_0x19eccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eccc) {
            ctx->pc = 0x19ECE0u;
            goto label_19ece0;
        }
    }
    ctx->pc = 0x19ECD4u;
    // 0x19ecd4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x19ecd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ecd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19ECD8u;
    {
        const bool branch_taken_0x19ecd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ecd8) {
            ctx->pc = 0x19ECE4u;
            goto label_19ece4;
        }
    }
    ctx->pc = 0x19ECE0u;
label_19ece0:
    // 0x19ece0: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x19ece0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19ece4:
    // 0x19ece4: 0xafb600c8  sw          $s6, 0xC8($sp)
    ctx->pc = 0x19ece4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 22));
    // 0x19ece8: 0x97a300e0  lhu         $v1, 0xE0($sp)
    ctx->pc = 0x19ece8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19ecec: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x19ececu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x19ecf0: 0xa7a300e0  sh          $v1, 0xE0($sp)
    ctx->pc = 0x19ecf0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 3));
    // 0x19ecf4: 0x97a300e0  lhu         $v1, 0xE0($sp)
    ctx->pc = 0x19ecf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19ecf8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19ecf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19ecfc: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x19ecfcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x19ed00: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x19ed00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x19ed04: 0x97a300e0  lhu         $v1, 0xE0($sp)
    ctx->pc = 0x19ed04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19ed08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19ed08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19ed0c: 0xa7a300e0  sh          $v1, 0xE0($sp)
    ctx->pc = 0x19ed0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 3));
    // 0x19ed10: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x19ed10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19ed14: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x19ED14u;
    {
        const bool branch_taken_0x19ed14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x19ed14) {
            ctx->pc = 0x19ED40u;
            goto label_19ed40;
        }
    }
    ctx->pc = 0x19ED1Cu;
    // 0x19ed1c: 0x97a300e0  lhu         $v1, 0xE0($sp)
    ctx->pc = 0x19ed1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19ed20: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19ed20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19ed24: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x19ed24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19ed28: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x19ED28u;
    {
        const bool branch_taken_0x19ed28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed28) {
            ctx->pc = 0x19ED40u;
            goto label_19ed40;
        }
    }
    ctx->pc = 0x19ED30u;
    // 0x19ed30: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x19ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x19ed34: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x19ed34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x19ed38: 0xc067f4c  jal         func_19FD30
    ctx->pc = 0x19ED38u;
    SET_GPR_U32(ctx, 31, 0x19ED40u);
    ctx->pc = 0x19FD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FD30u, 0x19ED38u, 0x19ED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED40u;
label_19ed40:
    // 0x19ed40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19ed40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19ed44: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x19ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x19ed48: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x19ed48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x19ed4c: 0x146000c3  bnez        $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x19ED4Cu;
    {
        const bool branch_taken_0x19ed4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ed4c) {
            ctx->pc = 0x19F05Cu;
            goto label_19f05c;
        }
    }
    ctx->pc = 0x19ED54u;
    // 0x19ed54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19ed54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19ed58: 0x8c231a40  lw          $v1, 0x1A40($at)
    ctx->pc = 0x19ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x19ed5c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x19ed5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x19ed60: 0x146000be  bnez        $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x19ED60u;
    {
        const bool branch_taken_0x19ed60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ed60) {
            ctx->pc = 0x19F05Cu;
            goto label_19f05c;
        }
    }
    ctx->pc = 0x19ED68u;
    // 0x19ed68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19ed6c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x19ed6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x19ed70: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19ed70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19ed74: 0xc0ce8fc  jal         func_33A3F0
    ctx->pc = 0x19ED74u;
    SET_GPR_U32(ctx, 31, 0x19ED7Cu);
    ctx->pc = 0x33A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A3F0u, 0x19ED74u, 0x19ED7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED7Cu;
label_19ed7c:
    // 0x19ed7c: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x19ED7Cu;
    {
        const bool branch_taken_0x19ed7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed7c) {
            ctx->pc = 0x19F05Cu;
            goto label_19f05c;
        }
    }
    ctx->pc = 0x19ED84u;
    // 0x19ed84: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x19ed84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x19ed88: 0xac30c560  sw          $s0, -0x3AA0($at)
    ctx->pc = 0x19ed88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5FC560u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC560u, _value); } while (0);
    // 0x19ed8c: 0x97a200e0  lhu         $v0, 0xE0($sp)
    ctx->pc = 0x19ed8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19ed90: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19ed90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19ed94: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x19ed94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x19ed98: 0xac22c564  sw          $v0, -0x3A9C($at)
    ctx->pc = 0x19ed98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC564u, _value); } while (0);
    // 0x19ed9c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x19ed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19eda0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x19eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x19eda4: 0x2445c520  addiu       $a1, $v0, -0x3AE0
    ctx->pc = 0x19eda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952224));
    // 0x19eda8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19eda8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19edac: 0xc0762e8  jal         func_1D8BA0
    ctx->pc = 0x19EDACu;
    SET_GPR_U32(ctx, 31, 0x19EDB4u);
    ctx->pc = 0x1D8BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BA0u, 0x19EDACu, 0x19EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EDB4u;
label_19edb4:
    // 0x19edb4: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x19edb4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19edb8: 0x82e20005  lb          $v0, 0x5($s7)
    ctx->pc = 0x19edb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 5)));
    // 0x19edbc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x19edbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19edc0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x19edc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x19edc4: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x19edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x19edc8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x19edc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19edcc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x19edccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x19edd0: 0x29e3c  dsll32      $s3, $v0, 24
    ctx->pc = 0x19edd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19edd4: 0x139e3f  dsra32      $s3, $s3, 24
    ctx->pc = 0x19edd4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
    // 0x19edd8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x19edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x19eddc: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x19EDDCu;
    {
        const bool branch_taken_0x19eddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eddc) {
            ctx->pc = 0x19EFDCu;
            goto label_19efdc;
        }
    }
    ctx->pc = 0x19EDE4u;
    // 0x19ede4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x19ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x19ede8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19ede8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19edec: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x19edecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x19edf0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x19edf0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x19edf4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x19edf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19edf8: 0xc056a78  jal         func_15A9E0
    ctx->pc = 0x19EDF8u;
    SET_GPR_U32(ctx, 31, 0x19EE00u);
    ctx->pc = 0x15A9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A9E0u, 0x19EDF8u, 0x19EE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EE00u;
label_19ee00:
    // 0x19ee00: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x19ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19ee04: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x19ee04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x19ee08: 0xc05f7ac  jal         func_17DEB0
    ctx->pc = 0x19EE08u;
    SET_GPR_U32(ctx, 31, 0x19EE10u);
    ctx->pc = 0x17DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DEB0u, 0x19EE08u, 0x19EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EE10u;
label_19ee10:
    // 0x19ee10: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x19ee10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x19ee14: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x19ee14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x19ee18: 0xc056a38  jal         func_15A8E0
    ctx->pc = 0x19EE18u;
    SET_GPR_U32(ctx, 31, 0x19EE20u);
    ctx->pc = 0x15A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A8E0u, 0x19EE18u, 0x19EE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EE20u;
label_19ee20:
    // 0x19ee20: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x19ee20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x19ee24: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x19ee24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ee28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ee28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ee2c: 0x0  nop
    ctx->pc = 0x19ee2cu;
    // NOP
    // 0x19ee30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19ee30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ee34: 0x0  nop
    ctx->pc = 0x19ee34u;
    // NOP
    // 0x19ee38: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19EE38u;
    {
        const bool branch_taken_0x19ee38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ee38) {
            ctx->pc = 0x19EE54u;
            goto label_19ee54;
        }
    }
    ctx->pc = 0x19EE40u;
    // 0x19ee40: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x19ee40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ee44: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19ee44u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19ee48: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x19ee48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x19ee4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19EE4Cu;
    {
        const bool branch_taken_0x19ee4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ee4c) {
            ctx->pc = 0x19EE5Cu;
            goto label_19ee5c;
        }
    }
    ctx->pc = 0x19EE54u;
label_19ee54:
    // 0x19ee54: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x19ee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ee58: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x19ee58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_19ee5c:
    // 0x19ee5c: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x19ee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ee60: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x19ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x19ee64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19ee64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x19ee68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ee68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ee6c: 0x0  nop
    ctx->pc = 0x19ee6cu;
    // NOP
    // 0x19ee70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19ee70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ee74: 0x0  nop
    ctx->pc = 0x19ee74u;
    // NOP
    // 0x19ee78: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x19EE78u;
    {
        const bool branch_taken_0x19ee78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ee78) {
            ctx->pc = 0x19EEACu;
            goto label_19eeac;
        }
    }
    ctx->pc = 0x19EE80u;
    // 0x19ee80: 0x2662fffb  addiu       $v0, $s3, -0x5
    ctx->pc = 0x19ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967291));
    // 0x19ee84: 0x29e3c  dsll32      $s3, $v0, 24
    ctx->pc = 0x19ee84u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19ee88: 0x139e3f  dsra32      $s3, $s3, 24
    ctx->pc = 0x19ee88u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
    // 0x19ee8c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x19ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x19ee90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19ee90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x19ee94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19ee94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ee98: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x19ee98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ee9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19ee9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19eea0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x19eea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x19eea4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19EEA4u;
    {
        const bool branch_taken_0x19eea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eea4) {
            ctx->pc = 0x19EEECu;
            goto label_19eeec;
        }
    }
    ctx->pc = 0x19EEACu;
label_19eeac:
    // 0x19eeac: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x19eeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19eeb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19eeb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19eeb4: 0x0  nop
    ctx->pc = 0x19eeb4u;
    // NOP
    // 0x19eeb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19eeb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19eebc: 0x0  nop
    ctx->pc = 0x19eebcu;
    // NOP
    // 0x19eec0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19EEC0u;
    {
        const bool branch_taken_0x19eec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19eec0) {
            ctx->pc = 0x19EEDCu;
            goto label_19eedc;
        }
    }
    ctx->pc = 0x19EEC8u;
    // 0x19eec8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x19eec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19eecc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19eeccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19eed0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x19eed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x19eed4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19EED4u;
    {
        const bool branch_taken_0x19eed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eed4) {
            ctx->pc = 0x19EEE4u;
            goto label_19eee4;
        }
    }
    ctx->pc = 0x19EEDCu;
label_19eedc:
    // 0x19eedc: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x19eedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19eee0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x19eee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_19eee4:
    // 0x19eee4: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x19eee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19eee8: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x19eee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_19eeec:
    // 0x19eeec: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x19eeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19eef0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19eef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19eef4: 0x0  nop
    ctx->pc = 0x19eef4u;
    // NOP
    // 0x19eef8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19eef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19eefc: 0x0  nop
    ctx->pc = 0x19eefcu;
    // NOP
    // 0x19ef00: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x19EF00u;
    {
        const bool branch_taken_0x19ef00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ef00) {
            ctx->pc = 0x19EF40u;
            goto label_19ef40;
        }
    }
    ctx->pc = 0x19EF08u;
    // 0x19ef08: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x19ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x19ef0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19ef0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19ef10: 0x3c024222  lui         $v0, 0x4222
    ctx->pc = 0x19ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16930 << 16));
    // 0x19ef14: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x19ef14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x19ef18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19ef18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ef1c: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x19ef1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ef20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19ef20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19ef24: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x19ef24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x19ef28: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x19EF28u;
    SET_GPR_U32(ctx, 31, 0x19EF30u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x19EF28u, 0x19EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF30u;
label_19ef30:
    // 0x19ef30: 0x2963c  dsll32      $s2, $v0, 24
    ctx->pc = 0x19ef30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19ef34: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x19ef34u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x19ef38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19EF38u;
    {
        const bool branch_taken_0x19ef38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef38) {
            ctx->pc = 0x19EF70u;
            goto label_19ef70;
        }
    }
    ctx->pc = 0x19EF40u;
label_19ef40:
    // 0x19ef40: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x19ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x19ef44: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19ef44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19ef48: 0x3c024222  lui         $v0, 0x4222
    ctx->pc = 0x19ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16930 << 16));
    // 0x19ef4c: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x19ef4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x19ef50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19ef50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ef54: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x19ef54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ef58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19ef58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19ef5c: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x19ef5cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x19ef60: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x19EF60u;
    SET_GPR_U32(ctx, 31, 0x19EF68u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x19EF60u, 0x19EF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF68u;
label_19ef68:
    // 0x19ef68: 0x2963c  dsll32      $s2, $v0, 24
    ctx->pc = 0x19ef68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19ef6c: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x19ef6cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
label_19ef70:
    // 0x19ef70: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x19ef70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ef74: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x19ef74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ef78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19ef78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ef7c: 0x0  nop
    ctx->pc = 0x19ef7cu;
    // NOP
    // 0x19ef80: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x19EF80u;
    {
        const bool branch_taken_0x19ef80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ef80) {
            ctx->pc = 0x19EF94u;
            goto label_19ef94;
        }
    }
    ctx->pc = 0x19EF88u;
    // 0x19ef88: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x19ef88u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19ef8c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x19EF8Cu;
    {
        const bool branch_taken_0x19ef8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef8c) {
            ctx->pc = 0x19EFF0u;
            goto label_19eff0;
        }
    }
    ctx->pc = 0x19EF94u;
label_19ef94:
    // 0x19ef94: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x19ef94u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ef98: 0x0  nop
    ctx->pc = 0x19ef98u;
    // NOP
    // 0x19ef9c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x19ef9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19efa0: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x19efa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19efa4: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x19efa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19efa8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19efa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19efac: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x19efacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x19efb0: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x19efb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19efb4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x19efb4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x19efb8: 0x0  nop
    ctx->pc = 0x19efb8u;
    // NOP
    // 0x19efbc: 0x0  nop
    ctx->pc = 0x19efbcu;
    // NOP
    // 0x19efc0: 0x0  nop
    ctx->pc = 0x19efc0u;
    // NOP
    // 0x19efc4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x19EFC4u;
    SET_GPR_U32(ctx, 31, 0x19EFCCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x19EFC4u, 0x19EFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EFCCu;
label_19efcc:
    // 0x19efcc: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x19efccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19efd0: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x19efd0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x19efd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19EFD4u;
    {
        const bool branch_taken_0x19efd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19efd4) {
            ctx->pc = 0x19EFF0u;
            goto label_19eff0;
        }
    }
    ctx->pc = 0x19EFDCu;
label_19efdc:
    // 0x19efdc: 0x138e3c  dsll32      $s1, $s3, 24
    ctx->pc = 0x19efdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) << (32 + 24));
    // 0x19efe0: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x19efe0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x19efe4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x19efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19efe8: 0x2963c  dsll32      $s2, $v0, 24
    ctx->pc = 0x19efe8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19efec: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x19efecu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
label_19eff0:
    // 0x19eff0: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x19eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x19eff4: 0x97a200e0  lhu         $v0, 0xE0($sp)
    ctx->pc = 0x19eff4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19eff8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19eff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19effc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x19effcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19f000: 0x62a025  or          $s4, $v1, $v0
    ctx->pc = 0x19f000u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19f004: 0x13c0000f  beqz        $fp, . + 4 + (0xF << 2)
    ctx->pc = 0x19F004u;
    {
        const bool branch_taken_0x19f004 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f004) {
            ctx->pc = 0x19F044u;
            goto label_19f044;
        }
    }
    ctx->pc = 0x19F00Cu;
    // 0x19f00c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19f00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19f010: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x19f010u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x19f014: 0xc0ce8fc  jal         func_33A3F0
    ctx->pc = 0x19F014u;
    SET_GPR_U32(ctx, 31, 0x19F01Cu);
    ctx->pc = 0x33A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A3F0u, 0x19F014u, 0x19F01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F01Cu;
label_19f01c:
    // 0x19f01c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19F01Cu;
    {
        const bool branch_taken_0x19f01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f01c) {
            ctx->pc = 0x19F05Cu;
            goto label_19f05c;
        }
    }
    ctx->pc = 0x19F024u;
    // 0x19f024: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x19f024u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x19f028: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x19f028u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x19f02c: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x19f02cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x19f030: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x19f030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19f034: 0xc0ce394  jal         func_338E50
    ctx->pc = 0x19F034u;
    SET_GPR_U32(ctx, 31, 0x19F03Cu);
    ctx->pc = 0x338E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338E50u, 0x19F034u, 0x19F03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F03Cu;
label_19f03c:
    // 0x19f03c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19F03Cu;
    {
        const bool branch_taken_0x19f03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f03c) {
            ctx->pc = 0x19F05Cu;
            goto label_19f05c;
        }
    }
    ctx->pc = 0x19F044u;
label_19f044:
    // 0x19f044: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x19f044u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x19f048: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x19f048u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x19f04c: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x19f04cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x19f050: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x19f050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19f054: 0xc0ce318  jal         func_338C60
    ctx->pc = 0x19F054u;
    SET_GPR_U32(ctx, 31, 0x19F05Cu);
    ctx->pc = 0x338C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338C60u, 0x19F054u, 0x19F05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F05Cu;
label_19f05c:
    // 0x19f05c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x19f05cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19f060: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x19f060u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19f064: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19f064u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19f068: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19f068u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f06c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19f06cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f070: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19f070u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f074: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19f074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f078: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19f078u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f07c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f07cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f080: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f084: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x19f084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x19f088: 0x3e00008  jr          $ra
    ctx->pc = 0x19F088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F090u;
}
