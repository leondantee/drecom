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

// Function: entry_0032ed70
// Address: 0x32ed70 - 0x32eeec
void entry_0032ed70_0x32ed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ed70_0x32ed70");
#endif

    switch (ctx->pc) {
        case 0x32ee10u: goto label_32ee10;
        case 0x32ee3cu: goto label_32ee3c;
        default: break;
    }

    ctx->pc = 0x32ed70u;

    // 0x32ed70: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x32ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32ed74: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32ed74u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ed78: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x32ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x32ed7c: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x32ed7cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32ed80: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x32ed80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32ed84: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32ed88: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x32ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32ed8c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x32ed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x32ed90: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x32ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32ed94: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x32ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32ed98: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x32ed98u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32ed9c: 0xafa600bc  sw          $a2, 0xBC($sp)
    ctx->pc = 0x32ed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
    // 0x32eda0: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x32eda0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32eda4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x32eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32eda8: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x32eda8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32edac: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x32edacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x32edb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x32edb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32edb4: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x32edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x32edb8: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32edb8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32edbc: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x32edbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x32edc0: 0x8fb600bc  lw          $s6, 0xBC($sp)
    ctx->pc = 0x32edc0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x32edc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32edc8: 0x161043  sra         $v0, $s6, 1
    ctx->pc = 0x32edc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 22), 1));
    // 0x32edcc: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x32edccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x32edd0: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x32edd0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32edd4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x32edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32edd8: 0x282f021  addu        $fp, $s4, $v0
    ctx->pc = 0x32edd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x32eddc: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x32eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x32ede0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x32ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x32ede4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x32ede4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x32ede8: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x32ede8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32edec: 0x0  nop
    ctx->pc = 0x32edecu;
    // NOP
    // 0x32edf0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32edf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32edf4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32edf8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32edf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32edfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32edfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ee00: 0x0  nop
    ctx->pc = 0x32ee00u;
    // NOP
    // 0x32ee04: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32ee04u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32ee08: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32EE08u;
    SET_GPR_U32(ctx, 31, 0x32EE10u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32EE08u, 0x32EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EE10u;
label_32ee10:
    // 0x32ee10: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32ee10u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ee14: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x32ee14u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ee18: 0x0  nop
    ctx->pc = 0x32ee18u;
    // NOP
    // 0x32ee1c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32ee1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32ee20: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32ee24: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32ee24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32ee28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32ee28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ee2c: 0x0  nop
    ctx->pc = 0x32ee2cu;
    // NOP
    // 0x32ee30: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32ee30u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32ee34: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32EE34u;
    SET_GPR_U32(ctx, 31, 0x32EE3Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32EE34u, 0x32EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EE3Cu;
label_32ee3c:
    // 0x32ee3c: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x32ee3cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ee40: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x32ee44: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32ee44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x32ee48: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x32ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x32ee4c: 0x34642b16  ori         $a0, $v1, 0x2B16
    ctx->pc = 0x32ee4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x32ee50: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x32ee50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x32ee54: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x32ee54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x32ee58: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32ee58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32ee5c: 0x34820040  ori         $v0, $a0, 0x40
    ctx->pc = 0x32ee5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x32ee60: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32ee64: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32ee68: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x32ee68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32ee6c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x32ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32ee70: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x32ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32ee74: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x32ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32ee78: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x32ee78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32ee7c: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x32ee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x32ee80: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32ee80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32ee84: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32ee88: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x32ee88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32ee8c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x32ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32ee90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32ee94: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x32ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32ee98: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x32ee98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x32ee9c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x32ee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32eea0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x32eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x32eea4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32eea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32eea8: 0x8c23ec18  lw          $v1, -0x13E8($at)
    ctx->pc = 0x32eea8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x88EC18u));
    // 0x32eeac: 0x16a3000f  bne         $s5, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x32EEACu;
    {
        const bool branch_taken_0x32eeac = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x32eeac) {
            ctx->pc = 0x32EEECu;
            return;
        }
    }
    ctx->pc = 0x32EEB4u;
    // 0x32eeb4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x32eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32eeb8: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x32eeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32eebc: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x32eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32eec0: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x32eec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32eec4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x32eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32eec8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32eec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32eecc: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x32eeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x32eed0: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x32eed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32eed4: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x32eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x32eed8: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x32eed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32eedc: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x32eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32eee0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32eee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32eee4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x32EEE4u;
    {
        const bool branch_taken_0x32eee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eee4) {
            ctx->pc = 0x32EF80u;
            return;
        }
    }
    ctx->pc = 0x32EEECu;
}
