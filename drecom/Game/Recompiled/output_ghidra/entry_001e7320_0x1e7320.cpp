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

// Function: entry_001e7320
// Address: 0x1e7320 - 0x1e7350
void entry_001e7320_0x1e7320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7320_0x1e7320");
#endif

    ctx->pc = 0x1e7320u;

    // 0x1e7320: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1e7320u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e7324: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1e7324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7328: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1e7328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e732c: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E732Cu;
    {
        const bool branch_taken_0x1e732c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e732c) {
            ctx->pc = 0x1E7350u;
            return;
        }
    }
    ctx->pc = 0x1E7334u;
    // 0x1e7334: 0x9626000c  lhu         $a2, 0xC($s1)
    ctx->pc = 0x1e7334u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e7338: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1e7338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1e733c: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x1e733cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1e7340: 0x90850220  lbu         $a1, 0x220($a0)
    ctx->pc = 0x1e7340u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x1e7344: 0x14a0004c  bnez        $a1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1E7344u;
    {
        const bool branch_taken_0x1e7344 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7344) {
            ctx->pc = 0x1E7478u;
            return;
        }
    }
    ctx->pc = 0x1E734Cu;
    // 0x1e734c: 0x0  nop
    ctx->pc = 0x1e734cu;
    // NOP
    ctx->pc = 0x1e7350u;
}
