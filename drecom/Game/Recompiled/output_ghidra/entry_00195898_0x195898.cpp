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

// Function: entry_00195898
// Address: 0x195898 - 0x1958b8
void entry_00195898_0x195898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195898_0x195898");
#endif

    ctx->pc = 0x195898u;

    // 0x195898: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x195898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x19589c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1958a0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1958A0u;
    {
        const bool branch_taken_0x1958a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1958a0) {
            ctx->pc = 0x1958B8u;
            return;
        }
    }
    ctx->pc = 0x1958A8u;
    // 0x1958a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1958a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1958ac: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1958acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1958b0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1958B0u;
    {
        const bool branch_taken_0x1958b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1958b0) {
            ctx->pc = 0x1958D4u;
            return;
        }
    }
    ctx->pc = 0x1958B8u;
}
