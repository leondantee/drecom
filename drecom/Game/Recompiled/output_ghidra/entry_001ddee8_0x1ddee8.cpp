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

// Function: entry_001ddee8
// Address: 0x1ddee8 - 0x1ddf08
void entry_001ddee8_0x1ddee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddee8_0x1ddee8");
#endif

    ctx->pc = 0x1ddee8u;

    // 0x1ddee8: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x1ddee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1ddeec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddeecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddef0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DDEF0u;
    {
        const bool branch_taken_0x1ddef0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ddef0) {
            ctx->pc = 0x1DDF08u;
            return;
        }
    }
    ctx->pc = 0x1DDEF8u;
    // 0x1ddef8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1ddef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1ddefc: 0xa7a200f2  sh          $v0, 0xF2($sp)
    ctx->pc = 0x1ddefcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ddf00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDF00u;
    {
        const bool branch_taken_0x1ddf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddf00) {
            ctx->pc = 0x1DDF0Cu;
            return;
        }
    }
    ctx->pc = 0x1DDF08u;
}
