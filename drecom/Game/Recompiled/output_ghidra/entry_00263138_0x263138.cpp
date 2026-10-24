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

// Function: entry_00263138
// Address: 0x263138 - 0x263148
void entry_00263138_0x263138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263138_0x263138");
#endif

    ctx->pc = 0x263138u;

    // 0x263138: 0x87840  sll         $t7, $t0, 1
    ctx->pc = 0x263138u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x26313c: 0x18f7821  addu        $t7, $t4, $t7
    ctx->pc = 0x26313cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x263140: 0x95ef0000  lhu         $t7, 0x0($t7)
    ctx->pc = 0x263140u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x263144: 0x31f9ffff  andi        $t9, $t7, 0xFFFF
    ctx->pc = 0x263144u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x263148u;
}
