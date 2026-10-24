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

// Function: entry_00378320
// Address: 0x378320 - 0x378358
void entry_00378320_0x378320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378320_0x378320");
#endif

    ctx->pc = 0x378320u;

    // 0x378320: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x378320u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x378324: 0x111942  srl         $v1, $s1, 5
    ctx->pc = 0x378324u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
    // 0x378328: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x378328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37832c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x37832cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378330: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x378330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378334: 0x3224001f  andi        $a0, $s1, 0x1F
    ctx->pc = 0x378334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x378338: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x378338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37833c: 0x832006  srlv        $a0, $v1, $a0
    ctx->pc = 0x37833cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x378340: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x378340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x378344: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x378344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x378348: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x378348u;
    {
        const bool branch_taken_0x378348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378348) {
            ctx->pc = 0x378358u;
            return;
        }
    }
    ctx->pc = 0x378350u;
    // 0x378350: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x378350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378354: 0x0  nop
    ctx->pc = 0x378354u;
    // NOP
    ctx->pc = 0x378358u;
}
