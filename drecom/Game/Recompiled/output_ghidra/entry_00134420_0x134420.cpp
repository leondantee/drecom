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

// Function: entry_00134420
// Address: 0x134420 - 0x134434
void entry_00134420_0x134420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134420_0x134420");
#endif

    ctx->pc = 0x134420u;

    // 0x134420: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x134420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x134424: 0xa6030080  sh          $v1, 0x80($s0)
    ctx->pc = 0x134424u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x134428: 0x92030094  lbu         $v1, 0x94($s0)
    ctx->pc = 0x134428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x13442c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13442cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x134430: 0xa2030094  sb          $v1, 0x94($s0)
    ctx->pc = 0x134430u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x134434u;
}
