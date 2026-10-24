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

// Function: srp_id1a_type00
// Address: 0x2c1940 - 0x2c1a34
void srp_id1a_type00_0x2c1940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id1a_type00_0x2c1940");
#endif

    switch (ctx->pc) {
        case 0x2c19acu: goto label_2c19ac;
        case 0x2c19fcu: goto label_2c19fc;
        default: break;
    }

    ctx->pc = 0x2c1940u;

    // 0x2c1940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c1940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c1944: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c1944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c1948: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c1948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c194c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c194cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c1950: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1954: 0xa043034e  sb          $v1, 0x34E($v0)
    ctx->pc = 0x2c1954u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 846), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1958: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c1958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c195c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1960: 0xe4400150  swc1        $f0, 0x150($v0)
    ctx->pc = 0x2c1960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 336), bits); }
    // 0x2c1964: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c1964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c1968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c196c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c196cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1970: 0xe4400154  swc1        $f0, 0x154($v0)
    ctx->pc = 0x2c1970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 340), bits); }
    // 0x2c1974: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2c1974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c1978: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c197c: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c197cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1980: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2c1980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c1984: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1988: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c1988u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c198c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c198cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1990: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1994: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c1994u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1998: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2c1998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c199c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c19a0: 0xa0430369  sb          $v1, 0x369($v0)
    ctx->pc = 0x2c19a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 873), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c19a4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C19A4u;
    SET_GPR_U32(ctx, 31, 0x2C19ACu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C19A4u, 0x2C19ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C19ACu;
label_2c19ac:
    // 0x2c19ac: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c19acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c19b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c19b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c19b4: 0x0  nop
    ctx->pc = 0x2c19b4u;
    // NOP
    // 0x2c19b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c19b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c19bc: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2c19bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2c19c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c19c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c19c4: 0x0  nop
    ctx->pc = 0x2c19c4u;
    // NOP
    // 0x2c19c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c19c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c19cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c19ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c19d0: 0xe4400338  swc1        $f0, 0x338($v0)
    ctx->pc = 0x2c19d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 824), bits); }
    // 0x2c19d4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2c19d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2c19d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c19d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c19dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c19dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c19e0: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c19e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c19e4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c19e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c19e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c19e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c19ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c19ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c19f0: 0xe4400274  swc1        $f0, 0x274($v0)
    ctx->pc = 0x2c19f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x2c19f4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C19F4u;
    SET_GPR_U32(ctx, 31, 0x2C19FCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C19F4u, 0x2C19FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C19FCu;
label_2c19fc:
    // 0x2c19fc: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x2c19fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x2c1a00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c1a00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1a04: 0x0  nop
    ctx->pc = 0x2c1a04u;
    // NOP
    // 0x2c1a08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c1a08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1a0c: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2c1a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2c1a10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1a14: 0x0  nop
    ctx->pc = 0x2c1a14u;
    // NOP
    // 0x2c1a18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c1a18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c1a1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1a20: 0xe4600278  swc1        $f0, 0x278($v1)
    ctx->pc = 0x2c1a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 632), bits); }
    // 0x2c1a24: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c1a24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1a28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c1a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c1a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1A34u;
}
