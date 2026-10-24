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

// Function: entry_00232da0
// Address: 0x232da0 - 0x232de0
void entry_00232da0_0x232da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00232da0_0x232da0");
#endif

    ctx->pc = 0x232da0u;

    // 0x232da0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232da4: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x232da4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x232da8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x232da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x232dac: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x232dacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x232db0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232db4: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x232db4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x232db8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x232DB8u;
    {
        const bool branch_taken_0x232db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232db8) {
            ctx->pc = 0x232DE0u;
            return;
        }
    }
    ctx->pc = 0x232DC0u;
    // 0x232dc0: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x232dc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x232dc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x232dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x232dc8: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x232dc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x232dcc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x232DCCu;
    {
        const bool branch_taken_0x232dcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x232dcc) {
            ctx->pc = 0x232DE0u;
            return;
        }
    }
    ctx->pc = 0x232DD4u;
    // 0x232dd4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x232dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232dd8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232ddc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x232ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x232de0u;
}
