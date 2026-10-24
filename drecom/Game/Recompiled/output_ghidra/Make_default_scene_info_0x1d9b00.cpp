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

// Function: Make_default_scene_info
// Address: 0x1d9b00 - 0x1d9bc4
void Make_default_scene_info_0x1d9b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Make_default_scene_info_0x1d9b00");
#endif

    ctx->pc = 0x1d9b00u;

    // 0x1d9b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9b04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9b08: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1d9b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1d9b0c: 0x2470fd60  addiu       $s0, $v1, -0x2A0
    ctx->pc = 0x1d9b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966624));
    // 0x1d9b10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9b14: 0x8c24fd60  lw          $a0, -0x2A0($at)
    ctx->pc = 0x1d9b14u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFD60u));
    // 0x1d9b18: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d9b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d9b1c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d9b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d9b20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9b24: 0xac23fd60  sw          $v1, -0x2A0($at)
    ctx->pc = 0x1d9b24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CFD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFD60u, _value); } while (0);
    // 0x1d9b28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9b2c: 0x8c24fd60  lw          $a0, -0x2A0($at)
    ctx->pc = 0x1d9b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFD60u));
    // 0x1d9b30: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1d9b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1d9b34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d9b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d9b38: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d9b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d9b3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9b40: 0xac23fd60  sw          $v1, -0x2A0($at)
    ctx->pc = 0x1d9b40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CFD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFD60u, _value); } while (0);
    // 0x1d9b44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9b48: 0x8c24fd60  lw          $a0, -0x2A0($at)
    ctx->pc = 0x1d9b48u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFD60u));
    // 0x1d9b4c: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1d9b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1d9b50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d9b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d9b54: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d9b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d9b58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9b5c: 0xac23fd60  sw          $v1, -0x2A0($at)
    ctx->pc = 0x1d9b5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CFD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFD60u, _value); } while (0);
    // 0x1d9b60: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d9b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d9b64: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1d9b64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d9b68: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x1d9b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1d9b6c: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x1d9b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d9b70: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x1d9b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1d9b74: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x1d9b74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d9b78: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1d9b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1d9b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d9b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9b80: 0x0  nop
    ctx->pc = 0x1d9b80u;
    // NOP
    // 0x1d9b84: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1d9b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1d9b88: 0x3c034892  lui         $v1, 0x4892
    ctx->pc = 0x1d9b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18578 << 16));
    // 0x1d9b8c: 0x34637c00  ori         $v1, $v1, 0x7C00
    ctx->pc = 0x1d9b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31744);
    // 0x1d9b90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d9b90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9b94: 0x0  nop
    ctx->pc = 0x1d9b94u;
    // NOP
    // 0x1d9b98: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1d9b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1d9b9c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1d9b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d9ba0: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1d9ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d9ba4: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1d9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1d9ba8: 0xa2030014  sb          $v1, 0x14($s0)
    ctx->pc = 0x1d9ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d9bac: 0x24037530  addiu       $v1, $zero, 0x7530
    ctx->pc = 0x1d9bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
    // 0x1d9bb0: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x1d9bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d9bb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9bb8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d9bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d9bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9BC4u;
}
