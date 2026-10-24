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

// Function: entry_00158684
// Address: 0x158684 - 0x158698
void entry_00158684_0x158684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158684_0x158684");
#endif

    ctx->pc = 0x158684u;

    // 0x158684: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158688: 0xac20f848  sw          $zero, -0x7B8($at)
    ctx->pc = 0x158688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EF848u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF848u, _value); } while (0);
    // 0x15868c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15868cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158690: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158694: 0xe420f850  swc1        $f0, -0x7B0($at)
    ctx->pc = 0x158694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF850u, _value); } while (0); }
    ctx->pc = 0x158698u;
}
