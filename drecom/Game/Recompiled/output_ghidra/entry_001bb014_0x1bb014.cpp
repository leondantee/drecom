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

// Function: entry_001bb014
// Address: 0x1bb014 - 0x1bb030
void entry_001bb014_0x1bb014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb014_0x1bb014");
#endif

    ctx->pc = 0x1bb014u;

    // 0x1bb014: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1bb014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bb018: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb01c: 0xa04410a8  sb          $a0, 0x10A8($v0)
    ctx->pc = 0x1bb01cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bb020: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb024: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bb024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bb028: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1bb028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bb02c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bb02cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1bb030u;
}
