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

// Function: entry_001947f0
// Address: 0x1947f0 - 0x19482c
void entry_001947f0_0x1947f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001947f0_0x1947f0");
#endif

    ctx->pc = 0x1947f0u;

    // 0x1947f0: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1947f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1947f4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1947f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1947f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1947f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1947fc: 0x0  nop
    ctx->pc = 0x1947fcu;
    // NOP
    // 0x194800: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x194800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194804: 0x0  nop
    ctx->pc = 0x194804u;
    // NOP
    // 0x194808: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x194808u;
    {
        const bool branch_taken_0x194808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x194808) {
            ctx->pc = 0x19482Cu;
            return;
        }
    }
    ctx->pc = 0x194810u;
    // 0x194810: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x194810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194814: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x194814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x194818: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x194818u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19481c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19481cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194820: 0x0  nop
    ctx->pc = 0x194820u;
    // NOP
    // 0x194824: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x194824u;
    {
        const bool branch_taken_0x194824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x194824) {
            ctx->pc = 0x194834u;
            return;
        }
    }
    ctx->pc = 0x19482Cu;
}
