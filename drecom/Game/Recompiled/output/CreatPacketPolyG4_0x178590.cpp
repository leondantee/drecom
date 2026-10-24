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

// Function: CreatPacketPolyG4
// Address: 0x178590 - 0x17873c
void CreatPacketPolyG4_0x178590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPacketPolyG4_0x178590");
#endif

    ctx->pc = 0x178590u;

    // 0x178590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178594: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178598: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x178598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17859c: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x17859cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x1785a0: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x1785a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1785a4: 0x3c029400  lui         $v0, 0x9400
    ctx->pc = 0x1785a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37888 << 16));
    // 0x1785a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1785a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1785ac: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1785acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1785b0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1785b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1785b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1785b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1785b8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1785b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1785bc: 0x3c021414  lui         $v0, 0x1414
    ctx->pc = 0x1785bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5140 << 16));
    // 0x1785c0: 0x34431410  ori         $v1, $v0, 0x1410
    ctx->pc = 0x1785c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5136);
    // 0x1785c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1785c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1785c8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1785c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1785cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1785ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1785d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1785d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1785d4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1785d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1785d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1785d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1785dc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1785dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1785e0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1785e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1785e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1785e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1785e8: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x1785e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1785ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1785ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1785f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1785f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1785f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1785f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1785f8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1785f8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1785fc: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x1785fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x178600: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178604: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178608: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x178608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x17860c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17860cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178614: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178618: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x178618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x17861c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17861cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178620: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178624: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178628: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x178628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x17862c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17862cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178630: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178634: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x178634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x178638: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x178638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17863c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178640: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x178644: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x178644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x178648: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17864c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178650: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x178650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x178654: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17865c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178660: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x178660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x178664: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178668: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17866c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x17866cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178670: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x178670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x178674: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178678: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17867c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17867cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x178680: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x178680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x178684: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178688: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x17868c: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x17868cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x178690: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178694: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178698: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x178698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x17869c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17869cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1786a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1786a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1786a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1786a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1786a8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1786a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1786ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1786acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1786b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1786b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1786b4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1786b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1786b8: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x1786b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1786bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1786bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1786c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1786c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1786c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1786c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1786c8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1786c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1786cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1786ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1786d0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1786d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1786d4: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x1786d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1786d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1786d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1786dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1786dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1786e0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1786e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1786e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1786e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1786e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1786e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1786ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1786ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1786f0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1786f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1786f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1786f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1786f8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1786f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1786fc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1786fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178700: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x178700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x178704: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178708: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17870c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17870cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x178710: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x178710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x178714: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178718: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x17871c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178720: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178724: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178728: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17872c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17872cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178730: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x178730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x178734: 0x3e00008  jr          $ra
    ctx->pc = 0x178734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17873Cu;
}
