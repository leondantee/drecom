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

// Function: entry_00126e9c
// Address: 0x126e9c - 0x126ee4
void entry_00126e9c_0x126e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126e9c_0x126e9c");
#endif

    ctx->pc = 0x126e9cu;

    // 0x126e9c: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x126e9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x126ea0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x126EA0u;
    {
        const bool branch_taken_0x126ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x126ea0) {
            ctx->pc = 0x126EE4u;
            return;
        }
    }
    ctx->pc = 0x126EA8u;
    // 0x126ea8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126eac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126eb0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126eb4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x126eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x126eb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126ebc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126ec0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126ec4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126ec8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126ecc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126eccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126ed0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x126ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x126ed4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126ed8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x126ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x126edc: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x126EDCu;
    {
        const bool branch_taken_0x126edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126edc) {
            ctx->pc = 0x127374u;
            return;
        }
    }
    ctx->pc = 0x126EE4u;
}
