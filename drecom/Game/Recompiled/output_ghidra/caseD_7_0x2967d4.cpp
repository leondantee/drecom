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

// Function: caseD_7
// Address: 0x2967d4 - 0x2967ec
void caseD_7_0x2967d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x2967d4");
#endif

    ctx->pc = 0x2967d4u;

    // 0x2967d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2967d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2967d8: 0x8c6469b8  lw          $a0, 0x69B8($v1)
    ctx->pc = 0x2967d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27064)));
    // 0x2967dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2967dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2967e0: 0xac6469b4  sw          $a0, 0x69B4($v1)
    ctx->pc = 0x2967e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27060), GPR_U32(ctx, 4));
    // 0x2967e4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2967E4u;
    {
        const bool branch_taken_0x2967e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2967e4) {
            ctx->pc = 0x296978u;
            return;
        }
    }
    ctx->pc = 0x2967ECu;
}
