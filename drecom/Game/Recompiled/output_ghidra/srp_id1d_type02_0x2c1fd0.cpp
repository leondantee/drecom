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

// Function: srp_id1d_type02
// Address: 0x2c1fd0 - 0x2c20ac
void srp_id1d_type02_0x2c1fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id1d_type02_0x2c1fd0");
#endif

    switch (ctx->pc) {
        case 0x2c2058u: goto label_2c2058;
        default: break;
    }

    ctx->pc = 0x2c1fd0u;

    // 0x2c1fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c1fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c1fd4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c1fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c1fd8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c1fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c1fdc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c1fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c1fe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1fe4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1fe8: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c1fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c1fec: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x2c1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x2c1ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1ff4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1ff8: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c1ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c1ffc: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x2c1ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x2c2000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2004: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2008: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c2008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c200c: 0x3c02429c  lui         $v0, 0x429C
    ctx->pc = 0x2c200cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17052 << 16));
    // 0x2c2010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2014: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2018: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c2018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c201c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c201cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2020: 0xa0400368  sb          $zero, 0x368($v0)
    ctx->pc = 0x2c2020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 872), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2024: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2028: 0xa0400342  sb          $zero, 0x342($v0)
    ctx->pc = 0x2c2028u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c202c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c202cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c2030: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2034: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c2034u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2038: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c2038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c203c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2040: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c2040u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2044: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2048: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c204c: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c204cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2050: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C2050u;
    SET_GPR_U32(ctx, 31, 0x2C2058u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C2050u, 0x2C2058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2058u;
label_2c2058:
    // 0x2c2058: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2c2058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c205c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c205cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c2060: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x2c2060u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c2064: 0x0  nop
    ctx->pc = 0x2c2064u;
    // NOP
    // 0x2c2068: 0x0  nop
    ctx->pc = 0x2c2068u;
    // NOP
    // 0x2c206c: 0x1810  mfhi        $v1
    ctx->pc = 0x2c206cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2c2070: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c2070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c2074: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2c2074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c2078: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c207c: 0xa0640368  sb          $a0, 0x368($v1)
    ctx->pc = 0x2c207cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 872), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2080: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c2080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2084: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2088: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c2088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c208c: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2c208cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2c2090: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2094: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2098: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c2098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c209c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c209cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c20a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c20a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c20a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C20A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C20A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C20ACu;
}
