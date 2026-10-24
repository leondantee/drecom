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

// Function: CreatPacketPolyF4
// Address: 0x177df0 - 0x177f18
void CreatPacketPolyF4_0x177df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPacketPolyF4_0x177df0");
#endif

    ctx->pc = 0x177df0u;

    // 0x177df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177df4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177df8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x177df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x177dfc: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x177dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x177e00: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x177e00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177e04: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x177e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x177e08: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x177e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177e0c: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x177e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x177e10: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x177e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177e14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177e18: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177e18u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x177e1c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x177e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x177e20: 0x34434410  ori         $v1, $v0, 0x4410
    ctx->pc = 0x177e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17424);
    // 0x177e24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177e28: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x177e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x177e2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177e30: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177e34: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x177e38: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x177e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x177e3c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x177e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x177e40: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x177e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177e44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x177e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x177e48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177e4c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x177e50: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x177e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x177e54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177e58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177e5c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x177e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x177e60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x177e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177e68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177e6c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x177e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x177e70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177e74: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177e78: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x177e7c: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x177e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x177e80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177e84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177e88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x177e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x177e8c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x177e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x177e90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177e94: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x177e94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x177e98: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x177e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x177e9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177ea0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177ea4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x177ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x177ea8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x177ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x177eac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177eb0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x177eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x177eb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177eb8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177ebc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x177ec0: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x177ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x177ec4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177ec8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177ecc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x177eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x177ed0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x177ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x177ed4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177ed8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x177ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x177edc: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x177edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x177ee0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177ee4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177ee8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x177ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x177eec: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x177eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x177ef0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177ef4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x177ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x177ef8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177efc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177f00: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x177f04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177f08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177f0c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x177f0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x177f10: 0x3e00008  jr          $ra
    ctx->pc = 0x177F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177F18u;
}
