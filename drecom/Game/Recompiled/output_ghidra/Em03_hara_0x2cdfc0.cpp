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

// Function: Em03_hara
// Address: 0x2cdfc0 - 0x2ce498
void Em03_hara_0x2cdfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_hara_0x2cdfc0");
#endif

    switch (ctx->pc) {
        case 0x2ce07cu: goto label_2ce07c;
        case 0x2ce0b0u: goto label_2ce0b0;
        case 0x2ce0f0u: goto label_2ce0f0;
        default: break;
    }

    ctx->pc = 0x2cdfc0u;

    // 0x2cdfc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cdfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cdfc4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x2cdfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x2cdfc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cdfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cdfcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cdfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cdfd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cdfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cdfd4: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2cdfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2cdfd8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cdfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cdfdc: 0x8c5002d0  lw          $s0, 0x2D0($v0)
    ctx->pc = 0x2cdfdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2cdfe0: 0xc6011708  lwc1        $f1, 0x1708($s0)
    ctx->pc = 0x2cdfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cdfe4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2cdfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2cdfe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cdfe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdfec: 0x0  nop
    ctx->pc = 0x2cdfecu;
    // NOP
    // 0x2cdff0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2cdff0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cdff4: 0x0  nop
    ctx->pc = 0x2cdff4u;
    // NOP
    // 0x2cdff8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2CDFF8u;
    {
        const bool branch_taken_0x2cdff8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cdff8) {
            ctx->pc = 0x2CE038u;
            goto label_2ce038;
        }
    }
    ctx->pc = 0x2CE000u;
    // 0x2ce000: 0x96021720  lhu         $v0, 0x1720($s0)
    ctx->pc = 0x2ce000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5920)));
    // 0x2ce004: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2ce004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2ce008: 0xa6021720  sh          $v0, 0x1720($s0)
    ctx->pc = 0x2ce008u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5920), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce00c: 0x960218b0  lhu         $v0, 0x18B0($s0)
    ctx->pc = 0x2ce00cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6320)));
    // 0x2ce010: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2ce010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2ce014: 0xa60218b0  sh          $v0, 0x18B0($s0)
    ctx->pc = 0x2ce014u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce018: 0x960226c0  lhu         $v0, 0x26C0($s0)
    ctx->pc = 0x2ce018u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9920)));
    // 0x2ce01c: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2ce01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2ce020: 0xa60226c0  sh          $v0, 0x26C0($s0)
    ctx->pc = 0x2ce020u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9920), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce024: 0x96022d00  lhu         $v0, 0x2D00($s0)
    ctx->pc = 0x2ce024u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11520)));
    // 0x2ce028: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2ce028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2ce02c: 0xa6022d00  sh          $v0, 0x2D00($s0)
    ctx->pc = 0x2ce02cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11520), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce030: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2CE030u;
    {
        const bool branch_taken_0x2ce030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce030) {
            ctx->pc = 0x2CE068u;
            goto label_2ce068;
        }
    }
    ctx->pc = 0x2CE038u;
label_2ce038:
    // 0x2ce038: 0x96021720  lhu         $v0, 0x1720($s0)
    ctx->pc = 0x2ce038u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5920)));
    // 0x2ce03c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2ce03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2ce040: 0xa6021720  sh          $v0, 0x1720($s0)
    ctx->pc = 0x2ce040u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5920), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce044: 0x960218b0  lhu         $v0, 0x18B0($s0)
    ctx->pc = 0x2ce044u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6320)));
    // 0x2ce048: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2ce048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2ce04c: 0xa60218b0  sh          $v0, 0x18B0($s0)
    ctx->pc = 0x2ce04cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce050: 0x960226c0  lhu         $v0, 0x26C0($s0)
    ctx->pc = 0x2ce050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9920)));
    // 0x2ce054: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2ce054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2ce058: 0xa60226c0  sh          $v0, 0x26C0($s0)
    ctx->pc = 0x2ce058u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9920), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce05c: 0x96022d00  lhu         $v0, 0x2D00($s0)
    ctx->pc = 0x2ce05cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11520)));
    // 0x2ce060: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2ce060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2ce064: 0xa6022d00  sh          $v0, 0x2D00($s0)
    ctx->pc = 0x2ce064u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11520), (uint16_t)GPR_U32(ctx, 2));
