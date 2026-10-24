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

// Function: entry_0033f504
// Address: 0x33f504 - 0x33f51c
void entry_0033f504_0x33f504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033f504_0x33f504");
#endif

    ctx->pc = 0x33f504u;

    // 0x33f504: 0x92040060  lbu         $a0, 0x60($s0)
    ctx->pc = 0x33f504u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x33f508: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f50c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33f50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f510: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x33f510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f514: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x33F514u;
    {
        const bool branch_taken_0x33f514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f514) {
            ctx->pc = 0x33F564u;
            return;
        }
    }
    ctx->pc = 0x33F51Cu;
}
