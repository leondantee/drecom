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

// Function: entry_00378210
// Address: 0x378210 - 0x378240
void entry_00378210_0x378210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378210_0x378210");
#endif

    ctx->pc = 0x378210u;

    // 0x378210: 0x101942  srl         $v1, $s0, 5
    ctx->pc = 0x378210u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x378214: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x378214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x378218: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x378218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37821c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x37821cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378220: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x378220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x378224: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x378224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x378228: 0x832006  srlv        $a0, $v1, $a0
    ctx->pc = 0x378228u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x37822c: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x37822cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x378230: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x378230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x378234: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x378234u;
    {
        const bool branch_taken_0x378234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378234) {
            ctx->pc = 0x378240u;
            return;
        }
    }
    ctx->pc = 0x37823Cu;
    // 0x37823c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x37823cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x378240u;
}
