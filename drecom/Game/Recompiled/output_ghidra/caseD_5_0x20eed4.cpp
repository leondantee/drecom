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

// Function: caseD_5
// Address: 0x20eed4 - 0x20eee4
void caseD_5_0x20eed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x20eed4");
#endif

    ctx->pc = 0x20eed4u;

    // 0x20eed4: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20eed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20eed8: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x20eed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x20eedc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x20eedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20eee0: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x20eee0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x20eee4u;
}
