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

// Function: entry_00342164
// Address: 0x342164 - 0x342170
void entry_00342164_0x342164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00342164_0x342164");
#endif

    ctx->pc = 0x342164u;

    // 0x342164: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342168: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x342168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34216c: 0xa44000c2  sh          $zero, 0xC2($v0)
    ctx->pc = 0x34216cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 194), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x342170u;
}
