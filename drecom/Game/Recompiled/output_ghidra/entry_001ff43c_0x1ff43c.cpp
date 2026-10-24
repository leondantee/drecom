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

// Function: entry_001ff43c
// Address: 0x1ff43c - 0x1ff494
void entry_001ff43c_0x1ff43c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff43c_0x1ff43c");
#endif

    ctx->pc = 0x1ff43cu;

    // 0x1ff43c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff440: 0x90650347  lbu         $a1, 0x347($v1)
    ctx->pc = 0x1ff440u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x1ff444: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1ff444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff448: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff44c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1ff44cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1ff450: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ff450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff454: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1ff454u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ff458: 0x10200223  beqz        $at, . + 4 + (0x223 << 2)
    ctx->pc = 0x1FF458u;
    {
        const bool branch_taken_0x1ff458 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff458) {
            ctx->pc = 0x1FFCE8u;
            return;
        }
    }
    ctx->pc = 0x1FF460u;
    // 0x1ff460: 0x8fb000d8  lw          $s0, 0xD8($sp)
    ctx->pc = 0x1ff460u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff464: 0x92030abc  lbu         $v1, 0xABC($s0)
    ctx->pc = 0x1ff464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2748)));
    // 0x1ff468: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ff468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff46c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ff46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff470: 0x108301d1  beq         $a0, $v1, . + 4 + (0x1D1 << 2)
    ctx->pc = 0x1FF470u;
    {
        const bool branch_taken_0x1ff470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ff470) {
            ctx->pc = 0x1FFBB8u;
            return;
        }
    }
    ctx->pc = 0x1FF478u;
    // 0x1ff478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ff478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff47c: 0x10830148  beq         $a0, $v1, . + 4 + (0x148 << 2)
    ctx->pc = 0x1FF47Cu;
    {
        const bool branch_taken_0x1ff47c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ff47c) {
            ctx->pc = 0x1FF9A0u;
            return;
        }
    }
    ctx->pc = 0x1FF484u;
    // 0x1ff484: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF484u;
    {
        const bool branch_taken_0x1ff484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff484) {
            ctx->pc = 0x1FF494u;
            return;
        }
    }
    ctx->pc = 0x1FF48Cu;
    // 0x1ff48c: 0x100002bc  b           . + 4 + (0x2BC << 2)
    ctx->pc = 0x1FF48Cu;
    {
        const bool branch_taken_0x1ff48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff48c) {
            ctx->pc = 0x1FFF80u;
            return;
        }
    }
    ctx->pc = 0x1FF494u;
}
