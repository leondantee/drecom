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

// Function: entry_0010b048
// Address: 0x10b048 - 0x10b054
void entry_0010b048_0x10b048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b048_0x10b048");
#endif

    ctx->pc = 0x10b048u;

    // 0x10b048: 0x8c623d24  lw          $v0, 0x3D24($v1)
    ctx->pc = 0x10b048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15652)));
    // 0x10b04c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x10b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x10b050: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x10b050u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    ctx->pc = 0x10b054u;
}
