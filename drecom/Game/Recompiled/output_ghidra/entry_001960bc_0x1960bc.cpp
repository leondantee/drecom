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

// Function: entry_001960bc
// Address: 0x1960bc - 0x1960dc
void entry_001960bc_0x1960bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001960bc_0x1960bc");
#endif

    ctx->pc = 0x1960bcu;

    // 0x1960bc: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1960bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1960c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1960c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1960c4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1960C4u;
    {
        const bool branch_taken_0x1960c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1960c4) {
            ctx->pc = 0x1960DCu;
            return;
        }
    }
    ctx->pc = 0x1960CCu;
    // 0x1960cc: 0x8fb600c8  lw          $s6, 0xC8($sp)
    ctx->pc = 0x1960ccu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1960d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1960d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1960d4: 0x16c3000b  bne         $s6, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1960D4u;
    {
        const bool branch_taken_0x1960d4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x1960d4) {
            ctx->pc = 0x196104u;
            return;
        }
    }
    ctx->pc = 0x1960DCu;
}
