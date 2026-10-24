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

// Function: entry_00274830
// Address: 0x274830 - 0x274840
void entry_00274830_0x274830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274830_0x274830");
#endif

    ctx->pc = 0x274830u;

    // 0x274830: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x274830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x274834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274838: 0x0  nop
    ctx->pc = 0x274838u;
    // NOP
    // 0x27483c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x27483cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->pc = 0x274840u;
}
