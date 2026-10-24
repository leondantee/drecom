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

// Function: entry_00313fa8
// Address: 0x313fa8 - 0x313fc8
void entry_00313fa8_0x313fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313fa8_0x313fa8");
#endif

    ctx->pc = 0x313fa8u;

    // 0x313fa8: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x313fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x313fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313fb0: 0x0  nop
    ctx->pc = 0x313fb0u;
    // NOP
    // 0x313fb4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x313fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x313fb8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x313fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x313fbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313fc0: 0x0  nop
    ctx->pc = 0x313fc0u;
    // NOP
    // 0x313fc4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x313fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->pc = 0x313fc8u;
}
