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

// Function: entry_001724bc
// Address: 0x1724bc - 0x1724cc
void entry_001724bc_0x1724bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001724bc_0x1724bc");
#endif

    ctx->pc = 0x1724bcu;

    // 0x1724bc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1724bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1724c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1724c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1724c4: 0x0  nop
    ctx->pc = 0x1724c4u;
    // NOP
    // 0x1724c8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1724c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->pc = 0x1724ccu;
}
