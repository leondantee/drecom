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

// Function: entry_0027c350
// Address: 0x27c350 - 0x27c380
void entry_0027c350_0x27c350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c350_0x27c350");
#endif

    ctx->pc = 0x27c350u;

    // 0x27c350: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27c350u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c354: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27c354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27c358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c35c: 0x0  nop
    ctx->pc = 0x27c35cu;
    // NOP
    // 0x27c360: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x27c360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x27c364: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c368: 0x90221b49  lbu         $v0, 0x1B49($at)
    ctx->pc = 0x27c368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B49u));
    // 0x27c36c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c370: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c374: 0xa0221b49  sb          $v0, 0x1B49($at)
    ctx->pc = 0x27c374u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B49u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B49u, _value); } while (0);
    // 0x27c378: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27C378u;
    {
        const bool branch_taken_0x27c378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c378) {
            ctx->pc = 0x27C39Cu;
            return;
        }
    }
    ctx->pc = 0x27C380u;
}
