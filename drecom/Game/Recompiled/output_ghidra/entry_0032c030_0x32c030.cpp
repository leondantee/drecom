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

// Function: entry_0032c030
// Address: 0x32c030 - 0x32c04c
void entry_0032c030_0x32c030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c030_0x32c030");
#endif

    ctx->pc = 0x32c030u;

    // 0x32c030: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x32c030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x32c034: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32c034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32c038: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x32c038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x32c03c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32c03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32c040: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x32c040u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x32c044: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32C044u;
    {
        const bool branch_taken_0x32c044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c044) {
            ctx->pc = 0x32C058u;
            return;
        }
    }
    ctx->pc = 0x32C04Cu;
}
