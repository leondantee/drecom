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

// Function: caseD_4
// Address: 0x31d268 - 0x31d278
void caseD_4_0x31d268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x31d268");
#endif

    ctx->pc = 0x31d268u;

    // 0x31d268: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d26c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x31d26cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x31d270: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31d270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31d274: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x31d274u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x31d278u;
}
