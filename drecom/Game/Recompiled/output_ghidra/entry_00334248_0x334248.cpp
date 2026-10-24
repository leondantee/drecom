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

// Function: entry_00334248
// Address: 0x334248 - 0x334448
void entry_00334248_0x334248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00334248_0x334248");
#endif

    switch (ctx->pc) {
        case 0x33427cu: goto label_33427c;
        case 0x33435cu: goto label_33435c;
        case 0x334388u: goto label_334388;
        default: break;
    }

    ctx->pc = 0x334248u;

    // 0x334248: 0x9242683f  lbu         $v0, 0x683F($s2)
    ctx->pc = 0x334248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26687)));
    // 0x33424c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33424cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x334250: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x334250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x334254: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x334254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x334258: 0x8e436850  lw          $v1, 0x6850($s2)
    ctx->pc = 0x334258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 26704)));
    // 0x33425c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x33425cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x334260: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x334260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x334264: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x334264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x334268: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x334268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x33426c: 0x24c2663e  addiu       $v0, $a2, 0x663E
    ctx->pc = 0x33426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 26174));
    // 0x334270: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x334270u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334274: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x334274u;
    SET_GPR_U32(ctx, 31, 0x33427Cu);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x334274u, 0x33427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33427Cu;
label_33427c:
    // 0x33427c: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x33427cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x334280: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x334280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x334284: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x334284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x334288: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x334288u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33428c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x33428cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x334290: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x334290u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x334294: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x334294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x334298: 0x244397e0  addiu       $v1, $v0, -0x6820
    ctx->pc = 0x334298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940640));
    // 0x33429c: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x33429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3342a0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x3342a0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3342a4: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x3342a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3342a8: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x3342a8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x3342ac: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3342acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3342b0: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x3342b0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3342b4: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x3342b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3342b8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3342b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3342bc: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x3342bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3342c0: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x3342c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x3342c4: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x3342c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3342c8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3342c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3342cc: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3342ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3342d0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x3342d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x3342d4: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x3342d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x3342d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3342d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3342dc: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x3342dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
    // 0x3342e0: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x3342e0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3342e4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3342e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x3342e8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x3342e8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3342ec: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3342ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3342f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3342f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3342f4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3342f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3342f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3342f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3342fc: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x3342fcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x334300: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x334300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x334304: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x334304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x334308: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x334308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x33430c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33430cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x334310: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x334310u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x334314: 0x70c01628  paddub      $v0, $a2, $zero
    ctx->pc = 0x334314u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x334318: 0x2a23823  subu        $a3, $s5, $v0
    ctx->pc = 0x334318u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x33431c: 0x70e0ae28  paddub      $s5, $a3, $zero
    ctx->pc = 0x33431cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x334320: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x334320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x334324: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x334324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x334328: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x334328u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x33432c: 0x2c61023  subu        $v0, $s6, $a2
    ctx->pc = 0x33432cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x334330: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x334330u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334334: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x334334u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334338: 0x0  nop
    ctx->pc = 0x334338u;
    // NOP
    // 0x33433c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33433cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x334340: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x334340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x334344: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x334344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x334348: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x334348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33434c: 0x0  nop
    ctx->pc = 0x33434cu;
    // NOP
    // 0x334350: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x334350u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x334354: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x334354u;
    SET_GPR_U32(ctx, 31, 0x33435Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x334354u, 0x33435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33435Cu;
label_33435c:
    // 0x33435c: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x33435cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334360: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x334360u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334364: 0x0  nop
    ctx->pc = 0x334364u;
    // NOP
    // 0x334368: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x334368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33436c: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x33436cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x334370: 0x34c3cccd  ori         $v1, $a2, 0xCCCD
    ctx->pc = 0x334370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x334374: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x334374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334378: 0x0  nop
    ctx->pc = 0x334378u;
    // NOP
    // 0x33437c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x33437cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x334380: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x334380u;
    SET_GPR_U32(ctx, 31, 0x334388u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x334380u, 0x334388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334388u;
label_334388:
    // 0x334388: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x334388u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33438c: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x33438cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x334390: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x334390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x334394: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x334394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x334398: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x334398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x33439c: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x33439cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x3343a0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3343a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3343a4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3343a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3343a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3343a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3343ac: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3343acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3343b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3343b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3343b4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3343b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3343b8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x3343b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3343bc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3343bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3343c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3343c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3343c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3343c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3343c8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3343c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3343cc: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x3343ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x3343d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3343d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3343d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3343d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3343d8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3343d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3343dc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3343dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3343e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3343e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3343e4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3343e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3343e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3343e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3343ec: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x3343ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3343f0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3343f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x3343f4: 0x82435deb  lb          $v1, 0x5DEB($s2)
    ctx->pc = 0x3343f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24043)));
    // 0x3343f8: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x3343f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
    // 0x3343fc: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x3343fcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x334400: 0x8e436850  lw          $v1, 0x6850($s2)
    ctx->pc = 0x334400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 26704)));
    // 0x334404: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x334404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x334408: 0x14a4000f  bne         $a1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x334408u;
    {
        const bool branch_taken_0x334408 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x334408) {
            ctx->pc = 0x334448u;
            return;
        }
    }
    ctx->pc = 0x334410u;
    // 0x334410: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x334410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x334414: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x334414u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x334418: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x334418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x33441c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x33441cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x334420: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x334420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x334424: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x334424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x334428: 0xa23825  or          $a3, $a1, $v0
    ctx->pc = 0x334428u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x33442c: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x33442cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x334430: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x334430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x334434: 0x471825  or          $v1, $v0, $a3
    ctx->pc = 0x334434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x334438: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x334438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33443c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33443cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x334440: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x334440u;
    {
        const bool branch_taken_0x334440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334440) {
            ctx->pc = 0x3344D8u;
            return;
        }
    }
    ctx->pc = 0x334448u;
}
