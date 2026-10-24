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

// Function: entry_001b0070
// Address: 0x1b0070 - 0x1b00b8
void entry_001b0070_0x1b0070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0070_0x1b0070");
#endif

    ctx->pc = 0x1b0070u;

    // 0x1b0070: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b0070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b0074: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b0074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0078: 0xafa404a8  sw          $a0, 0x4A8($sp)
    ctx->pc = 0x1b0078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 4));
    // 0x1b007c: 0x97a304be  lhu         $v1, 0x4BE($sp)
    ctx->pc = 0x1b007cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1214)));
    // 0x1b0080: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b0080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b0084: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b0084u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0088: 0x1460ff3a  bnez        $v1, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x1B0088u;
    {
        const bool branch_taken_0x1b0088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0088) {
            ctx->pc = 0x1AFD74u;
            return;
        }
    }
    ctx->pc = 0x1B0090u;
    // 0x1b0090: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1b0090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b0094: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1b0094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1b0098: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1b0098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1b009c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b009cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b00a0: 0xaee30a68  sw          $v1, 0xA68($s7)
    ctx->pc = 0x1b00a0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 3));
    // 0x1b00a4: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1b00a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b00a8: 0xafa304b8  sw          $v1, 0x4B8($sp)
    ctx->pc = 0x1b00a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1208), GPR_U32(ctx, 3));
    // 0x1b00ac: 0xafa004a8  sw          $zero, 0x4A8($sp)
    ctx->pc = 0x1b00acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 0));
    // 0x1b00b0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1B00B0u;
    {
        const bool branch_taken_0x1b00b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b00b0) {
            ctx->pc = 0x1B0180u;
            return;
        }
    }
    ctx->pc = 0x1B00B8u;
}
