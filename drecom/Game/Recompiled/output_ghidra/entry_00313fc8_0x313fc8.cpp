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

// Function: entry_00313fc8
// Address: 0x313fc8 - 0x313fe8
void entry_00313fc8_0x313fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313fc8_0x313fc8");
#endif

    ctx->pc = 0x313fc8u;

    // 0x313fc8: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x313fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x313fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313fd0: 0x0  nop
    ctx->pc = 0x313fd0u;
    // NOP
    // 0x313fd4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x313fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x313fd8: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x313fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x313fdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313fe0: 0x0  nop
    ctx->pc = 0x313fe0u;
    // NOP
    // 0x313fe4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x313fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->pc = 0x313fe8u;
}
