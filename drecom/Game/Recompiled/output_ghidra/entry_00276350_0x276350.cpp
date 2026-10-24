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

// Function: entry_00276350
// Address: 0x276350 - 0x276360
void entry_00276350_0x276350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276350_0x276350");
#endif

    ctx->pc = 0x276350u;

    // 0x276350: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x276350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x276354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276358: 0x0  nop
    ctx->pc = 0x276358u;
    // NOP
    // 0x27635c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x27635cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->pc = 0x276360u;
}
