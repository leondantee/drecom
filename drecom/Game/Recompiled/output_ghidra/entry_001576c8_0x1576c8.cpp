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

// Function: entry_001576c8
// Address: 0x1576c8 - 0x1576f8
void entry_001576c8_0x1576c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001576c8_0x1576c8");
#endif

    ctx->pc = 0x1576c8u;

    // 0x1576c8: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x1576c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1576cc: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x1576CCu;
    {
        const bool branch_taken_0x1576cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1576cc) {
            ctx->pc = 0x1575E4u;
            return;
        }
    }
    ctx->pc = 0x1576D4u;
    // 0x1576d4: 0xc7a101e8  lwc1        $f1, 0x1E8($sp)
    ctx->pc = 0x1576d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1576d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1576d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1576dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1576dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1576e0: 0x0  nop
    ctx->pc = 0x1576e0u;
    // NOP
    // 0x1576e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1576e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1576e8: 0xe7a101e8  swc1        $f1, 0x1E8($sp)
    ctx->pc = 0x1576e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x1576ec: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1576ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1576f0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1576f0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1576f4: 0x0  nop
    ctx->pc = 0x1576f4u;
    // NOP
    ctx->pc = 0x1576f8u;
}
