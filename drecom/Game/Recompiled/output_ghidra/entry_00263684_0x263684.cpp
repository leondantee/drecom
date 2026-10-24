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

// Function: entry_00263684
// Address: 0x263684 - 0x2636b4
void entry_00263684_0x263684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263684_0x263684");
#endif

    ctx->pc = 0x263684u;

    // 0x263684: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x263684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x263688: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x263688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x26368c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x26368cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x263690: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x263690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x263694: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x263694u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263698: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263698u;
    {
        const bool branch_taken_0x263698 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x263698) {
            ctx->pc = 0x2636B4u;
            return;
        }
    }
    ctx->pc = 0x2636A0u;
    // 0x2636a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2636a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2636a4: 0x0  nop
    ctx->pc = 0x2636a4u;
    // NOP
    // 0x2636a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2636a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2636ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2636ACu;
    {
        const bool branch_taken_0x2636ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2636ac) {
            ctx->pc = 0x2636D0u;
            return;
        }
    }
    ctx->pc = 0x2636B4u;
}
