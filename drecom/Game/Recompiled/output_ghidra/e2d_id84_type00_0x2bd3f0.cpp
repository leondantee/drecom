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

// Function: e2d_id84_type00
// Address: 0x2bd3f0 - 0x2bd628
void e2d_id84_type00_0x2bd3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id84_type00_0x2bd3f0");
#endif

    switch (ctx->pc) {
        case 0x2bd404u: goto label_2bd404;
        case 0x2bd448u: goto label_2bd448;
        case 0x2bd470u: goto label_2bd470;
        case 0x2bd4a8u: goto label_2bd4a8;
        default: break;
    }

    ctx->pc = 0x2bd3f0u;

    // 0x2bd3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bd3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bd3f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bd3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bd3f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bd3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bd3fc: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BD3FCu;
    SET_GPR_U32(ctx, 31, 0x2BD404u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BD3FCu, 0x2BD404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD404u;
label_2bd404:
    // 0x2bd404: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2bd404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2bd408: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bd408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd40c: 0x0  nop
    ctx->pc = 0x2bd40cu;
    // NOP
    // 0x2bd410: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bd410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bd414: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2bd414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2bd418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd41c: 0x0  nop
    ctx->pc = 0x2bd41cu;
    // NOP
    // 0x2bd420: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd420u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd424: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd428: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2bd428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2bd42c: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2bd42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2bd430: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2bd430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2bd434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd438: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd43c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2bd43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2bd440: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BD440u;
    SET_GPR_U32(ctx, 31, 0x2BD448u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BD440u, 0x2BD448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD448u;
label_2bd448:
    // 0x2bd448: 0x3c024391  lui         $v0, 0x4391
    ctx->pc = 0x2bd448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17297 << 16));
    // 0x2bd44c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bd44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd450: 0x0  nop
    ctx->pc = 0x2bd450u;
    // NOP
    // 0x2bd454: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bd454u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bd458: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd45c: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x2bd45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd460: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd464: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x2bd464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2bd468: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BD468u;
    SET_GPR_U32(ctx, 31, 0x2BD470u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BD468u, 0x2BD470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD470u;
label_2bd470:
    // 0x2bd470: 0x3c02438c  lui         $v0, 0x438C
    ctx->pc = 0x2bd470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17292 << 16));
    // 0x2bd474: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bd474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd478: 0x0  nop
    ctx->pc = 0x2bd478u;
    // NOP
    // 0x2bd47c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bd47cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bd480: 0x3c02c35c  lui         $v0, 0xC35C
    ctx->pc = 0x2bd480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50012 << 16));
    // 0x2bd484: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd488: 0x0  nop
    ctx->pc = 0x2bd488u;
    // NOP
    // 0x2bd48c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2bd48cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd490: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd494: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x2bd494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd498: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd49c: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x2bd49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x2bd4a0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BD4A0u;
    SET_GPR_U32(ctx, 31, 0x2BD4A8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BD4A0u, 0x2BD4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD4A8u;
label_2bd4a8:
    // 0x2bd4a8: 0x3c034391  lui         $v1, 0x4391
    ctx->pc = 0x2bd4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17297 << 16));
    // 0x2bd4ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bd4acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd4b0: 0x0  nop
    ctx->pc = 0x2bd4b0u;
    // NOP
    // 0x2bd4b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bd4b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bd4b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd4bc: 0xc46000b8  lwc1        $f0, 0xB8($v1)
    ctx->pc = 0x2bd4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd4c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd4c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd4c4: 0xe46000b8  swc1        $f0, 0xB8($v1)
    ctx->pc = 0x2bd4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
    // 0x2bd4c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd4cc: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x2bd4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x2bd4d0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2bd4d0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bd4d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd4d8: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x2bd4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2bd4dc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2bd4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2bd4e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd4e4: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x2bd4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x2bd4e8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2bd4e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bd4ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd4f0: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x2bd4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x2bd4f4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2bd4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2bd4f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd4fc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bd4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bd500: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bd500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bd504: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bd504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bd508: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bd508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bd50c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bd50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bd510: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bd510u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bd514: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd518: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bd518u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bd51c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bd51cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bd520: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bd520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bd524: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bd524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bd528: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bd528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bd52c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bd52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bd530: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bd530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bd534: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd538: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bd538u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bd53c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2bd53cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bd540: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2bd540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bd544: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x2bd544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2bd548: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2bd548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bd54c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd550: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2bd550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bd554: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd558: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bd558u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bd55c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bd55cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bd560: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bd560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bd564: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bd564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bd568: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bd568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bd56c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bd56cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bd570: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd574: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bd574u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bd578: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bd578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bd57c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bd57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bd580: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bd580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bd584: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bd584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bd588: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bd588u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bd58c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bd58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bd590: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd594: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bd594u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bd598: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bd598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bd59c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2bd59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bd5a0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2bd5a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bd5a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2bd5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd5a8: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2bd5a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2bd5ac: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2bd5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2bd5b0: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2bd5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bd5b4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd5b8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bd5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bd5bc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bd5bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bd5c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bd5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bd5c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bd5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bd5c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bd5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bd5cc: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bd5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bd5d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd5d4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bd5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bd5d8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bd5d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bd5dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bd5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bd5e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bd5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bd5e4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bd5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bd5e8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bd5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bd5ec: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bd5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bd5f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd5f4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bd5f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bd5f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bd5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bd5fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2bd5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bd600: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2bd600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2bd604: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2bd604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bd608: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2bd608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd60c: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2bd60cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2bd610: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2bd610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2bd614: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2bd614u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bd618: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bd618u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd61c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bd61cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bd620: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD628u;
}
