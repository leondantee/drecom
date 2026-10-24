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

// Function: entry_0012a45c
// Address: 0x12a45c - 0x12a4bc
void entry_0012a45c_0x12a45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a45c_0x12a45c");
#endif

    switch (ctx->pc) {
        case 0x12a470u: goto label_12a470;
        default: break;
    }

    ctx->pc = 0x12a45cu;

    // 0x12a45c: 0x16200017  bnez        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x12A45Cu;
    {
        const bool branch_taken_0x12a45c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a45c) {
            ctx->pc = 0x12A4BCu;
            return;
        }
    }
    ctx->pc = 0x12A464u;
    // 0x12a464: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12a464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a468: 0xc04d8bc  jal         func_1362F0
    ctx->pc = 0x12A468u;
    SET_GPR_U32(ctx, 31, 0x12A470u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x12A468u, 0x12A470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A470u;
label_12a470:
    // 0x12a470: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12A470u;
    {
        const bool branch_taken_0x12a470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a470) {
            ctx->pc = 0x12A4BCu;
            return;
        }
    }
    ctx->pc = 0x12A478u;
    // 0x12a478: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a47c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a480: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a480u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a484: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x12a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12a488: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a48c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a48cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a490: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a494: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a494u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a498: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a49c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a49cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a4a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a4a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12a4a8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12a4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a4ac: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x12a4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12a4b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x12a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x12a4b4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x12a4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12a4b8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x12a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x12a4bcu;
}
