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

// Function: entry_001350ec
// Address: 0x1350ec - 0x135104
void entry_001350ec_0x1350ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001350ec_0x1350ec");
#endif

    ctx->pc = 0x1350ecu;

    // 0x1350ec: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1350ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1350f0: 0xa603007e  sh          $v1, 0x7E($s0)
    ctx->pc = 0x1350f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 3));
    // 0x1350f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1350f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1350f8: 0xa2030096  sb          $v1, 0x96($s0)
    ctx->pc = 0x1350f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 150), (uint8_t)GPR_U32(ctx, 3));
    // 0x1350fc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1350FCu;
    {
        const bool branch_taken_0x1350fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1350fc) {
            ctx->pc = 0x135150u;
            return;
        }
    }
    ctx->pc = 0x135104u;
}
