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

// Function: entry_00361c6c
// Address: 0x361c6c - 0x361c8c
void entry_00361c6c_0x361c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361c6c_0x361c6c");
#endif

    ctx->pc = 0x361c6cu;

    // 0x361c6c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x361c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x361c70: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x361c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x361c74: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x361c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x361c78: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x361c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x361c7c: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x361c7cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361c80: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x361c80u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x361c84: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x361C84u;
    {
        const bool branch_taken_0x361c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361c84) {
            ctx->pc = 0x361E68u;
            return;
        }
    }
    ctx->pc = 0x361C8Cu;
}
