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

// Function: entry_002035e4
// Address: 0x2035e4 - 0x203600
void entry_002035e4_0x2035e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002035e4_0x2035e4");
#endif

    ctx->pc = 0x2035e4u;

    // 0x2035e4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2035e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2035e8: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2035e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2035ec: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x2035ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x2035f0: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2035f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2035f4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2035f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2035f8: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2035f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2035fc: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x2035fcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    ctx->pc = 0x203600u;
}
