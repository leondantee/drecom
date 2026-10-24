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

// Function: entry_001d0d38
// Address: 0x1d0d38 - 0x1d0d98
void entry_001d0d38_0x1d0d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0d38_0x1d0d38");
#endif

    switch (ctx->pc) {
        case 0x1d0d64u: goto label_1d0d64;
        default: break;
    }

    ctx->pc = 0x1d0d38u;

    // 0x1d0d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0d3c: 0xa2020060  sb          $v0, 0x60($s0)
    ctx->pc = 0x1d0d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0d40: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d0d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d0d44: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1d0d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1d0d48: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d0d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0d4c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1d0d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1d0d50: 0xa6000062  sh          $zero, 0x62($s0)
    ctx->pc = 0x1d0d50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d0d54: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d0d54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d0d58: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1d0d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d0d5c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D0D5Cu;
    SET_GPR_U32(ctx, 31, 0x1D0D64u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D0D64u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0D64u) { return; }
    ctx->pc = 0x1D0D64u;
label_1d0d64:
    // 0x1d0d64: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1d0d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d0d68: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1d0d68u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0d6c: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x1d0d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d0d70: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0d70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d0d74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0d74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0d78: 0x0  nop
    ctx->pc = 0x1d0d78u;
    // NOP
    // 0x1d0d7c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x1d0d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1d0d80: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d0d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0d84: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x1d0d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1d0d88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0d8c: 0xa2030061  sb          $v1, 0x61($s0)
    ctx->pc = 0x1d0d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d0d90: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x1D0D90u;
    {
        const bool branch_taken_0x1d0d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0d90) {
            ctx->pc = 0x1D10E8u;
            return;
        }
    }
    ctx->pc = 0x1D0D98u;
}
