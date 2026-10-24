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

// Function: entry_0033f554
// Address: 0x33f554 - 0x33f564
void entry_0033f554_0x33f554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033f554_0x33f554");
#endif

    ctx->pc = 0x33f554u;

    // 0x33f554: 0x92040060  lbu         $a0, 0x60($s0)
    ctx->pc = 0x33f554u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x33f558: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f55c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x33f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f560: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x33f560u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x33f564u;
}