label_2ce068:
    // 0x2ce068: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ce068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce06c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ce06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ce070: 0xc44c003c  lwc1        $f12, 0x3C($v0)
    ctx->pc = 0x2ce070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ce074: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2CE074u;
    SET_GPR_U32(ctx, 31, 0x2CE07Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2CE074u, 0x2CE07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE07Cu;
label_2ce07c:
    // 0x2ce07c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2ce07cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ce080: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ce080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce084: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ce084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ce088: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2ce088u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2ce08c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2ce08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2ce090: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2ce090u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2ce094: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ce094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ce098: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2ce098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2ce09c: 0x24428030  addiu       $v0, $v0, -0x7FD0
    ctx->pc = 0x2ce09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934576));
    // 0x2ce0a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ce0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ce0a4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ce0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ce0a8: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2CE0A8u;
    SET_GPR_U32(ctx, 31, 0x2CE0B0u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2CE0A8u, 0x2CE0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE0B0u;
label_2ce0b0:
    // 0x2ce0b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce0b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce0b8: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2ce0b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2ce0bc: 0x33e3c  dsll32      $a3, $v1, 24
    ctx->pc = 0x2ce0bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2ce0c0: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x2ce0c0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x2ce0c4: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x2ce0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x2ce0c8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2ce0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ce0cc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2ce0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2ce0d0: 0x34630109  ori         $v1, $v1, 0x109
    ctx->pc = 0x2ce0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)265);
    // 0x2ce0d4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2ce0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ce0d8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2ce0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2ce0dc: 0x24651900  addiu       $a1, $v1, 0x1900
    ctx->pc = 0x2ce0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6400));
    // 0x2ce0e0: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x2ce0e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2ce0e4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2ce0e4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ce0e8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x2CE0E8u;
    SET_GPR_U32(ctx, 31, 0x2CE0F0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2CE0E8u, 0x2CE0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE0F0u;
label_2ce0f0:
    // 0x2ce0f0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ce0f4: 0x24718030  addiu       $s1, $v1, -0x7FD0
    ctx->pc = 0x2ce0f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934576));
    // 0x2ce0f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce0fc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce100: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2ce100u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2ce104: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2ce104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2ce108: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2ce108u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2ce10c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2ce10cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ce110: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ce114: 0x24638030  addiu       $v1, $v1, -0x7FD0
    ctx->pc = 0x2ce114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934576));
    // 0x2ce118: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce11c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2ce11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce120: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce124: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce128: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2ce128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce12c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2ce12cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce130: 0x0  nop
    ctx->pc = 0x2ce130u;
    // NOP
    // 0x2ce134: 0x450100d1  bc1t        . + 4 + (0xD1 << 2)
    ctx->pc = 0x2CE134u;
    {
        const bool branch_taken_0x2ce134 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce134) {
            ctx->pc = 0x2CE47Cu;
            goto label_2ce47c;
        }
    }
    ctx->pc = 0x2CE13Cu;
    // 0x2ce13c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce140: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce144: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2ce144u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2ce148: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2ce148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2ce14c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2ce14cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2ce150: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2ce150u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ce154: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ce158: 0x24638030  addiu       $v1, $v1, -0x7FD0
    ctx->pc = 0x2ce158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934576));
    // 0x2ce15c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce160: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2ce160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce164: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce168: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce16c: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2ce16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce170: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ce170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce174: 0x0  nop
    ctx->pc = 0x2ce174u;
    // NOP
    // 0x2ce178: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x2CE178u;
    {
        const bool branch_taken_0x2ce178 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce178) {
            ctx->pc = 0x2CE224u;
            goto label_2ce224;
        }
    }
    ctx->pc = 0x2CE180u;
    // 0x2ce180: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce184: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce188: 0xc481003c  lwc1        $f1, 0x3C($a0)
    ctx->pc = 0x2ce188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce18c: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2ce18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2ce190: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ce190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ce194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ce194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce198: 0x0  nop
    ctx->pc = 0x2ce198u;
    // NOP
    // 0x2ce19c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ce19cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ce1a0: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2ce1a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce1a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce1ac: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2ce1acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2ce1b0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2ce1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2ce1b4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2ce1b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2ce1b8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2ce1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ce1bc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ce1c0: 0x24638030  addiu       $v1, $v1, -0x7FD0
    ctx->pc = 0x2ce1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934576));
    // 0x2ce1c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce1c8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2ce1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce1cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce1d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce1d4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2ce1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce1d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ce1d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce1dc: 0x0  nop
    ctx->pc = 0x2ce1dcu;
    // NOP
    // 0x2ce1e0: 0x45010037  bc1t        . + 4 + (0x37 << 2)
    ctx->pc = 0x2CE1E0u;
    {
        const bool branch_taken_0x2ce1e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce1e0) {
            ctx->pc = 0x2CE2C0u;
            goto label_2ce2c0;
        }
    }
    ctx->pc = 0x2CE1E8u;
    // 0x2ce1e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce1ec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce1f0: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2ce1f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2ce1f4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2ce1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2ce1f8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2ce1f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2ce1fc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2ce1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ce200: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ce204: 0x24638030  addiu       $v1, $v1, -0x7FD0
    ctx->pc = 0x2ce204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934576));
    // 0x2ce208: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce20c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2ce20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce210: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce214: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce218: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x2ce218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x2ce21c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2CE21Cu;
    {
        const bool branch_taken_0x2ce21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce21c) {
            ctx->pc = 0x2CE2C0u;
            goto label_2ce2c0;
        }
    }
    ctx->pc = 0x2CE224u;
