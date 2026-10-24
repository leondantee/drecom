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

// Function: entry_00186004
// Address: 0x186004 - 0x18601c
void entry_00186004_0x186004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186004_0x186004");
#endif

    ctx->pc = 0x186004u;

    // 0x186004: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x186004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x186008: 0xc4210328  lwc1        $f1, 0x328($at)
    ctx->pc = 0x186008u;
    { uint32_t bits = FAST_READ32(0x480328u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18600c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x18600cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186010: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x186010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186014: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x186014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x186018: 0xe4200328  swc1        $f0, 0x328($at)
    ctx->pc = 0x186018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480328u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480328u, _value); } while (0); }
    ctx->pc = 0x18601cu;
}
