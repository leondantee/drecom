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

// Function: entry_002db178
// Address: 0x2db178 - 0x2db200
void entry_002db178_0x2db178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db178_0x2db178");
#endif

    switch (ctx->pc) {
        case 0x2db1b8u: goto label_2db1b8;
        default: break;
    }

    ctx->pc = 0x2db178u;

    // 0x2db178: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db17c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2db17cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2db180: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2DB180u;
    {
        const bool branch_taken_0x2db180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db180) {
            ctx->pc = 0x2DB250u;
            return;
        }
    }
    ctx->pc = 0x2DB188u;
    // 0x2db188: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2db188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2db18c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2db18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2db190: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2db190u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2db194: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2DB194u;
    {
        const bool branch_taken_0x2db194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db194) {
            ctx->pc = 0x2DB250u;
            return;
        }
    }
    ctx->pc = 0x2DB19Cu;
    // 0x2db19c: 0x920200db  lbu         $v0, 0xDB($s0)
    ctx->pc = 0x2db19cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2db1a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2db1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db1a4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2db1a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2db1a8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DB1A8u;
    {
        const bool branch_taken_0x2db1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db1a8) {
            ctx->pc = 0x2DB200u;
            return;
        }
    }
    ctx->pc = 0x2DB1B0u;
    // 0x2db1b0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB1B0u;
    SET_GPR_U32(ctx, 31, 0x2DB1B8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB1B0u, 0x2DB1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB1B8u;
label_2db1b8:
    // 0x2db1b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2db1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db1bc: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2db1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2db1c0: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DB1C0u;
    {
        const bool branch_taken_0x2db1c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db1c0) {
            ctx->pc = 0x2DB250u;
            return;
        }
    }
    ctx->pc = 0x2DB1C8u;
    // 0x2db1c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db1cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db1d0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db1d4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2db1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2db1d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db1dc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db1e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db1e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db1e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db1ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db1f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db1f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db1f8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2DB1F8u;
    {
        const bool branch_taken_0x2db1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db1f8) {
            ctx->pc = 0x2DB294u;
            return;
        }
    }
    ctx->pc = 0x2DB200u;
}
