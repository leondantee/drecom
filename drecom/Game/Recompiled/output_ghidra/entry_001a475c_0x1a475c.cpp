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

// Function: entry_001a475c
// Address: 0x1a475c - 0x1a47a0
void entry_001a475c_0x1a475c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a475c_0x1a475c");
#endif

    ctx->pc = 0x1a475cu;

    // 0x1a475c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a475cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4760: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a4760u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a4764: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4768: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1a4768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1a476c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A476Cu;
    {
        const bool branch_taken_0x1a476c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a476c) {
            ctx->pc = 0x1A47DCu;
            return;
        }
    }
    ctx->pc = 0x1A4774u;
    // 0x1a4774: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4778: 0x90630311  lbu         $v1, 0x311($v1)
    ctx->pc = 0x1a4778u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 785)));
    // 0x1a477c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a477cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4780: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1a4780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a4784: 0x28610041  slti        $at, $v1, 0x41
    ctx->pc = 0x1a4784u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x1a4788: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4788u;
    {
        const bool branch_taken_0x1a4788 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4788) {
            ctx->pc = 0x1A47A0u;
            return;
        }
    }
    ctx->pc = 0x1A4790u;
    // 0x1a4790: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4794: 0x90830311  lbu         $v1, 0x311($a0)
    ctx->pc = 0x1a4794u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 785)));
    // 0x1a4798: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1a4798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a479c: 0xa0830311  sb          $v1, 0x311($a0)
    ctx->pc = 0x1a479cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 785), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1a47a0u;
}
