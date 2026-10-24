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

// Function: entry_00126404
// Address: 0x126404 - 0x126464
void entry_00126404_0x126404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126404_0x126404");
#endif

    switch (ctx->pc) {
        case 0x126418u: goto label_126418;
        default: break;
    }

    ctx->pc = 0x126404u;

    // 0x126404: 0x16200017  bnez        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x126404u;
    {
        const bool branch_taken_0x126404 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x126404) {
            ctx->pc = 0x126464u;
            return;
        }
    }
    ctx->pc = 0x12640Cu;
    // 0x12640c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12640cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126410: 0xc04d8bc  jal         func_1362F0
    ctx->pc = 0x126410u;
    SET_GPR_U32(ctx, 31, 0x126418u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x126410u, 0x126418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126418u;
label_126418:
    // 0x126418: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x126418u;
    {
        const bool branch_taken_0x126418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126418) {
            ctx->pc = 0x126464u;
            return;
        }
    }
    ctx->pc = 0x126420u;
    // 0x126420: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126424: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126428: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126428u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12642c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x12642cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126430: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126434: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126434u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126438: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12643c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12643cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126440: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126444: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126444u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126448: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12644c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12644cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x126450: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x126450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126454: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x126454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x126458: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x126458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x12645c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x12645cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x126460: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x126460u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x126464u;
}
