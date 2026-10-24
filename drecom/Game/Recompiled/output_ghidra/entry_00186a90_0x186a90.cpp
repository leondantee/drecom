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

// Function: entry_00186a90
// Address: 0x186a90 - 0x186abc
void entry_00186a90_0x186a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186a90_0x186a90");
#endif

    ctx->pc = 0x186a90u;

    // 0x186a90: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x186a90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x186a94: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x186A94u;
    {
        const bool branch_taken_0x186a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186a94) {
            ctx->pc = 0x186A1Cu;
            return;
        }
    }
    ctx->pc = 0x186A9Cu;
    // 0x186a9c: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x186a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x186aa0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x186aa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186aa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186aa8: 0x0  nop
    ctx->pc = 0x186aa8u;
    // NOP
    // 0x186aac: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x186ab0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x186ab0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x186ab4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x186AB4u;
    {
        const bool branch_taken_0x186ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186ab4) {
            ctx->pc = 0x186B28u;
            return;
        }
    }
    ctx->pc = 0x186ABCu;
}
