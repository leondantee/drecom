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

// Function: entry_0028e3f8
// Address: 0x28e3f8 - 0x28e450
void entry_0028e3f8_0x28e3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e3f8_0x28e3f8");
#endif

    switch (ctx->pc) {
        case 0x28e418u: goto label_28e418;
        default: break;
    }

    ctx->pc = 0x28e3f8u;

    // 0x28e3f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28e3f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e3fc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28e400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e404: 0x0  nop
    ctx->pc = 0x28e404u;
    // NOP
    // 0x28e408: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28e408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28e40c: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x28e40cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28e410: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28E410u;
    SET_GPR_U32(ctx, 31, 0x28E418u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28E410u, 0x28E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E418u;
label_28e418:
    // 0x28e418: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28e418u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e41c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x28e41cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e420: 0x0  nop
    ctx->pc = 0x28e420u;
    // NOP
    // 0x28e424: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28e424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28e428: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28e428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28e42c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28e42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e430: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x28e430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x28e434: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E434u;
    {
        const bool branch_taken_0x28e434 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x28e434) {
            ctx->pc = 0x28E450u;
            return;
        }
    }
    ctx->pc = 0x28E43Cu;
    // 0x28e43c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28e43cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e440: 0x0  nop
    ctx->pc = 0x28e440u;
    // NOP
    // 0x28e444: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e448: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28E448u;
    {
        const bool branch_taken_0x28e448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e448) {
            ctx->pc = 0x28E46Cu;
            return;
        }
    }
    ctx->pc = 0x28E450u;
}
