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

// Function: entry_0016c884
// Address: 0x16c884 - 0x16c890
void entry_0016c884_0x16c884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c884_0x16c884");
#endif

    ctx->pc = 0x16c884u;

    // 0x16c884: 0x8fb400b4  lw          $s4, 0xB4($sp)
    ctx->pc = 0x16c884u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16c888: 0x8fb700a4  lw          $s7, 0xA4($sp)
    ctx->pc = 0x16c888u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16c88c: 0x0  nop
    ctx->pc = 0x16c88cu;
    // NOP
    ctx->pc = 0x16c890u;
}
