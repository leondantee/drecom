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

// Function: entry_0035eaac
// Address: 0x35eaac - 0x35eb10
void entry_0035eaac_0x35eaac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035eaac_0x35eaac");
#endif

    ctx->pc = 0x35eaacu;

    // 0x35eaac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35eab0: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x35eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
    // 0x35eab4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35eab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35eab8: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x35eab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
    // 0x35eabc: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x35eabcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x35eac0: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x35EAC0u;
    {
        const bool branch_taken_0x35eac0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35eac0) {
            ctx->pc = 0x35EB10u;
            return;
        }
    }
    ctx->pc = 0x35EAC8u;
    // 0x35eac8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35eac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35eacc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ead0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35ead0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35ead4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ead8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35ead8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35eadc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35eae0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35eae0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35eae4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35eae8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35eae8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35eaec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35eaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35eaf0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35eaf4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x35eaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35eaf8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x35eaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x35eafc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x35eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x35eb00: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35eb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35eb04: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x35eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x35eb08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35eb0c: 0xac601330  sw          $zero, 0x1330($v1)
    ctx->pc = 0x35eb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 0));
    ctx->pc = 0x35eb10u;
}
