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

// Function: entry_002fb014
// Address: 0x2fb014 - 0x2fb03c
void entry_002fb014_0x2fb014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb014_0x2fb014");
#endif

    ctx->pc = 0x2fb014u;

    // 0x2fb014: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb018: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2fb018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fb01c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fb01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb020: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB020u;
    {
        const bool branch_taken_0x2fb020 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fb020) {
            ctx->pc = 0x2FB03Cu;
            return;
        }
    }
    ctx->pc = 0x2FB028u;
    // 0x2fb028: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb02c: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x2fb02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fb030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fb030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb034: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2FB034u;
    {
        const bool branch_taken_0x2fb034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fb034) {
            ctx->pc = 0x2FB064u;
            return;
        }
    }
    ctx->pc = 0x2FB03Cu;
}
