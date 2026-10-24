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

// Function: CreatPacketPolyFT3
// Address: 0x177f20 - 0x1780ac
void CreatPacketPolyFT3_0x177f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPacketPolyFT3_0x177f20");
#endif

    ctx->pc = 0x177f20u;

    // 0x177f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177f24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177f28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x177f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x177f2c: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x177f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x177f30: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x177f30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177f34: 0x3c029400  lui         $v0, 0x9400
    ctx->pc = 0x177f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37888 << 16));
    // 0x177f38: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x177f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177f3c: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x177f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x177f40: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x177f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177f44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177f48: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177f48u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x177f4c: 0x3c022424  lui         $v0, 0x2424
    ctx->pc = 0x177f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9252 << 16));
    // 0x177f50: 0x34432170  ori         $v1, $v0, 0x2170
    ctx->pc = 0x177f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8560);
    // 0x177f54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177f58: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x177f58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x177f5c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x177f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x177f60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177f64: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x177f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x177f68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177f6c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177f70: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x177f74: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x177f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x177f78: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x177f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x177f7c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x177f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177f80: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x177f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x177f84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177f88: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177f88u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x177f8c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x177f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x177f90: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x177f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x177f94: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x177f94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177f98: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177f9c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x177f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x177fa0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177fa4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177fa8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x177fac: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x177facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x177fb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177fb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177fb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x177fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x177fbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x177fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177fc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177fc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177fc8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x177fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x177fcc: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x177fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177fd0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177fd4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x177fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x177fd8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x177fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177fdc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177fe0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x177fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x177fe4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177fe8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177fec: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x177ff0: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x177ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x177ff4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177ff8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177ffc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x177ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x178000: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x178000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x178004: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178008: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x17800c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x17800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178010: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178014: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x178014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x178018: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x178018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17801c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178020: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x178020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x178024: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178028: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17802c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x17802cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178030: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x178030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x178034: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178038: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17803c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17803cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x178040: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x178040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x178044: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178048: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x17804c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x17804cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178050: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178054: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x178054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x178058: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x178058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17805c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178060: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x178060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x178064: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178068: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17806c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x17806cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178070: 0x2602003c  addiu       $v0, $s0, 0x3C
    ctx->pc = 0x178070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x178074: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178078: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17807c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17807cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x178080: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x178080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x178084: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178088: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x17808c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178090: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x178090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178094: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178098: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17809c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17809cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1780a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1780a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1780a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1780A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1780A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1780ACu;
}
