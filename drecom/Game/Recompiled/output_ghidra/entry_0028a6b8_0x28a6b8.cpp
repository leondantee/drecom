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

// Function: entry_0028a6b8
// Address: 0x28a6b8 - 0x28a9e8
void entry_0028a6b8_0x28a6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028a6b8_0x28a6b8");
#endif

    switch (ctx->pc) {
        case 0x28a75cu: goto label_28a75c;
        case 0x28a7a4u: goto label_28a7a4;
        case 0x28a7d4u: goto label_28a7d4;
        case 0x28a804u: goto label_28a804;
        case 0x28a93cu: goto label_28a93c;
        case 0x28a9bcu: goto label_28a9bc;
        default: break;
    }

    ctx->pc = 0x28a6b8u;

    // 0x28a6b8: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x28a6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28a6bc: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x28a6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28a6c0: 0xc81823  subu        $v1, $a2, $t0
    ctx->pc = 0x28a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x28a6c4: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x28a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x28a6c8: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x28a6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28a6cc: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x28a6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28a6d0: 0x1073023  subu        $a2, $t0, $a3
    ctx->pc = 0x28a6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x28a6d4: 0xafa6013c  sw          $a2, 0x13C($sp)
    ctx->pc = 0x28a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 6));
    // 0x28a6d8: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x28a6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28a6dc: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x28a6dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28a6e0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x28a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28a6e4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x28a6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x28a6e8: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x28a6e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28a6ec: 0x8c5e0004  lw          $fp, 0x4($v0)
    ctx->pc = 0x28a6ecu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28a6f0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x28a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28a6f4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x28a6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x28a6f8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x28a6f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28a6fc: 0x262a821  addu        $s5, $s3, $v0
    ctx->pc = 0x28a6fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x28a700: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x28a700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x28a704: 0x3c61821  addu        $v1, $fp, $a2
    ctx->pc = 0x28a704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x28a708: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x28a708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x28a70c: 0x153023  negu        $a2, $s5
    ctx->pc = 0x28a70cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
    // 0x28a710: 0xafa60134  sw          $a2, 0x134($sp)
    ctx->pc = 0x28a710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
    // 0x28a714: 0x13b023  negu        $s6, $s3
    ctx->pc = 0x28a714u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x28a718: 0x72c0ae28  paddub      $s5, $s6, $zero
    ctx->pc = 0x28a718u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x28a71c: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x28a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x28a720: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x28a720u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a724: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x28a724u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
    // 0x28a728: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x28a728u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a72c: 0xc6416620  lwc1        $f1, 0x6620($s2)
    ctx->pc = 0x28a72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a730: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x28a730u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x28a734: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x28a734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x28a738: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28a738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28a73c: 0x0  nop
    ctx->pc = 0x28a73cu;
    // NOP
    // 0x28a740: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x28a740u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28a744: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28a744u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a748: 0x0  nop
    ctx->pc = 0x28a748u;
    // NOP
    // 0x28a74c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x28a74cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x28a750: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x28a750u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x28a754: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28A754u;
    SET_GPR_U32(ctx, 31, 0x28A75Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28A754u, 0x28A75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A75Cu;
label_28a75c:
    // 0x28a75c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28a75cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a760: 0x70e09e28  paddub      $s3, $a3, $zero
    ctx->pc = 0x28a760u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28a764: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x28a764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x28a768: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x28a768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x28a76c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x28a76cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28a770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28a770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a774: 0xc6416620  lwc1        $f1, 0x6620($s2)
    ctx->pc = 0x28a774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a778: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x28a778u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x28a77c: 0x3c064420  lui         $a2, 0x4420
    ctx->pc = 0x28a77cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17440 << 16));
    // 0x28a780: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x28a780u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28a784: 0x0  nop
    ctx->pc = 0x28a784u;
    // NOP
    // 0x28a788: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x28a788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28a78c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x28a78cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a790: 0x0  nop
    ctx->pc = 0x28a790u;
    // NOP
    // 0x28a794: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x28a794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x28a798: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x28a798u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x28a79c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28A79Cu;
    SET_GPR_U32(ctx, 31, 0x28A7A4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28A79Cu, 0x28A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7A4u;
label_28a7a4:
    // 0x28a7a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28a7a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a7a8: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x28a7a8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a7ac: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x28a7acu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28a7b0: 0x0  nop
    ctx->pc = 0x28a7b0u;
    // NOP
    // 0x28a7b4: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x28a7b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28a7b8: 0x3c073f4c  lui         $a3, 0x3F4C
    ctx->pc = 0x28a7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16204 << 16));
    // 0x28a7bc: 0x34f6cccd  ori         $s6, $a3, 0xCCCD
    ctx->pc = 0x28a7bcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x28a7c0: 0x44966000  mtc1        $s6, $f12
    ctx->pc = 0x28a7c0u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a7c4: 0x0  nop
    ctx->pc = 0x28a7c4u;
    // NOP
    // 0x28a7c8: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x28a7c8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28a7cc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28A7CCu;
    SET_GPR_U32(ctx, 31, 0x28A7D4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28A7CCu, 0x28A7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7D4u;
label_28a7d4:
    // 0x28a7d4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28a7d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a7d8: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x28a7d8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a7dc: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x28a7dcu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28a7e0: 0x0  nop
    ctx->pc = 0x28a7e0u;
    // NOP
    // 0x28a7e4: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x28a7e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28a7e8: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x28a7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x28a7ec: 0x34c3cccd  ori         $v1, $a2, 0xCCCD
    ctx->pc = 0x28a7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x28a7f0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x28a7f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a7f4: 0x0  nop
    ctx->pc = 0x28a7f4u;
    // NOP
    // 0x28a7f8: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x28a7f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28a7fc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28A7FCu;
    SET_GPR_U32(ctx, 31, 0x28A804u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28A7FCu, 0x28A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A804u;
label_28a804:
    // 0x28a804: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28a804u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a808: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x28a808u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x28a80c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x28a80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x28a810: 0x3c076400  lui         $a3, 0x6400
    ctx->pc = 0x28a810u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25600 << 16));
    // 0x28a814: 0x34e32b16  ori         $v1, $a3, 0x2B16
    ctx->pc = 0x28a814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)11030);
    // 0x28a818: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x28a818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x28a81c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x28a81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x28a820: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28a820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28a824: 0x34670040  ori         $a3, $v1, 0x40
    ctx->pc = 0x28a824u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x28a828: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x28a828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x28a82c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x28a82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28a830: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x28a830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x28a834: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28a834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28a838: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x28a838u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28a83c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x28a83cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x28a840: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x28a840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x28a844: 0x26080014  addiu       $t0, $s0, 0x14
    ctx->pc = 0x28a844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x28a848: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x28a848u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x28a84c: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x28a84cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28a850: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x28a850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x28a854: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x28a854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28a858: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x28a858u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28a85c: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x28a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x28a860: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28a860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28a864: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x28a864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x28a868: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28a868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28a86c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x28a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x28a870: 0x34400  sll         $t0, $v1, 16
    ctx->pc = 0x28a870u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28a874: 0x8fa700d4  lw          $a3, 0xD4($sp)
    ctx->pc = 0x28a874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x28a878: 0x73200  sll         $a2, $a3, 8
    ctx->pc = 0x28a878u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x28a87c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x28a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28a880: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x28a880u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x28a884: 0x1063025  or          $a2, $t0, $a2
    ctx->pc = 0x28a884u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x28a888: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x28a888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28a88c: 0x23e00  sll         $a3, $v0, 24
    ctx->pc = 0x28a88cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x28a890: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x28a890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x28a894: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x28a894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28a898: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x28a898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x28a89c: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x28a89cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28a8a0: 0x24c67000  addiu       $a2, $a2, 0x7000
    ctx->pc = 0x28a8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x28a8a4: 0x30c7ffff  andi        $a3, $a2, 0xFFFF
    ctx->pc = 0x28a8a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x28a8a8: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x28a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x28a8ac: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x28a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28a8b0: 0x34400  sll         $t0, $v1, 16
    ctx->pc = 0x28a8b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28a8b4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x28a8b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x28a8b8: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x28a8b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x28a8bc: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x28a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x28a8c0: 0x3406fff9  ori         $a2, $zero, 0xFFF9
    ctx->pc = 0x28a8c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x28a8c4: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x28a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x28a8c8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x28a8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x28a8cc: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x28a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x28a8d0: 0x24437000  addiu       $v1, $v0, 0x7000
    ctx->pc = 0x28a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28a8d4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x28a8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28a8d8: 0x8fa80130  lw          $t0, 0x130($sp)
    ctx->pc = 0x28a8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28a8dc: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x28a8dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x28a8e0: 0x24e67900  addiu       $a2, $a3, 0x7900
    ctx->pc = 0x28a8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
    // 0x28a8e4: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x28a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x28a8e8: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x28a8e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28a8ec: 0x26080024  addiu       $t0, $s0, 0x24
    ctx->pc = 0x28a8ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x28a8f0: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x28a8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x28a8f4: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x28a8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x28a8f8: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x28a8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x28a8fc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x28a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x28a900: 0x96290000  lhu         $t1, 0x0($s1)
    ctx->pc = 0x28a900u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28a904: 0x3127ffff  andi        $a3, $t1, 0xFFFF
    ctx->pc = 0x28a904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x28a908: 0x24e800a3  addiu       $t0, $a3, 0xA3
    ctx->pc = 0x28a908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 163));
    // 0x28a90c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x28a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x28a910: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x28a910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x28a914: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x28a914u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28a918: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28a918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28a91c: 0x2448cca0  addiu       $t0, $v0, -0x3360
    ctx->pc = 0x28a91cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x28a920: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x28a920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x28a924: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x28a924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x28a928: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x28a928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28a92c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28a92cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a930: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x28a930u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x28a934: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28A934u;
    SET_GPR_U32(ctx, 31, 0x28A93Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28A934u, 0x28A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A93Cu;
label_28a93c:
    // 0x28a93c: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x28a93cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a940: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x28a940u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x28a944: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x28a944u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x28a948: 0x3c090400  lui         $t1, 0x400
    ctx->pc = 0x28a948u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1024 << 16));
    // 0x28a94c: 0x35231009  ori         $v1, $t1, 0x1009
    ctx->pc = 0x28a94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4105);
    // 0x28a950: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x28a950u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x28a954: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x28a954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28a958: 0x6483c  dsll32      $t1, $a2, 0
    ctx->pc = 0x28a958u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 0));
    // 0x28a95c: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x28a95cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x28a960: 0x93938  dsll        $a3, $t1, 4
    ctx->pc = 0x28a960u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << 4);
    // 0x28a964: 0x34e3000a  ori         $v1, $a3, 0xA
    ctx->pc = 0x28a964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x28a968: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x28a968u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28a96c: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x28a96cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
    // 0x28a970: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x28a970u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x28a974: 0x643b8  dsll        $t0, $a2, 14
    ctx->pc = 0x28a974u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << 14);
    // 0x28a978: 0x684825  or          $t1, $v1, $t0
    ctx->pc = 0x28a978u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x28a97c: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x28a97cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28a980: 0xb183c  dsll32      $v1, $t3, 0
    ctx->pc = 0x28a980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 0));
    // 0x28a984: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x28a984u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28a988: 0x34638  dsll        $t0, $v1, 24
    ctx->pc = 0x28a988u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 24);
    // 0x28a98c: 0x1094825  or          $t1, $t0, $t1
    ctx->pc = 0x28a98cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x28a990: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x28a990u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28a994: 0x8503c  dsll32      $t2, $t0, 0
    ctx->pc = 0x28a994u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) << (32 + 0));
    // 0x28a998: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x28a998u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x28a99c: 0xa60bc  dsll32      $t4, $t2, 2
    ctx->pc = 0x28a99cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << (32 + 2));
    // 0x28a9a0: 0x1893025  or          $a2, $t4, $t1
    ctx->pc = 0x28a9a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) | GPR_U64(ctx, 9));
    // 0x28a9a4: 0xfe860008  sd          $a2, 0x8($s4)
    ctx->pc = 0x28a9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 6));
    // 0x28a9a8: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x28a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28a9ac: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28a9acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a9b0: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x28a9b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28a9b4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28A9B4u;
    SET_GPR_U32(ctx, 31, 0x28A9BCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28A9B4u, 0x28A9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A9BCu;
label_28a9bc:
    // 0x28a9bc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28a9bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a9c0: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x28a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x28a9c4: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x28a9c4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a9c8: 0x260b002c  addiu       $t3, $s0, 0x2C
    ctx->pc = 0x28a9c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x28a9cc: 0x71608628  paddub      $s0, $t3, $zero
    ctx->pc = 0x28a9ccu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x28a9d0: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x28a9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28a9d4: 0x24c80008  addiu       $t0, $a2, 0x8
    ctx->pc = 0x28a9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x28a9d8: 0xafa80138  sw          $t0, 0x138($sp)
    ctx->pc = 0x28a9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 8));
    // 0x28a9dc: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x28a9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x28a9e0: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x28a9e0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a9e4: 0x0  nop
    ctx->pc = 0x28a9e4u;
    // NOP
    ctx->pc = 0x28a9e8u;
}
