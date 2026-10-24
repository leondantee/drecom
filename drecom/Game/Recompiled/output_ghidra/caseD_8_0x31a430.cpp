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

// Function: caseD_8
// Address: 0x31a430 - 0x31a788
void caseD_8_0x31a430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x31a430");
#endif

    switch (ctx->pc) {
        case 0x31a4a8u: goto label_31a4a8;
        case 0x31a538u: goto label_31a538;
        case 0x31a5e8u: goto label_31a5e8;
        case 0x31a678u: goto label_31a678;
        case 0x31a724u: goto label_31a724;
        case 0x31a76cu: goto label_31a76c;
        default: break;
    }

    ctx->pc = 0x31a430u;

    // 0x31a430: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x31a430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a434: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x31a434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x31a438: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31a438u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31a43c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x31a43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a440: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x31a440u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x31a444: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31a444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a448: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x31a448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x31a44c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31a44cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a450: 0x0  nop
    ctx->pc = 0x31a450u;
    // NOP
    // 0x31a454: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a458: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x31a458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31a45c: 0x3c074040  lui         $a3, 0x4040
    ctx->pc = 0x31a45cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16448 << 16));
    // 0x31a460: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x31a460u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a464: 0x0  nop
    ctx->pc = 0x31a464u;
    // NOP
    // 0x31a468: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31a46c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a470: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x31a470u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31a474: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x31a474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x31a478: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31a478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31a47c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31a47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31a480: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x31a480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31a484: 0xc51024  and         $v0, $a2, $a1
    ctx->pc = 0x31a484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x31a488: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31a488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31a48c: 0x34440118  ori         $a0, $v0, 0x118
    ctx->pc = 0x31a48cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)280);
    // 0x31a490: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x31a490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a494: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x31a494u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a498: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a498u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a49c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x31a49cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a4a0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x31A4A0u;
    SET_GPR_U32(ctx, 31, 0x31A4A8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x31A4A0u, 0x31A4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A4A8u;
label_31a4a8:
    // 0x31a4a8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a4ac: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x31a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x31a4b0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x31a4b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a4b4: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x31a4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a4b8: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x31a4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x31a4bc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a4c0: 0x3c05c3c8  lui         $a1, 0xC3C8
    ctx->pc = 0x31a4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50120 << 16));
    // 0x31a4c4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31a4c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a4c8: 0x0  nop
    ctx->pc = 0x31a4c8u;
    // NOP
    // 0x31a4cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a4ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a4d0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31a4d4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31a4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a4d8: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x31a4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
    // 0x31a4dc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x31a4dcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a4e0: 0x0  nop
    ctx->pc = 0x31a4e0u;
    // NOP
    // 0x31a4e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a4e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a4e8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x31a4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31a4ec: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x31a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x31a4f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a4f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a4f4: 0x0  nop
    ctx->pc = 0x31a4f4u;
    // NOP
    // 0x31a4f8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31a4fc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a500: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31a500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31a504: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31a504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31a508: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31a508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31a50c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31a50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31a510: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31a510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31a514: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31a514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31a518: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31a518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31a51c: 0x34640118  ori         $a0, $v1, 0x118
    ctx->pc = 0x31a51cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)280);
    // 0x31a520: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x31a520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a524: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x31a524u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a528: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a528u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a52c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x31a52cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a530: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x31A530u;
    SET_GPR_U32(ctx, 31, 0x31A538u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x31A530u, 0x31A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A538u;
label_31a538:
    // 0x31a538: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31a538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a53c: 0x24470120  addiu       $a3, $v0, 0x120
    ctx->pc = 0x31a53cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x31a540: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x31a540u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31a544: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31a544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a548: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x31a548u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x31a54c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x31a54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a550: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x31a550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x31a554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a558: 0x0  nop
    ctx->pc = 0x31a558u;
    // NOP
    // 0x31a55c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a55cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a560: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x31a560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31a564: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a568: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x31a568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x31a56c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a570: 0x0  nop
    ctx->pc = 0x31a570u;
    // NOP
    // 0x31a574: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a574u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a578: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31a57c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31a57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a580: 0x3c0443af  lui         $a0, 0x43AF
    ctx->pc = 0x31a580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17327 << 16));
    // 0x31a584: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31a584u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a588: 0x0  nop
    ctx->pc = 0x31a588u;
    // NOP
    // 0x31a58c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a58cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a590: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x31a590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31a594: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x31a594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x31a598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a59c: 0x0  nop
    ctx->pc = 0x31a59cu;
    // NOP
    // 0x31a5a0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31a5a4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a5a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31a5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31a5ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31a5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31a5b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31a5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31a5b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31a5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31a5b8: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x31a5b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31a5bc: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x31a5bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x31a5c0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x31a5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x31a5c4: 0x34420118  ori         $v0, $v0, 0x118
    ctx->pc = 0x31a5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)280);
    // 0x31a5c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a5c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31a5cc: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x31a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a5d0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x31a5d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x31a5d4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x31a5d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a5d8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a5d8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a5dc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x31a5dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a5e0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x31A5E0u;
    SET_GPR_U32(ctx, 31, 0x31A5E8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x31A5E0u, 0x31A5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A5E8u;
label_31a5e8:
    // 0x31a5e8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a5ec: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x31a5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x31a5f0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x31a5f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31a5f4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x31a5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a5f8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x31a5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x31a5fc: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x31a5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a600: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x31a600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
    // 0x31a604: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31a604u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a608: 0x0  nop
    ctx->pc = 0x31a608u;
    // NOP
    // 0x31a60c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a60cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a610: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x31a610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31a614: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31a614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a618: 0x3c0543fa  lui         $a1, 0x43FA
    ctx->pc = 0x31a618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17402 << 16));
    // 0x31a61c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31a61cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a620: 0x0  nop
    ctx->pc = 0x31a620u;
    // NOP
    // 0x31a624: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a628: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x31a628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31a62c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x31a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x31a630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a634: 0x0  nop
    ctx->pc = 0x31a634u;
    // NOP
    // 0x31a638: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31a63c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x31a63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a640: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x31a640u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x31a644: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x31a644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x31a648: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31a648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31a64c: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x31a64cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x31a650: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x31a650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x31a654: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x31a654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x31a658: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x31a658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31a65c: 0x34640118  ori         $a0, $v1, 0x118
    ctx->pc = 0x31a65cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)280);
    // 0x31a660: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x31a660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a664: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x31a664u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a668: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a668u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a66c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x31a66cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a670: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x31A670u;
    SET_GPR_U32(ctx, 31, 0x31A678u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x31A670u, 0x31A678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A678u;
label_31a678:
    // 0x31a678: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x31a678u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31a67c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a680: 0x24720120  addiu       $s2, $v1, 0x120
    ctx->pc = 0x31a680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x31a684: 0x7a530000  lq          $s3, 0x0($s2)
    ctx->pc = 0x31a684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31a688: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31a688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a68c: 0x7c930000  sq          $s3, 0x0($a0)
    ctx->pc = 0x31a68cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 19));
    // 0x31a690: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x31a690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a694: 0x3c054248  lui         $a1, 0x4248
    ctx->pc = 0x31a694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16968 << 16));
    // 0x31a698: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31a698u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a69c: 0x0  nop
    ctx->pc = 0x31a69cu;
    // NOP
    // 0x31a6a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a6a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a6a4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x31a6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31a6a8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a6ac: 0x3c114220  lui         $s1, 0x4220
    ctx->pc = 0x31a6acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16928 << 16));
    // 0x31a6b0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x31a6b0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a6b4: 0x0  nop
    ctx->pc = 0x31a6b4u;
    // NOP
    // 0x31a6b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a6b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a6bc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31a6c0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31a6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a6c4: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x31a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x31a6c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31a6c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a6cc: 0x0  nop
    ctx->pc = 0x31a6ccu;
    // NOP
    // 0x31a6d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a6d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a6d4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x31a6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31a6d8: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x31a6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x31a6dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31a6dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a6e0: 0x0  nop
    ctx->pc = 0x31a6e0u;
    // NOP
    // 0x31a6e4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31a6e8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a6ec: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x31a6ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31a6f0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31a6f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31a6f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31a6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31a6f8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31a6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x31a6fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31a6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31a700: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x31a700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31a704: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31a704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31a708: 0x34440118  ori         $a0, $v0, 0x118
    ctx->pc = 0x31a708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)280);
    // 0x31a70c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x31a70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a710: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x31a710u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a714: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a714u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a718: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x31a718u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a71c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x31A71Cu;
    SET_GPR_U32(ctx, 31, 0x31A724u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x31A71Cu, 0x31A724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A724u;
label_31a724:
    // 0x31a724: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a728: 0xac801290  sw          $zero, 0x1290($a0)
    ctx->pc = 0x31a728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4752), GPR_U32(ctx, 0));
    // 0x31a72c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31a72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31a730: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x31a730u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x31a734: 0x3c04ffdf  lui         $a0, 0xFFDF
    ctx->pc = 0x31a734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65503 << 16));
    // 0x31a738: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x31a738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x31a73c: 0xa23024  and         $a2, $a1, $v0
    ctx->pc = 0x31a73cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x31a740: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31a740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31a744: 0xac261a98  sw          $a2, 0x1A98($at)
    ctx->pc = 0x31a744u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x31a748: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31a748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a74c: 0xac401290  sw          $zero, 0x1290($v0)
    ctx->pc = 0x31a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4752), GPR_U32(ctx, 0));
    // 0x31a750: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a754: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x31a754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31a758: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x31a758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x31a75c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31a75cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a760: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x31a760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31a764: 0xc065580  jal         func_195600
    ctx->pc = 0x31A764u;
    SET_GPR_U32(ctx, 31, 0x31A76Cu);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x31A764u, 0x31A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A76Cu;
label_31a76c:
    // 0x31a76c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a76cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31a770: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x31a770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a774: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x31a774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x31a778: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x31a778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31a77c: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x31a77cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x31a780: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x31A780u;
    {
        const bool branch_taken_0x31a780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a780) {
            ctx->pc = 0x31A858u;
            return;
        }
    }
    ctx->pc = 0x31A788u;
}
