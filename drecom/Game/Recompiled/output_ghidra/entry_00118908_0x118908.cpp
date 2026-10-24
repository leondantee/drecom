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

// Function: entry_00118908
// Address: 0x118908 - 0x118914
void entry_00118908_0x118908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118908_0x118908");
#endif

    ctx->pc = 0x118908u;

    // 0x118908: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x118908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x11890c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x11890cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x118910: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x118910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x118914u;
}
