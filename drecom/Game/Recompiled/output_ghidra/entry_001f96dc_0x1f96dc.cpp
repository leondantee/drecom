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

// Function: entry_001f96dc
// Address: 0x1f96dc - 0x1f9714
void entry_001f96dc_0x1f96dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f96dc_0x1f96dc");
#endif

    ctx->pc = 0x1f96dcu;

    // 0x1f96dc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x1f96dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f96e0: 0x84a4002a  lh          $a0, 0x2A($a1)
    ctx->pc = 0x1f96e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x1f96e4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f96e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f96e8: 0xa4a3002a  sh          $v1, 0x2A($a1)
    ctx->pc = 0x1f96e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f96ec: 0x14800027  bnez        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1F96ECu;
    {
        const bool branch_taken_0x1f96ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f96ec) {
            ctx->pc = 0x1F978Cu;
            return;
        }
    }
    ctx->pc = 0x1F96F4u;
    // 0x1f96f4: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x1f96f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1f96f8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f96f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f96fc: 0xa464002a  sh          $a0, 0x2A($v1)
    ctx->pc = 0x1f96fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f9700: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f9700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f9704: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f9704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9708: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x1f9708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f970c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1F970Cu;
    {
        const bool branch_taken_0x1f970c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f970c) {
            ctx->pc = 0x1F978Cu;
            return;
        }
    }
    ctx->pc = 0x1F9714u;
}
