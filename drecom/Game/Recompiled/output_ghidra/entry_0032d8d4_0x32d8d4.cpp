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

// Function: entry_0032d8d4
// Address: 0x32d8d4 - 0x32d8e8
void entry_0032d8d4_0x32d8d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d8d4_0x32d8d4");
#endif

    ctx->pc = 0x32d8d4u;

    // 0x32d8d4: 0x3c124066  lui         $s2, 0x4066
    ctx->pc = 0x32d8d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16486 << 16));
    // 0x32d8d8: 0x36426666  ori         $v0, $s2, 0x6666
    ctx->pc = 0x32d8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)26214);
    // 0x32d8dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d8e0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32d8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32d8e4: 0xe420c2a8  swc1        $f0, -0x3D58($at)
    ctx->pc = 0x32d8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85C2A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85C2A8u, _value); } while (0); }
    ctx->pc = 0x32d8e8u;
}
