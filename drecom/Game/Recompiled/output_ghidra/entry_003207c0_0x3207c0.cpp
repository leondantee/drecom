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

// Function: entry_003207c0
// Address: 0x3207c0 - 0x320818
void entry_003207c0_0x3207c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003207c0_0x3207c0");
#endif

    ctx->pc = 0x3207c0u;

    // 0x3207c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3207c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3207c4: 0x90630347  lbu         $v1, 0x347($v1)
    ctx->pc = 0x3207c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x3207c8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3207c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3207cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3207ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3207d0: 0x90640344  lbu         $a0, 0x344($v1)
    ctx->pc = 0x3207d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x3207d4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3207d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3207d8: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x3207d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3207dc: 0x102000e2  beqz        $at, . + 4 + (0xE2 << 2)
    ctx->pc = 0x3207DCu;
    {
        const bool branch_taken_0x3207dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3207dc) {
            ctx->pc = 0x320B68u;
            return;
        }
    }
    ctx->pc = 0x3207E4u;
    // 0x3207e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3207e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3207e8: 0x90630abc  lbu         $v1, 0xABC($v1)
    ctx->pc = 0x3207e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2748)));
    // 0x3207ec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3207ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3207f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3207f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3207f4: 0x108300af  beq         $a0, $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x3207F4u;
    {
        const bool branch_taken_0x3207f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3207f4) {
            ctx->pc = 0x320AB4u;
            return;
        }
    }
    ctx->pc = 0x3207FCu;
    // 0x3207fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3207fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320800: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x320800u;
    {
        const bool branch_taken_0x320800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x320800) {
            ctx->pc = 0x3208CCu;
            return;
        }
    }
    ctx->pc = 0x320808u;
    // 0x320808: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x320808u;
    {
        const bool branch_taken_0x320808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x320808) {
            ctx->pc = 0x320818u;
            return;
        }
    }
    ctx->pc = 0x320810u;
    // 0x320810: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x320810u;
    {
        const bool branch_taken_0x320810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320810) {
            ctx->pc = 0x320DC0u;
            return;
        }
    }
    ctx->pc = 0x320818u;
}
