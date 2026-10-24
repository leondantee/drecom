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

// Function: entry_002e1214
// Address: 0x2e1214 - 0x2e122c
void entry_002e1214_0x2e1214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1214_0x2e1214");
#endif

    ctx->pc = 0x2e1214u;

    // 0x2e1214: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2e1214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1218: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e1218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e121c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e121cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1220: 0x0  nop
    ctx->pc = 0x2e1220u;
    // NOP
    // 0x2e1224: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e1224u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e1228: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2e1228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->pc = 0x2e122cu;
}
