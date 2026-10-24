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

// Function: caseD_8
// Address: 0x26c898 - 0x26c8b8
void caseD_8_0x26c898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x26c898");
#endif

    ctx->pc = 0x26c898u;

    // 0x26c898: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c89c: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x26c89cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x26c8a0: 0x10a0004b  beqz        $a1, . + 4 + (0x4B << 2)
    ctx->pc = 0x26C8A0u;
    {
        const bool branch_taken_0x26c8a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c8a0) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C8A8u;
    // 0x26c8a8: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x26c8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c8ac: 0xacc01b60  sw          $zero, 0x1B60($a2)
    ctx->pc = 0x26c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7008), GPR_U32(ctx, 0));
    // 0x26c8b0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x26C8B0u;
    {
        const bool branch_taken_0x26c8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c8b0) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C8B8u;
}