label_2ce224:
    // 0x2ce224: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce228: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce22c: 0xc481003c  lwc1        $f1, 0x3C($a0)
    ctx->pc = 0x2ce22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce230: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2ce230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2ce234: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ce234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ce238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ce238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce23c: 0x0  nop
    ctx->pc = 0x2ce23cu;
    // NOP
    // 0x2ce240: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ce240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ce244: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2ce248: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce24c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce250: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2ce250u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2ce254: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2ce254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2ce258: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2ce258u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2ce25c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2ce25cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ce260: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ce264: 0x24638030  addiu       $v1, $v1, -0x7FD0
    ctx->pc = 0x2ce264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934576));
    // 0x2ce268: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce26c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2ce26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce270: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce274: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce278: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2ce278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce27c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ce27cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce280: 0x0  nop
    ctx->pc = 0x2ce280u;
    // NOP
    // 0x2ce284: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2CE284u;
    {
        const bool branch_taken_0x2ce284 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce284) {
            ctx->pc = 0x2CE2C0u;
            goto label_2ce2c0;
        }
    }
    ctx->pc = 0x2CE28Cu;
    // 0x2ce28c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce290: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce294: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2ce294u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2ce298: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2ce298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2ce29c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2ce29cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2ce2a0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2ce2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ce2a4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ce2a8: 0x24638030  addiu       $v1, $v1, -0x7FD0
    ctx->pc = 0x2ce2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934576));
    // 0x2ce2ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce2b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2ce2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce2b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce2b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce2bc: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x2ce2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_2ce2c0:
    // 0x2ce2c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce2c4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2ce2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2ce2c8: 0x247015e0  addiu       $s0, $v1, 0x15E0
    ctx->pc = 0x2ce2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5600));
    // 0x2ce2cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce2d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce2d4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2ce2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce2d8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2ce2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2ce2dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce2e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce2e4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2ce2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce2e8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2ce2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2ce2ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce2f0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce2f4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2ce2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce2f8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2ce2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2ce2fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce300: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2ce300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2ce304: 0x24701770  addiu       $s0, $v1, 0x1770
    ctx->pc = 0x2ce304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 6000));
    // 0x2ce308: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce30c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce310: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce314: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce314u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce318: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce31c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce31cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce320: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2ce320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2ce324: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce328: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce32c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce330: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce330u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce334: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce338: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce338u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce33c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2ce33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2ce340: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce344: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce348: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce34c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce34cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce350: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce354: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce354u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce358: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2ce358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2ce35c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce360: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2ce360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2ce364: 0x24701db0  addiu       $s0, $v1, 0x1DB0
    ctx->pc = 0x2ce364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 7600));
    // 0x2ce368: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce36c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce370: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce374: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce378: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce37c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce37cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce380: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2ce380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2ce384: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce388: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce38c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce390: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce394: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce398: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce398u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce39c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2ce39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2ce3a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce3a4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce3a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce3ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce3acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce3b0: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce3b4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce3b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce3b8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2ce3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2ce3bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce3c0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2ce3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2ce3c4: 0x24702580  addiu       $s0, $v1, 0x2580
    ctx->pc = 0x2ce3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 9600));
    // 0x2ce3c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce3cc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce3d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce3d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce3d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce3d8: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce3dc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce3dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce3e0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2ce3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2ce3e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce3e8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce3ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce3f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce3f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce3f4: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce3f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce3f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce3fc: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2ce3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2ce400: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce404: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce408: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce40c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce40cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce410: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce414: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce414u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce418: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2ce418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2ce41c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce420: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2ce420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2ce424: 0x24702bc0  addiu       $s0, $v1, 0x2BC0
    ctx->pc = 0x2ce424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 11200));
    // 0x2ce428: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce42c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce430: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce434: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce438: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce43c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce43cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce440: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2ce440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2ce444: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce448: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce44c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce450: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce454: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce458: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce458u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce45c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2ce45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2ce460: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce464: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce468: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ce468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce46c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ce46cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce470: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce474: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ce474u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ce478: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2ce478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_2ce47c:
    // 0x2ce47c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2ce47cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ce480: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ce480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce484: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce48c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2ce48cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ce490: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE498u;
}
