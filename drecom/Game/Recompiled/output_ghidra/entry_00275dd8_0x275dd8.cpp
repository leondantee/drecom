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

// Function: entry_00275dd8
// Address: 0x275dd8 - 0x275de8
void entry_00275dd8_0x275dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275dd8_0x275dd8");
#endif

    ctx->pc = 0x275dd8u;

    // 0x275dd8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x275dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x275ddc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x275ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275de0: 0x0  nop
    ctx->pc = 0x275de0u;
    // NOP
    // 0x275de4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x275de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->pc = 0x275de8u;
}
