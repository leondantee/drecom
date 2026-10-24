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

// Function: entry_002f66fc
// Address: 0x2f66fc - 0x2f6708
void entry_002f66fc_0x2f66fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f66fc_0x2f66fc");
#endif

    ctx->pc = 0x2f66fcu;

    // 0x2f66fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f66fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f6700: 0xa420f1ac  sh          $zero, -0xE54($at)
    ctx->pc = 0x2f6700u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EF1ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EF1ACu, _value); } while (0);
    // 0x2f6704: 0x0  nop
    ctx->pc = 0x2f6704u;
    // NOP
    ctx->pc = 0x2f6708u;
}
