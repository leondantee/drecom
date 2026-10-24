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

// Function: entry_0018da88
// Address: 0x18da88 - 0x18da90
void entry_0018da88_0x18da88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018da88_0x18da88");
#endif

    ctx->pc = 0x18da88u;

    // 0x18da88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18da88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18da8c: 0xfe020a90  sd          $v0, 0xA90($s0)
    ctx->pc = 0x18da8cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2704), GPR_U64(ctx, 2));
    ctx->pc = 0x18da90u;
}
