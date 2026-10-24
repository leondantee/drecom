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

// Function: entry_0012ebc8
// Address: 0x12ebc8 - 0x12ebe0
void entry_0012ebc8_0x12ebc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ebc8_0x12ebc8");
#endif

    ctx->pc = 0x12ebc8u;

    // 0x12ebc8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12ebc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x12ebcc: 0x84228db4  lh          $v0, -0x724C($at)
    ctx->pc = 0x12ebccu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x388DB4u));
    // 0x12ebd0: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x12ebd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x12ebd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ebd8: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x12ebd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x12ebdc: 0x0  nop
    ctx->pc = 0x12ebdcu;
    // NOP
    ctx->pc = 0x12ebe0u;
}
