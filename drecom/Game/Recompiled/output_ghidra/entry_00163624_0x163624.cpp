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

// Function: entry_00163624
// Address: 0x163624 - 0x163630
void entry_00163624_0x163624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163624_0x163624");
#endif

    ctx->pc = 0x163624u;

    // 0x163624: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x163624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163628: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x16362c: 0xe4204f30  swc1        $f0, 0x4F30($at)
    ctx->pc = 0x16362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F30u, _value); } while (0); }
    ctx->pc = 0x163630u;
}
