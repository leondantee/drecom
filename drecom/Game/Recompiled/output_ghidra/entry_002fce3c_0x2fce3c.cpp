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

// Function: entry_002fce3c
// Address: 0x2fce3c - 0x2fce64
void entry_002fce3c_0x2fce3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fce3c_0x2fce3c");
#endif

    ctx->pc = 0x2fce3cu;

    // 0x2fce3c: 0x8fa70178  lw          $a3, 0x178($sp)
    ctx->pc = 0x2fce3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fce40: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2fce40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fce44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fce44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fce48: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCE48u;
    {
        const bool branch_taken_0x2fce48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fce48) {
            ctx->pc = 0x2FCE64u;
            return;
        }
    }
    ctx->pc = 0x2FCE50u;
    // 0x2fce50: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2fce50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fce54: 0x8cc400d4  lw          $a0, 0xD4($a2)
    ctx->pc = 0x2fce54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x2fce58: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2fce58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2fce5c: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2FCE5Cu;
    {
        const bool branch_taken_0x2fce5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fce5c) {
            ctx->pc = 0x2FCE8Cu;
            return;
        }
    }
    ctx->pc = 0x2FCE64u;
}
