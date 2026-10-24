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

// Function: entry_002cc2f4
// Address: 0x2cc2f4 - 0x2cc3e0
void entry_002cc2f4_0x2cc2f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cc2f4_0x2cc2f4");
#endif

    switch (ctx->pc) {
        case 0x2cc340u: goto label_2cc340;
        case 0x2cc378u: goto label_2cc378;
        case 0x2cc3b0u: goto label_2cc3b0;
        default: break;
    }

    ctx->pc = 0x2cc2f4u;

    // 0x2cc2f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc2f8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2cc2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2cc2fc: 0x24502bc0  addiu       $s0, $v0, 0x2BC0
    ctx->pc = 0x2cc2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11200));
    // 0x2cc300: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc304: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2cc304u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cc308: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2cc308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cc30c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cc30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2cc310: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cc310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cc314: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CC314u;
    {
        const bool branch_taken_0x2cc314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc314) {
            ctx->pc = 0x2CC3E0u;
            return;
        }
    }
    ctx->pc = 0x2CC31Cu;
    // 0x2cc31c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2cc31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc320: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2cc320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2cc324: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2cc324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2cc328: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2cc328u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc32c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2cc32cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2cc330: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2cc330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2cc334: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2cc334u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc338: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC338u;
    SET_GPR_U32(ctx, 31, 0x2CC340u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC338u, 0x2CC340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC340u;
label_2cc340:
    // 0x2cc340: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc344: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc348: 0x0  nop
    ctx->pc = 0x2cc348u;
    // NOP
    // 0x2cc34c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc34cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc350: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cc350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cc354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc358: 0x0  nop
    ctx->pc = 0x2cc358u;
    // NOP
    // 0x2cc35c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc35cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc360: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cc360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc364: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc368: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc36c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cc36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cc370: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC370u;
    SET_GPR_U32(ctx, 31, 0x2CC378u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC370u, 0x2CC378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC378u;
label_2cc378:
    // 0x2cc378: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc37c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc380: 0x0  nop
    ctx->pc = 0x2cc380u;
    // NOP
    // 0x2cc384: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc384u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc388: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2cc388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2cc38c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc390: 0x0  nop
    ctx->pc = 0x2cc390u;
    // NOP
    // 0x2cc394: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc394u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc398: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2cc398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc39c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc39cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc3a0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc3a4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2cc3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2cc3a8: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC3A8u;
    SET_GPR_U32(ctx, 31, 0x2CC3B0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC3A8u, 0x2CC3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC3B0u;
label_2cc3b0:
    // 0x2cc3b0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc3b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc3b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc3b8: 0x0  nop
    ctx->pc = 0x2cc3b8u;
    // NOP
    // 0x2cc3bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc3bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc3c0: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cc3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cc3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc3c8: 0x0  nop
    ctx->pc = 0x2cc3c8u;
    // NOP
    // 0x2cc3cc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc3ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc3d0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cc3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc3d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc3d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc3d8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc3dc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2cc3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x2cc3e0u;
}
