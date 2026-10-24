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

// Function: entry_003781dc
// Address: 0x3781dc - 0x378210
void entry_003781dc_0x3781dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003781dc_0x3781dc");
#endif

    ctx->pc = 0x3781dcu;

    // 0x3781dc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x3781dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3781e0: 0x101942  srl         $v1, $s0, 5
    ctx->pc = 0x3781e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x3781e4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3781e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3781e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3781e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3781ec: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3781ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3781f0: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x3781f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x3781f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3781f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3781f8: 0x832006  srlv        $a0, $v1, $a0
    ctx->pc = 0x3781f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3781fc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3781fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x378200: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x378200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x378204: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x378204u;
    {
        const bool branch_taken_0x378204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378204) {
            ctx->pc = 0x378210u;
            return;
        }
    }
    ctx->pc = 0x37820Cu;
    // 0x37820c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x37820cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x378210u;
}
