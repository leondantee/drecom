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

// Function: entry_002c449c
// Address: 0x2c449c - 0x2c44c4
void entry_002c449c_0x2c449c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c449c_0x2c449c");
#endif

    ctx->pc = 0x2c449cu;

    // 0x2c449c: 0x8fb000b8  lw          $s0, 0xB8($sp)
    ctx->pc = 0x2c449cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c44a0: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x2c44a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x2c44a4: 0x9462005a  lhu         $v0, 0x5A($v1)
    ctx->pc = 0x2c44a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 90)));
    // 0x2c44a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C44A8u;
    {
        const bool branch_taken_0x2c44a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c44a8) {
            ctx->pc = 0x2C44C4u;
            return;
        }
    }
    ctx->pc = 0x2C44B0u;
    // 0x2c44b0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c44b4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c44b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c44b8: 0x9462005a  lhu         $v0, 0x5A($v1)
    ctx->pc = 0x2c44b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 90)));
    // 0x2c44bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c44bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c44c0: 0xa462005a  sh          $v0, 0x5A($v1)
    ctx->pc = 0x2c44c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 90), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2c44c4u;
}
