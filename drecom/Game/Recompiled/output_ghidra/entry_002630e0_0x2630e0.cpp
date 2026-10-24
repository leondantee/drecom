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

// Function: entry_002630e0
// Address: 0x2630e0 - 0x263138
void entry_002630e0_0x2630e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002630e0_0x2630e0");
#endif

    ctx->pc = 0x2630e0u;

    // 0x2630e0: 0x460a0034  c.lt.s      $f0, $f10
    ctx->pc = 0x2630e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2630e4: 0x0  nop
    ctx->pc = 0x2630e4u;
    // NOP
    // 0x2630e8: 0x45000062  bc1f        . + 4 + (0x62 << 2)
    ctx->pc = 0x2630E8u;
    {
        const bool branch_taken_0x2630e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2630e8) {
            ctx->pc = 0x263274u;
            return;
        }
    }
    ctx->pc = 0x2630F0u;
    // 0x2630f0: 0x24680001  addiu       $t0, $v1, 0x1
    ctx->pc = 0x2630f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2630f4: 0x314fffff  andi        $t7, $t2, 0xFFFF
    ctx->pc = 0x2630f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2630f8: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x2630f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x2630fc: 0x1e8082a  slt         $at, $t7, $t0
    ctx->pc = 0x2630fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x263100: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x263100u;
    {
        const bool branch_taken_0x263100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x263100) {
            ctx->pc = 0x263138u;
            return;
        }
    }
    ctx->pc = 0x263108u;
    // 0x263108: 0x3148ffff  andi        $t0, $t2, 0xFFFF
    ctx->pc = 0x263108u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x26310c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x26310cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x263110: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x263110u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x263114: 0x1884021  addu        $t0, $t4, $t0
    ctx->pc = 0x263114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x263118: 0x95080000  lhu         $t0, 0x0($t0)
    ctx->pc = 0x263118u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x26311c: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x26311cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x263120: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x263120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x263124: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x263124u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x263128: 0x3119ffff  andi        $t9, $t0, 0xFFFF
    ctx->pc = 0x263128u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x26312c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x26312cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x263130: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x263130u;
    {
        const bool branch_taken_0x263130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263130) {
            ctx->pc = 0x263148u;
            return;
        }
    }
    ctx->pc = 0x263138u;
}
