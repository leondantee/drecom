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

// Function: entry_002e7280
// Address: 0x2e7280 - 0x2e7298
void entry_002e7280_0x2e7280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7280_0x2e7280");
#endif

    ctx->pc = 0x2e7280u;

    // 0x2e7280: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2e7280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7284: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e7284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e7288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e728c: 0x0  nop
    ctx->pc = 0x2e728cu;
    // NOP
    // 0x2e7290: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e7290u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e7294: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2e7294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->pc = 0x2e7298u;
}
