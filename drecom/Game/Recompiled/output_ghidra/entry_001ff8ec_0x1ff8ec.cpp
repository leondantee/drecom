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

// Function: entry_001ff8ec
// Address: 0x1ff8ec - 0x1ff8f8
void entry_001ff8ec_0x1ff8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff8ec_0x1ff8ec");
#endif

    ctx->pc = 0x1ff8ecu;

    // 0x1ff8ec: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff8f0: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x1ff8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff8f4: 0xe6200338  swc1        $f0, 0x338($s1)
    ctx->pc = 0x1ff8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
    ctx->pc = 0x1ff8f8u;
}
