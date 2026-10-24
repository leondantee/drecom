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

// Function: entry_001400f4
// Address: 0x1400f4 - 0x140100
void entry_001400f4_0x1400f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001400f4_0x1400f4");
#endif

    ctx->pc = 0x1400f4u;

    // 0x1400f4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1400f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1400f8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1400f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1400fc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1400fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x140100u;
}
