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

// Function: entry_002883c0
// Address: 0x2883c0 - 0x2886d8
void entry_002883c0_0x2883c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002883c0_0x2883c0");
#endif

    switch (ctx->pc) {
        case 0x288454u: goto label_288454;
        case 0x288494u: goto label_288494;
        case 0x2884c0u: goto label_2884c0;
        case 0x2884f0u: goto label_2884f0;
        case 0x28862cu: goto label_28862c;
        case 0x2886acu: goto label_2886ac;
        default: break;
    }

    ctx->pc = 0x2883c0u;

    // 0x2883c0: 0x8e3e000c  lw          $fp, 0xC($s1)
    ctx->pc = 0x2883c0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2883c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2883c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2883c8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2883c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2883cc: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2883ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2883d0: 0x3c2a823  subu        $s5, $fp, $v0
    ctx->pc = 0x2883d0u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2883d4: 0xafb50140  sw          $s5, 0x140($sp)
    ctx->pc = 0x2883d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 21));
    // 0x2883d8: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2883d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2883dc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2883dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2883e0: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x2883e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2883e4: 0xafa6013c  sw          $a2, 0x13C($sp)
    ctx->pc = 0x2883e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 6));
    // 0x2883e8: 0x8fb60138  lw          $s6, 0x138($sp)
    ctx->pc = 0x2883e8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2883ec: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2883ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2883f0: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x2883f0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2883f4: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2883f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2883f8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x2883f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2883fc: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x2883fcu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288400: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x288400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x288404: 0x2671021  addu        $v0, $s3, $a3
    ctx->pc = 0x288404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x288408: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x288408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x28840c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x28840cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288410: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x288410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x288414: 0x3c61821  addu        $v1, $fp, $a2
    ctx->pc = 0x288414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x288418: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x288418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x28841c: 0x3c164120  lui         $s6, 0x4120
    ctx->pc = 0x28841cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16672 << 16));
    // 0x288420: 0x44966000  mtc1        $s6, $f12
    ctx->pc = 0x288420u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288424: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x288424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288428: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x288428u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x28842c: 0x3c074420  lui         $a3, 0x4420
    ctx->pc = 0x28842cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17440 << 16));
    // 0x288430: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x288430u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288434: 0x0  nop
    ctx->pc = 0x288434u;
    // NOP
    // 0x288438: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x288438u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28843c: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x28843cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288440: 0x0  nop
    ctx->pc = 0x288440u;
    // NOP
    // 0x288444: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x288444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x288448: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x288448u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28844c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28844Cu;
    SET_GPR_U32(ctx, 31, 0x288454u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28844Cu, 0x288454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288454u;
label_288454:
    // 0x288454: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x288454u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288458: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x288458u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28845c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x28845cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x288460: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x288460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288464: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x288464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288468: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x288468u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x28846c: 0x3c064420  lui         $a2, 0x4420
    ctx->pc = 0x28846cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17440 << 16));
    // 0x288470: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x288470u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288474: 0x0  nop
    ctx->pc = 0x288474u;
    // NOP
    // 0x288478: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x288478u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28847c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x28847cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288480: 0x0  nop
    ctx->pc = 0x288480u;
    // NOP
    // 0x288484: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x288484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x288488: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x288488u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28848c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28848Cu;
    SET_GPR_U32(ctx, 31, 0x288494u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28848Cu, 0x288494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288494u;
label_288494:
    // 0x288494: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x288494u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288498: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x288498u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28849c: 0x0  nop
    ctx->pc = 0x28849cu;
    // NOP
    // 0x2884a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2884a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2884a4: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2884a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2884a8: 0x3466cccd  ori         $a2, $v1, 0xCCCD
    ctx->pc = 0x2884a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2884ac: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2884acu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2884b0: 0x0  nop
    ctx->pc = 0x2884b0u;
    // NOP
    // 0x2884b4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2884b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2884b8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2884B8u;
    SET_GPR_U32(ctx, 31, 0x2884C0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2884B8u, 0x2884C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2884C0u;
label_2884c0:
    // 0x2884c0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2884c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2884c4: 0x70e09e28  paddub      $s3, $a3, $zero
    ctx->pc = 0x2884c4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2884c8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x2884c8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2884cc: 0x0  nop
    ctx->pc = 0x2884ccu;
    // NOP
    // 0x2884d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2884d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2884d4: 0x3c073f4c  lui         $a3, 0x3F4C
    ctx->pc = 0x2884d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16204 << 16));
    // 0x2884d8: 0x34e3cccd  ori         $v1, $a3, 0xCCCD
    ctx->pc = 0x2884d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x2884dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2884dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2884e0: 0x0  nop
    ctx->pc = 0x2884e0u;
    // NOP
    // 0x2884e4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2884e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2884e8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2884E8u;
    SET_GPR_U32(ctx, 31, 0x2884F0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2884E8u, 0x2884F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2884F0u;
label_2884f0:
    // 0x2884f0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2884f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2884f4: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x2884f4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2884f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2884f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2884fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2884fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x288500: 0x3c066400  lui         $a2, 0x6400
    ctx->pc = 0x288500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25600 << 16));
    // 0x288504: 0x34c22b16  ori         $v0, $a2, 0x2B16
    ctx->pc = 0x288504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)11030);
    // 0x288508: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x288508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x28850c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x28850cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x288510: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x288510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x288514: 0x34c20040  ori         $v0, $a2, 0x40
    ctx->pc = 0x288514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x288518: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x288518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x28851c: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x28851cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288520: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x288520u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x288524: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x288524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x288528: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x288528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28852c: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x28852cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x288530: 0xe61825  or          $v1, $a3, $a2
    ctx->pc = 0x288530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x288534: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x288534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x288538: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x288538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28853c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x28853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x288540: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x288540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x288544: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x288544u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x288548: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x288548u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x28854c: 0x73400  sll         $a2, $a3, 16
    ctx->pc = 0x28854cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x288550: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x288550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x288554: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x288554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x288558: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x288558u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x28855c: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x28855cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x288560: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x288560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x288564: 0x8fa700d4  lw          $a3, 0xD4($sp)
    ctx->pc = 0x288564u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x288568: 0x73200  sll         $a2, $a3, 8
    ctx->pc = 0x288568u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x28856c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x28856cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288570: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x288570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x288574: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x288574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x288578: 0x8fa700dc  lw          $a3, 0xDC($sp)
    ctx->pc = 0x288578u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28857c: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x28857cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x288580: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x288580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x288584: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x288584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x288588: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x288588u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x28858c: 0x133900  sll         $a3, $s3, 4
    ctx->pc = 0x28858cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x288590: 0x24e87000  addiu       $t0, $a3, 0x7000
    ctx->pc = 0x288590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 28672));
    // 0x288594: 0x3106ffff  andi        $a2, $t0, 0xFFFF
    ctx->pc = 0x288594u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x288598: 0x1e18c0  sll         $v1, $fp, 3
    ctx->pc = 0x288598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x28859c: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x28859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2885a0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2885a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2885a4: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x2885a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2885a8: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x2885a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2885ac: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2885acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2885b0: 0x3407fff9  ori         $a3, $zero, 0xFFF9
    ctx->pc = 0x2885b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x2885b4: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x2885b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2885b8: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x2885b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x2885bc: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x2885bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2885c0: 0x24677000  addiu       $a3, $v1, 0x7000
    ctx->pc = 0x2885c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x2885c4: 0x30e8ffff  andi        $t0, $a3, 0xFFFF
    ctx->pc = 0x2885c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2885c8: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x2885c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2885cc: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x2885ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2885d0: 0x24c97900  addiu       $t1, $a2, 0x7900
    ctx->pc = 0x2885d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x2885d4: 0x93c00  sll         $a3, $t1, 16
    ctx->pc = 0x2885d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x2885d8: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x2885d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2885dc: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x2885dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x2885e0: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x2885e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x2885e4: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x2885e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x2885e8: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x2885e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2885ec: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2885ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2885f0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x2885f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2885f4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2885f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2885f8: 0x250300a3  addiu       $v1, $t0, 0xA3
    ctx->pc = 0x2885f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 163));
    // 0x2885fc: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2885fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x288600: 0xc35021  addu        $t2, $a2, $v1
    ctx->pc = 0x288600u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x288604: 0xa38c0  sll         $a3, $t2, 3
    ctx->pc = 0x288604u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x288608: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x288608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28860c: 0x2469cca0  addiu       $t1, $v1, -0x3360
    ctx->pc = 0x28860cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x288610: 0x1273021  addu        $a2, $t1, $a3
    ctx->pc = 0x288610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x288614: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x288614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x288618: 0x2649001c  addiu       $t1, $s2, 0x1C
    ctx->pc = 0x288618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28861c: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x28861cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x288620: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x288620u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x288624: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x288624u;
    SET_GPR_U32(ctx, 31, 0x28862Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x288624u, 0x28862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28862Cu;
label_28862c:
    // 0x28862c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28862cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288630: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x288630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x288634: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x288634u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x288638: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x288638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x28863c: 0x34c81009  ori         $t0, $a2, 0x1009
    ctx->pc = 0x28863cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4105);
    // 0x288640: 0xae880004  sw          $t0, 0x4($s4)
    ctx->pc = 0x288640u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 8));
    // 0x288644: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x288644u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288648: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x288648u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x28864c: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x28864cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x288650: 0x95938  dsll        $t3, $t1, 4
    ctx->pc = 0x288650u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << 4);
    // 0x288654: 0x3563000a  ori         $v1, $t3, 0xA
    ctx->pc = 0x288654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)10);
    // 0x288658: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x288658u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28865c: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x28865cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x288660: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x288660u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x288664: 0x943b8  dsll        $t0, $t1, 14
    ctx->pc = 0x288664u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << 14);
    // 0x288668: 0x685025  or          $t2, $v1, $t0
    ctx->pc = 0x288668u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x28866c: 0x8e2c0008  lw          $t4, 0x8($s1)
    ctx->pc = 0x28866cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x288670: 0xc303c  dsll32      $a2, $t4, 0
    ctx->pc = 0x288670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) << (32 + 0));
    // 0x288674: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x288674u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x288678: 0x61e38  dsll        $v1, $a2, 24
    ctx->pc = 0x288678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 24);
    // 0x28867c: 0x6a3825  or          $a3, $v1, $t2
    ctx->pc = 0x28867cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x288680: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x288680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x288684: 0x3583c  dsll32      $t3, $v1, 0
    ctx->pc = 0x288684u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 0));
    // 0x288688: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x288688u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x28868c: 0xb30bc  dsll32      $a2, $t3, 2
    ctx->pc = 0x28868cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) << (32 + 2));
    // 0x288690: 0xc74025  or          $t0, $a2, $a3
    ctx->pc = 0x288690u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x288694: 0xfe880008  sd          $t0, 0x8($s4)
    ctx->pc = 0x288694u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 8));
    // 0x288698: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x288698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28869c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28869cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2886a0: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2886a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2886a4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2886A4u;
    SET_GPR_U32(ctx, 31, 0x2886ACu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2886A4u, 0x2886ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2886ACu;
label_2886ac:
    // 0x2886ac: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2886acu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2886b0: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x2886b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2886b4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x2886b4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2886b8: 0x2609002c  addiu       $t1, $s0, 0x2C
    ctx->pc = 0x2886b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x2886bc: 0x71208628  paddub      $s0, $t1, $zero
    ctx->pc = 0x2886bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2886c0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2886c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2886c4: 0x24670008  addiu       $a3, $v1, 0x8
    ctx->pc = 0x2886c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2886c8: 0xafa70138  sw          $a3, 0x138($sp)
    ctx->pc = 0x2886c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 7));
    // 0x2886cc: 0x26e90001  addiu       $t1, $s7, 0x1
    ctx->pc = 0x2886ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2886d0: 0x7120be28  paddub      $s7, $t1, $zero
    ctx->pc = 0x2886d0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2886d4: 0x0  nop
    ctx->pc = 0x2886d4u;
    // NOP
    ctx->pc = 0x2886d8u;
}
