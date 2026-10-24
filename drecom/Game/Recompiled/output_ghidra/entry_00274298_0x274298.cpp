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

// Function: entry_00274298
// Address: 0x274298 - 0x2742a8
void entry_00274298_0x274298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274298_0x274298");
#endif

    ctx->pc = 0x274298u;

    // 0x274298: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x274298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x27429c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27429cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2742a0: 0x0  nop
    ctx->pc = 0x2742a0u;
    // NOP
    // 0x2742a4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2742a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->pc = 0x2742a8u;
}
