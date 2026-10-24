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

// Function: e2d_id10_type00
// Address: 0x2b0690 - 0x2b0874
void e2d_id10_type00_0x2b0690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id10_type00_0x2b0690");
#endif

    switch (ctx->pc) {
        case 0x2b06a4u: goto label_2b06a4;
        case 0x2b07c4u: goto label_2b07c4;
        case 0x2b07d4u: goto label_2b07d4;
        default: break;
    }

    ctx->pc = 0x2b0690u;

    // 0x2b0690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b0690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b0694: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b0694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b0698: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b0698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b069c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2B069Cu;
    SET_GPR_U32(ctx, 31, 0x2B06A4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2B069Cu, 0x2B06A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B06A4u;
label_2b06a4:
    // 0x2b06a4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2b06a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2b06a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b06a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b06ac: 0x0  nop
    ctx->pc = 0x2b06acu;
    // NOP
    // 0x2b06b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b06b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b06b4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2b06b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2b06b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b06b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b06bc: 0x0  nop
    ctx->pc = 0x2b06bcu;
    // NOP
    // 0x2b06c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b06c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b06c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b06c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b06c8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b06c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b06cc: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x2b06ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x2b06d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b06d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b06d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b06d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b06d8: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2b06d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2b06dc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2b06dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2b06e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b06e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b06e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b06e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b06e8: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2b06e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2b06ec: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2b06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2b06f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b06f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b06f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b06f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b06f8: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b06f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b06fc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2b06fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2b0700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0704: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0708: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2b0708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2b070c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2b070cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2b0710: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2b0710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2b0714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0718: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b071c: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2b071cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2b0720: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2b0720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2b0724: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2b0724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2b0728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b072c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0730: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2b0730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2b0734: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2b0734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2b0738: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2b0738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2b073c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b073cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0740: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0744: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2b0744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2b0748: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x2b0748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
    // 0x2b074c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b074cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0750: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0754: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2b0754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2b0758: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b0758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b075c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b075cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b0760: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b0760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b0764: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b0764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b0768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b0768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b076c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b076cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b0770: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2b0770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b0774: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b0774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b0778: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b0778u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b077c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b077cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b0780: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b0780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b0784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b0784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0788: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2b0788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2b078c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2b078cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2b0790: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b0790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b0794: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b0794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b0798: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2b0798u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b079c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b079cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b07a0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2b07a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2b07a4: 0x2443003c  addiu       $v1, $v0, 0x3C
    ctx->pc = 0x2b07a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2b07a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b07a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b07ac: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x2b07acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x2b07b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b07b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b07b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b07b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b07b8: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b07b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b07bc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B07BCu;
    SET_GPR_U32(ctx, 31, 0x2B07C4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B07BCu, 0x2B07C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B07C4u;
label_2b07c4:
    // 0x2b07c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b07c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b07c8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b07c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b07cc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B07CCu;
    SET_GPR_U32(ctx, 31, 0x2B07D4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B07CCu, 0x2B07D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B07D4u;
label_2b07d4:
    // 0x2b07d4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2b07d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2b07d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b07d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b07dc: 0x0  nop
    ctx->pc = 0x2b07dcu;
    // NOP
    // 0x2b07e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b07e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2b07e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b07e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b07e8: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b07e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b07ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b07ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b07f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b07f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b07f4: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b07f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b07f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b07f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b07fc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b07fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b0800: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b0800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b0804: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b0804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b0808: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b0808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b080c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b080cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b0810: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b0810u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b0814: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b0814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b0818: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b0818u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b081c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b081cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b0820: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b0820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b0824: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b0824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b0828: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b0828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b082c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b082cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b0830: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b0830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b0834: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b0834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b0838: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b0838u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b083c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b083cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b0840: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b0840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b0844: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b0844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b0848: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b0848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b084c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b084cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0850: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b0850u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b0854: 0x3c0342c0  lui         $v1, 0x42C0
    ctx->pc = 0x2b0854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17088 << 16));
    // 0x2b0858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b085c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b085cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0860: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b0860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b0864: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b0864u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0868: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b0868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b086c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B086Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B086Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0874u;
}
