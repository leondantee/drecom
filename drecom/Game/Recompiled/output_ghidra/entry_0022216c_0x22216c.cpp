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

// Function: entry_0022216c
// Address: 0x22216c - 0x22218c
void entry_0022216c_0x22216c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022216c_0x22216c");
#endif

    ctx->pc = 0x22216cu;

    // 0x22216c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x22216cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222170: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x222170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x222174: 0xa4400094  sh          $zero, 0x94($v0)
    ctx->pc = 0x222174u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x222178: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x222178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x22217c: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x22217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x222180: 0x84440096  lh          $a0, 0x96($v0)
    ctx->pc = 0x222180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 150)));
    // 0x222184: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x222184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x222188: 0xa4430096  sh          $v1, 0x96($v0)
    ctx->pc = 0x222188u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 150), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x22218cu;
}
