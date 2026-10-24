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

// Function: entry_001bbce8
// Address: 0x1bbce8 - 0x1bbd1c
void entry_001bbce8_0x1bbce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbce8_0x1bbce8");
#endif

    ctx->pc = 0x1bbce8u;

    // 0x1bbce8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbcec: 0x906313a4  lbu         $v1, 0x13A4($v1)
    ctx->pc = 0x1bbcecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5028)));
    // 0x1bbcf0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bbcf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bbcf4: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x1bbcf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1bbcf8: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BBCF8u;
    {
        const bool branch_taken_0x1bbcf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbcf8) {
            ctx->pc = 0x1BBD50u;
            return;
        }
    }
    ctx->pc = 0x1BBD00u;
    // 0x1bbd00: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bbd00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbd04: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1bbd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1bbd08: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1bbd08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1bbd0c: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1bbd0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1bbd10: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1bbd10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x1bbd14: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1BBD14u;
    {
        const bool branch_taken_0x1bbd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbd14) {
            ctx->pc = 0x1BBD50u;
            return;
        }
    }
    ctx->pc = 0x1BBD1Cu;
}
