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

// Function: entry_001d0874
// Address: 0x1d0874 - 0x1d0890
void entry_001d0874_0x1d0874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0874_0x1d0874");
#endif

    ctx->pc = 0x1d0874u;

    // 0x1d0874: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1d0874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d0878: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d087c: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1d087cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d0880: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0884: 0xa480127c  sh          $zero, 0x127C($a0)
    ctx->pc = 0x1d0884u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d0888: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d088c: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1d088cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1d0890u;
}
