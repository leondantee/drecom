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

// Function: entry_0033d534
// Address: 0x33d534 - 0x33d548
void entry_0033d534_0x33d534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d534_0x33d534");
#endif

    ctx->pc = 0x33d534u;

    // 0x33d534: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x33d534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d538: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d53c: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x33d53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x33d540: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x33d540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d544: 0xe64001a4  swc1        $f0, 0x1A4($s2)
    ctx->pc = 0x33d544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 420), bits); }
    ctx->pc = 0x33d548u;
}
