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

// Function: entry_00191d90
// Address: 0x191d90 - 0x191dcc
void entry_00191d90_0x191d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191d90_0x191d90");
#endif

    ctx->pc = 0x191d90u;

    // 0x191d90: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x191d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191d94: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x191d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x191d98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191d9c: 0x0  nop
    ctx->pc = 0x191d9cu;
    // NOP
    // 0x191da0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x191da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191da4: 0x0  nop
    ctx->pc = 0x191da4u;
    // NOP
    // 0x191da8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x191DA8u;
    {
        const bool branch_taken_0x191da8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191da8) {
            ctx->pc = 0x191DCCu;
            return;
        }
    }
    ctx->pc = 0x191DB0u;
    // 0x191db0: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x191db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191db4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x191db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191db8: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x191db8u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191dbc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x191dbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191dc0: 0x0  nop
    ctx->pc = 0x191dc0u;
    // NOP
    // 0x191dc4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x191DC4u;
    {
        const bool branch_taken_0x191dc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191dc4) {
            ctx->pc = 0x191DD4u;
            return;
        }
    }
    ctx->pc = 0x191DCCu;
}
