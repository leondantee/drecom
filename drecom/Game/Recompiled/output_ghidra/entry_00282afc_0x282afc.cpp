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

// Function: entry_00282afc
// Address: 0x282afc - 0x282b08
void entry_00282afc_0x282afc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282afc_0x282afc");
#endif

    ctx->pc = 0x282afcu;

    // 0x282afc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x282afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282b00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b04: 0xa022daf1  sb          $v0, -0x250F($at)
    ctx->pc = 0x282b04u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDAF1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDAF1u, _value); } while (0);
    ctx->pc = 0x282b08u;
}
