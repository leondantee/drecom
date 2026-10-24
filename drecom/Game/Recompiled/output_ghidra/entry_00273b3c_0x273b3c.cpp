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

// Function: entry_00273b3c
// Address: 0x273b3c - 0x273b6c
void entry_00273b3c_0x273b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273b3c_0x273b3c");
#endif

    ctx->pc = 0x273b3cu;

    // 0x273b3c: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x273b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x273b40: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x273b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x273b44: 0x2464e650  addiu       $a0, $v1, -0x19B0
    ctx->pc = 0x273b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x273b48: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x273b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x273b4c: 0x8c631390  lw          $v1, 0x1390($v1)
    ctx->pc = 0x273b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x273b50: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x273b50u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x273b54: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x273b54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x273b58: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x273B58u;
    {
        const bool branch_taken_0x273b58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x273b58) {
            ctx->pc = 0x273B6Cu;
            return;
        }
    }
    ctx->pc = 0x273B60u;
    // 0x273b60: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x273b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x273b64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x273B64u;
    {
        const bool branch_taken_0x273b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273b64) {
            ctx->pc = 0x273B78u;
            return;
        }
    }
    ctx->pc = 0x273B6Cu;
}
