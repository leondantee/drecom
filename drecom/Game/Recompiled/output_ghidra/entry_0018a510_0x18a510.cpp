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

// Function: entry_0018a510
// Address: 0x18a510 - 0x18a528
void entry_0018a510_0x18a510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a510_0x18a510");
#endif

    ctx->pc = 0x18a510u;

    // 0x18a510: 0x2683fd30  addiu       $v1, $s4, -0x2D0
    ctx->pc = 0x18a510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966576));
    // 0x18a514: 0xae8302b0  sw          $v1, 0x2B0($s4)
    ctx->pc = 0x18a514u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 688), GPR_U32(ctx, 3));
    // 0x18a518: 0x268302d0  addiu       $v1, $s4, 0x2D0
    ctx->pc = 0x18a518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 720));
    // 0x18a51c: 0xae8302b4  sw          $v1, 0x2B4($s4)
    ctx->pc = 0x18a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 692), GPR_U32(ctx, 3));
    // 0x18a520: 0x269402d0  addiu       $s4, $s4, 0x2D0
    ctx->pc = 0x18a520u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 720));
    // 0x18a524: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x18a528u;
}
