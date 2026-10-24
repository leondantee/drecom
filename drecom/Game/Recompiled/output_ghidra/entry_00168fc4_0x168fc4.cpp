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

// Function: entry_00168fc4
// Address: 0x168fc4 - 0x168fd4
void entry_00168fc4_0x168fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168fc4_0x168fc4");
#endif

    ctx->pc = 0x168fc4u;

    // 0x168fc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x168fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x168fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168fcc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x168fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168fd0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x168fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->pc = 0x168fd4u;
}
