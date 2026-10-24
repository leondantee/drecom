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

// Function: entry_001ae400
// Address: 0x1ae400 - 0x1ae470
void entry_001ae400_0x1ae400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae400_0x1ae400");
#endif

    switch (ctx->pc) {
        case 0x1ae454u: goto label_1ae454;
        default: break;
    }

    ctx->pc = 0x1ae400u;

    // 0x1ae400: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ae400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ae404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae408: 0x0  nop
    ctx->pc = 0x1ae408u;
    // NOP
    // 0x1ae40c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1ae40cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ae410: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ae410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ae414: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ae414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ae418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae41c: 0x0  nop
    ctx->pc = 0x1ae41cu;
    // NOP
    // 0x1ae420: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1ae420u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ae424: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1ae424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1ae428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae42c: 0x0  nop
    ctx->pc = 0x1ae42cu;
    // NOP
    // 0x1ae430: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ae430u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ae434: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae438: 0xc420efe0  lwc1        $f0, -0x1020($at)
    ctx->pc = 0x1ae438u;
    { uint32_t bits = FAST_READ32(0x5EEFE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae43c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ae43cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ae440: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae444: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae444u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae448: 0xe420b508  swc1        $f0, -0x4AF8($at)
    ctx->pc = 0x1ae448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948104), bits); }
    // 0x1ae44c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1AE44Cu;
    SET_GPR_U32(ctx, 31, 0x1AE454u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1AE44Cu, 0x1AE454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE454u;
label_1ae454:
    // 0x1ae454: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE454u;
    {
        const bool branch_taken_0x1ae454 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ae454) {
            ctx->pc = 0x1AE470u;
            return;
        }
    }
    ctx->pc = 0x1AE45Cu;
    // 0x1ae45c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae460: 0x0  nop
    ctx->pc = 0x1ae460u;
    // NOP
    // 0x1ae464: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ae464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ae468: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE468u;
    {
        const bool branch_taken_0x1ae468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae468) {
            ctx->pc = 0x1AE48Cu;
            return;
        }
    }
    ctx->pc = 0x1AE470u;
}
