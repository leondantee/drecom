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

// Function: entry_0032973c
// Address: 0x32973c - 0x32974c
void entry_0032973c_0x32973c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032973c_0x32973c");
#endif

    ctx->pc = 0x32973cu;

    // 0x32973c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32973cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329740: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x329740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x329744: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x329744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x329748: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x329748u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x32974cu;
}
