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

// Function: entry_0014f740
// Address: 0x14f740 - 0x14f74c
void entry_0014f740_0x14f740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f740_0x14f740");
#endif

    ctx->pc = 0x14f740u;

    // 0x14f740: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x14f740u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14f744: 0xc055564  jal         func_155590
    ctx->pc = 0x14F744u;
    SET_GPR_U32(ctx, 31, 0x14F74Cu);
    ctx->pc = 0x155590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155590u, 0x14F744u, 0x14F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F74Cu;
}
