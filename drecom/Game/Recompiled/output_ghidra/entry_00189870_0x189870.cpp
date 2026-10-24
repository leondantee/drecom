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

// Function: entry_00189870
// Address: 0x189870 - 0x1898a0
void entry_00189870_0x189870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189870_0x189870");
#endif

    ctx->pc = 0x189870u;

    // 0x189870: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189874: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x189874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189878: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x189878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18987c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18987cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189880: 0x0  nop
    ctx->pc = 0x189880u;
    // NOP
    // 0x189884: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x189884u;
    {
        const bool branch_taken_0x189884 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189884) {
            ctx->pc = 0x1898A0u;
            return;
        }
    }
    ctx->pc = 0x18988Cu;
    // 0x18988c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x18988cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189890: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189894: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x189894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x189898: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189898u;
    {
        const bool branch_taken_0x189898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189898) {
            ctx->pc = 0x1898A8u;
            return;
        }
    }
    ctx->pc = 0x1898A0u;
}
