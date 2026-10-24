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

// Function: entry_002e2080
// Address: 0x2e2080 - 0x2e2094
void entry_002e2080_0x2e2080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2080_0x2e2080");
#endif

    ctx->pc = 0x2e2080u;

    // 0x2e2080: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2e2080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e2084: 0xa60300c6  sh          $v1, 0xC6($s0)
    ctx->pc = 0x2e2084u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 198), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e2088: 0x920300d3  lbu         $v1, 0xD3($s0)
    ctx->pc = 0x2e2088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 211)));
    // 0x2e208c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e208cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e2090: 0xa20300d3  sb          $v1, 0xD3($s0)
    ctx->pc = 0x2e2090u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 211), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2e2094u;
}
