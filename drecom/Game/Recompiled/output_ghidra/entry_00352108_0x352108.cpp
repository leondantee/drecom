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

// Function: entry_00352108
// Address: 0x352108 - 0x352130
void entry_00352108_0x352108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00352108_0x352108");
#endif

    ctx->pc = 0x352108u;

    // 0x352108: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35210c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x35210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352110: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x352110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352114: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x352114u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x352118: 0x0  nop
    ctx->pc = 0x352118u;
    // NOP
    // 0x35211c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x35211Cu;
    {
        const bool branch_taken_0x35211c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35211c) {
            ctx->pc = 0x352130u;
            return;
        }
    }
    ctx->pc = 0x352124u;
    // 0x352124: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352128: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x352128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35212c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x35212cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->pc = 0x352130u;
}
