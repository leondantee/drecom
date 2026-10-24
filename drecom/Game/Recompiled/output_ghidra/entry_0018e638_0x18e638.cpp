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

// Function: entry_0018e638
// Address: 0x18e638 - 0x18e64c
void entry_0018e638_0x18e638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e638_0x18e638");
#endif

    ctx->pc = 0x18e638u;

    // 0x18e638: 0x1620ffd9  bnez        $s1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x18E638u;
    {
        const bool branch_taken_0x18e638 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e638) {
            ctx->pc = 0x18E5A0u;
            return;
        }
    }
    ctx->pc = 0x18E640u;
    // 0x18e640: 0x8e500038  lw          $s0, 0x38($s2)
    ctx->pc = 0x18e640u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x18e644: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x18E644u;
    {
        const bool branch_taken_0x18e644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e644) {
            ctx->pc = 0x18E780u;
            return;
        }
    }
    ctx->pc = 0x18E64Cu;
}
