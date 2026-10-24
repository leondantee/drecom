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

// Function: entry_0010cedc
// Address: 0x10cedc - 0x10cee8
void entry_0010cedc_0x10cedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cedc_0x10cedc");
#endif

    ctx->pc = 0x10cedcu;

    // 0x10cedc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10cee0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10cee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10cee4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x10cee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x10cee8u;
}
