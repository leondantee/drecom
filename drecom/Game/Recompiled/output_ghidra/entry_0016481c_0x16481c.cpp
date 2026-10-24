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

// Function: entry_0016481c
// Address: 0x16481c - 0x164828
void entry_0016481c_0x16481c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016481c_0x16481c");
#endif

    ctx->pc = 0x16481cu;

    // 0x16481c: 0x92020054  lbu         $v0, 0x54($s0)
    ctx->pc = 0x16481cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x164820: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x164820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x164824: 0xa2020054  sb          $v0, 0x54($s0)
    ctx->pc = 0x164824u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x164828u;
}
