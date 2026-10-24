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

// Function: entry_00378358
// Address: 0x378358 - 0x378388
void entry_00378358_0x378358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378358_0x378358");
#endif

    ctx->pc = 0x378358u;

    // 0x378358: 0x111942  srl         $v1, $s1, 5
    ctx->pc = 0x378358u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
    // 0x37835c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x37835cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x378360: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x378360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378364: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x378364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378368: 0x3224001f  andi        $a0, $s1, 0x1F
    ctx->pc = 0x378368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x37836c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37836cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x378370: 0x832006  srlv        $a0, $v1, $a0
    ctx->pc = 0x378370u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x378374: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x378374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x378378: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x378378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x37837c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x37837Cu;
    {
        const bool branch_taken_0x37837c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37837c) {
            ctx->pc = 0x378388u;
            return;
        }
    }
    ctx->pc = 0x378384u;
    // 0x378384: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x378384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x378388u;
}
