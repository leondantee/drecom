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

// Function: entry_002f71d4
// Address: 0x2f71d4 - 0x2f71f4
void entry_002f71d4_0x2f71d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f71d4_0x2f71d4");
#endif

    ctx->pc = 0x2f71d4u;

    // 0x2f71d4: 0x326a00ff  andi        $t2, $s3, 0xFF
    ctx->pc = 0x2f71d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2f71d8: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x2f71d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f71dc: 0xa20a0100  sb          $t2, 0x100($s0)
    ctx->pc = 0x2f71dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 256), (uint8_t)GPR_U32(ctx, 10));
    // 0x2f71e0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f71e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f71e4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f71e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f71e8: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f71e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f71ec: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x2F71ECu;
    {
        const bool branch_taken_0x2f71ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f71ec) {
            ctx->pc = 0x2F7690u;
            return;
        }
    }
    ctx->pc = 0x2F71F4u;
}
