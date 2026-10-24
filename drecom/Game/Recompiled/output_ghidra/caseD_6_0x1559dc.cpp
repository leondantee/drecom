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

// Function: caseD_6
// Address: 0x1559dc - 0x155a40
void caseD_6_0x1559dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1559dc");
#endif

    switch (ctx->pc) {
        case 0x1559f0u: goto label_1559f0;
        default: break;
    }

    ctx->pc = 0x1559dcu;

    // 0x1559dc: 0x8e041344  lw          $a0, 0x1344($s0)
    ctx->pc = 0x1559dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4932)));
    // 0x1559e0: 0x8e051334  lw          $a1, 0x1334($s0)
    ctx->pc = 0x1559e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
    // 0x1559e4: 0x8e06133c  lw          $a2, 0x133C($s0)
    ctx->pc = 0x1559e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x1559e8: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x1559E8u;
    SET_GPR_U32(ctx, 31, 0x1559F0u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x1559E8u, 0x1559F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1559F0u;
label_1559f0:
    // 0x1559f0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1559f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1559f4: 0xa06002d0  sb          $zero, 0x2D0($v1)
    ctx->pc = 0x1559f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 720), (uint8_t)GPR_U32(ctx, 0));
    // 0x1559f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1559f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1559fc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x1559fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x155a00: 0xa0640b40  sb          $a0, 0xB40($v1)
    ctx->pc = 0x155a00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2880), (uint8_t)GPR_U32(ctx, 4));
    // 0x155a04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155a08: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x155a0c: 0xa0640bd0  sb          $a0, 0xBD0($v1)
    ctx->pc = 0x155a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3024), (uint8_t)GPR_U32(ctx, 4));
    // 0x155a10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155a14: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x155a18: 0xa0640c60  sb          $a0, 0xC60($v1)
    ctx->pc = 0x155a18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3168), (uint8_t)GPR_U32(ctx, 4));
    // 0x155a1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155a20: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x155a24: 0xa0640cf0  sb          $a0, 0xCF0($v1)
    ctx->pc = 0x155a24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3312), (uint8_t)GPR_U32(ctx, 4));
    // 0x155a28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155a2c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x155a30: 0xa0640d80  sb          $a0, 0xD80($v1)
    ctx->pc = 0x155a30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3456), (uint8_t)GPR_U32(ctx, 4));
    // 0x155a34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155a38: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x155a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x155a3c: 0xa0640e10  sb          $a0, 0xE10($v1)
    ctx->pc = 0x155a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3600), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x155a40u;
}
