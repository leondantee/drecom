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

// Function: entry_0028a1f4
// Address: 0x28a1f4 - 0x28a4a4
void entry_0028a1f4_0x28a1f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028a1f4_0x28a1f4");
#endif

    switch (ctx->pc) {
        case 0x28a2e8u: goto label_28a2e8;
        case 0x28a328u: goto label_28a328;
        case 0x28a358u: goto label_28a358;
        case 0x28a388u: goto label_28a388;
        default: break;
    }

    ctx->pc = 0x28a1f4u;

    // 0x28a1f4: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x28a1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28a1f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28a1fc: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x28a1fcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a200: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x28a200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28a204: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x28a204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28a208: 0x70c0f628  paddub      $fp, $a2, $zero
    ctx->pc = 0x28a208u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a20c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x28a20cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28a210: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28a210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28a214: 0xc24023  subu        $t0, $a2, $v0
    ctx->pc = 0x28a214u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x28a218: 0xafa80140  sw          $t0, 0x140($sp)
    ctx->pc = 0x28a218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 8));
    // 0x28a21c: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x28a21cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28a220: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28a220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28a224: 0xe21823  subu        $v1, $a3, $v0
    ctx->pc = 0x28a224u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x28a228: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x28a228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
    // 0x28a22c: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x28a22cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28a230: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28a230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28a234: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x28a234u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
    // 0x28a238: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x28a238u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a23c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28a23cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a240: 0x2634021  addu        $t0, $s3, $v1
    ctx->pc = 0x28a240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x28a244: 0x7100ae28  paddub      $s5, $t0, $zero
    ctx->pc = 0x28a244u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28a248: 0x8fa7013c  lw          $a3, 0x13C($sp)
    ctx->pc = 0x28a248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x28a24c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28a24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28a250: 0x73043  sra         $a2, $a3, 1
    ctx->pc = 0x28a250u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
    // 0x28a254: 0x70c01628  paddub      $v0, $a2, $zero
    ctx->pc = 0x28a254u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a258: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28a258u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a25c: 0x3c61021  addu        $v0, $fp, $a2
    ctx->pc = 0x28a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x28a260: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x28a260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x28a264: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x28a264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28a268: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28a268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28a26c: 0x73043  sra         $a2, $a3, 1
    ctx->pc = 0x28a26cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
    // 0x28a270: 0x70c01e28  paddub      $v1, $a2, $zero
    ctx->pc = 0x28a270u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a274: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x28a274u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a278: 0x2663823  subu        $a3, $s3, $a2
    ctx->pc = 0x28a278u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x28a27c: 0x70e09e28  paddub      $s3, $a3, $zero
    ctx->pc = 0x28a27cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28a280: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x28a280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x28a284: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28a284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28a288: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x28a288u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
    // 0x28a28c: 0x70e04628  paddub      $t0, $a3, $zero
    ctx->pc = 0x28a28cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28a290: 0x3c83023  subu        $a2, $fp, $t0
    ctx->pc = 0x28a290u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x28a294: 0x70c0f628  paddub      $fp, $a2, $zero
    ctx->pc = 0x28a294u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a298: 0x151823  negu        $v1, $s5
    ctx->pc = 0x28a298u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
    // 0x28a29c: 0xafa30134  sw          $v1, 0x134($sp)
    ctx->pc = 0x28a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 3));
    // 0x28a2a0: 0x131023  negu        $v0, $s3
    ctx->pc = 0x28a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x28a2a4: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28a2a4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a2a8: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x28a2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x28a2ac: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x28a2acu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a2b0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x28a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x28a2b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28a2b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a2b8: 0xc6416620  lwc1        $f1, 0x6620($s2)
    ctx->pc = 0x28a2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a2bc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x28a2bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x28a2c0: 0x3c084420  lui         $t0, 0x4420
    ctx->pc = 0x28a2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17440 << 16));
    // 0x28a2c4: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x28a2c4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28a2c8: 0x0  nop
    ctx->pc = 0x28a2c8u;
    // NOP
    // 0x28a2cc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x28a2ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28a2d0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28a2d0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a2d4: 0x0  nop
    ctx->pc = 0x28a2d4u;
    // NOP
    // 0x28a2d8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x28a2d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x28a2dc: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x28a2dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x28a2e0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28A2E0u;
    SET_GPR_U32(ctx, 31, 0x28A2E8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28A2E0u, 0x28A2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A2E8u;
label_28a2e8:
    // 0x28a2e8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28a2e8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a2ec: 0x70e09e28  paddub      $s3, $a3, $zero
    ctx->pc = 0x28a2ecu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28a2f0: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x28a2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x28a2f4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28a2f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a2f8: 0xc6416620  lwc1        $f1, 0x6620($s2)
    ctx->pc = 0x28a2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a2fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x28a2fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x28a300: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x28a300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x28a304: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28a304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28a308: 0x0  nop
    ctx->pc = 0x28a308u;
    // NOP
    // 0x28a30c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x28a30cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28a310: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x28a310u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a314: 0x0  nop
    ctx->pc = 0x28a314u;
    // NOP
    // 0x28a318: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x28a318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x28a31c: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x28a31cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x28a320: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28A320u;
    SET_GPR_U32(ctx, 31, 0x28A328u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28A320u, 0x28A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A328u;
label_28a328:
    // 0x28a328: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28a328u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a32c: 0x70e0ae28  paddub      $s5, $a3, $zero
    ctx->pc = 0x28a32cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28a330: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x28a330u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28a334: 0x0  nop
    ctx->pc = 0x28a334u;
    // NOP
    // 0x28a338: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x28a338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28a33c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x28a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x28a340: 0x3468cccd  ori         $t0, $v1, 0xCCCD
    ctx->pc = 0x28a340u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x28a344: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x28a344u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a348: 0x0  nop
    ctx->pc = 0x28a348u;
    // NOP
    // 0x28a34c: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x28a34cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28a350: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28A350u;
    SET_GPR_U32(ctx, 31, 0x28A358u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28A350u, 0x28A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A358u;
label_28a358:
    // 0x28a358: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28a358u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a35c: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x28a35cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a360: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x28a360u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28a364: 0x0  nop
    ctx->pc = 0x28a364u;
    // NOP
    // 0x28a368: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x28a368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28a36c: 0x3c073f4c  lui         $a3, 0x3F4C
    ctx->pc = 0x28a36cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16204 << 16));
    // 0x28a370: 0x34e9cccd  ori         $t1, $a3, 0xCCCD
    ctx->pc = 0x28a370u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x28a374: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x28a374u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a378: 0x0  nop
    ctx->pc = 0x28a378u;
    // NOP
    // 0x28a37c: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x28a37cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28a380: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28A380u;
    SET_GPR_U32(ctx, 31, 0x28A388u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28A380u, 0x28A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A388u;
label_28a388:
    // 0x28a388: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x28a388u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a38c: 0x7100ae28  paddub      $s5, $t0, $zero
    ctx->pc = 0x28a38cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28a390: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28a390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28a394: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x28a394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x28a398: 0x3c066400  lui         $a2, 0x6400
    ctx->pc = 0x28a398u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25600 << 16));
    // 0x28a39c: 0x34c22b16  ori         $v0, $a2, 0x2B16
    ctx->pc = 0x28a39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)11030);
    // 0x28a3a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x28a3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x28a3a4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x28a3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x28a3a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28a3ac: 0x34480040  ori         $t0, $v0, 0x40
    ctx->pc = 0x28a3acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x28a3b0: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x28a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
    // 0x28a3b4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x28a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28a3b8: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x28a3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28a3bc: 0x8e2a0008  lw          $t2, 0x8($s1)
    ctx->pc = 0x28a3bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28a3c0: 0xa3900  sll         $a3, $t2, 4
    ctx->pc = 0x28a3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x28a3c4: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x28a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x28a3c8: 0xc34825  or          $t1, $a2, $v1
    ctx->pc = 0x28a3c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x28a3cc: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x28a3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x28a3d0: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x28a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x28a3d4: 0x8e29000c  lw          $t1, 0xC($s1)
    ctx->pc = 0x28a3d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28a3d8: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x28a3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x28a3dc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x28a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28a3e0: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x28a3e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28a3e4: 0x83400  sll         $a2, $t0, 16
    ctx->pc = 0x28a3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x28a3e8: 0xe64025  or          $t0, $a3, $a2
    ctx->pc = 0x28a3e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x28a3ec: 0x26090020  addiu       $t1, $s0, 0x20
    ctx->pc = 0x28a3ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x28a3f0: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x28a3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x28a3f4: 0x824b5dea  lb          $t3, 0x5DEA($s2)
    ctx->pc = 0x28a3f4u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x28a3f8: 0xb1e3c  dsll32      $v1, $t3, 24
    ctx->pc = 0x28a3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 24));
    // 0x28a3fc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28a3fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28a400: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x28a400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28a404: 0x12e80027  beq         $s7, $t0, . + 4 + (0x27 << 2)
    ctx->pc = 0x28A404u;
    {
        const bool branch_taken_0x28a404 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 8));
        if (branch_taken_0x28a404) {
            ctx->pc = 0x28A4A4u;
            return;
        }
    }
    ctx->pc = 0x28A40Cu;
    // 0x28a40c: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x28a40cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28a410: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x28a410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28a414: 0x3c0c5555  lui         $t4, 0x5555
    ctx->pc = 0x28a414u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)21845 << 16));
    // 0x28a418: 0x358a5556  ori         $t2, $t4, 0x5556
    ctx->pc = 0x28a418u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)21846);
    // 0x28a41c: 0x1490018  mult        $zero, $t2, $t1
    ctx->pc = 0x28a41cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28a420: 0x937c2  srl         $a2, $t1, 31
    ctx->pc = 0x28a420u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x28a424: 0x0  nop
    ctx->pc = 0x28a424u;
    // NOP
    // 0x28a428: 0x1810  mfhi        $v1
    ctx->pc = 0x28a428u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28a42c: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x28a42cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x28a430: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x28a430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x28a434: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x28a434u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28a438: 0x3c085555  lui         $t0, 0x5555
    ctx->pc = 0x28a438u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21845 << 16));
    // 0x28a43c: 0x35065556  ori         $a2, $t0, 0x5556
    ctx->pc = 0x28a43cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)21846);
    // 0x28a440: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x28a440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28a444: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x28a444u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x28a448: 0x0  nop
    ctx->pc = 0x28a448u;
    // NOP
    // 0x28a44c: 0x5010  mfhi        $t2
    ctx->pc = 0x28a44cu;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x28a450: 0x1431021  addu        $v0, $t2, $v1
    ctx->pc = 0x28a450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x28a454: 0x24a00  sll         $t1, $v0, 8
    ctx->pc = 0x28a454u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x28a458: 0xe91825  or          $v1, $a3, $t1
    ctx->pc = 0x28a458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x28a45c: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x28a45cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x28a460: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x28a460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28a464: 0x3c085555  lui         $t0, 0x5555
    ctx->pc = 0x28a464u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21845 << 16));
    // 0x28a468: 0x35025556  ori         $v0, $t0, 0x5556
    ctx->pc = 0x28a468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)21846);
    // 0x28a46c: 0x470018  mult        $zero, $v0, $a3
    ctx->pc = 0x28a46cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28a470: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x28a470u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x28a474: 0x0  nop
    ctx->pc = 0x28a474u;
    // NOP
    // 0x28a478: 0x3010  mfhi        $a2
    ctx->pc = 0x28a478u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x28a47c: 0xc74021  addu        $t0, $a2, $a3
    ctx->pc = 0x28a47cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x28a480: 0x83c00  sll         $a3, $t0, 16
    ctx->pc = 0x28a480u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x28a484: 0xe34825  or          $t1, $a3, $v1
    ctx->pc = 0x28a484u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x28a488: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x28a488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28a48c: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x28a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x28a490: 0x691025  or          $v0, $v1, $t1
    ctx->pc = 0x28a490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x28a494: 0x260a0010  addiu       $t2, $s0, 0x10
    ctx->pc = 0x28a494u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28a498: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x28a498u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x28a49c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28A49Cu;
    {
        const bool branch_taken_0x28a49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a49c) {
            ctx->pc = 0x28A4D8u;
            return;
        }
    }
    ctx->pc = 0x28A4A4u;
}
