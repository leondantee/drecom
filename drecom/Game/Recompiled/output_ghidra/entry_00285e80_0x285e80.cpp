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

// Function: entry_00285e80
// Address: 0x285e80 - 0x285e8c
void entry_00285e80_0x285e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285e80_0x285e80");
#endif

    ctx->pc = 0x285e80u;

    // 0x285e80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x285e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x285e84: 0x3963c  dsll32      $s2, $v1, 24
    ctx->pc = 0x285e84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285e88: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x285e88u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    ctx->pc = 0x285e8cu;
}
