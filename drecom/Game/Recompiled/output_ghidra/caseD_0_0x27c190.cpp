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

// Function: caseD_0
// Address: 0x27c190 - 0x27c1cc
void caseD_0_0x27c190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x27c190");
#endif

    ctx->pc = 0x27c190u;

    // 0x27c190: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x27c190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x27c194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c198: 0x0  nop
    ctx->pc = 0x27c198u;
    // NOP
    // 0x27c19c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x27c19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x27c1a0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27c1a0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c1a4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27c1a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c1a8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c1ac: 0x90221b49  lbu         $v0, 0x1B49($at)
    ctx->pc = 0x27c1acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B49u));
    // 0x27c1b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c1b4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c1b8: 0xa0221b49  sb          $v0, 0x1B49($at)
    ctx->pc = 0x27c1b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B49u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B49u, _value); } while (0);
    // 0x27c1bc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c1c0: 0xa0201b4d  sb          $zero, 0x1B4D($at)
    ctx->pc = 0x27c1c0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621B4Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B4Du, _value); } while (0);
    // 0x27c1c4: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x27C1C4u;
    {
        const bool branch_taken_0x27c1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c1c4) {
            ctx->pc = 0x27C39Cu;
            return;
        }
    }
    ctx->pc = 0x27C1CCu;
}
