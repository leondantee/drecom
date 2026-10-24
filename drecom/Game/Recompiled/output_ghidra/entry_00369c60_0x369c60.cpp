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

// Function: entry_00369c60
// Address: 0x369c60 - 0x369d48
void entry_00369c60_0x369c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00369c60_0x369c60");
#endif

    switch (ctx->pc) {
        case 0x369c74u: goto label_369c74;
        case 0x369cbcu: goto label_369cbc;
        case 0x369cccu: goto label_369ccc;
        case 0x369d2cu: goto label_369d2c;
        default: break;
    }

    ctx->pc = 0x369c60u;

    // 0x369c60: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x369c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369c64: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x369c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x369c68: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x369c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x369c6c: 0xc067874  jal         func_19E1D0
    ctx->pc = 0x369C6Cu;
    SET_GPR_U32(ctx, 31, 0x369C74u);
    ctx->pc = 0x19E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E1D0u, 0x369C6Cu, 0x369C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369C74u;
label_369c74:
    // 0x369c74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369c74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369c78: 0x0  nop
    ctx->pc = 0x369c78u;
    // NOP
    // 0x369c7c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x369c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x369c80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369c84: 0x0  nop
    ctx->pc = 0x369c84u;
    // NOP
    // 0x369c88: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x369c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x369c8c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x369c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369c90: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x369c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369c94: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x369c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x369c98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x369c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x369c9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369ca0: 0x0  nop
    ctx->pc = 0x369ca0u;
    // NOP
    // 0x369ca4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x369ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x369ca8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x369ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x369cac: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x369cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x369cb0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x369cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x369cb4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x369CB4u;
    SET_GPR_U32(ctx, 31, 0x369CBCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x369CBCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369CBCu) { return; }
    ctx->pc = 0x369CBCu;
label_369cbc:
    // 0x369cbc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x369cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x369cc0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x369cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369cc4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x369CC4u;
    SET_GPR_U32(ctx, 31, 0x369CCCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369CCCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369CCCu) { return; }
    ctx->pc = 0x369CCCu;
label_369ccc:
    // 0x369ccc: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x369cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369cd0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x369cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369cd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369cd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369cd8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x369cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x369cdc: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x369cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369ce0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x369ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369ce4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369ce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369ce8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x369ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x369cec: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x369cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x369cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369cf4: 0x0  nop
    ctx->pc = 0x369cf4u;
    // NOP
    // 0x369cf8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x369cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x369cfc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x369cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x369d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369d04: 0x0  nop
    ctx->pc = 0x369d04u;
    // NOP
    // 0x369d08: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x369d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x369d0c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x369d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x369d10: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x369d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369d14: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x369d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x369d18: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x369d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x369d1c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x369d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x369d20: 0x344801c7  ori         $t0, $v0, 0x1C7
    ctx->pc = 0x369d20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)455);
    // 0x369d24: 0xc05a2d4  jal         func_168B50
    ctx->pc = 0x369D24u;
    SET_GPR_U32(ctx, 31, 0x369D2Cu);
    ctx->pc = 0x168B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168B50u, 0x369D24u, 0x369D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369D2Cu;
label_369d2c:
    // 0x369d2c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x369d2cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x369d30: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x369D30u;
    {
        const bool branch_taken_0x369d30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x369d30) {
            ctx->pc = 0x369D48u;
            return;
        }
    }
    ctx->pc = 0x369D38u;
    // 0x369d38: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x369d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369d3c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x369d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x369d40: 0xc040c9e  jal         func_103278
    ctx->pc = 0x369D40u;
    SET_GPR_U32(ctx, 31, 0x369D48u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369D48u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369D48u) { return; }
    ctx->pc = 0x369D48u;
}
