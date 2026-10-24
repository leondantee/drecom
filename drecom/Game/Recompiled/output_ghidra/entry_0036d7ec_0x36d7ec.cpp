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

// Function: entry_0036d7ec
// Address: 0x36d7ec - 0x36d800
void entry_0036d7ec_0x36d7ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d7ec_0x36d7ec");
#endif

    ctx->pc = 0x36d7ecu;

    // 0x36d7ec: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x36d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x36d7f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36d7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36d7f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d7f8: 0x0  nop
    ctx->pc = 0x36d7f8u;
    // NOP
    // 0x36d7fc: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x36d7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    ctx->pc = 0x36d800u;
}
