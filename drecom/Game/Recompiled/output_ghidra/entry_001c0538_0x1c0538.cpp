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

// Function: entry_001c0538
// Address: 0x1c0538 - 0x1c0554
void entry_001c0538_0x1c0538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0538_0x1c0538");
#endif

    ctx->pc = 0x1c0538u;

    // 0x1c0538: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c0538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c053c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0540: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c0540u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c0544: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0548: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c0548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c054c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c054cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0550: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c0550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c0554u;
}
