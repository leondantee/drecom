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

// Function: caseD_1
// Address: 0x14f8f4 - 0x14f904
void caseD_1_0x14f8f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x14f8f4");
#endif

    ctx->pc = 0x14f8f4u;

    // 0x14f8f4: 0x36220007  ori         $v0, $s1, 0x7
    ctx->pc = 0x14f8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)7);
    // 0x14f8f8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f8f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14f8fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14F8FCu;
    {
        const bool branch_taken_0x14f8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f8fc) {
            ctx->pc = 0x14F92Cu;
            return;
        }
    }
    ctx->pc = 0x14F904u;
}
