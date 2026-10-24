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

// Function: entry_00329e54
// Address: 0x329e54 - 0x329e8c
void entry_00329e54_0x329e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329e54_0x329e54");
#endif

    ctx->pc = 0x329e54u;

    // 0x329e54: 0x92032904  lbu         $v1, 0x2904($s0)
    ctx->pc = 0x329e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10500)));
    // 0x329e58: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329e5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329e60: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x329E60u;
    {
        const bool branch_taken_0x329e60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329e60) {
            ctx->pc = 0x329E8Cu;
            return;
        }
    }
    ctx->pc = 0x329E68u;
    // 0x329e68: 0xc6002824  lwc1        $f0, 0x2824($s0)
    ctx->pc = 0x329e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329e6c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x329e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x329e70: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x329e70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x329e74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329e78: 0x0  nop
    ctx->pc = 0x329e78u;
    // NOP
    // 0x329e7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x329e7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x329e80: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x329e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x329e84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x329E84u;
    {
        const bool branch_taken_0x329e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329e84) {
            ctx->pc = 0x329E98u;
            return;
        }
    }
    ctx->pc = 0x329E8Cu;
}
