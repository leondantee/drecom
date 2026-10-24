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

// Function: entry_0011ea4c
// Address: 0x11ea4c - 0x11ea5c
void entry_0011ea4c_0x11ea4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ea4c_0x11ea4c");
#endif

    ctx->pc = 0x11ea4cu;

    // 0x11ea4c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x11ea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x11ea50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ea54: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x11ea54u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x11ea58: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x11ea58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x11ea5cu;
}
