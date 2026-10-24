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

// Function: e2d_id00_type05
// Address: 0x2a9840 - 0x2a98ec
void e2d_id00_type05_0x2a9840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type05_0x2a9840");
#endif

    switch (ctx->pc) {
        case 0x2a98b0u: goto label_2a98b0;
        default: break;
    }

    ctx->pc = 0x2a9840u;

    // 0x2a9840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9844: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2a9844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2a9848: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2a9848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2a984c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2a984cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2a9850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9854: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9858: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2a9858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2a985c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2a985cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a9860: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9864: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2a9864u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a9868: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2a9868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2a986c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a986cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9870: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9874: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2a9874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2a9878: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2a9878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2a987c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a987cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9880: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9884: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2a9884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2a9888: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2a9888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2a988c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a988cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9890: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9894: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2a9894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2a9898: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x2a9898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x2a989c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a989cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a98a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a98a4: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2a98a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2a98a8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A98A8u;
    SET_GPR_U32(ctx, 31, 0x2A98B0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A98A8u, 0x2A98B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A98B0u;
label_2a98b0:
    // 0x2a98b0: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2a98b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2a98b4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2a98b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2a98b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a98b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a98bc: 0x0  nop
    ctx->pc = 0x2a98bcu;
    // NOP
    // 0x2a98c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a98c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a98c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a98c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a98c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a98c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a98cc: 0x0  nop
    ctx->pc = 0x2a98ccu;
    // NOP
    // 0x2a98d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a98d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a98d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a98d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a98d8: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x2a98d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x2a98dc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2a98dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a98e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a98e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a98e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A98E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A98E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A98ECu;
}
