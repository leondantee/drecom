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

// Function: entry_002fca20
// Address: 0x2fca20 - 0x2fca48
void entry_002fca20_0x2fca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fca20_0x2fca20");
#endif

    ctx->pc = 0x2fca20u;

    // 0x2fca20: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fca20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fca24: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x2fca24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2fca28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fca28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fca2c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCA2Cu;
    {
        const bool branch_taken_0x2fca2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fca2c) {
            ctx->pc = 0x2FCA48u;
            return;
        }
    }
    ctx->pc = 0x2FCA34u;
    // 0x2fca34: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fca34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fca38: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2fca38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fca3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2fca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fca40: 0x10a4007d  beq         $a1, $a0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2FCA40u;
    {
        const bool branch_taken_0x2fca40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2fca40) {
            ctx->pc = 0x2FCC38u;
            return;
        }
    }
    ctx->pc = 0x2FCA48u;
}
