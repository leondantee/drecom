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

// Function: entry_0015c38c
// Address: 0x15c38c - 0x15c3c4
void entry_0015c38c_0x15c38c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c38c_0x15c38c");
#endif

    ctx->pc = 0x15c38cu;

    // 0x15c38c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x15c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15c390: 0x84621574  lh          $v0, 0x1574($v1)
    ctx->pc = 0x15c390u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5492)));
    // 0x15c394: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15c394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15c398: 0xa4621574  sh          $v0, 0x1574($v1)
    ctx->pc = 0x15c398u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 2));
    // 0x15c39c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15c3a0: 0x84421574  lh          $v0, 0x1574($v0)
    ctx->pc = 0x15c3a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5492)));
    // 0x15c3a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15c3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15c3a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15c3a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15c3ac: 0x284100b5  slti        $at, $v0, 0xB5
    ctx->pc = 0x15c3acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x15c3b0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C3B0u;
    {
        const bool branch_taken_0x15c3b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c3b0) {
            ctx->pc = 0x15C3C4u;
            return;
        }
    }
    ctx->pc = 0x15C3B8u;
    // 0x15c3b8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15c3b8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15c3bc: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x15C3BCu;
    {
        const bool branch_taken_0x15c3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c3bc) {
            ctx->pc = 0x15C474u;
            return;
        }
    }
    ctx->pc = 0x15C3C4u;
}
