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

// Function: CreatPacketPolyGT4
// Address: 0x178920 - 0x178b5c
void CreatPacketPolyGT4_0x178920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPacketPolyGT4_0x178920");
#endif

    ctx->pc = 0x178920u;

    // 0x178920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178924: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178928: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x178928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17892c: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x17892cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x178930: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x178930u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178934: 0x3c02e400  lui         $v0, 0xE400
    ctx->pc = 0x178934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58368 << 16));
    // 0x178938: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x178938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17893c: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x17893cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x178940: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x178940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x178944: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178948: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x178948u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x17894c: 0x3c024214  lui         $v0, 0x4214
    ctx->pc = 0x17894cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16916 << 16));
    // 0x178950: 0x34432170  ori         $v1, $v0, 0x2170
    ctx->pc = 0x178950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8560);
    // 0x178954: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178958: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x178958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x17895c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17895cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x178960: 0x34431421  ori         $v1, $v0, 0x1421
    ctx->pc = 0x178960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5153);
    // 0x178964: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178968: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x178968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x17896c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178970: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178974: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178978: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x178978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17897c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x17897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x178980: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x178980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x178984: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x178984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x178988: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17898c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x17898cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x178990: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x178990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x178994: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x178994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x178998: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x178998u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17899c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17899cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1789a0: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1789a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1789a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1789a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1789a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1789a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1789ac: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1789acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1789b0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1789b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1789b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1789b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1789b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1789b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1789bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1789bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1789c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1789c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1789c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1789c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1789c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1789c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1789cc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1789ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1789d0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1789d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1789d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1789d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1789d8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1789d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1789dc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1789dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1789e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1789e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1789e4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1789e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1789e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1789e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1789ec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1789ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1789f0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1789f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1789f4: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x1789f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1789f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1789f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1789fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1789fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178a00: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x178a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x178a04: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x178a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x178a08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178a0c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x178a10: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x178a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x178a14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178a18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178a1c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x178a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x178a20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178a28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178a2c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x178a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x178a30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178a34: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178a38: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178a3c: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x178a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178a40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178a44: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x178a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x178a48: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x178a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178a4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178a50: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x178a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x178a54: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x178a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x178a58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178a5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178a60: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x178a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x178a64: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x178a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x178a68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178a6c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x178a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x178a70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178a74: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178a78: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178a7c: 0x26020038  addiu       $v0, $s0, 0x38
    ctx->pc = 0x178a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x178a80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178a84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178a88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x178a88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x178a8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178a94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178a98: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x178a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x178a9c: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x178a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178aa0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178aa4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x178aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x178aa8: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x178aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178aac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178ab0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x178ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x178ab4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178ab8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178abc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178ac0: 0x26020044  addiu       $v0, $s0, 0x44
    ctx->pc = 0x178ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x178ac4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178ac8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178acc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x178accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x178ad0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x178ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x178ad4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178ad8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x178adc: 0x2602004c  addiu       $v0, $s0, 0x4C
    ctx->pc = 0x178adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x178ae0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178ae4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178ae8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x178ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x178aec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178af0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178af4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178af8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x178af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x178afc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178b00: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178b04: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178b08: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x178b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178b0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178b10: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x178b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x178b14: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x178b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178b18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178b1c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x178b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x178b20: 0x26020058  addiu       $v0, $s0, 0x58
    ctx->pc = 0x178b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x178b24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178b28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178b2c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x178b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x178b30: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x178b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x178b34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178b38: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x178b38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x178b3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178b40: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178b44: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178b48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178b50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x178b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x178b54: 0x3e00008  jr          $ra
    ctx->pc = 0x178B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178B5Cu;
}
