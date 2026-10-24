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

// Function: entry_001819c8
// Address: 0x1819c8 - 0x1819f8
void entry_001819c8_0x1819c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001819c8_0x1819c8");
#endif

    ctx->pc = 0x1819c8u;

    // 0x1819c8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1819c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1819cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1819ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1819d0: 0x0  nop
    ctx->pc = 0x1819d0u;
    // NOP
    // 0x1819d4: 0x45000172  bc1f        . + 4 + (0x172 << 2)
    ctx->pc = 0x1819D4u;
    {
        const bool branch_taken_0x1819d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1819d4) {
            ctx->pc = 0x181FA0u;
            return;
        }
    }
    ctx->pc = 0x1819DCu;
    // 0x1819dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1819dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1819e0: 0x8c23f210  lw          $v1, -0xDF0($at)
    ctx->pc = 0x1819e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F210u));
    // 0x1819e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1819e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1819e8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1819e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1819ec: 0xac23f210  sw          $v1, -0xDF0($at)
    ctx->pc = 0x1819ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F210u, _value); } while (0);
    // 0x1819f0: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x1819F0u;
    {
        const bool branch_taken_0x1819f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1819f0) {
            ctx->pc = 0x181FA0u;
            return;
        }
    }
    ctx->pc = 0x1819F8u;
}
