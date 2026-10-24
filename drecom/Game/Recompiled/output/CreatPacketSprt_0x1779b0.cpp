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

// Function: CreatPacketSprt
// Address: 0x1779b0 - 0x177b50
void CreatPacketSprt_0x1779b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPacketSprt_0x1779b0");
#endif

    ctx->pc = 0x1779b0u;

    // 0x1779b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1779b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1779b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1779b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1779b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1779b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1779bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1779bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1779c0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1779c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1779c4: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x1779c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1779c8: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x1779c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x1779cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1779ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1779d0: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1779d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1779d4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1779d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1779d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1779d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1779dc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1779dcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1779e0: 0x3c020424  lui         $v0, 0x424
    ctx->pc = 0x1779e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1060 << 16));
    // 0x1779e4: 0x34432710  ori         $v1, $v0, 0x2710
    ctx->pc = 0x1779e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10000);
    // 0x1779e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1779e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1779ec: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1779ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1779f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1779f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1779f4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1779f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1779f8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1779f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1779fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1779fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x177a00: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x177a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x177a04: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x177a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177a08: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x177a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x177a0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177a10: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177a10u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x177a14: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x177a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x177a18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177a1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177a20: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x177a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x177a24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x177a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177a28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177a2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177a30: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x177a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x177a34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177a38: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177a3c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x177a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x177a40: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x177a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x177a44: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x177A44u;
    {
        const bool branch_taken_0x177a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177a44) {
            ctx->pc = 0x177A98u;
            goto label_177a98;
        }
    }
    ctx->pc = 0x177A4Cu;
    // 0x177a4c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x177a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x177a50: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x177a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x177a54: 0xdc510000  ld          $s1, 0x0($v0)
    ctx->pc = 0x177a54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177a58: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x177a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x177a5c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x177a5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x177a60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177a64: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x177a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x177a68: 0x11103e  dsrl32      $v0, $s1, 0
    ctx->pc = 0x177a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x177a6c: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x177a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x177a70: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x177a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x177a74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x177a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177a78: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x177a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x177a7c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x177a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x177a80: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x177a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177a84: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x177a84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x177a88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177a8c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x177a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x177a90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x177A90u;
    {
        const bool branch_taken_0x177a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177a90) {
            ctx->pc = 0x177AACu;
            goto label_177aac;
        }
    }
    ctx->pc = 0x177A98u;
label_177a98:
    // 0x177a98: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x177a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x177a9c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x177a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x177aa0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x177aa0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177aa4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177aa8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_177aac:
    // 0x177aac: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x177aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177ab0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177ab4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x177ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x177ab8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x177ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177abc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177ac0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x177ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x177ac4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177ac8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177acc: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x177accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x177ad0: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x177ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x177ad4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177ad8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177adc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x177adcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x177ae0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x177ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x177ae4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177ae8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x177ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x177aec: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x177aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177af0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177af4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x177af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x177af8: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x177af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177afc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177b00: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x177b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x177b04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177b08: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177b0c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x177b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x177b10: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x177b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x177b14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177b18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177b1c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x177b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x177b20: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x177b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x177b24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177b28: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x177b28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x177b2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177b30: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177b34: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x177b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x177b38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177b3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177b40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177b44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x177b44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x177b48: 0x3e00008  jr          $ra
    ctx->pc = 0x177B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177B50u;
}
