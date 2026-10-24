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

// Function: entry_002e35ec
// Address: 0x2e35ec - 0x2e35fc
void entry_002e35ec_0x2e35ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e35ec_0x2e35ec");
#endif

    ctx->pc = 0x2e35ecu;

    // 0x2e35ec: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x2e35ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x2e35f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e35f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e35f4: 0x0  nop
    ctx->pc = 0x2e35f4u;
    // NOP
    // 0x2e35f8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2e35f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->pc = 0x2e35fcu;
}
