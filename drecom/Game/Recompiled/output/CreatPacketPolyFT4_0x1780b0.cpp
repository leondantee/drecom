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

// Function: CreatPacketPolyFT4
// Address: 0x1780b0 - 0x17827c
void CreatPacketPolyFT4_0x1780b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPacketPolyFT4_0x1780b0");
#endif

    ctx->pc = 0x1780b0u;

    // 0x1780b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1780b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1780b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1780b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1780b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1780b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1780bc: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x1780bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x1780c0: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x1780c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1780c4: 0x3c02b400  lui         $v0, 0xB400
    ctx->pc = 0x1780c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46080 << 16));
    // 0x1780c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1780c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1780cc: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1780ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1780d0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1780d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1780d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1780d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1780d8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1780d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1780dc: 0x3c022424  lui         $v0, 0x2424
    ctx->pc = 0x1780dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9252 << 16));
    // 0x1780e0: 0x34432170  ori         $v1, $v0, 0x2170
    ctx->pc = 0x1780e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8560);
    // 0x1780e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1780e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1780e8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1780e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1780ec: 0x24030424  addiu       $v1, $zero, 0x424
    ctx->pc = 0x1780ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1060));
    // 0x1780f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1780f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1780f4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1780f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1780f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1780f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1780fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1780fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178100: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178104: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x178104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x178108: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x178108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x17810c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17810cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x178110: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x178110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x178114: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178118: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x178118u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x17811c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x17811cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x178120: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x178120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x178124: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x178124u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178128: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17812c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x17812cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x178130: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178134: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178138: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x17813c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x17813cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x178140: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178144: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178148: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x178148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17814c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17814cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178154: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178158: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x178158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17815c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x17815cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178160: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178164: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x178164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x178168: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x178168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17816c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178170: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x178170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x178174: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178178: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17817c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x17817cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178180: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x178180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x178184: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178188: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17818c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17818cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x178190: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x178190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x178194: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178198: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x17819c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x17819cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1781a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1781a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1781a4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1781a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1781a8: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1781a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1781ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1781acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1781b0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1781b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1781b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1781b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1781b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1781b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1781bc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1781bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1781c0: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x1781c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1781c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1781c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1781c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1781c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1781cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1781ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1781d0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1781d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1781d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1781d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1781d8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1781d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1781dc: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1781dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1781e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1781e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1781e4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1781e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1781e8: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1781e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1781ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1781ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1781f0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1781f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1781f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1781f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1781f8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1781f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1781fc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1781fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178200: 0x2602003c  addiu       $v0, $s0, 0x3C
    ctx->pc = 0x178200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x178204: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178208: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17820c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17820cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x178210: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x178210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x178214: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178218: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x17821c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x17821cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178220: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178224: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x178224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x178228: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x178228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17822c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17822cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178230: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x178230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x178234: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178238: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17823c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x17823cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178240: 0x2602004c  addiu       $v0, $s0, 0x4C
    ctx->pc = 0x178240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x178244: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178248: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17824c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17824cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x178250: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x178250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x178254: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178258: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x17825c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178260: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178264: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178268: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17826c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17826cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178270: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x178270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x178274: 0x3e00008  jr          $ra
    ctx->pc = 0x178274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17827Cu;
}
