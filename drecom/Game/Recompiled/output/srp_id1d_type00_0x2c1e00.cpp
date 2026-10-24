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

// Function: srp_id1d_type00
// Address: 0x2c1e00 - 0x2c1edc
void srp_id1d_type00_0x2c1e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id1d_type00_0x2c1e00");
#endif

    switch (ctx->pc) {
        case 0x2c1e88u: goto label_2c1e88;
        default: break;
    }

    ctx->pc = 0x2c1e00u;

    // 0x2c1e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c1e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c1e04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c1e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c1e08: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c1e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c1e0c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c1e10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1e14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1e18: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c1e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c1e1c: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x2c1e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x2c1e20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1e24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1e28: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c1e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c1e2c: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x2c1e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x2c1e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1e34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1e38: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c1e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c1e3c: 0x3c02429c  lui         $v0, 0x429C
    ctx->pc = 0x2c1e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17052 << 16));
    // 0x2c1e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1e44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1e48: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c1e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c1e4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1e50: 0xa0400368  sb          $zero, 0x368($v0)
    ctx->pc = 0x2c1e50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 872), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1e54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1e58: 0xa0400342  sb          $zero, 0x342($v0)
    ctx->pc = 0x2c1e58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1e5c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2c1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c1e60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1e64: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c1e64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1e68: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2c1e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c1e6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1e70: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c1e70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1e74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c1e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1e78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1e7c: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c1e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1e80: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C1E80u;
    SET_GPR_U32(ctx, 31, 0x2C1E88u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C1E80u, 0x2C1E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E88u;
label_2c1e88:
    // 0x2c1e88: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2c1e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c1e8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c1e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c1e90: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x2c1e90u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c1e94: 0x0  nop
    ctx->pc = 0x2c1e94u;
    // NOP
    // 0x2c1e98: 0x0  nop
    ctx->pc = 0x2c1e98u;
    // NOP
    // 0x2c1e9c: 0x1810  mfhi        $v1
    ctx->pc = 0x2c1e9cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2c1ea0: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x2c1ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x2c1ea4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2c1ea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c1ea8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1eac: 0xa0640368  sb          $a0, 0x368($v1)
    ctx->pc = 0x2c1eacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 872), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1eb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c1eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1eb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1eb8: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c1eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1ebc: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2c1ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2c1ec0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1ec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1ec4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1ec8: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c1ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c1ecc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c1eccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1ed0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c1ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c1ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1EDCu;
}
