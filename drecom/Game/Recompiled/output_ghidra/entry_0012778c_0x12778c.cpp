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

// Function: entry_0012778c
// Address: 0x12778c - 0x127810
void entry_0012778c_0x12778c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012778c_0x12778c");
#endif

    switch (ctx->pc) {
        case 0x1277a0u: goto label_1277a0;
        case 0x1277bcu: goto label_1277bc;
        default: break;
    }

    ctx->pc = 0x12778cu;

    // 0x12778c: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x12778cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x127790: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x127790u;
    {
        const bool branch_taken_0x127790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x127790) {
            ctx->pc = 0x127840u;
            return;
        }
    }
    ctx->pc = 0x127798u;
    // 0x127798: 0xc067694  jal         func_19DA50
    ctx->pc = 0x127798u;
    SET_GPR_U32(ctx, 31, 0x1277A0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x127798u, 0x1277A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1277A0u;
label_1277a0:
    // 0x1277a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1277a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1277a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1277a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1277a8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1277A8u;
    {
        const bool branch_taken_0x1277a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1277a8) {
            ctx->pc = 0x127810u;
            return;
        }
    }
    ctx->pc = 0x1277B0u;
    // 0x1277b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1277b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1277b4: 0xc04d8bc  jal         func_1362F0
    ctx->pc = 0x1277B4u;
    SET_GPR_U32(ctx, 31, 0x1277BCu);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x1277B4u, 0x1277BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1277BCu;
label_1277bc:
    // 0x1277bc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1277BCu;
    {
        const bool branch_taken_0x1277bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1277bc) {
            ctx->pc = 0x127840u;
            return;
        }
    }
    ctx->pc = 0x1277C4u;
    // 0x1277c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1277c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1277c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1277c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1277cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1277ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1277d0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1277d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1277d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1277d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1277d8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1277d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1277dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1277dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1277e0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1277e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1277e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1277e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1277e8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1277e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1277ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1277ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1277f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1277f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1277f4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1277f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1277f8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1277f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1277fc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1277fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x127800: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x127800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x127804: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x127804u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x127808: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x127808u;
    {
        const bool branch_taken_0x127808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127808) {
            ctx->pc = 0x127840u;
            return;
        }
    }
    ctx->pc = 0x127810u;
}
