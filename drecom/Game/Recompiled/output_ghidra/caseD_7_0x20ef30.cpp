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

// Function: caseD_7
// Address: 0x20ef30 - 0x20ef40
void caseD_7_0x20ef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x20ef30");
#endif

    ctx->pc = 0x20ef30u;

    // 0x20ef30: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20ef30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ef34: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x20ef34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x20ef38: 0x246b0001  addiu       $t3, $v1, 0x1
    ctx->pc = 0x20ef38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20ef3c: 0xa0ab0002  sb          $t3, 0x2($a1)
    ctx->pc = 0x20ef3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 11));
    ctx->pc = 0x20ef40u;
}
