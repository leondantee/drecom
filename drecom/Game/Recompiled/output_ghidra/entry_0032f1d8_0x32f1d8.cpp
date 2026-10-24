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

// Function: entry_0032f1d8
// Address: 0x32f1d8 - 0x32f410
void entry_0032f1d8_0x32f1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032f1d8_0x32f1d8");
#endif

    switch (ctx->pc) {
        case 0x32f2ecu: goto label_32f2ec;
        case 0x32f318u: goto label_32f318;
        default: break;
    }

    ctx->pc = 0x32f1d8u;

    // 0x32f1d8: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x32f1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x32f1dc: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x32f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x32f1e0: 0x55082a  slt         $at, $v0, $s5
    ctx->pc = 0x32f1e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x32f1e4: 0x1420fecb  bnez        $at, . + 4 + (-0x135 << 2)
    ctx->pc = 0x32F1E4u;
    {
        const bool branch_taken_0x32f1e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f1e4) {
            ctx->pc = 0x32ED14u;
            return;
        }
    }
    ctx->pc = 0x32F1ECu;
    // 0x32f1ec: 0x8ee35dc8  lw          $v1, 0x5DC8($s7)
    ctx->pc = 0x32f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24008)));
    // 0x32f1f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f1f4: 0x146200df  bne         $v1, $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x32F1F4u;
    {
        const bool branch_taken_0x32f1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32f1f4) {
            ctx->pc = 0x32F574u;
            return;
        }
    }
    ctx->pc = 0x32F1FCu;
    // 0x32f1fc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x32f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x32f200: 0x24626774  addiu       $v0, $v1, 0x6774
    ctx->pc = 0x32f200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 26484));
    // 0x32f204: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x32f204u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f208: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x32f208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x32f20c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x32f20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32f210: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32f210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32f214: 0x8c22ec18  lw          $v0, -0x13E8($at)
    ctx->pc = 0x32f214u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x88EC18u));
    // 0x32f218: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x32f218u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32f21c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x32f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32f220: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32f220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32f224: 0x24429690  addiu       $v0, $v0, -0x6970
    ctx->pc = 0x32f224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940304));
    // 0x32f228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32f228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32f22c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x32f22cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f230: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32f230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32f234: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32f234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32f238: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32f238u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32f23c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x32f23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x32f240: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x32f240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32f244: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x32f244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32f248: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32f248u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32f24c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x32f24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x32f250: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x32f250u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32f254: 0x8e760004  lw          $s6, 0x4($s3)
    ctx->pc = 0x32f254u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x32f258: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x32f258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32f25c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32f260: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x32f260u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x32f264: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x32f264u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32f268: 0x70c01628  paddub      $v0, $a2, $zero
    ctx->pc = 0x32f268u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x32f26c: 0x282f021  addu        $fp, $s4, $v0
    ctx->pc = 0x32f26cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x32f270: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x32f270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x32f274: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32f274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32f278: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x32f278u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x32f27c: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x32f27cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32f280: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x32f280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x32f284: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x32f284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x32f288: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x32f288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32f28c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32f290: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x32f290u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x32f294: 0x70c01628  paddub      $v0, $a2, $zero
    ctx->pc = 0x32f294u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x32f298: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x32f298u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x32f29c: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x32f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x32f2a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32f2a4: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x32f2a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x32f2a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x32f2a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f2ac: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x32f2acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32f2b0: 0x2c6b023  subu        $s6, $s6, $a2
    ctx->pc = 0x32f2b0u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x32f2b4: 0x2683ffa6  addiu       $v1, $s4, -0x5A
    ctx->pc = 0x32f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967206));
    // 0x32f2b8: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x32f2b8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32f2bc: 0x27c2ffa6  addiu       $v0, $fp, -0x5A
    ctx->pc = 0x32f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967206));
    // 0x32f2c0: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x32f2c0u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f2c4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x32f2c4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f2c8: 0x0  nop
    ctx->pc = 0x32f2c8u;
    // NOP
    // 0x32f2cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32f2ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32f2d0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32f2d4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32f2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32f2d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f2dc: 0x0  nop
    ctx->pc = 0x32f2dcu;
    // NOP
    // 0x32f2e0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32f2e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32f2e4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32F2E4u;
    SET_GPR_U32(ctx, 31, 0x32F2ECu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32F2E4u, 0x32F2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F2ECu;
label_32f2ec:
    // 0x32f2ec: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32f2ecu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f2f0: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x32f2f0u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f2f4: 0x0  nop
    ctx->pc = 0x32f2f4u;
    // NOP
    // 0x32f2f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32f2f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32f2fc: 0x3c1e3f4c  lui         $fp, 0x3F4C
    ctx->pc = 0x32f2fcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)16204 << 16));
    // 0x32f300: 0x37c2cccd  ori         $v0, $fp, 0xCCCD
    ctx->pc = 0x32f300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)52429);
    // 0x32f304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f308: 0x0  nop
    ctx->pc = 0x32f308u;
    // NOP
    // 0x32f30c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32f30cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32f310: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32F310u;
    SET_GPR_U32(ctx, 31, 0x32F318u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32F310u, 0x32F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F318u;
label_32f318:
    // 0x32f318: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x32f318u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f31c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32f320: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32f320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32f324: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x32f324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x32f328: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x32f328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x32f32c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32f330: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x32f330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x32f334: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32f334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32f338: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x32f338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x32f33c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32f33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32f340: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x32f340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32f344: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32f344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32f348: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x32f348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32f34c: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x32f34cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32f350: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x32f350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32f354: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x32f354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32f358: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x32f358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x32f35c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x32f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32f360: 0x32600  sll         $a0, $v1, 24
    ctx->pc = 0x32f360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32f364: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x32f364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x32f368: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x32f368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32f36c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32f370: 0x8ee35dc0  lw          $v1, 0x5DC0($s7)
    ctx->pc = 0x32f370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24000)));
    // 0x32f374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f378: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x32F378u;
    {
        const bool branch_taken_0x32f378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32f378) {
            ctx->pc = 0x32F410u;
            return;
        }
    }
    ctx->pc = 0x32F380u;
    // 0x32f380: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x32f380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32f384: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32f384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32f388: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x32f388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x32f38c: 0x34445556  ori         $a0, $v0, 0x5556
    ctx->pc = 0x32f38cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x32f390: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x32f390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32f394: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x32f394u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x32f398: 0x0  nop
    ctx->pc = 0x32f398u;
    // NOP
    // 0x32f39c: 0x1010  mfhi        $v0
    ctx->pc = 0x32f39cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32f3a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32f3a4: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x32f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32f3a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32f3ac: 0x3c055555  lui         $a1, 0x5555
    ctx->pc = 0x32f3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
    // 0x32f3b0: 0x34a35556  ori         $v1, $a1, 0x5556
    ctx->pc = 0x32f3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21846);
    // 0x32f3b4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x32f3b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32f3b8: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x32f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x32f3bc: 0x0  nop
    ctx->pc = 0x32f3bcu;
    // NOP
    // 0x32f3c0: 0x2010  mfhi        $a0
    ctx->pc = 0x32f3c0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x32f3c4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32f3c8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x32f3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32f3cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f3d0: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x32f3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32f3d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32f3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32f3d8: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x32f3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x32f3dc: 0x34645556  ori         $a0, $v1, 0x5556
    ctx->pc = 0x32f3dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x32f3e0: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x32f3e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32f3e4: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x32f3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x32f3e8: 0x0  nop
    ctx->pc = 0x32f3e8u;
    // NOP
    // 0x32f3ec: 0x2010  mfhi        $a0
    ctx->pc = 0x32f3ecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x32f3f0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x32f3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x32f3f4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x32f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32f3f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32f3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32f3fc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x32f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32f400: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x32f400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x32f404: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32f404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f408: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x32f408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32f40c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32f40cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x32f410u;
}
