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

// Function: entry_0020c114
// Address: 0x20c114 - 0x20c128
void entry_0020c114_0x20c114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c114_0x20c114");
#endif

    ctx->pc = 0x20c114u;

    // 0x20c114: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20c114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20c118: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x20c118u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20c11c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20c11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c120: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20c120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20c124: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x20c124u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x20c128u;
}
