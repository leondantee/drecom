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

// Function: entry_00186fa0
// Address: 0x186fa0 - 0x186fb4
void entry_00186fa0_0x186fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186fa0_0x186fa0");
#endif

    ctx->pc = 0x186fa0u;

    // 0x186fa0: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x186fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x186fa4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x186fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x186fa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186fac: 0x0  nop
    ctx->pc = 0x186facu;
    // NOP
    // 0x186fb0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x186fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->pc = 0x186fb4u;
}
