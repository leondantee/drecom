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

// Function: entry_001db6e4
// Address: 0x1db6e4 - 0x1db718
void entry_001db6e4_0x1db6e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db6e4_0x1db6e4");
#endif

    ctx->pc = 0x1db6e4u;

    // 0x1db6e4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1db6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db6e8: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x1db6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1db6ec: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x1db6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x1db6f0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1db6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1db6f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB6F4u;
    {
        const bool branch_taken_0x1db6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db6f4) {
            ctx->pc = 0x1DB718u;
            return;
        }
    }
    ctx->pc = 0x1DB6FCu;
    // 0x1db6fc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1db6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1db700: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1db700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1db704: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1db704u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1db708: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1db708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db70c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db710: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1db710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1db714: 0x0  nop
    ctx->pc = 0x1db714u;
    // NOP
    ctx->pc = 0x1db718u;
}
