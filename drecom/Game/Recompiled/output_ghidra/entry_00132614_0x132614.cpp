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

// Function: entry_00132614
// Address: 0x132614 - 0x132624
void entry_00132614_0x132614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132614_0x132614");
#endif

    ctx->pc = 0x132614u;

    // 0x132614: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x132614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x132618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x132618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13261c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132620: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x132620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    ctx->pc = 0x132624u;
}
