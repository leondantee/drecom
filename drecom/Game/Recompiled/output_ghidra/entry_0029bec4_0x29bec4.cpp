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

// Function: entry_0029bec4
// Address: 0x29bec4 - 0x29befc
void entry_0029bec4_0x29bec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029bec4_0x29bec4");
#endif

    ctx->pc = 0x29bec4u;

    // 0x29bec4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29bec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29bec8: 0x94230080  lhu         $v1, 0x80($at)
    ctx->pc = 0x29bec8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0080u));
    // 0x29becc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29beccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29bed0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x29bed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x29bed4: 0x1060009b  beqz        $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x29BED4u;
    {
        const bool branch_taken_0x29bed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bed4) {
            ctx->pc = 0x29C144u;
            return;
        }
    }
    ctx->pc = 0x29BEDCu;
    // 0x29bedc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29bedcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29bee0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BEE0u;
    {
        const bool branch_taken_0x29bee0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29bee0) {
            ctx->pc = 0x29BEFCu;
            return;
        }
    }
    ctx->pc = 0x29BEE8u;
    // 0x29bee8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bee8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29beec: 0x0  nop
    ctx->pc = 0x29beecu;
    // NOP
    // 0x29bef0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bef4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BEF4u;
    {
        const bool branch_taken_0x29bef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bef4) {
            ctx->pc = 0x29BF18u;
            return;
        }
    }
    ctx->pc = 0x29BEFCu;
}
