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

// Function: entry_001df904
// Address: 0x1df904 - 0x1df920
void entry_001df904_0x1df904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df904_0x1df904");
#endif

    ctx->pc = 0x1df904u;

    // 0x1df904: 0x93a30018  lbu         $v1, 0x18($sp)
    ctx->pc = 0x1df904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df908: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df90c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1df90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1df910: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF910u;
    {
        const bool branch_taken_0x1df910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df910) {
            ctx->pc = 0x1DF928u;
            return;
        }
    }
    ctx->pc = 0x1DF918u;
    // 0x1df918: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1df918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df91c: 0x93a50018  lbu         $a1, 0x18($sp)
    ctx->pc = 0x1df91cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x1df920u;
}
