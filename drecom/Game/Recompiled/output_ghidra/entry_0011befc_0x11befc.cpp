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

// Function: entry_0011befc
// Address: 0x11befc - 0x11bf00
void entry_0011befc_0x11befc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011befc_0x11befc");
#endif

    ctx->pc = 0x11befcu;

    // 0x11befc: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x11befcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->pc = 0x11bf00u;
}
