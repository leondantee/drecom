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

// Function: R503_light_set_sub
// Address: 0x357690 - 0x357870
void R503_light_set_sub_0x357690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R503_light_set_sub_0x357690");
#endif

    switch (ctx->pc) {
        case 0x357700u: goto label_357700;
        case 0x35771cu: goto label_35771c;
        case 0x35772cu: goto label_35772c;
        default: break;
    }

    ctx->pc = 0x357690u;

    // 0x357690: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x357690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x357694: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x357694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x357698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x357698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35769c: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x35769cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3576a0: 0xe7ad0058  swc1        $f13, 0x58($sp)
    ctx->pc = 0x3576a0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3576a4: 0xe7ae0060  swc1        $f14, 0x60($sp)
    ctx->pc = 0x3576a4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3576a8: 0xe7af0068  swc1        $f15, 0x68($sp)
    ctx->pc = 0x3576a8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3576ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3576acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3576b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3576b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3576b4: 0x0  nop
    ctx->pc = 0x3576b4u;
    // NOP
    // 0x3576b8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3576b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3576bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3576bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3576c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3576c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3576c4: 0x0  nop
    ctx->pc = 0x3576c4u;
    // NOP
    // 0x3576c8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3576c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3576cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3576ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3576d0: 0x0  nop
    ctx->pc = 0x3576d0u;
    // NOP
    // 0x3576d4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3576d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3576d8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3576d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3576dc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3576dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3576e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3576e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3576e4: 0x0  nop
    ctx->pc = 0x3576e4u;
    // NOP
    // 0x3576e8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3576e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3576ec: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3576ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3576f0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3576f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3576f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3576f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3576f8: 0xc05da88  jal         func_176A20
    ctx->pc = 0x3576F8u;
    SET_GPR_U32(ctx, 31, 0x357700u);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x3576F8u, 0x357700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357700u;
label_357700:
    // 0x357700: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x357700u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357704: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x357704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x357708: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x357708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x35770c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35770cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x357710: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x357710u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x357714: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x357714u;
    SET_GPR_U32(ctx, 31, 0x35771Cu);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x357714u, 0x35771Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35771Cu;
label_35771c:
    // 0x35771c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x35771cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x357720: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x357720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x357724: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x357724u;
    SET_GPR_U32(ctx, 31, 0x35772Cu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x357724u, 0x35772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35772Cu;
label_35772c:
    // 0x35772c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x35772cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357730: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x357730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x357734: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x357734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x357738: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x357738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35773c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x35773cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x357740: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x357740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x357744: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x357748: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x357748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x35774c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x35774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357750: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x357750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x357754: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x357754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x357758: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x357758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35775c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x35775cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x357760: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x357760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x357764: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x357768: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x357768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x35776c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x35776cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357770: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x357770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x357774: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x357774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x357778: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x357778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35777c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x35777cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x357780: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x357780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x357784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x357788: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x357788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x35778c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x35778cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x357790: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x357790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x357794: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x357794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x357798: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x357798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x35779c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x35779cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x3577a0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3577a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3577a4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x3577a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x3577a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3577a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3577ac: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x3577acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3577b0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3577b0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3577b4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x3577b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3577b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3577b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3577bc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3577bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3577c0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3577c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3577c4: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x3577c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x3577c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3577c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3577cc: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x3577ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x3577d0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x3577d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3577d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3577d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3577d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3577d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3577dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3577dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3577e0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x3577e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x3577e4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3577e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3577e8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x3577e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x3577ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3577ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3577f0: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x3577f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3577f4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3577f4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3577f8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x3577f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3577fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3577fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x357800: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x357800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x357804: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x357804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x357808: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x357808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x35780c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x357810: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x357810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x357814: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x357814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x357818: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x357818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35781c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x35781cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x357820: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x357820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x357824: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x357824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x357828: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x357828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35782c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x35782cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x357830: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x357830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x357834: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x357834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357838: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x357838u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x35783c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x35783cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x357840: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x357840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x357844: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x357844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x357848: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x357848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x35784c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x35784cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x357850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x357854: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x357854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x357858: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x357858u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x35785c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x35785cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357864: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x357864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x357868: 0x3e00008  jr          $ra
    ctx->pc = 0x357868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357870u;
}
