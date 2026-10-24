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

// Function: entry_0025b160
// Address: 0x25b160 - 0x25b170
void entry_0025b160_0x25b160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b160_0x25b160");
#endif

    ctx->pc = 0x25b160u;

    // 0x25b160: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25b160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25b164: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25b164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b168: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b16c: 0xe460018c  swc1        $f0, 0x18C($v1)
    ctx->pc = 0x25b16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 396), bits); }
    ctx->pc = 0x25b170u;
}
