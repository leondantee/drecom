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

// Function: caseD_0
// Address: 0x1279b0 - 0x127a10
void caseD_0_0x1279b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1279b0");
#endif

    switch (ctx->pc) {
        case 0x1279c4u: goto label_1279c4;
        default: break;
    }

    ctx->pc = 0x1279b0u;

    // 0x1279b0: 0x16200017  bnez        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1279B0u;
    {
        const bool branch_taken_0x1279b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1279b0) {
            ctx->pc = 0x127A10u;
            return;
        }
    }
    ctx->pc = 0x1279B8u;
    // 0x1279b8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1279b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1279bc: 0xc04d8bc  jal         func_1362F0
    ctx->pc = 0x1279BCu;
    SET_GPR_U32(ctx, 31, 0x1279C4u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x1279BCu, 0x1279C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1279C4u;
label_1279c4:
    // 0x1279c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1279C4u;
    {
        const bool branch_taken_0x1279c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1279c4) {
            ctx->pc = 0x127A10u;
            return;
        }
    }
    ctx->pc = 0x1279CCu;
    // 0x1279cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1279ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1279d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1279d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1279d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1279d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1279d8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1279d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1279dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1279dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1279e0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1279e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1279e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1279e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1279e8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1279e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1279ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1279ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1279f0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1279f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1279f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1279f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1279f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1279f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1279fc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1279fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127a00: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x127a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x127a04: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x127a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x127a08: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x127a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x127a0c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x127a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x127a10u;
}
