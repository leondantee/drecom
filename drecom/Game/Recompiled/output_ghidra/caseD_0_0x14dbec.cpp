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

// Function: caseD_0
// Address: 0x14dbec - 0x14dbf8
void caseD_0_0x14dbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x14dbec");
#endif

    ctx->pc = 0x14dbecu;

    // 0x14dbec: 0x860313ac  lh          $v1, 0x13AC($s0)
    ctx->pc = 0x14dbecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5036)));
    // 0x14dbf0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x14dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14dbf4: 0xa60213ac  sh          $v0, 0x13AC($s0)
    ctx->pc = 0x14dbf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5036), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14dbf8u;
}
