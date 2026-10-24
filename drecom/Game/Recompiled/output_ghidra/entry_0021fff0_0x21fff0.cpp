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

// Function: entry_0021fff0
// Address: 0x21fff0 - 0x220014
void entry_0021fff0_0x21fff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fff0_0x21fff0");
#endif

    ctx->pc = 0x21fff0u;

    // 0x21fff0: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x21fff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x21fff4: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x21FFF4u;
    {
        const bool branch_taken_0x21fff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fff4) {
            ctx->pc = 0x21FF38u;
            return;
        }
    }
    ctx->pc = 0x21FFFCu;
    // 0x21fffc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21fffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220000: 0x0  nop
    ctx->pc = 0x220000u;
    // NOP
    // 0x220004: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x220004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x220008: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x220008u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22000c: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x22000Cu;
    {
        const bool branch_taken_0x22000c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22000c) {
            ctx->pc = 0x2203A8u;
            return;
        }
    }
    ctx->pc = 0x220014u;
}
