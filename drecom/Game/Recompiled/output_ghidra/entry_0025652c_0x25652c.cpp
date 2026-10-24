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

// Function: entry_0025652c
// Address: 0x25652c - 0x256568
void entry_0025652c_0x25652c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025652c_0x25652c");
#endif

    ctx->pc = 0x25652cu;

    // 0x25652c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x25652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x256530: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x256530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256534: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x256534u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x256538: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x256538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25653c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x25653cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x256540: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x256540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256544: 0x3056000f  andi        $s6, $v0, 0xF
    ctx->pc = 0x256544u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x256548: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x256548u;
    {
        const bool branch_taken_0x256548 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x256548) {
            ctx->pc = 0x256568u;
            return;
        }
    }
    ctx->pc = 0x256550u;
    // 0x256550: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x256550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x256554: 0x561823  subu        $v1, $v0, $s6
    ctx->pc = 0x256554u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x256558: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x256558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x25655c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25655cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256560: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x256560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x256564: 0x0  nop
    ctx->pc = 0x256564u;
    // NOP
    ctx->pc = 0x256568u;
}
