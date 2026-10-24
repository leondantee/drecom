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

// Function: entry_001a0544
// Address: 0x1a0544 - 0x1a0558
void entry_001a0544_0x1a0544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0544_0x1a0544");
#endif

    ctx->pc = 0x1a0544u;

    // 0x1a0544: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1a0544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1a0548: 0x24632530  addiu       $v1, $v1, 0x2530
    ctx->pc = 0x1a0548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9520));
    // 0x1a054c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a054cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a0550: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1a0550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0554: 0x0  nop
    ctx->pc = 0x1a0554u;
    // NOP
    ctx->pc = 0x1a0558u;
}
