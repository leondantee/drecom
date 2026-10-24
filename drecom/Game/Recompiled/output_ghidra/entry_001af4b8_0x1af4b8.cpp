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

// Function: entry_001af4b8
// Address: 0x1af4b8 - 0x1af500
void entry_001af4b8_0x1af4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af4b8_0x1af4b8");
#endif

    switch (ctx->pc) {
        case 0x1af4c8u: goto label_1af4c8;
        default: break;
    }

    ctx->pc = 0x1af4b8u;

    // 0x1af4b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1af4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1af4bc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1af4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1af4c0: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x1AF4C0u;
    SET_GPR_U32(ctx, 31, 0x1AF4C8u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x1AF4C8u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AF4C8u) { return; }
    ctx->pc = 0x1AF4C8u;
label_1af4c8:
    // 0x1af4c8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1af4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1af4cc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1af4ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af4d0: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1af4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x1af4d4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1af4d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1af4d8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1af4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1af4dc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1af4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1af4e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af4e4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1af4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1af4e8: 0xac32b490  sw          $s2, -0x4B70($at)
    ctx->pc = 0x1af4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947984), GPR_U32(ctx, 18));
    // 0x1af4ec: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1af4ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1af4f0: 0x2ee103e8  sltiu       $at, $s7, 0x3E8
    ctx->pc = 0x1af4f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1af4f4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AF4F4u;
    {
        const bool branch_taken_0x1af4f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af4f4) {
            ctx->pc = 0x1AF518u;
            return;
        }
    }
    ctx->pc = 0x1AF4FCu;
    // 0x1af4fc: 0x0  nop
    ctx->pc = 0x1af4fcu;
    // NOP
    ctx->pc = 0x1af500u;
}
