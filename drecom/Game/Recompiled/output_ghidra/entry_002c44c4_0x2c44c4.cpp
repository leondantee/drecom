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

// Function: entry_002c44c4
// Address: 0x2c44c4 - 0x2c44ec
void entry_002c44c4_0x2c44c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c44c4_0x2c44c4");
#endif

    ctx->pc = 0x2c44c4u;

    // 0x2c44c4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2c44c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c44c8: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2c44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c44cc: 0x8446000c  lh          $a2, 0xC($v0)
    ctx->pc = 0x2c44ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2c44d0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C44D0u;
    {
        const bool branch_taken_0x2c44d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c44d0) {
            ctx->pc = 0x2C44ECu;
            return;
        }
    }
    ctx->pc = 0x2C44D8u;
    // 0x2c44d8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c44dc: 0x24461330  addiu       $a2, $v0, 0x1330
    ctx->pc = 0x2c44dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c44e0: 0x84c3000c  lh          $v1, 0xC($a2)
    ctx->pc = 0x2c44e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2c44e4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2c44e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c44e8: 0xa4c2000c  sh          $v0, 0xC($a2)
    ctx->pc = 0x2c44e8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2c44ecu;
}
