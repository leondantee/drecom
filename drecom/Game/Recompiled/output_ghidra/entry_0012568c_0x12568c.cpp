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

// Function: entry_0012568c
// Address: 0x12568c - 0x1256bc
void entry_0012568c_0x12568c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012568c_0x12568c");
#endif

    ctx->pc = 0x12568cu;

    // 0x12568c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12568cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125690: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x125690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125694: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125694u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x125698: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x125698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12569c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12569cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1256a0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1256a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1256a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1256a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1256a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1256a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1256ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1256acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1256b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1256b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1256b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1256b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1256b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1256b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1256bcu;
}
