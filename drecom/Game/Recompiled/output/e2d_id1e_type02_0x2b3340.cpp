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

// Function: e2d_id1e_type02
// Address: 0x2b3340 - 0x2b33cc
void e2d_id1e_type02_0x2b3340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id1e_type02_0x2b3340");
#endif

    switch (ctx->pc) {
        case 0x2b3394u: goto label_2b3394;
        default: break;
    }

    ctx->pc = 0x2b3340u;

    // 0x2b3340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3344: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b3344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b3348: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b3348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b334c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b334cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3354: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3358: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b3358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b335c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b335cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3364: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3368: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b3368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b336c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b336cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3374: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3378: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b3378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b337c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b337cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3384: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3388: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b3388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b338c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B338Cu;
    SET_GPR_U32(ctx, 31, 0x2B3394u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B338Cu, 0x2B3394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3394u;
label_2b3394:
    // 0x2b3394: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b3394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b3398: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b3398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b339c: 0x0  nop
    ctx->pc = 0x2b339cu;
    // NOP
    // 0x2b33a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b33a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b33a4: 0x3c03438c  lui         $v1, 0x438C
    ctx->pc = 0x2b33a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17292 << 16));
    // 0x2b33a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b33a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b33ac: 0x0  nop
    ctx->pc = 0x2b33acu;
    // NOP
    // 0x2b33b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b33b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b33b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b33b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b33b8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b33b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b33bc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b33bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b33c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b33c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b33c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B33C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B33C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B33CCu;
}
