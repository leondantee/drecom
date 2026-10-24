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

// Function: entry_001818b4
// Address: 0x1818b4 - 0x1818dc
void entry_001818b4_0x1818b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001818b4_0x1818b4");
#endif

    ctx->pc = 0x1818b4u;

    // 0x1818b4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1818b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1818b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1818b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1818bc: 0x0  nop
    ctx->pc = 0x1818bcu;
    // NOP
    // 0x1818c0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1818C0u;
    {
        const bool branch_taken_0x1818c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1818c0) {
            ctx->pc = 0x1818DCu;
            return;
        }
    }
    ctx->pc = 0x1818C8u;
    // 0x1818c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1818c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1818cc: 0x8c26f218  lw          $a2, -0xDE8($at)
    ctx->pc = 0x1818ccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x47F218u));
    // 0x1818d0: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1818d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1818d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1818d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1818d8: 0xac27f218  sw          $a3, -0xDE8($at)
    ctx->pc = 0x1818d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x47F218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F218u, _value); } while (0);
    ctx->pc = 0x1818dcu;
}
