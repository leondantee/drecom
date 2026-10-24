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

// Function: entry_0011e538
// Address: 0x11e538 - 0x11e548
void entry_0011e538_0x11e538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e538_0x11e538");
#endif

    ctx->pc = 0x11e538u;

    // 0x11e538: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x11e538u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x11e53c: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x11e53cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11e540: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x11e540u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e544: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x11e544u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11e548u;
}
