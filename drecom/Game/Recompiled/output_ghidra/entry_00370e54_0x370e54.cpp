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

// Function: entry_00370e54
// Address: 0x370e54 - 0x370eec
void entry_00370e54_0x370e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00370e54_0x370e54");
#endif

    ctx->pc = 0x370e54u;

    // 0x370e54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x370e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370e58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e5c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x370e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x370e60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e64: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x370e64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x370e68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e6c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x370e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x370e70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e74: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x370e74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x370e78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e7c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x370e80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e84: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370e88: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x370e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370e8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e90: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x370E90u;
    {
        const bool branch_taken_0x370e90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x370e90) {
            ctx->pc = 0x370EECu;
            return;
        }
    }
    ctx->pc = 0x370E98u;
    // 0x370e98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x370e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370e9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370ea0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370ea4: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370ea8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x370ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x370eac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370eb0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370eb4: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370eb8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x370eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x370ebc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370ec0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370ec4: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370ec8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x370ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x370ecc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370ed0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370ed4: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370ed8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x370ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x370edc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370ee0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370ee4: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370ee8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x370eecu;
}
