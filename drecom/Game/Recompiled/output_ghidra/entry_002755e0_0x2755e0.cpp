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

// Function: entry_002755e0
// Address: 0x2755e0 - 0x275610
void entry_002755e0_0x2755e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002755e0_0x2755e0");
#endif

    ctx->pc = 0x2755e0u;

    // 0x2755e0: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x2755e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2755e4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2755e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2755e8: 0x2483e650  addiu       $v1, $a0, -0x19B0
    ctx->pc = 0x2755e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960720));
    // 0x2755ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2755ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2755f0: 0x8c631390  lw          $v1, 0x1390($v1)
    ctx->pc = 0x2755f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x2755f4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2755f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2755f8: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x2755f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2755fc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2755FCu;
    {
        const bool branch_taken_0x2755fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2755fc) {
            ctx->pc = 0x275610u;
            return;
        }
    }
    ctx->pc = 0x275604u;
    // 0x275604: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x275604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x275608: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x275608u;
    {
        const bool branch_taken_0x275608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275608) {
            ctx->pc = 0x275618u;
            return;
        }
    }
    ctx->pc = 0x275610u;
}
