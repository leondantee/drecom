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

// Function: entry_0033bfac
// Address: 0x33bfac - 0x33bfd0
void entry_0033bfac_0x33bfac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033bfac_0x33bfac");
#endif

    ctx->pc = 0x33bfacu;

    // 0x33bfac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33bfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33bfb0: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x33bfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x33bfb4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x33bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33bfb8: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33bfbc: 0xa06411ec  sb          $a0, 0x11EC($v1)
    ctx->pc = 0x33bfbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 4));
    // 0x33bfc0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33bfc4: 0xa20300b8  sb          $v1, 0xB8($s0)
    ctx->pc = 0x33bfc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 3));
    // 0x33bfc8: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x33BFC8u;
    {
        const bool branch_taken_0x33bfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bfc8) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33BFD0u;
}
