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

// Function: CreatPacketPolyF3
// Address: 0x177ce0 - 0x177dec
void CreatPacketPolyF3_0x177ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPacketPolyF3_0x177ce0");
#endif

    ctx->pc = 0x177ce0u;

    // 0x177ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177ce4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177ce8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x177ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x177cec: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x177cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x177cf0: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x177cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177cf4: 0x3c025400  lui         $v0, 0x5400
    ctx->pc = 0x177cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21504 << 16));
    // 0x177cf8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x177cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177cfc: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x177cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x177d00: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x177d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177d04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177d08: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177d08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x177d0c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x177d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x177d10: 0x34434410  ori         $v1, $v0, 0x4410
    ctx->pc = 0x177d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17424);
    // 0x177d14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177d18: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x177d18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x177d1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177d20: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177d24: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x177d28: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x177d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x177d2c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x177d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x177d30: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x177d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177d34: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x177d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x177d38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177d3c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x177d40: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x177d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x177d44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177d48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177d4c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x177d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x177d50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x177d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177d58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177d5c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x177d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x177d60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177d64: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177d68: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x177d6c: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x177d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x177d70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177d74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177d78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x177d78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x177d7c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x177d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x177d80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177d84: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x177d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x177d88: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x177d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x177d8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177d90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177d94: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x177d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x177d98: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x177d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x177d9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177da0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x177da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x177da4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177da8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177dac: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x177db0: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x177db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x177db4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177db8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177dbc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x177dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x177dc0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x177dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x177dc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177dc8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x177dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x177dcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177dd0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177dd4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x177dd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177ddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177de0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x177de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x177de4: 0x3e00008  jr          $ra
    ctx->pc = 0x177DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177DECu;
}
