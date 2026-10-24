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

// Function: CreatPacketPolyFT4UV
// Address: 0x178280 - 0x17842c
void CreatPacketPolyFT4UV_0x178280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPacketPolyFT4UV_0x178280");
#endif

    ctx->pc = 0x178280u;

    // 0x178280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178284: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x178288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17828c: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x17828cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x178290: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x178290u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178294: 0x3c02b400  lui         $v0, 0xB400
    ctx->pc = 0x178294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46080 << 16));
    // 0x178298: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x178298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17829c: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x17829cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1782a0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1782a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1782a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1782a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1782a8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1782a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1782ac: 0x3c023434  lui         $v0, 0x3434
    ctx->pc = 0x1782acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13364 << 16));
    // 0x1782b0: 0x34433170  ori         $v1, $v0, 0x3170
    ctx->pc = 0x1782b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12656);
    // 0x1782b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1782b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1782b8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1782b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1782bc: 0x24030434  addiu       $v1, $zero, 0x434
    ctx->pc = 0x1782bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1076));
    // 0x1782c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1782c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1782c4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1782c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1782c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1782c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1782cc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1782ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1782d0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1782d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1782d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1782d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1782d8: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x1782d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1782dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1782dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1782e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1782e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1782e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1782e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1782e8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1782e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1782ec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1782ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1782f0: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1782f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1782f4: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1782f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1782f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1782f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1782fc: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1782fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x178300: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178304: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178308: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x17830c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x17830cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x178310: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178314: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178318: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x178318u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17831c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17831cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178324: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178328: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x178328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17832c: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x17832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x178330: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178334: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178338: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x178338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x17833c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17833cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178340: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178344: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178348: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x178348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x17834c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17834cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178350: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178354: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x178354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x178358: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x178358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17835c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17835cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178360: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x178364: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x178364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x178368: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17836c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17836cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178370: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x178370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x178374: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178378: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17837c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x17837cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178380: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x178380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x178384: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178388: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17838c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17838cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x178390: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x178390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x178394: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178398: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x17839c: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x17839cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1783a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1783a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1783a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1783a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1783a8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1783a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1783ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1783acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1783b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1783b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1783b4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1783b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1783b8: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1783b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1783bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1783bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1783c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1783c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1783c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1783c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1783c8: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1783c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1783cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1783ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1783d0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1783d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1783d4: 0x26020038  addiu       $v0, $s0, 0x38
    ctx->pc = 0x1783d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1783d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1783d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1783dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1783dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1783e0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1783e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1783e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1783e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1783e8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1783e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1783ec: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1783ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1783f0: 0x2602003c  addiu       $v0, $s0, 0x3C
    ctx->pc = 0x1783f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x1783f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1783f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1783f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1783f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1783fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1783fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x178400: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x178400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x178404: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178408: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x17840c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17840cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178410: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178414: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178418: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17841c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17841cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178420: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x178420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x178424: 0x3e00008  jr          $ra
    ctx->pc = 0x178424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17842Cu;
}
