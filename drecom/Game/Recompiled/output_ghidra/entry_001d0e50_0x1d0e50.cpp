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

// Function: entry_001d0e50
// Address: 0x1d0e50 - 0x1d0ea0
void entry_001d0e50_0x1d0e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0e50_0x1d0e50");
#endif

    switch (ctx->pc) {
        case 0x1d0e6cu: goto label_1d0e6c;
        default: break;
    }

    ctx->pc = 0x1d0e50u;

    // 0x1d0e50: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d0e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0e54: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1d0e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1d0e58: 0xa6000062  sh          $zero, 0x62($s0)
    ctx->pc = 0x1d0e58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d0e5c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d0e5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d0e60: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1d0e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d0e64: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D0E64u;
    SET_GPR_U32(ctx, 31, 0x1D0E6Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D0E6Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0E6Cu) { return; }
    ctx->pc = 0x1D0E6Cu;
label_1d0e6c:
    // 0x1d0e6c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1d0e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d0e70: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1d0e70u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0e74: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x1d0e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d0e78: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0e78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d0e7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0e80: 0x0  nop
    ctx->pc = 0x1d0e80u;
    // NOP
    // 0x1d0e84: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x1d0e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1d0e88: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d0e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0e8c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x1d0e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1d0e90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e94: 0xa2030061  sb          $v1, 0x61($s0)
    ctx->pc = 0x1d0e94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d0e98: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1D0E98u;
    {
        const bool branch_taken_0x1d0e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0e98) {
            ctx->pc = 0x1D10E8u;
            return;
        }
    }
    ctx->pc = 0x1D0EA0u;
}
