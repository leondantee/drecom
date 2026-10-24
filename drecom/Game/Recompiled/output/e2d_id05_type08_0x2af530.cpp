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

// Function: e2d_id05_type08
// Address: 0x2af530 - 0x2af5bc
void e2d_id05_type08_0x2af530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id05_type08_0x2af530");
#endif

    switch (ctx->pc) {
        case 0x2af584u: goto label_2af584;
        default: break;
    }

    ctx->pc = 0x2af530u;

    // 0x2af530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2af530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2af534: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2af534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2af538: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2af538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2af53c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2af53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2af540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af544: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af548: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2af548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2af54c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2af54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2af550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af554: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af558: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2af558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2af55c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2af55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2af560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af564: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af568: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2af568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2af56c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2af56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2af570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af574: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af578: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2af578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2af57c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AF57Cu;
    SET_GPR_U32(ctx, 31, 0x2AF584u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AF57Cu, 0x2AF584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF584u;
label_2af584:
    // 0x2af584: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2af584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2af588: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2af588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af58c: 0x0  nop
    ctx->pc = 0x2af58cu;
    // NOP
    // 0x2af590: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2af590u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2af594: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2af594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2af598: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af59c: 0x0  nop
    ctx->pc = 0x2af59cu;
    // NOP
    // 0x2af5a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2af5a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2af5a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af5a8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2af5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2af5ac: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2af5acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af5b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2af5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2af5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF5BCu;
}
