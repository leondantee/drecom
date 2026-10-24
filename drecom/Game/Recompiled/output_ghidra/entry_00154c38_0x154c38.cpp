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

// Function: entry_00154c38
// Address: 0x154c38 - 0x154c44
void entry_00154c38_0x154c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154c38_0x154c38");
#endif

    ctx->pc = 0x154c38u;

    // 0x154c38: 0x9203157c  lbu         $v1, 0x157C($s0)
    ctx->pc = 0x154c38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5500)));
    // 0x154c3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x154c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x154c40: 0xa203157c  sb          $v1, 0x157C($s0)
    ctx->pc = 0x154c40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5500), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x154c44u;
}
