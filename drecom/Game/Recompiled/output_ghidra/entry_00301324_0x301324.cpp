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

// Function: entry_00301324
// Address: 0x301324 - 0x301334
void entry_00301324_0x301324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00301324_0x301324");
#endif

    ctx->pc = 0x301324u;

    // 0x301324: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x301324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x301328: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30132c: 0x0  nop
    ctx->pc = 0x30132cu;
    // NOP
    // 0x301330: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x301330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    ctx->pc = 0x301334u;
}
