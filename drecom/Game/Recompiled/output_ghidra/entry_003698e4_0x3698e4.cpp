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

// Function: entry_003698e4
// Address: 0x3698e4 - 0x3699cc
void entry_003698e4_0x3698e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003698e4_0x3698e4");
#endif

    switch (ctx->pc) {
        case 0x3698f8u: goto label_3698f8;
        case 0x369940u: goto label_369940;
        case 0x369950u: goto label_369950;
        case 0x3699b0u: goto label_3699b0;
        default: break;
    }

    ctx->pc = 0x3698e4u;

    // 0x3698e4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3698e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3698e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3698e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3698ec: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x3698ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3698f0: 0xc067874  jal         func_19E1D0
    ctx->pc = 0x3698F0u;
    SET_GPR_U32(ctx, 31, 0x3698F8u);
    ctx->pc = 0x19E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E1D0u, 0x3698F0u, 0x3698F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3698F8u;
label_3698f8:
    // 0x3698f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3698f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3698fc: 0x0  nop
    ctx->pc = 0x3698fcu;
    // NOP
    // 0x369900: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x369900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x369904: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369908: 0x0  nop
    ctx->pc = 0x369908u;
    // NOP
    // 0x36990c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x36990cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x369910: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x369910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369914: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x369914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369918: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x369918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x36991c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36991cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x369920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369924: 0x0  nop
    ctx->pc = 0x369924u;
    // NOP
    // 0x369928: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x369928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x36992c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x36992cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x369930: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x369930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x369934: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x369934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x369938: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x369938u;
    SET_GPR_U32(ctx, 31, 0x369940u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x369940u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369940u) { return; }
    ctx->pc = 0x369940u;
label_369940:
    // 0x369940: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x369940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x369944: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x369944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369948: 0xc040c9e  jal         func_103278
    ctx->pc = 0x369948u;
    SET_GPR_U32(ctx, 31, 0x369950u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369950u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369950u) { return; }
    ctx->pc = 0x369950u;
label_369950:
    // 0x369950: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x369950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369954: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x369954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369958: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36995c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x36995cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x369960: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x369960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369964: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x369964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369968: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36996c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x36996cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x369970: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x369970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x369974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369978: 0x0  nop
    ctx->pc = 0x369978u;
    // NOP
    // 0x36997c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x36997cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x369980: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x369980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x369984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369988: 0x0  nop
    ctx->pc = 0x369988u;
    // NOP
    // 0x36998c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x36998cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x369990: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x369990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x369994: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x369994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369998: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x369998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x36999c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x36999cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3699a0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3699a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x3699a4: 0x344801c7  ori         $t0, $v0, 0x1C7
    ctx->pc = 0x3699a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)455);
    // 0x3699a8: 0xc05a2d4  jal         func_168B50
    ctx->pc = 0x3699A8u;
    SET_GPR_U32(ctx, 31, 0x3699B0u);
    ctx->pc = 0x168B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168B50u, 0x3699A8u, 0x3699B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3699B0u;
label_3699b0:
    // 0x3699b0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x3699b0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3699b4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3699B4u;
    {
        const bool branch_taken_0x3699b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3699b4) {
            ctx->pc = 0x3699CCu;
            return;
        }
    }
    ctx->pc = 0x3699BCu;
    // 0x3699bc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x3699bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3699c0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3699c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3699c4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3699C4u;
    SET_GPR_U32(ctx, 31, 0x3699CCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3699CCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3699CCu) { return; }
    ctx->pc = 0x3699CCu;
}
