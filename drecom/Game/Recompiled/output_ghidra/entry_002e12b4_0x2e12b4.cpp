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

// Function: entry_002e12b4
// Address: 0x2e12b4 - 0x2e12cc
void entry_002e12b4_0x2e12b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e12b4_0x2e12b4");
#endif

    ctx->pc = 0x2e12b4u;

    // 0x2e12b4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2e12b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e12b8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e12b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e12bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e12bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e12c0: 0x0  nop
    ctx->pc = 0x2e12c0u;
    // NOP
    // 0x2e12c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e12c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e12c8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2e12c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->pc = 0x2e12ccu;
}
