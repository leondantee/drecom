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

// Function: entry_0027c210
// Address: 0x27c210 - 0x27c234
void entry_0027c210_0x27c210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c210_0x27c210");
#endif

    ctx->pc = 0x27c210u;

    // 0x27c210: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x27c210u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c214: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x27c214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27c218: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c21c: 0x90221b49  lbu         $v0, 0x1B49($at)
    ctx->pc = 0x27c21cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B49u));
    // 0x27c220: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c224: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c228: 0xa0221b49  sb          $v0, 0x1B49($at)
    ctx->pc = 0x27c228u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B49u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B49u, _value); } while (0);
    // 0x27c22c: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x27C22Cu;
    {
        const bool branch_taken_0x27c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c22c) {
            ctx->pc = 0x27C39Cu;
            return;
        }
    }
    ctx->pc = 0x27C234u;
}
