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

// Function: entry_0018dc38
// Address: 0x18dc38 - 0x18dc40
void entry_0018dc38_0x18dc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dc38_0x18dc38");
#endif

    ctx->pc = 0x18dc38u;

    // 0x18dc38: 0xae000b24  sw          $zero, 0xB24($s0)
    ctx->pc = 0x18dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2852), GPR_U32(ctx, 0));
    // 0x18dc3c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18dc3cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x18dc40u;
}
