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

// Function: entry_00263638
// Address: 0x263638 - 0x263668
void entry_00263638_0x263638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263638_0x263638");
#endif

    ctx->pc = 0x263638u;

    // 0x263638: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x263638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x26363c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26363cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x263640: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x263640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x263644: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x263644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x263648: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x263648u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26364c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26364Cu;
    {
        const bool branch_taken_0x26364c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26364c) {
            ctx->pc = 0x263668u;
            return;
        }
    }
    ctx->pc = 0x263654u;
    // 0x263654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x263654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263658: 0x0  nop
    ctx->pc = 0x263658u;
    // NOP
    // 0x26365c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x26365cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x263660: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x263660u;
    {
        const bool branch_taken_0x263660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263660) {
            ctx->pc = 0x263684u;
            return;
        }
    }
    ctx->pc = 0x263668u;
}
