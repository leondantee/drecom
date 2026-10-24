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

// Function: entry_0016eb70
// Address: 0x16eb70 - 0x16eb88
void entry_0016eb70_0x16eb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016eb70_0x16eb70");
#endif

    ctx->pc = 0x16eb70u;

    // 0x16eb70: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x16eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x16eb74: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x16eb74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x16eb78: 0x2631003c  addiu       $s1, $s1, 0x3C
    ctx->pc = 0x16eb78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x16eb7c: 0x97a200dc  lhu         $v0, 0xDC($sp)
    ctx->pc = 0x16eb7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x16eb80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16eb84: 0xa7a200dc  sh          $v0, 0xDC($sp)
    ctx->pc = 0x16eb84u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 220), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x16eb88u;
}
