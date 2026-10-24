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

// Function: entry_00310a9c
// Address: 0x310a9c - 0x310b10
void entry_00310a9c_0x310a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00310a9c_0x310a9c");
#endif

    ctx->pc = 0x310a9cu;

    // 0x310a9c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x310a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310aa0: 0x8c83136c  lw          $v1, 0x136C($a0)
    ctx->pc = 0x310aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4972)));
    // 0x310aa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x310aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x310aa8: 0xac83136c  sw          $v1, 0x136C($a0)
    ctx->pc = 0x310aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4972), GPR_U32(ctx, 3));
    // 0x310aac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310ab0: 0x8c63136c  lw          $v1, 0x136C($v1)
    ctx->pc = 0x310ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4972)));
    // 0x310ab4: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x310ab4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x310ab8: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x310AB8u;
    {
        const bool branch_taken_0x310ab8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x310ab8) {
            ctx->pc = 0x310B10u;
            return;
        }
    }
    ctx->pc = 0x310AC0u;
    // 0x310ac0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x310ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310ac4: 0x8c831368  lw          $v1, 0x1368($a0)
    ctx->pc = 0x310ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4968)));
    // 0x310ac8: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x310ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x310acc: 0xac831368  sw          $v1, 0x1368($a0)
    ctx->pc = 0x310accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4968), GPR_U32(ctx, 3));
    // 0x310ad0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310ad4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x310ad8: 0x24701710  addiu       $s0, $v1, 0x1710
    ctx->pc = 0x310ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5904));
    // 0x310adc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x310adcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x310ae0: 0x8e120034  lw          $s2, 0x34($s0)
    ctx->pc = 0x310ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x310ae4: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x310ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x310ae8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x310ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x310aec: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x310aecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x310af0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310af4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x310af8: 0x247017a0  addiu       $s0, $v1, 0x17A0
    ctx->pc = 0x310af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 6048));
    // 0x310afc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x310afcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x310b00: 0x8e120034  lw          $s2, 0x34($s0)
    ctx->pc = 0x310b00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x310b04: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x310b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x310b08: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x310b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x310b0c: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x310b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    ctx->pc = 0x310b10u;
}
