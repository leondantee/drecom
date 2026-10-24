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

// Function: entry_0018e038
// Address: 0x18e038 - 0x18e04c
void entry_0018e038_0x18e038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e038_0x18e038");
#endif

    ctx->pc = 0x18e038u;

    // 0x18e038: 0x1680ffdc  bnez        $s4, . + 4 + (-0x24 << 2)
    ctx->pc = 0x18E038u;
    {
        const bool branch_taken_0x18e038 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e038) {
            ctx->pc = 0x18DFACu;
            return;
        }
    }
    ctx->pc = 0x18E040u;
    // 0x18e040: 0x8eb10038  lw          $s1, 0x38($s5)
    ctx->pc = 0x18e040u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x18e044: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x18E044u;
    {
        const bool branch_taken_0x18e044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e044) {
            ctx->pc = 0x18E198u;
            return;
        }
    }
    ctx->pc = 0x18E04Cu;
}
