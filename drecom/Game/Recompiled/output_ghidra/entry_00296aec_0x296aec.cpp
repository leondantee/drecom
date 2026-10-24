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

// Function: entry_00296aec
// Address: 0x296aec - 0x296af8
void entry_00296aec_0x296aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296aec_0x296aec");
#endif

    ctx->pc = 0x296aecu;

    // 0x296aec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x296aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296af0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296af4: 0xac23c9e8  sw          $v1, -0x3618($at)
    ctx->pc = 0x296af4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x80C9E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9E8u, _value); } while (0);
    ctx->pc = 0x296af8u;
}
