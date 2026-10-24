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

// Function: entry_001b622c
// Address: 0x1b622c - 0x1b6278
void entry_001b622c_0x1b622c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b622c_0x1b622c");
#endif

    switch (ctx->pc) {
        case 0x1b6244u: goto label_1b6244;
        default: break;
    }

    ctx->pc = 0x1b622cu;

    // 0x1b622c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b622cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6230: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6234: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1b6234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b6238: 0xc4ad1380  lwc1        $f13, 0x1380($a1)
    ctx->pc = 0x1b6238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b623c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1B623Cu;
    SET_GPR_U32(ctx, 31, 0x1B6244u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B623Cu, 0x1B6244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6244u;
label_1b6244:
    // 0x1b6244: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b6244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1b6248: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b6248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b624c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b624cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6250: 0x0  nop
    ctx->pc = 0x1b6250u;
    // NOP
    // 0x1b6254: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b6254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6258: 0x0  nop
    ctx->pc = 0x1b6258u;
    // NOP
    // 0x1b625c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B625Cu;
    {
        const bool branch_taken_0x1b625c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b625c) {
            ctx->pc = 0x1B6278u;
            return;
        }
    }
    ctx->pc = 0x1B6264u;
    // 0x1b6264: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b6264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1b6268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b6268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b626c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6270: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b6270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b6274: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b6274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->pc = 0x1b6278u;
}
