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

// Function: CreatPacketPolyGT3
// Address: 0x178740 - 0x178918
void CreatPacketPolyGT3_0x178740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPacketPolyGT3_0x178740");
#endif

    ctx->pc = 0x178740u;

    // 0x178740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178744: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178748: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x178748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17874c: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x17874cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x178750: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x178750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178754: 0x3c02b400  lui         $v0, 0xB400
    ctx->pc = 0x178754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46080 << 16));
    // 0x178758: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x178758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17875c: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x17875cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x178760: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x178760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x178764: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178768: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x178768u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x17876c: 0x3c024214  lui         $v0, 0x4214
    ctx->pc = 0x17876cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16916 << 16));
    // 0x178770: 0x34432170  ori         $v1, $v0, 0x2170
    ctx->pc = 0x178770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8560);
    // 0x178774: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178778: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x178778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x17877c: 0x24030421  addiu       $v1, $zero, 0x421
    ctx->pc = 0x17877cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1057));
    // 0x178780: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178784: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x178784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x178788: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17878c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x17878cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178790: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178794: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x178794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x178798: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x178798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x17879c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17879cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1787a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1787a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1787a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1787a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1787a8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1787a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1787ac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1787acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1787b0: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1787b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1787b4: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1787b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1787b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1787b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1787bc: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1787bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1787c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1787c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1787c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1787c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1787c8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1787c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1787cc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1787ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1787d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1787d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1787d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1787d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1787d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1787d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1787dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1787dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1787e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1787e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1787e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1787e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1787e8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1787e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1787ec: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1787ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1787f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1787f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1787f4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1787f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1787f8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1787f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1787fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1787fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178800: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x178800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x178804: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178808: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17880c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x17880cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178810: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x178810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x178814: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178818: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17881c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17881cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x178820: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x178820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x178824: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178828: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x17882c: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x17882cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x178830: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178834: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178838: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x178838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x17883c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17883cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178844: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178848: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x178848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x17884c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178850: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178854: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178858: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x178858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17885c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178860: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x178860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x178864: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x178864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178868: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17886c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x17886cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x178870: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x178870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x178874: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178878: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17887c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x17887cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x178880: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x178880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x178884: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178888: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x178888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x17888c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17888cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178890: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178894: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178898: 0x26020038  addiu       $v0, $s0, 0x38
    ctx->pc = 0x178898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x17889c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17889cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1788a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1788a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1788a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1788a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1788a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1788a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1788ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1788acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1788b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1788b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1788b4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1788b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1788b8: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x1788b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1788bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1788bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1788c0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1788c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1788c4: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x1788c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1788c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1788c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1788cc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1788ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1788d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1788d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1788d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1788d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1788d8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1788d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1788dc: 0x26020044  addiu       $v0, $s0, 0x44
    ctx->pc = 0x1788dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x1788e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1788e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1788e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1788e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1788e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1788e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1788ec: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1788ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1788f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1788f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1788f4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1788f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1788f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1788f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1788fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1788fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178900: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178904: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178908: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17890c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17890cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x178910: 0x3e00008  jr          $ra
    ctx->pc = 0x178910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178918u;
}
