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

// Function: entry_00290064
// Address: 0x290064 - 0x290334
void entry_00290064_0x290064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00290064_0x290064");
#endif

    switch (ctx->pc) {
        case 0x290164u: goto label_290164;
        case 0x2901a0u: goto label_2901a0;
        case 0x2901ccu: goto label_2901cc;
        case 0x2901f8u: goto label_2901f8;
        default: break;
    }

    ctx->pc = 0x290064u;

    // 0x290064: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x290064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x290068: 0x30460004  andi        $a2, $v0, 0x4
    ctx->pc = 0x290068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x29006c: 0x14c000f9  bnez        $a2, . + 4 + (0xF9 << 2)
    ctx->pc = 0x29006Cu;
    {
        const bool branch_taken_0x29006c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x29006c) {
            ctx->pc = 0x290454u;
            return;
        }
    }
    ctx->pc = 0x290074u;
    // 0x290074: 0x82025de9  lb          $v0, 0x5DE9($s0)
    ctx->pc = 0x290074u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24041)));
    // 0x290078: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x290078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x29007c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x29007cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x290080: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x290080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x290084: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x290084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x290088: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29008c: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x29008cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x290090: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x290090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x290094: 0x24626090  addiu       $v0, $v1, 0x6090
    ctx->pc = 0x290094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24720));
    // 0x290098: 0x469021  addu        $s2, $v0, $a2
    ctx->pc = 0x290098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29009c: 0x241501a2  addiu       $s5, $zero, 0x1A2
    ctx->pc = 0x29009cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
    // 0x2900a0: 0x241e011b  addiu       $fp, $zero, 0x11B
    ctx->pc = 0x2900a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
    // 0x2900a4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2900a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2900a8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2900a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2900ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2900acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2900b0: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x2900b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x2900b4: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2900b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2900b8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2900b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2900bc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2900bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2900c0: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x2900c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x2900c4: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x2900c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2900c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2900c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2900cc: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x2900ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2900d0: 0x2a2b821  addu        $s7, $s5, $v0
    ctx->pc = 0x2900d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2900d4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2900d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2900d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2900d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2900dc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2900dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2900e0: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x2900e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2900e4: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x2900e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x2900e8: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x2900e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2900ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2900ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2900f0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2900f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2900f4: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x2900f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2900f8: 0x70c01628  paddub      $v0, $a2, $zero
    ctx->pc = 0x2900f8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2900fc: 0x2a2a823  subu        $s5, $s5, $v0
    ctx->pc = 0x2900fcu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x290100: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x290100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x290104: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x290104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x290108: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x290108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29010c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x29010cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290110: 0x3c31823  subu        $v1, $fp, $v1
    ctx->pc = 0x290110u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x290114: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x290114u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x290118: 0x171023  negu        $v0, $s7
    ctx->pc = 0x290118u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x29011c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x29011cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x290120: 0x15b823  negu        $s7, $s5
    ctx->pc = 0x290120u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
    // 0x290124: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x290124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x290128: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x290128u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x29012c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x29012cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x290130: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x290130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290134: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x290134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290138: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x290138u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x29013c: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x29013cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x290140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290144: 0x0  nop
    ctx->pc = 0x290144u;
    // NOP
    // 0x290148: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x290148u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29014c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x29014cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290150: 0x0  nop
    ctx->pc = 0x290150u;
    // NOP
    // 0x290154: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x290154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x290158: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x290158u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29015c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x29015Cu;
    SET_GPR_U32(ctx, 31, 0x290164u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x29015Cu, 0x290164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290164u;
label_290164:
    // 0x290164: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x290164u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290168: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x290168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x29016c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29016cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290170: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x290170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290174: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x290174u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x290178: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x290178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x29017c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29017cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290180: 0x0  nop
    ctx->pc = 0x290180u;
    // NOP
    // 0x290184: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x290184u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x290188: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x290188u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29018c: 0x0  nop
    ctx->pc = 0x29018cu;
    // NOP
    // 0x290190: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x290190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x290194: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x290194u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x290198: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x290198u;
    SET_GPR_U32(ctx, 31, 0x2901A0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x290198u, 0x2901A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2901A0u;
label_2901a0:
    // 0x2901a0: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x2901a0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2901a4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x2901a4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2901a8: 0x0  nop
    ctx->pc = 0x2901a8u;
    // NOP
    // 0x2901ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2901acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2901b0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2901b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2901b4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2901b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2901b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2901b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2901bc: 0x0  nop
    ctx->pc = 0x2901bcu;
    // NOP
    // 0x2901c0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2901c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2901c4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2901C4u;
    SET_GPR_U32(ctx, 31, 0x2901CCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2901C4u, 0x2901CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2901CCu;
label_2901cc:
    // 0x2901cc: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x2901ccu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2901d0: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x2901d0u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2901d4: 0x0  nop
    ctx->pc = 0x2901d4u;
    // NOP
    // 0x2901d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2901d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2901dc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2901dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2901e0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2901e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2901e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2901e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2901e8: 0x0  nop
    ctx->pc = 0x2901e8u;
    // NOP
    // 0x2901ec: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2901ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2901f0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2901F0u;
    SET_GPR_U32(ctx, 31, 0x2901F8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2901F0u, 0x2901F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2901F8u;
label_2901f8:
    // 0x2901f8: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x2901f8u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2901fc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2901fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x290200: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x290200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x290204: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x290204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x290208: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x290208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x29020c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x29020cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x290210: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x290210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x290214: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x290214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x290218: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x290218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x29021c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x29021cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x290220: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x290220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x290224: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x290224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x290228: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x290228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29022c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29022cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x290230: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x290230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x290234: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x290234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x290238: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x290238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x29023c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29023cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x290240: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x290240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x290244: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x290244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x290248: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x290248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x29024c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29024cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x290250: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x290250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x290254: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x290254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x290258: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x290258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x29025c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29025cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x290260: 0x131400  sll         $v0, $s3, 16
    ctx->pc = 0x290260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x290264: 0x131a00  sll         $v1, $s3, 8
    ctx->pc = 0x290264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x290268: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x290268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x29026c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29026cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x290270: 0x131e00  sll         $v1, $s3, 24
    ctx->pc = 0x290270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
    // 0x290274: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x290274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x290278: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x290278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x29027c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29027cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x290280: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x290280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x290284: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x290284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x290288: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x290288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29028c: 0x1e20c0  sll         $a0, $fp, 3
    ctx->pc = 0x29028cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x290290: 0x24827900  addiu       $v0, $a0, 0x7900
    ctx->pc = 0x290290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x290294: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x290294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x290298: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x290298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29029c: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x29029cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2902a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2902a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2902a4: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x2902a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x2902a8: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x2902a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x2902ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2902acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2902b0: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x2902b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x2902b4: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x2902b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x2902b8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2902b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2902bc: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x2902bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2902c0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2902c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2902c4: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x2902c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2902c8: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x2902c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2902cc: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x2902ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2902d0: 0x26220024  addiu       $v0, $s1, 0x24
    ctx->pc = 0x2902d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x2902d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2902d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2902d8: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x2902d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x2902dc: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x2902dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x2902e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2902e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2902e4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2902e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2902e8: 0x2462e7d0  addiu       $v0, $v1, -0x1830
    ctx->pc = 0x2902e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961104));
    // 0x2902ec: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2902ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2902f0: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x2902f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
    // 0x2902f4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2902F4u;
    {
        const bool branch_taken_0x2902f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2902f4) {
            ctx->pc = 0x290334u;
            return;
        }
    }
    ctx->pc = 0x2902FCu;
    // 0x2902fc: 0x8e025dc8  lw          $v0, 0x5DC8($s0)
    ctx->pc = 0x2902fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x290300: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x290300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x290304: 0x1044000b  beq         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x290304u;
    {
        const bool branch_taken_0x290304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x290304) {
            ctx->pc = 0x290334u;
            return;
        }
    }
    ctx->pc = 0x29030Cu;
    // 0x29030c: 0x131c00  sll         $v1, $s3, 16
    ctx->pc = 0x29030cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x290310: 0x131200  sll         $v0, $s3, 8
    ctx->pc = 0x290310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x290314: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x290314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x290318: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x290318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29031c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29031cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x290320: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x290320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x290324: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x290324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x290328: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x290328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29032c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x29032Cu;
    {
        const bool branch_taken_0x29032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29032c) {
            ctx->pc = 0x2903B8u;
            return;
        }
    }
    ctx->pc = 0x290334u;
}
