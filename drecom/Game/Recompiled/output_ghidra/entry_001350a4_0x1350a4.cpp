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

// Function: entry_001350a4
// Address: 0x1350a4 - 0x1350c0
void entry_001350a4_0x1350a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001350a4_0x1350a4");
#endif

    ctx->pc = 0x1350a4u;

    // 0x1350a4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1350a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1350a8: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1350a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x1350ac: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1350acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1350b0: 0xa603007e  sh          $v1, 0x7E($s0)
    ctx->pc = 0x1350b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 3));
    // 0x1350b4: 0x92030096  lbu         $v1, 0x96($s0)
    ctx->pc = 0x1350b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x1350b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1350b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1350bc: 0xa2030096  sb          $v1, 0x96($s0)
    ctx->pc = 0x1350bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 150), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1350c0u;
}
