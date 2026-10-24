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

// Function: entry_00208304
// Address: 0x208304 - 0x208320
void entry_00208304_0x208304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208304_0x208304");
#endif

    ctx->pc = 0x208304u;

    // 0x208304: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208308: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x208308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20830c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x20830cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x208310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208314: 0x0  nop
    ctx->pc = 0x208314u;
    // NOP
    // 0x208318: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x208318u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20831c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x20831cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    ctx->pc = 0x208320u;
}
