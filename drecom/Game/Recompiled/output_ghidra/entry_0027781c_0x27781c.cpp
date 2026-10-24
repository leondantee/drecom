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

// Function: entry_0027781c
// Address: 0x27781c - 0x277834
void entry_0027781c_0x27781c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027781c_0x27781c");
#endif

    ctx->pc = 0x27781cu;

    // 0x27781c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27781cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277820: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277824: 0xa023d911  sb          $v1, -0x26EF($at)
    ctx->pc = 0x277824u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD911u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD911u, _value); } while (0);
    // 0x277828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x277828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27782c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27782cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277830: 0xac231a20  sw          $v1, 0x1A20($at)
    ctx->pc = 0x277830u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621A20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A20u, _value); } while (0);
    ctx->pc = 0x277834u;
}
