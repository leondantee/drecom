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

// Function: entry_001e03c8
// Address: 0x1e03c8 - 0x1e0418
void entry_001e03c8_0x1e03c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e03c8_0x1e03c8");
#endif

    ctx->pc = 0x1e03c8u;

    // 0x1e03c8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e03c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e03cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e03d0: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1e03d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x1e03d4: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1e03d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x1e03d8: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x1e03d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x1e03dc: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1e03dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1e03e0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1e03e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1e03e4: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x1e03e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1e03e8: 0x17c0ffb9  bnez        $fp, . + 4 + (-0x47 << 2)
    ctx->pc = 0x1E03E8u;
    {
        const bool branch_taken_0x1e03e8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e03e8) {
            ctx->pc = 0x1E02D0u;
            return;
        }
    }
    ctx->pc = 0x1E03F0u;
    // 0x1e03f0: 0x32e2000f  andi        $v0, $s7, 0xF
    ctx->pc = 0x1e03f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)15);
    // 0x1e03f4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1e03f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x1e03f8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1e03f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e03fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E03FCu;
    {
        const bool branch_taken_0x1e03fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e03fc) {
            ctx->pc = 0x1E0418u;
            return;
        }
    }
    ctx->pc = 0x1E0404u;
    // 0x1e0404: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e0404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e0408: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1e0408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e040c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1e040cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0410: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x1e0410u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e0414: 0x0  nop
    ctx->pc = 0x1e0414u;
    // NOP
    ctx->pc = 0x1e0418u;
}
