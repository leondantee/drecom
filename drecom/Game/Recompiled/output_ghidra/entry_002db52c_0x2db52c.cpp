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

// Function: entry_002db52c
// Address: 0x2db52c - 0x2db5b4
void entry_002db52c_0x2db52c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db52c_0x2db52c");
#endif

    switch (ctx->pc) {
        case 0x2db56cu: goto label_2db56c;
        default: break;
    }

    ctx->pc = 0x2db52cu;

    // 0x2db52c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db530: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2db530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2db534: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2DB534u;
    {
        const bool branch_taken_0x2db534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db534) {
            ctx->pc = 0x2DB604u;
            return;
        }
    }
    ctx->pc = 0x2DB53Cu;
    // 0x2db53c: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2db53cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2db540: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2db540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2db544: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2db544u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2db548: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2DB548u;
    {
        const bool branch_taken_0x2db548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db548) {
            ctx->pc = 0x2DB604u;
            return;
        }
    }
    ctx->pc = 0x2DB550u;
    // 0x2db550: 0x920200db  lbu         $v0, 0xDB($s0)
    ctx->pc = 0x2db550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2db554: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2db554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db558: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2db558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2db55c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DB55Cu;
    {
        const bool branch_taken_0x2db55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db55c) {
            ctx->pc = 0x2DB5B4u;
            return;
        }
    }
    ctx->pc = 0x2DB564u;
    // 0x2db564: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB564u;
    SET_GPR_U32(ctx, 31, 0x2DB56Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB564u, 0x2DB56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB56Cu;
label_2db56c:
    // 0x2db56c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2db56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db570: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2db570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2db574: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DB574u;
    {
        const bool branch_taken_0x2db574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db574) {
            ctx->pc = 0x2DB604u;
            return;
        }
    }
    ctx->pc = 0x2DB57Cu;
    // 0x2db57c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db580: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db584: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db584u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db588: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2db588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2db58c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db590: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db594: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db598: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db598u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db59c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db5a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db5a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db5a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db5ac: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2DB5ACu;
    {
        const bool branch_taken_0x2db5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db5ac) {
            ctx->pc = 0x2DB604u;
            return;
        }
    }
    ctx->pc = 0x2DB5B4u;
}
