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

// Function: entry_003796dc
// Address: 0x3796dc - 0x379710
void entry_003796dc_0x3796dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003796dc_0x3796dc");
#endif

    ctx->pc = 0x3796dcu;

    // 0x3796dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3796dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3796e0: 0x8c700058  lw          $s0, 0x58($v1)
    ctx->pc = 0x3796e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3796e4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x3796e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3796e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3796e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3796ec: 0xa06411ec  sb          $a0, 0x11EC($v1)
    ctx->pc = 0x3796ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 4));
    // 0x3796f0: 0x24047f60  addiu       $a0, $zero, 0x7F60
    ctx->pc = 0x3796f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32608));
    // 0x3796f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3796f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3796f8: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x3796f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x3796fc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3796fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x379700: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379704: 0xac64128c  sw          $a0, 0x128C($v1)
    ctx->pc = 0x379704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 4));
    // 0x379708: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x379708u;
    {
        const bool branch_taken_0x379708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379708) {
            ctx->pc = 0x379758u;
            return;
        }
    }
    ctx->pc = 0x379710u;
}
