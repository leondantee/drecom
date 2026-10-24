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

// Function: entry_0021fef4
// Address: 0x21fef4 - 0x21ff0c
void entry_0021fef4_0x21fef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fef4_0x21fef4");
#endif

    ctx->pc = 0x21fef4u;

    // 0x21fef4: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x21fef4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21fef8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x21fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x21fefc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21fefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ff00: 0x0  nop
    ctx->pc = 0x21ff00u;
    // NOP
    // 0x21ff04: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x21ff04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x21ff08: 0x24160007  addiu       $s6, $zero, 0x7
    ctx->pc = 0x21ff08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x21ff0cu;
}
