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

// Function: entry_00298610
// Address: 0x298610 - 0x298620
void entry_00298610_0x298610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298610_0x298610");
#endif

    ctx->pc = 0x298610u;

    // 0x298610: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x298610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x298614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298618: 0x0  nop
    ctx->pc = 0x298618u;
    // NOP
    // 0x29861c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x29861cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->pc = 0x298620u;
}
