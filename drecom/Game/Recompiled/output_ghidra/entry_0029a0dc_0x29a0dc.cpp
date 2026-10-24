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

// Function: entry_0029a0dc
// Address: 0x29a0dc - 0x29a0ec
void entry_0029a0dc_0x29a0dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a0dc_0x29a0dc");
#endif

    ctx->pc = 0x29a0dcu;

    // 0x29a0dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29a0e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a0e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a0e4: 0x0  nop
    ctx->pc = 0x29a0e4u;
    // NOP
    // 0x29a0e8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x29a0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    ctx->pc = 0x29a0ecu;
}
