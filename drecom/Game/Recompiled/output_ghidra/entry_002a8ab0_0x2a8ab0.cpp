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

// Function: entry_002a8ab0
// Address: 0x2a8ab0 - 0x2a8b08
void entry_002a8ab0_0x2a8ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a8ab0_0x2a8ab0");
#endif

    ctx->pc = 0x2a8ab0u;

    // 0x2a8ab0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8ab4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2a8ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2a8ab8: 0x24700240  addiu       $s0, $v1, 0x240
    ctx->pc = 0x2a8ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x2a8abc: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x2a8abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a8ac0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2a8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a8ac4: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A8AC4u;
    {
        const bool branch_taken_0x2a8ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a8ac4) {
            ctx->pc = 0x2A8B08u;
            return;
        }
    }
    ctx->pc = 0x2A8ACCu;
    // 0x2a8acc: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a8accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a8ad0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a8ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a8ad4: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2a8ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2a8ad8: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2a8ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2a8adc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a8adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a8ae0: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2a8ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x2a8ae4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8ae8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2a8ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2a8aec: 0x247002d0  addiu       $s0, $v1, 0x2D0
    ctx->pc = 0x2a8aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x2a8af0: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a8af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a8af4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a8af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a8af8: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2a8af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2a8afc: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2a8afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2a8b00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a8b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a8b04: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2a8b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    ctx->pc = 0x2a8b08u;
}
