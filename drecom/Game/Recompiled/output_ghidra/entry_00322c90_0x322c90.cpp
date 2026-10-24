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

// Function: entry_00322c90
// Address: 0x322c90 - 0x322d60
void entry_00322c90_0x322c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00322c90_0x322c90");
#endif

    switch (ctx->pc) {
        case 0x322cb4u: goto label_322cb4;
        default: break;
    }

    ctx->pc = 0x322c90u;

    // 0x322c90: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x322c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x322c94: 0x2477a610  addiu       $s7, $v1, -0x59F0
    ctx->pc = 0x322c94u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x322c98: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x322c98u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x322c9c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x322c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x322ca0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x322ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x322ca4: 0x1203002e  beq         $s0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x322CA4u;
    {
        const bool branch_taken_0x322ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x322ca4) {
            ctx->pc = 0x322D60u;
            return;
        }
    }
    ctx->pc = 0x322CACu;
    // 0x322cac: 0xc067654  jal         func_19D950
    ctx->pc = 0x322CACu;
    SET_GPR_U32(ctx, 31, 0x322CB4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x322CACu, 0x322CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322CB4u;
label_322cb4:
    // 0x322cb4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x322cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x322cb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x322cb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x322cbc: 0x0  nop
    ctx->pc = 0x322cbcu;
    // NOP
    // 0x322cc0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x322cc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x322cc4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x322cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x322cc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322cc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322ccc: 0x0  nop
    ctx->pc = 0x322cccu;
    // NOP
    // 0x322cd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x322cd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x322cd4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x322cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x322cd8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x322cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x322cdc: 0xa2030139  sb          $v1, 0x139($s0)
    ctx->pc = 0x322cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x322ce0: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x322ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x322ce4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322ce8: 0x0  nop
    ctx->pc = 0x322ce8u;
    // NOP
    // 0x322cec: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x322cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x322cf0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x322cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x322cf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322cf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322cf8: 0x0  nop
    ctx->pc = 0x322cf8u;
    // NOP
    // 0x322cfc: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x322cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x322d00: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x322d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x322d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322d08: 0x0  nop
    ctx->pc = 0x322d08u;
    // NOP
    // 0x322d0c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x322d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x322d10: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x322d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x322d14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322d18: 0x0  nop
    ctx->pc = 0x322d18u;
    // NOP
    // 0x322d1c: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x322d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x322d20: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x322d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x322d24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322d24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322d28: 0x0  nop
    ctx->pc = 0x322d28u;
    // NOP
    // 0x322d2c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x322d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x322d30: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x322d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x322d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322d38: 0x0  nop
    ctx->pc = 0x322d38u;
    // NOP
    // 0x322d3c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x322d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x322d40: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x322d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x322d44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322d44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322d48: 0x0  nop
    ctx->pc = 0x322d48u;
    // NOP
    // 0x322d4c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x322d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x322d50: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x322d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x322d54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322d54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322d58: 0x0  nop
    ctx->pc = 0x322d58u;
    // NOP
    // 0x322d5c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x322d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    ctx->pc = 0x322d60u;
}
