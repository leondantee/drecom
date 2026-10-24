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

// Function: entry_0018e4e8
// Address: 0x18e4e8 - 0x18e520
void entry_0018e4e8_0x18e4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e4e8_0x18e4e8");
#endif

    ctx->pc = 0x18e4e8u;

    // 0x18e4e8: 0x8e630ab8  lw          $v1, 0xAB8($s3)
    ctx->pc = 0x18e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2744)));
    // 0x18e4ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e4f0: 0xae630ab8  sw          $v1, 0xAB8($s3)
    ctx->pc = 0x18e4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2744), GPR_U32(ctx, 3));
    // 0x18e4f4: 0x8e630334  lw          $v1, 0x334($s3)
    ctx->pc = 0x18e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
    // 0x18e4f8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18E4F8u;
    {
        const bool branch_taken_0x18e4f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e4f8) {
            ctx->pc = 0x18E520u;
            return;
        }
    }
    ctx->pc = 0x18E500u;
    // 0x18e500: 0x8e640ab8  lw          $a0, 0xAB8($s3)
    ctx->pc = 0x18e500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2744)));
    // 0x18e504: 0x8e630334  lw          $v1, 0x334($s3)
    ctx->pc = 0x18e504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
    // 0x18e508: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x18e508u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x18e50c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E50Cu;
    {
        const bool branch_taken_0x18e50c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e50c) {
            ctx->pc = 0x18E520u;
            return;
        }
    }
    ctx->pc = 0x18E514u;
    // 0x18e514: 0x8e630b18  lw          $v1, 0xB18($s3)
    ctx->pc = 0x18e514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2840)));
    // 0x18e518: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x18e518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x18e51c: 0xae630b18  sw          $v1, 0xB18($s3)
    ctx->pc = 0x18e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2840), GPR_U32(ctx, 3));
    ctx->pc = 0x18e520u;
}
