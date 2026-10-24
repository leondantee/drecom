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

// Function: entry_001993e8
// Address: 0x1993e8 - 0x1993fc
void entry_001993e8_0x1993e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001993e8_0x1993e8");
#endif

    ctx->pc = 0x1993e8u;

    // 0x1993e8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1993e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1993ec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1993ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1993f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1993f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1993f4: 0x0  nop
    ctx->pc = 0x1993f4u;
    // NOP
    // 0x1993f8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1993f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->pc = 0x1993fcu;
}
