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

// Function: entry_001fa1ec
// Address: 0x1fa1ec - 0x1fa21c
void entry_001fa1ec_0x1fa1ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa1ec_0x1fa1ec");
#endif

    ctx->pc = 0x1fa1ecu;

    // 0x1fa1ec: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa1f0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1fa1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa1f4: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1fa1f4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1fa1f8: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1fa1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa1fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1fa1fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa200: 0x0  nop
    ctx->pc = 0x1fa200u;
    // NOP
    // 0x1fa204: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA204u;
    {
        const bool branch_taken_0x1fa204 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa204) {
            ctx->pc = 0x1FA21Cu;
            return;
        }
    }
    ctx->pc = 0x1FA20Cu;
    // 0x1fa20c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa210: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1fa210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa214: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fa214u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1fa218: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1fa218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x1fa21cu;
}
