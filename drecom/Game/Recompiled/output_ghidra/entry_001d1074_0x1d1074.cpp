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

// Function: entry_001d1074
// Address: 0x1d1074 - 0x1d10d4
void entry_001d1074_0x1d1074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1074_0x1d1074");
#endif

    switch (ctx->pc) {
        case 0x1d10a0u: goto label_1d10a0;
        default: break;
    }

    ctx->pc = 0x1d1074u;

    // 0x1d1074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1078: 0xa2020060  sb          $v0, 0x60($s0)
    ctx->pc = 0x1d1078u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d107c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d107cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1080: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1d1080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1d1084: 0xa6000062  sh          $zero, 0x62($s0)
    ctx->pc = 0x1d1084u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d1088: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d1088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d108c: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1d108cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1d1090: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d1090u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d1094: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1d1094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d1098: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D1098u;
    SET_GPR_U32(ctx, 31, 0x1D10A0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D10A0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D10A0u) { return; }
    ctx->pc = 0x1D10A0u;
label_1d10a0:
    // 0x1d10a0: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1d10a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d10a4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1d10a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d10a8: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x1d10a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d10ac: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d10acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d10b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d10b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d10b4: 0x0  nop
    ctx->pc = 0x1d10b4u;
    // NOP
    // 0x1d10b8: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x1d10b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1d10bc: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d10bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d10c0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x1d10c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1d10c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d10c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d10c8: 0xa2030061  sb          $v1, 0x61($s0)
    ctx->pc = 0x1d10c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d10cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D10CCu;
    {
        const bool branch_taken_0x1d10cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d10cc) {
            ctx->pc = 0x1D10E8u;
            return;
        }
    }
    ctx->pc = 0x1D10D4u;
}
