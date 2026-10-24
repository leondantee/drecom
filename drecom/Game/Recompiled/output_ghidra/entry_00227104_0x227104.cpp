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

// Function: entry_00227104
// Address: 0x227104 - 0x22713c
void entry_00227104_0x227104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227104_0x227104");
#endif

    ctx->pc = 0x227104u;

    // 0x227104: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x227104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x227108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x227108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22710c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22710cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x227110: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x227110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x227114: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227118: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x227118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22711c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x22711cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x227120: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x227120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227124: 0x10830060  beq         $a0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x227124u;
    {
        const bool branch_taken_0x227124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x227124) {
            ctx->pc = 0x2272A8u;
            return;
        }
    }
    ctx->pc = 0x22712Cu;
    // 0x22712c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22712Cu;
    {
        const bool branch_taken_0x22712c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22712c) {
            ctx->pc = 0x22713Cu;
            return;
        }
    }
    ctx->pc = 0x227134u;
    // 0x227134: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x227134u;
    {
        const bool branch_taken_0x227134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227134) {
            ctx->pc = 0x227840u;
            return;
        }
    }
    ctx->pc = 0x22713Cu;
}
