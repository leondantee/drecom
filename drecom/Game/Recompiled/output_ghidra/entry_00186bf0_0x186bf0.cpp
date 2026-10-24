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

// Function: entry_00186bf0
// Address: 0x186bf0 - 0x186c1c
void entry_00186bf0_0x186bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186bf0_0x186bf0");
#endif

    ctx->pc = 0x186bf0u;

    // 0x186bf0: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x186bf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x186bf4: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x186BF4u;
    {
        const bool branch_taken_0x186bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186bf4) {
            ctx->pc = 0x186B84u;
            return;
        }
    }
    ctx->pc = 0x186BFCu;
    // 0x186bfc: 0x3c03bf49  lui         $v1, 0xBF49
    ctx->pc = 0x186bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48969 << 16));
    // 0x186c00: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x186c04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186c04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186c08: 0x0  nop
    ctx->pc = 0x186c08u;
    // NOP
    // 0x186c0c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x186c10: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x186c10u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x186c14: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x186C14u;
    {
        const bool branch_taken_0x186c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c14) {
            ctx->pc = 0x186C90u;
            return;
        }
    }
    ctx->pc = 0x186C1Cu;
}
