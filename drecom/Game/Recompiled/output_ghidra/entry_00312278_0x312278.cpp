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

// Function: entry_00312278
// Address: 0x312278 - 0x31228c
void entry_00312278_0x312278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00312278_0x312278");
#endif

    ctx->pc = 0x312278u;

    // 0x312278: 0x3c02bcf5  lui         $v0, 0xBCF5
    ctx->pc = 0x312278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48373 << 16));
    // 0x31227c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x31227cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x312280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312284: 0x0  nop
    ctx->pc = 0x312284u;
    // NOP
    // 0x312288: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x312288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    ctx->pc = 0x31228cu;
}
