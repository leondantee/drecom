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

// Function: caseD_2
// Address: 0x12fff8 - 0x130020
void caseD_2_0x12fff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x12fff8");
#endif

    ctx->pc = 0x12fff8u;

    // 0x12fff8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12fffc: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x12fffcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x130000: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x130000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x130004: 0x3085f000  andi        $a1, $a0, 0xF000
    ctx->pc = 0x130004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x130008: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x130008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13000c: 0x14a60004  bne         $a1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x13000Cu;
    {
        const bool branch_taken_0x13000c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x13000c) {
            ctx->pc = 0x130020u;
            return;
        }
    }
    ctx->pc = 0x130014u;
    // 0x130014: 0x24100044  addiu       $s0, $zero, 0x44
    ctx->pc = 0x130014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x130018: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x130018u;
    {
        const bool branch_taken_0x130018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130018) {
            ctx->pc = 0x130024u;
            return;
        }
    }
    ctx->pc = 0x130020u;
}
