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

// Function: entry_001936f8
// Address: 0x1936f8 - 0x19372c
void entry_001936f8_0x1936f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001936f8_0x1936f8");
#endif

    switch (ctx->pc) {
        case 0x193704u: goto label_193704;
        default: break;
    }

    ctx->pc = 0x1936f8u;

    // 0x1936f8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1936f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1936fc: 0xc0675d0  jal         func_19D740
    ctx->pc = 0x1936FCu;
    SET_GPR_U32(ctx, 31, 0x193704u);
    ctx->pc = 0x19D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D740u, 0x1936FCu, 0x193704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193704u;
label_193704:
    // 0x193704: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x193704u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x193708: 0xc6c0029c  lwc1        $f0, 0x29C($s6)
    ctx->pc = 0x193708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19370c: 0x46006042  mul.s       $f1, $f12, $f0
    ctx->pc = 0x19370cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x193710: 0xc7c001b4  lwc1        $f0, 0x1B4($fp)
    ctx->pc = 0x193710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193714: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x193714u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[22]); }
    // 0x193718: 0x0  nop
    ctx->pc = 0x193718u;
    // NOP
    // 0x19371c: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x19371cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x193720: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x193720u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x193724: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x193724u;
    {
        const bool branch_taken_0x193724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193724) {
            ctx->pc = 0x193BD8u;
            return;
        }
    }
    ctx->pc = 0x19372Cu;
}
