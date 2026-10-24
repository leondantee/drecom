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

// Function: e2d_id00_type06
// Address: 0x2a98f0 - 0x2a99c8
void e2d_id00_type06_0x2a98f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type06_0x2a98f0");
#endif

    switch (ctx->pc) {
        case 0x2a9904u: goto label_2a9904;
        case 0x2a9980u: goto label_2a9980;
        default: break;
    }

    ctx->pc = 0x2a98f0u;

    // 0x2a98f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a98f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a98f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2a98f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2a98f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2a98f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2a98fc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2A98FCu;
    SET_GPR_U32(ctx, 31, 0x2A9904u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2A98FCu, 0x2A9904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9904u;
label_2a9904:
    // 0x2a9904: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2a9904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2a9908: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a9908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a990c: 0x0  nop
    ctx->pc = 0x2a990cu;
    // NOP
    // 0x2a9910: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a9910u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9914: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2a9914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2a9918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a991c: 0x0  nop
    ctx->pc = 0x2a991cu;
    // NOP
    // 0x2a9920: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a9924: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9928: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2a9928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2a992c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2a992cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a9930: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9934: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2a9934u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a9938: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2a9938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2a993c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a993cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9940: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9944: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2a9944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2a9948: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2a9948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2a994c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a994cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9950: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9954: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2a9954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2a9958: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2a9958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2a995c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a995cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9960: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9964: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2a9964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2a9968: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2a9968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2a996c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a996cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9970: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9974: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2a9974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2a9978: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A9978u;
    SET_GPR_U32(ctx, 31, 0x2A9980u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A9978u, 0x2A9980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9980u;
label_2a9980:
    // 0x2a9980: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2a9980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2a9984: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2a9984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2a9988: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a9988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a998c: 0x0  nop
    ctx->pc = 0x2a998cu;
    // NOP
    // 0x2a9990: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a9990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9994: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a9994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a999c: 0x0  nop
    ctx->pc = 0x2a999cu;
    // NOP
    // 0x2a99a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a99a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a99a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a99a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a99a8: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2a99a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2a99ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a99acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a99b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a99b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a99b4: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2a99b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a99b8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2a99b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a99bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a99bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a99c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A99C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A99C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A99C8u;
}
