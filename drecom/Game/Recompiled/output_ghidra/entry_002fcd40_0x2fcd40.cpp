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

// Function: entry_002fcd40
// Address: 0x2fcd40 - 0x2fcd68
void entry_002fcd40_0x2fcd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fcd40_0x2fcd40");
#endif

    ctx->pc = 0x2fcd40u;

    // 0x2fcd40: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2fcd40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcd44: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2fcd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2fcd48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fcd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fcd4c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCD4Cu;
    {
        const bool branch_taken_0x2fcd4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fcd4c) {
            ctx->pc = 0x2FCD68u;
            return;
        }
    }
    ctx->pc = 0x2FCD54u;
    // 0x2fcd54: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcd58: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x2fcd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fcd5c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2fcd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2fcd60: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2FCD60u;
    {
        const bool branch_taken_0x2fcd60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fcd60) {
            ctx->pc = 0x2FCD90u;
            return;
        }
    }
    ctx->pc = 0x2FCD68u;
}
