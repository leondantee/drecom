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

// Function: entry_00169240
// Address: 0x169240 - 0x1692fc
void entry_00169240_0x169240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169240_0x169240");
#endif

    switch (ctx->pc) {
        case 0x1692c0u: goto label_1692c0;
        default: break;
    }

    ctx->pc = 0x169240u;

    // 0x169240: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x169240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x169244: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x169244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x169248: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x169248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x16924c: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x16924Cu;
    {
        const bool branch_taken_0x16924c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16924c) {
            ctx->pc = 0x169314u;
            return;
        }
    }
    ctx->pc = 0x169254u;
    // 0x169254: 0xc6001314  lwc1        $f0, 0x1314($s0)
    ctx->pc = 0x169254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169258: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x169258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x16925c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x16925cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x169260: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x169260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x169264: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169268: 0xc420aad4  lwc1        $f0, -0x552C($at)
    ctx->pc = 0x169268u;
    { uint32_t bits = FAST_READ32(0x47AAD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16926c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16926cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x169270: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x169270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x169274: 0xc6001318  lwc1        $f0, 0x1318($s0)
    ctx->pc = 0x169274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169278: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x169278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x16927c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16927cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x169280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169284: 0x0  nop
    ctx->pc = 0x169284u;
    // NOP
    // 0x169288: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x169288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x16928c: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x16928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169290: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x169290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x169294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169298: 0x0  nop
    ctx->pc = 0x169298u;
    // NOP
    // 0x16929c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16929cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1692a0: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x1692a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x1692a4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1692a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1692a8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1692a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1692ac: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x1692acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1692b0: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x1692b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
    // 0x1692b4: 0x344707c7  ori         $a3, $v0, 0x7C7
    ctx->pc = 0x1692b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1991);
    // 0x1692b8: 0xc059e1c  jal         func_167870
    ctx->pc = 0x1692B8u;
    SET_GPR_U32(ctx, 31, 0x1692C0u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1692B8u, 0x1692C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1692C0u;
label_1692c0:
    // 0x1692c0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1692c0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1692c4: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x1692c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1692c8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1692c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x1692cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1692ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1692d0: 0x0  nop
    ctx->pc = 0x1692d0u;
    // NOP
    // 0x1692d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1692d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1692d8: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x1692d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x1692dc: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1692DCu;
    {
        const bool branch_taken_0x1692dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1692dc) {
            ctx->pc = 0x1692FCu;
            return;
        }
    }
    ctx->pc = 0x1692E4u;
    // 0x1692e4: 0xc6001314  lwc1        $f0, 0x1314($s0)
    ctx->pc = 0x1692e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1692e8: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x1692e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1692ec: 0xc6001318  lwc1        $f0, 0x1318($s0)
    ctx->pc = 0x1692ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1692f0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x1692f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x1692f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1692F4u;
    {
        const bool branch_taken_0x1692f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1692f4) {
            ctx->pc = 0x169324u;
            return;
        }
    }
    ctx->pc = 0x1692FCu;
}
