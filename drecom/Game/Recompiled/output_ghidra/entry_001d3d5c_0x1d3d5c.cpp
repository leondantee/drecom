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

// Function: entry_001d3d5c
// Address: 0x1d3d5c - 0x1d3d70
void entry_001d3d5c_0x1d3d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3d5c_0x1d3d5c");
#endif

    ctx->pc = 0x1d3d5cu;

    // 0x1d3d5c: 0xa7a0015a  sh          $zero, 0x15A($sp)
    ctx->pc = 0x1d3d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 346), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d3d60: 0xa7a0015c  sh          $zero, 0x15C($sp)
    ctx->pc = 0x1d3d60u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 348), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d3d64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3d64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3d68: 0x0  nop
    ctx->pc = 0x1d3d68u;
    // NOP
    // 0x1d3d6c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d3d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    ctx->pc = 0x1d3d70u;
}
