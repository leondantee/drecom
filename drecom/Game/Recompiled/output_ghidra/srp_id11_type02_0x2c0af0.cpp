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

// Function: srp_id11_type02
// Address: 0x2c0af0 - 0x2c0bcc
void srp_id11_type02_0x2c0af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id11_type02_0x2c0af0");
#endif

    switch (ctx->pc) {
        case 0x2c0b78u: goto label_2c0b78;
        default: break;
    }

    ctx->pc = 0x2c0af0u;

    // 0x2c0af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c0af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c0af4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c0af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c0af8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c0af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c0afc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c0afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c0b00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0b04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0b08: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c0b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c0b0c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2c0b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2c0b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0b14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0b18: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c0b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c0b1c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2c0b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2c0b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0b24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0b28: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c0b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c0b2c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c0b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c0b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0b34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0b38: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c0b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c0b3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0b40: 0xa0400368  sb          $zero, 0x368($v0)
    ctx->pc = 0x2c0b40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 872), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0b44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0b48: 0xa0400342  sb          $zero, 0x342($v0)
    ctx->pc = 0x2c0b48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0b4c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c0b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c0b50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0b54: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c0b54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0b58: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c0b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c0b5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0b60: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c0b60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0b64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c0b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0b68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0b6c: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c0b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0b70: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C0B70u;
    SET_GPR_U32(ctx, 31, 0x2C0B78u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C0B70u, 0x2C0B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0B78u;
label_2c0b78:
    // 0x2c0b78: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2c0b78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c0b7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c0b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c0b80: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x2c0b80u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c0b84: 0x0  nop
    ctx->pc = 0x2c0b84u;
    // NOP
    // 0x2c0b88: 0x0  nop
    ctx->pc = 0x2c0b88u;
    // NOP
    // 0x2c0b8c: 0x1810  mfhi        $v1
    ctx->pc = 0x2c0b8cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2c0b90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c0b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c0b94: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2c0b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c0b98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0b9c: 0xa0640368  sb          $a0, 0x368($v1)
    ctx->pc = 0x2c0b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 872), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0ba0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c0ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0ba4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0ba8: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c0ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0bac: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2c0bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2c0bb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0bb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0bb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0bb8: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c0bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c0bbc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c0bbcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0bc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c0bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c0bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0BCCu;
}
