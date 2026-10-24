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

// Function: entry_00379758
// Address: 0x379758 - 0x379780
void entry_00379758_0x379758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00379758_0x379758");
#endif

    ctx->pc = 0x379758u;

    // 0x379758: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x379758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37975c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x37975cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379760: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x379760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x379764: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379768: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x379768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x37976c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x37976cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379770: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x379770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x379774: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379778: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x379778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x37977c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x37977cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x379780u;
}
