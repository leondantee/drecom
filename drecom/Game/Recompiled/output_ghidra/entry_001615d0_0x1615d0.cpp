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

// Function: entry_001615d0
// Address: 0x1615d0 - 0x1615f4
void entry_001615d0_0x1615d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001615d0_0x1615d0");
#endif

    ctx->pc = 0x1615d0u;

    // 0x1615d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1615d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1615d4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1615d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1615d8: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1615d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1615dc: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1615dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1615e0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1615e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1615e4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1615e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1615e8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1615e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1615ec: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1615ECu;
    {
        const bool branch_taken_0x1615ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1615ec) {
            ctx->pc = 0x161648u;
            return;
        }
    }
    ctx->pc = 0x1615F4u;
}
