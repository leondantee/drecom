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

// Function: e2d_id05_type06
// Address: 0x2af410 - 0x2af49c
void e2d_id05_type06_0x2af410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id05_type06_0x2af410");
#endif

    switch (ctx->pc) {
        case 0x2af464u: goto label_2af464;
        default: break;
    }

    ctx->pc = 0x2af410u;

    // 0x2af410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2af410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2af414: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2af414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2af418: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2af418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2af41c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2af41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2af420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af424: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af428: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2af428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2af42c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2af42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2af430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af434: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af438: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2af438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2af43c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2af43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2af440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af444: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af448: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2af448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2af44c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2af44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2af450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af454: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af458: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2af458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2af45c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AF45Cu;
    SET_GPR_U32(ctx, 31, 0x2AF464u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AF45Cu, 0x2AF464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF464u;
label_2af464:
    // 0x2af464: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2af464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2af468: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2af468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af46c: 0x0  nop
    ctx->pc = 0x2af46cu;
    // NOP
    // 0x2af470: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2af470u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2af474: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2af474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2af478: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af47c: 0x0  nop
    ctx->pc = 0x2af47cu;
    // NOP
    // 0x2af480: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2af480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2af484: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af488: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2af488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2af48c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2af48cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af490: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2af490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2af494: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF49Cu;
}
