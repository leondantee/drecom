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

// Function: entry_0012a1d0
// Address: 0x12a1d0 - 0x12a254
void entry_0012a1d0_0x12a1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a1d0_0x12a1d0");
#endif

    switch (ctx->pc) {
        case 0x12a1e4u: goto label_12a1e4;
        case 0x12a200u: goto label_12a200;
        default: break;
    }

    ctx->pc = 0x12a1d0u;

    // 0x12a1d0: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x12a1d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12a1d4: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x12A1D4u;
    {
        const bool branch_taken_0x12a1d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a1d4) {
            ctx->pc = 0x12A284u;
            return;
        }
    }
    ctx->pc = 0x12A1DCu;
    // 0x12a1dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12A1DCu;
    SET_GPR_U32(ctx, 31, 0x12A1E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12A1DCu, 0x12A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A1E4u;
label_12a1e4:
    // 0x12a1e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12a1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12a1e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x12a1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12a1ec: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x12A1ECu;
    {
        const bool branch_taken_0x12a1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a1ec) {
            ctx->pc = 0x12A254u;
            return;
        }
    }
    ctx->pc = 0x12A1F4u;
    // 0x12a1f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12a1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a1f8: 0xc04d8bc  jal         func_1362F0
    ctx->pc = 0x12A1F8u;
    SET_GPR_U32(ctx, 31, 0x12A200u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x12A1F8u, 0x12A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A200u;
label_12a200:
    // 0x12a200: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x12A200u;
    {
        const bool branch_taken_0x12a200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a200) {
            ctx->pc = 0x12A284u;
            return;
        }
    }
    ctx->pc = 0x12A208u;
    // 0x12a208: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a20c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a210: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a210u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a214: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x12a214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12a218: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a21c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a21cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a220: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a224: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a224u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a228: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a22c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a22cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a230: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a234: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12a238: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12a238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a23c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x12a23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12a240: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x12a240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x12a244: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x12a244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12a248: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x12a248u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x12a24c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12A24Cu;
    {
        const bool branch_taken_0x12a24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a24c) {
            ctx->pc = 0x12A284u;
            return;
        }
    }
    ctx->pc = 0x12A254u;
}
