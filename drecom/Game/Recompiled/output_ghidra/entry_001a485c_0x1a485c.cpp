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

// Function: entry_001a485c
// Address: 0x1a485c - 0x1a488c
void entry_001a485c_0x1a485c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a485c_0x1a485c");
#endif

    ctx->pc = 0x1a485cu;

    // 0x1a485c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a485cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4860: 0x942400cc  lhu         $a0, 0xCC($at)
    ctx->pc = 0x1a4860u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a4864: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1a4864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1a4868: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1a4868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1a486c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A486Cu;
    {
        const bool branch_taken_0x1a486c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a486c) {
            ctx->pc = 0x1A488Cu;
            return;
        }
    }
    ctx->pc = 0x1A4874u;
    // 0x1a4874: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1a4874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a4878: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a487c: 0xa0640311  sb          $a0, 0x311($v1)
    ctx->pc = 0x1a487cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 785), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a4880: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x1a4880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a4884: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4888: 0xa0900312  sb          $s0, 0x312($a0)
    ctx->pc = 0x1a4888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 786), (uint8_t)GPR_U32(ctx, 16));
    ctx->pc = 0x1a488cu;
}
