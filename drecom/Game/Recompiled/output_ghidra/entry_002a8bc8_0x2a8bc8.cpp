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

// Function: entry_002a8bc8
// Address: 0x2a8bc8 - 0x2a8ca0
void entry_002a8bc8_0x2a8bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a8bc8_0x2a8bc8");
#endif

    ctx->pc = 0x2a8bc8u;

    // 0x2a8bc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8bcc: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2a8bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2a8bd0: 0x24700360  addiu       $s0, $v1, 0x360
    ctx->pc = 0x2a8bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 864));
    // 0x2a8bd4: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x2a8bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a8bd8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2a8bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a8bdc: 0x10830054  beq         $a0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2A8BDCu;
    {
        const bool branch_taken_0x2a8bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a8bdc) {
            ctx->pc = 0x2A8D30u;
            return;
        }
    }
    ctx->pc = 0x2A8BE4u;
    // 0x2a8be4: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2a8be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8be8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8bec: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x2a8becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x2a8bf0: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a8bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a8bf4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8bf8: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2a8bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2a8bfc: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2a8bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2a8c00: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c04: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2a8c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x2a8c08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8c0c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2a8c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2a8c10: 0x247003f0  addiu       $s0, $v1, 0x3F0
    ctx->pc = 0x2a8c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1008));
    // 0x2a8c14: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2a8c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8c18: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c1c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x2a8c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x2a8c20: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a8c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a8c24: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c28: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2a8c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2a8c2c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2a8c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2a8c30: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c34: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2a8c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x2a8c38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8c3c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2a8c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2a8c40: 0x24700630  addiu       $s0, $v1, 0x630
    ctx->pc = 0x2a8c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1584));
    // 0x2a8c44: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2a8c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8c48: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c4c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x2a8c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x2a8c50: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a8c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a8c54: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c58: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2a8c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2a8c5c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2a8c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2a8c60: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c64: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2a8c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x2a8c68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8c6c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2a8c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2a8c70: 0x247006c0  addiu       $s0, $v1, 0x6C0
    ctx->pc = 0x2a8c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x2a8c74: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2a8c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8c78: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c7c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x2a8c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x2a8c80: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a8c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a8c84: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c88: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2a8c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2a8c8c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2a8c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2a8c90: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c94: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2a8c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x2a8c98: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2A8C98u;
    {
        const bool branch_taken_0x2a8c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8c98) {
            ctx->pc = 0x2A8D30u;
            return;
        }
    }
    ctx->pc = 0x2A8CA0u;
}
