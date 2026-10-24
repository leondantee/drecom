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

// Function: entry_002c44ec
// Address: 0x2c44ec - 0x2c4528
void entry_002c44ec_0x2c44ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c44ec_0x2c44ec");
#endif

    ctx->pc = 0x2c44ecu;

    // 0x2c44ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c44f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c44f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c44f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c44f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c44f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C44F8u;
    {
        const bool branch_taken_0x2c44f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c44f8) {
            ctx->pc = 0x2C4528u;
            return;
        }
    }
    ctx->pc = 0x2C4500u;
    // 0x2c4500: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4504: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4508: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x2c4508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2c450c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C450Cu;
    {
        const bool branch_taken_0x2c450c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c450c) {
            ctx->pc = 0x2C4528u;
            return;
        }
    }
    ctx->pc = 0x2C4514u;
    // 0x2c4514: 0x8fb000b8  lw          $s0, 0xB8($sp)
    ctx->pc = 0x2c4514u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4518: 0x26061330  addiu       $a2, $s0, 0x1330
    ctx->pc = 0x2c4518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x2c451c: 0x84c3000c  lh          $v1, 0xC($a2)
    ctx->pc = 0x2c451cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2c4520: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2c4520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c4524: 0xa4c2000c  sh          $v0, 0xC($a2)
    ctx->pc = 0x2c4524u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2c4528u;
}
