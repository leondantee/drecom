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

// Function: entry_001261bc
// Address: 0x1261bc - 0x126240
void entry_001261bc_0x1261bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001261bc_0x1261bc");
#endif

    switch (ctx->pc) {
        case 0x1261d0u: goto label_1261d0;
        case 0x1261ecu: goto label_1261ec;
        default: break;
    }

    ctx->pc = 0x1261bcu;

    // 0x1261bc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1261bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1261c0: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x1261C0u;
    {
        const bool branch_taken_0x1261c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1261c0) {
            ctx->pc = 0x126270u;
            return;
        }
    }
    ctx->pc = 0x1261C8u;
    // 0x1261c8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1261C8u;
    SET_GPR_U32(ctx, 31, 0x1261D0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1261C8u, 0x1261D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1261D0u;
label_1261d0:
    // 0x1261d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1261d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1261d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1261d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1261d8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1261D8u;
    {
        const bool branch_taken_0x1261d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1261d8) {
            ctx->pc = 0x126240u;
            return;
        }
    }
    ctx->pc = 0x1261E0u;
    // 0x1261e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1261e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1261e4: 0xc04d8bc  jal         func_1362F0
    ctx->pc = 0x1261E4u;
    SET_GPR_U32(ctx, 31, 0x1261ECu);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x1261E4u, 0x1261ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1261ECu;
label_1261ec:
    // 0x1261ec: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1261ECu;
    {
        const bool branch_taken_0x1261ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1261ec) {
            ctx->pc = 0x126270u;
            return;
        }
    }
    ctx->pc = 0x1261F4u;
    // 0x1261f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1261f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1261f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1261f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1261fc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1261fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126200: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x126200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x126204: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126208: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126208u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12620c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12620cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126210: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126210u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126214: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126218: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126218u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12621c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12621cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126220: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126220u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x126224: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x126224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126228: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x126228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12622c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x12622cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x126230: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x126230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x126234: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x126234u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x126238: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x126238u;
    {
        const bool branch_taken_0x126238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126238) {
            ctx->pc = 0x126270u;
            return;
        }
    }
    ctx->pc = 0x126240u;
}
