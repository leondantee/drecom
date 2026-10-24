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

// Function: entry_0029bc48
// Address: 0x29bc48 - 0x29bc80
void entry_0029bc48_0x29bc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029bc48_0x29bc48");
#endif

    ctx->pc = 0x29bc48u;

    // 0x29bc48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29bc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29bc4c: 0x94230084  lhu         $v1, 0x84($at)
    ctx->pc = 0x29bc4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x29bc50: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29bc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29bc54: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x29bc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x29bc58: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x29BC58u;
    {
        const bool branch_taken_0x29bc58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bc58) {
            ctx->pc = 0x29BEC4u;
            return;
        }
    }
    ctx->pc = 0x29BC60u;
    // 0x29bc60: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29bc60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29bc64: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BC64u;
    {
        const bool branch_taken_0x29bc64 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29bc64) {
            ctx->pc = 0x29BC80u;
            return;
        }
    }
    ctx->pc = 0x29BC6Cu;
    // 0x29bc6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bc6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bc70: 0x0  nop
    ctx->pc = 0x29bc70u;
    // NOP
    // 0x29bc74: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bc74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bc78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BC78u;
    {
        const bool branch_taken_0x29bc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bc78) {
            ctx->pc = 0x29BC9Cu;
            return;
        }
    }
    ctx->pc = 0x29BC80u;
}
