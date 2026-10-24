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

// Function: entry_0033504c
// Address: 0x33504c - 0x335088
void entry_0033504c_0x33504c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033504c_0x33504c");
#endif

    ctx->pc = 0x33504cu;

    // 0x33504c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33504cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335050: 0xc42032c8  lwc1        $f0, 0x32C8($at)
    ctx->pc = 0x335050u;
    { uint32_t bits = FAST_READ32(0x8932C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x335054: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x335054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x335058: 0xc6015e00  lwc1        $f1, 0x5E00($s0)
    ctx->pc = 0x335058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33505c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33505cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x335060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x335060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335064: 0x0  nop
    ctx->pc = 0x335064u;
    // NOP
    // 0x335068: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x335068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33506c: 0x0  nop
    ctx->pc = 0x33506cu;
    // NOP
    // 0x335070: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x335070u;
    {
        const bool branch_taken_0x335070 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x335070) {
            ctx->pc = 0x335088u;
            return;
        }
    }
    ctx->pc = 0x335078u;
    // 0x335078: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x335078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x33507c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33507cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335080: 0x0  nop
    ctx->pc = 0x335080u;
    // NOP
    // 0x335084: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x335084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    ctx->pc = 0x335088u;
}
