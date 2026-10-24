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

// Function: entry_00322a00
// Address: 0x322a00 - 0x322ae8
void entry_00322a00_0x322a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00322a00_0x322a00");
#endif

    switch (ctx->pc) {
        case 0x322a24u: goto label_322a24;
        default: break;
    }

    ctx->pc = 0x322a00u;

    // 0x322a00: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x322a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x322a04: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x322a04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x322a08: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x322a08u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x322a0c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x322a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x322a10: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x322a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x322a14: 0x12030034  beq         $s0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x322A14u;
    {
        const bool branch_taken_0x322a14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x322a14) {
            ctx->pc = 0x322AE8u;
            return;
        }
    }
    ctx->pc = 0x322A1Cu;
    // 0x322a1c: 0xc067654  jal         func_19D950
    ctx->pc = 0x322A1Cu;
    SET_GPR_U32(ctx, 31, 0x322A24u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x322A1Cu, 0x322A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322A24u;
label_322a24:
    // 0x322a24: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x322a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x322a28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x322a28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x322a2c: 0x0  nop
    ctx->pc = 0x322a2cu;
    // NOP
    // 0x322a30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x322a30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x322a34: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x322a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x322a38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322a38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322a3c: 0x0  nop
    ctx->pc = 0x322a3cu;
    // NOP
    // 0x322a40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x322a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x322a44: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x322a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x322a48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x322a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x322a4c: 0xa2030139  sb          $v1, 0x139($s0)
    ctx->pc = 0x322a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x322a50: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x322a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x322a54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322a54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322a58: 0x0  nop
    ctx->pc = 0x322a58u;
    // NOP
    // 0x322a5c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x322a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x322a60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x322a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x322a64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322a64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322a68: 0x0  nop
    ctx->pc = 0x322a68u;
    // NOP
    // 0x322a6c: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x322a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x322a70: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x322a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x322a74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322a74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322a78: 0x0  nop
    ctx->pc = 0x322a78u;
    // NOP
    // 0x322a7c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x322a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x322a80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x322a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x322a84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322a84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322a88: 0x0  nop
    ctx->pc = 0x322a88u;
    // NOP
    // 0x322a8c: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x322a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x322a90: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x322a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x322a94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322a94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322a98: 0x0  nop
    ctx->pc = 0x322a98u;
    // NOP
    // 0x322a9c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x322a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x322aa0: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x322aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x322aa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322aa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322aa8: 0x0  nop
    ctx->pc = 0x322aa8u;
    // NOP
    // 0x322aac: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x322aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x322ab0: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x322ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x322ab4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322ab4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322ab8: 0x0  nop
    ctx->pc = 0x322ab8u;
    // NOP
    // 0x322abc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x322abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x322ac0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x322ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x322ac4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322ac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322ac8: 0x0  nop
    ctx->pc = 0x322ac8u;
    // NOP
    // 0x322acc: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x322accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x322ad0: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x322ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x322ad4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x322ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x322ad8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322ad8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322adc: 0x0  nop
    ctx->pc = 0x322adcu;
    // NOP
    // 0x322ae0: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x322ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x322ae4: 0x0  nop
    ctx->pc = 0x322ae4u;
    // NOP
    ctx->pc = 0x322ae8u;
}
