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

// Function: entry_00138278
// Address: 0x138278 - 0x1382a8
void entry_00138278_0x138278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138278_0x138278");
#endif

    ctx->pc = 0x138278u;

    // 0x138278: 0x2a03000b  slti        $v1, $s0, 0xB
    ctx->pc = 0x138278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x13827c: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13827Cu;
    {
        const bool branch_taken_0x13827c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13827c) {
            ctx->pc = 0x13822Cu;
            return;
        }
    }
    ctx->pc = 0x138284u;
    // 0x138284: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x138284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138288: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x138288u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x13828c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x13828cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x138290: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x138290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x138294: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x138294u;
    {
        const bool branch_taken_0x138294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x138294) {
            ctx->pc = 0x138304u;
            return;
        }
    }
    ctx->pc = 0x13829Cu;
    // 0x13829c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x13829cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1382a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1382A0u;
    {
        const bool branch_taken_0x1382a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1382a0) {
            ctx->pc = 0x1382F0u;
            return;
        }
    }
    ctx->pc = 0x1382A8u;
}
