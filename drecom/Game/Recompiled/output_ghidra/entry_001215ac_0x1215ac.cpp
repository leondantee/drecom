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

// Function: entry_001215ac
// Address: 0x1215ac - 0x1215dc
void entry_001215ac_0x1215ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001215ac_0x1215ac");
#endif

    ctx->pc = 0x1215acu;

    // 0x1215ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1215acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1215b0: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x1215b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x1215b4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1215b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1215b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1215b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1215bc: 0x10850007  beq         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1215BCu;
    {
        const bool branch_taken_0x1215bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1215bc) {
            ctx->pc = 0x1215DCu;
            return;
        }
    }
    ctx->pc = 0x1215C4u;
    // 0x1215c4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1215c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1215c8: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x1215c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x1215cc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1215ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1215d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1215d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1215d4: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1215D4u;
    {
        const bool branch_taken_0x1215d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1215d4) {
            ctx->pc = 0x121608u;
            return;
        }
    }
    ctx->pc = 0x1215DCu;
}
