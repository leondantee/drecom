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

// Function: srp_id15_type00
// Address: 0x2c0d20 - 0x2c0df0
void srp_id15_type00_0x2c0d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id15_type00_0x2c0d20");
#endif

    switch (ctx->pc) {
        case 0x2c0d64u: goto label_2c0d64;
        default: break;
    }

    ctx->pc = 0x2c0d20u;

    // 0x2c0d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c0d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c0d24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c0d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c0d28: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c0d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c0d2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c0d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c0d30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0d34: 0xa0430342  sb          $v1, 0x342($v0)
    ctx->pc = 0x2c0d34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0d38: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c0d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c0d3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0d40: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c0d40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0d44: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c0d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c0d48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0d4c: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c0d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0d50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c0d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0d54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0d58: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c0d58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0d5c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C0D5Cu;
    SET_GPR_U32(ctx, 31, 0x2C0D64u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C0D5Cu, 0x2C0D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0D64u;
label_2c0d64:
    // 0x2c0d64: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2c0d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2c0d68: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c0d68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0d6c: 0x0  nop
    ctx->pc = 0x2c0d6cu;
    // NOP
    // 0x2c0d70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c0d70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c0d74: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2c0d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2c0d78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0d78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0d7c: 0x0  nop
    ctx->pc = 0x2c0d7cu;
    // NOP
    // 0x2c0d80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c0d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c0d84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0d88: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c0d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c0d8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c0d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0d90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0d94: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c0d94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0d98: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x2c0d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2c0d9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0da0: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x2c0da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x2c0da4: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2c0da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2c0da8: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2c0da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2c0dac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0dacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0db0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0db4: 0xe46002e0  swc1        $f0, 0x2E0($v1)
    ctx->pc = 0x2c0db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 736), bits); }
    // 0x2c0db8: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2c0db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2c0dbc: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2c0dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2c0dc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0dc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0dc4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0dc8: 0xe46002e4  swc1        $f0, 0x2E4($v1)
    ctx->pc = 0x2c0dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 740), bits); }
    // 0x2c0dcc: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2c0dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2c0dd0: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2c0dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2c0dd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0dd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0dd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0ddc: 0xe46002e8  swc1        $f0, 0x2E8($v1)
    ctx->pc = 0x2c0ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 744), bits); }
    // 0x2c0de0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c0de0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0de4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c0de4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c0de8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0DF0u;
}
