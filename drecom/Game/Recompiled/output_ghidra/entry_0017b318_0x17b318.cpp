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

// Function: entry_0017b318
// Address: 0x17b318 - 0x17b328
void entry_0017b318_0x17b318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b318_0x17b318");
#endif

    ctx->pc = 0x17b318u;

    // 0x17b318: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x17b318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17b31c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17b31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b320: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b324: 0xe420ef08  swc1        $f0, -0x10F8($at)
    ctx->pc = 0x17b324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47EF08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47EF08u, _value); } while (0); }
    ctx->pc = 0x17b328u;
}
