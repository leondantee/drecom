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

// Function: entry_0012fcc8
// Address: 0x12fcc8 - 0x12fd3c
void entry_0012fcc8_0x12fcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fcc8_0x12fcc8");
#endif

    switch (ctx->pc) {
        case 0x12fcd4u: goto label_12fcd4;
        case 0x12fce8u: goto label_12fce8;
        default: break;
    }

    ctx->pc = 0x12fcc8u;

    // 0x12fcc8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12fcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fccc: 0xc05cdd8  jal         func_173760
    ctx->pc = 0x12FCCCu;
    SET_GPR_U32(ctx, 31, 0x12FCD4u);
    ctx->pc = 0x173760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173760u, 0x12FCCCu, 0x12FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCD4u;
label_12fcd4:
    // 0x12fcd4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12FCD4u;
    {
        const bool branch_taken_0x12fcd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fcd4) {
            ctx->pc = 0x12FD3Cu;
            return;
        }
    }
    ctx->pc = 0x12FCDCu;
    // 0x12fcdc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fce0: 0xc04d8bc  jal         func_1362F0
    ctx->pc = 0x12FCE0u;
    SET_GPR_U32(ctx, 31, 0x12FCE8u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x12FCE0u, 0x12FCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCE8u;
label_12fce8:
    // 0x12fce8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x12FCE8u;
    {
        const bool branch_taken_0x12fce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fce8) {
            ctx->pc = 0x12FD3Cu;
            return;
        }
    }
    ctx->pc = 0x12FCF0u;
    // 0x12fcf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fcf4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fcf8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12fcf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12fcfc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x12fcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12fd00: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd04: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12fd04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12fd08: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd0c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12fd0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12fd10: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd14: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12fd14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12fd18: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd1c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12fd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12fd20: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x12fd20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd24: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x12fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12fd28: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x12fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x12fd2c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x12fd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12fd30: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x12fd30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x12fd34: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12FD34u;
    {
        const bool branch_taken_0x12fd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fd34) {
            ctx->pc = 0x12FD84u;
            return;
        }
    }
    ctx->pc = 0x12FD3Cu;
}
