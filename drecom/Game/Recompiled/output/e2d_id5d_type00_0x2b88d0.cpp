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

// Function: e2d_id5d_type00
// Address: 0x2b88d0 - 0x2b8974
void e2d_id5d_type00_0x2b88d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id5d_type00_0x2b88d0");
#endif

    switch (ctx->pc) {
        case 0x2b8924u: goto label_2b8924;
        default: break;
    }

    ctx->pc = 0x2b88d0u;

    // 0x2b88d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b88d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b88d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b88d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b88d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b88d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b88dc: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2b88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2b88e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b88e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b88e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b88e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b88e8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b88e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b88ec: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2b88ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2b88f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b88f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b88f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b88f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b88f8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b88f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b88fc: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2b88fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2b8900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8904: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8908: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b8908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b890c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b890cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8914: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8918: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b8918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b891c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2B891Cu;
    SET_GPR_U32(ctx, 31, 0x2B8924u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2B891Cu, 0x2B8924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8924u;
label_2b8924:
    // 0x2b8924: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b8924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b8928: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b8928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b892c: 0x0  nop
    ctx->pc = 0x2b892cu;
    // NOP
    // 0x2b8930: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b8930u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b8934: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x2b8934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x2b8938: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b893c: 0x0  nop
    ctx->pc = 0x2b893cu;
    // NOP
    // 0x2b8940: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b8940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b8944: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8948: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b8948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b894c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b894cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b8950: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8954: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b8954u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8958: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b895c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b895cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8960: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b8960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8964: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b8964u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8968: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b8968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b896c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B896Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B896Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8974u;
}
