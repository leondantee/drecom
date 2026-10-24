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

// Function: entry_0019eac8
// Address: 0x19eac8 - 0x19ead0
void entry_0019eac8_0x19eac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019eac8_0x19eac8");
#endif

    ctx->pc = 0x19eac8u;

    // 0x19eac8: 0x938280b8  lbu         $v0, -0x7F48($gp)
    ctx->pc = 0x19eac8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934712)));
    // 0x19eacc: 0xa38280bc  sb          $v0, -0x7F44($gp)
    ctx->pc = 0x19eaccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934716), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x19ead0u;
}
