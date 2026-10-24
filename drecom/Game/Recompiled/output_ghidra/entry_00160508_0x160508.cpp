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

// Function: entry_00160508
// Address: 0x160508 - 0x160554
void entry_00160508_0x160508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160508_0x160508");
#endif

    switch (ctx->pc) {
        case 0x160520u: goto label_160520;
        default: break;
    }

    ctx->pc = 0x160508u;

    // 0x160508: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x160508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x16050c: 0x8c2295bc  lw          $v0, -0x6A44($at)
    ctx->pc = 0x16050cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195BCu));
    // 0x160510: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x160510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x160514: 0xc44d000c  lwc1        $f13, 0xC($v0)
    ctx->pc = 0x160514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x160518: 0xc058f20  jal         func_163C80
    ctx->pc = 0x160518u;
    SET_GPR_U32(ctx, 31, 0x160520u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x160518u, 0x160520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160520u;
label_160520:
    // 0x160520: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x160520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x160524: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x160524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160528: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16052c: 0x0  nop
    ctx->pc = 0x16052cu;
    // NOP
    // 0x160530: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160534: 0x0  nop
    ctx->pc = 0x160534u;
    // NOP
    // 0x160538: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x160538u;
    {
        const bool branch_taken_0x160538 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160538) {
            ctx->pc = 0x160554u;
            return;
        }
    }
    ctx->pc = 0x160540u;
    // 0x160540: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x160540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x160544: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160548: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x160548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16054c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16054cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x160550: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x160550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->pc = 0x160554u;
}
