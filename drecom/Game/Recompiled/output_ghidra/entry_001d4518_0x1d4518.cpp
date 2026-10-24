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

// Function: entry_001d4518
// Address: 0x1d4518 - 0x1d452c
void entry_001d4518_0x1d4518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4518_0x1d4518");
#endif

    ctx->pc = 0x1d4518u;

    // 0x1d4518: 0xa7a0015a  sh          $zero, 0x15A($sp)
    ctx->pc = 0x1d4518u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 346), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d451c: 0xa7a0015c  sh          $zero, 0x15C($sp)
    ctx->pc = 0x1d451cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 348), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d4520: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d4520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4524: 0x0  nop
    ctx->pc = 0x1d4524u;
    // NOP
    // 0x1d4528: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d4528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    ctx->pc = 0x1d452cu;
}
