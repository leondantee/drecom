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

// Function: entry_00108604
// Address: 0x108604 - 0x108610
void entry_00108604_0x108604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108604_0x108604");
#endif

    ctx->pc = 0x108604u;

    // 0x108604: 0x8c433d04  lw          $v1, 0x3D04($v0)
    ctx->pc = 0x108604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15620)));
    // 0x108608: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x108608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x10860c: 0xac8300ac  sw          $v1, 0xAC($a0)
    ctx->pc = 0x10860cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 3));
    ctx->pc = 0x108610u;
}
