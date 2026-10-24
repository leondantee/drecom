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

// Function: entry_00186920
// Address: 0x186920 - 0x18694c
void entry_00186920_0x186920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186920_0x186920");
#endif

    ctx->pc = 0x186920u;

    // 0x186920: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x186920u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x186924: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x186924u;
    {
        const bool branch_taken_0x186924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186924) {
            ctx->pc = 0x1868B4u;
            return;
        }
    }
    ctx->pc = 0x18692Cu;
    // 0x18692c: 0x3c03bec9  lui         $v1, 0xBEC9
    ctx->pc = 0x18692cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48841 << 16));
    // 0x186930: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x186934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186938: 0x0  nop
    ctx->pc = 0x186938u;
    // NOP
    // 0x18693c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x18693cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x186940: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x186940u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x186944: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x186944u;
    {
        const bool branch_taken_0x186944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186944) {
            ctx->pc = 0x1869C0u;
            return;
        }
    }
    ctx->pc = 0x18694Cu;
}
