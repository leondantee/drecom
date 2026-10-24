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

// Function: entry_002c3da0
// Address: 0x2c3da0 - 0x2c3df4
void entry_002c3da0_0x2c3da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c3da0_0x2c3da0");
#endif

    ctx->pc = 0x2c3da0u;

    // 0x2c3da0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3da4: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x2c3da4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2c3da8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2c3da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c3dac: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2c3dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2c3db0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C3DB0u;
    {
        const bool branch_taken_0x2c3db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3db0) {
            ctx->pc = 0x2C3DF4u;
            return;
        }
    }
    ctx->pc = 0x2C3DB8u;
    // 0x2c3db8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3dbc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c3dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c3dc0: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x2c3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c3dc4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C3DC4u;
    {
        const bool branch_taken_0x2c3dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3dc4) {
            ctx->pc = 0x2C3DF4u;
            return;
        }
    }
    ctx->pc = 0x2C3DCCu;
    // 0x2c3dcc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3dd0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c3dd4: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x2c3dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c3dd8: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x2c3dd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2c3ddc: 0x3042bfff  andi        $v0, $v0, 0xBFFF
    ctx->pc = 0x2c3ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
    // 0x2c3de0: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x2c3de0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c3de4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3de8: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x2c3de8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2c3dec: 0x3042bfff  andi        $v0, $v0, 0xBFFF
    ctx->pc = 0x2c3decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
    // 0x2c3df0: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x2c3df0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2c3df4u;
}
