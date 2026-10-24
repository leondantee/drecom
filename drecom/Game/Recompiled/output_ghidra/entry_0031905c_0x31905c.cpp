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

// Function: entry_0031905c
// Address: 0x31905c - 0x319078
void entry_0031905c_0x31905c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031905c_0x31905c");
#endif

    ctx->pc = 0x31905cu;

    // 0x31905c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31905cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x319060: 0x9022edae  lbu         $v0, -0x1252($at)
    ctx->pc = 0x319060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEDAEu));
    // 0x319064: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x319064u;
    {
        const bool branch_taken_0x319064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319064) {
            ctx->pc = 0x319078u;
            return;
        }
    }
    ctx->pc = 0x31906Cu;
    // 0x31906c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31906cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319070: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x319070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x319074: 0xac431294  sw          $v1, 0x1294($v0)
    ctx->pc = 0x319074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4756), GPR_U32(ctx, 3));
    ctx->pc = 0x319078u;
}
