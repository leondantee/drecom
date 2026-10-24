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

// Function: entry_001269cc
// Address: 0x1269cc - 0x126a50
void entry_001269cc_0x1269cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001269cc_0x1269cc");
#endif

    switch (ctx->pc) {
        case 0x1269e0u: goto label_1269e0;
        case 0x1269fcu: goto label_1269fc;
        default: break;
    }

    ctx->pc = 0x1269ccu;

    // 0x1269cc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1269ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1269d0: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x1269D0u;
    {
        const bool branch_taken_0x1269d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1269d0) {
            ctx->pc = 0x126A80u;
            return;
        }
    }
    ctx->pc = 0x1269D8u;
    // 0x1269d8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1269D8u;
    SET_GPR_U32(ctx, 31, 0x1269E0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1269D8u, 0x1269E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269E0u;
label_1269e0:
    // 0x1269e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1269e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1269e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1269e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1269e8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1269E8u;
    {
        const bool branch_taken_0x1269e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1269e8) {
            ctx->pc = 0x126A50u;
            return;
        }
    }
    ctx->pc = 0x1269F0u;
    // 0x1269f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1269f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1269f4: 0xc04d8bc  jal         func_1362F0
    ctx->pc = 0x1269F4u;
    SET_GPR_U32(ctx, 31, 0x1269FCu);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x1269F4u, 0x1269FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269FCu;
label_1269fc:
    // 0x1269fc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1269FCu;
    {
        const bool branch_taken_0x1269fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1269fc) {
            ctx->pc = 0x126A80u;
            return;
        }
    }
    ctx->pc = 0x126A04u;
    // 0x126a04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126a08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126a0c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126a10: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x126a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x126a14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126a18: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126a18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126a1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126a20: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126a20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126a24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126a28: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126a2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126a30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x126a34: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x126a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126a38: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x126a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x126a3c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x126a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x126a40: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x126a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x126a44: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x126a44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x126a48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x126A48u;
    {
        const bool branch_taken_0x126a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126a48) {
            ctx->pc = 0x126A80u;
            return;
        }
    }
    ctx->pc = 0x126A50u;
}
