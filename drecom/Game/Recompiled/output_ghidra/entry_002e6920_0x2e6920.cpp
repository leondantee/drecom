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

// Function: entry_002e6920
// Address: 0x2e6920 - 0x2e6a18
void entry_002e6920_0x2e6920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e6920_0x2e6920");
#endif

    switch (ctx->pc) {
        case 0x2e6944u: goto label_2e6944;
        case 0x2e6968u: goto label_2e6968;
        case 0x2e6980u: goto label_2e6980;
        case 0x2e6994u: goto label_2e6994;
        case 0x2e69a4u: goto label_2e69a4;
        case 0x2e69bcu: goto label_2e69bc;
        default: break;
    }

    ctx->pc = 0x2e6920u;

    // 0x2e6920: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2e6920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2e6924: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e6924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e6928: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e6928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e692c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e692cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6930: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6934: 0xc46c11f8  lwc1        $f12, 0x11F8($v1)
    ctx->pc = 0x2e6934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e6938: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2e6938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e693c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2E693Cu;
    SET_GPR_U32(ctx, 31, 0x2E6944u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2E693Cu, 0x2E6944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6944u;
label_2e6944:
    // 0x2e6944: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6948: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e6948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2e694c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6950: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2e6950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6954: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6958: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e6958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e695c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2e695cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e6960: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E6960u;
    SET_GPR_U32(ctx, 31, 0x2E6968u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E6960u, 0x2E6968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6968u;
label_2e6968:
    // 0x2e6968: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e696c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e696cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2e6970: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e6970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6974: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e6974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e6978: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E6978u;
    SET_GPR_U32(ctx, 31, 0x2E6980u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E6978u, 0x2E6980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6980u;
label_2e6980:
    // 0x2e6980: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6984: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e6984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6988: 0xc44c11f8  lwc1        $f12, 0x11F8($v0)
    ctx->pc = 0x2e6988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e698c: 0xc05cd58  jal         func_173560
    ctx->pc = 0x2E698Cu;
    SET_GPR_U32(ctx, 31, 0x2E6994u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2E698Cu, 0x2E6994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6994u;
label_2e6994:
    // 0x2e6994: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e6994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6998: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e6998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e699c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E699Cu;
    SET_GPR_U32(ctx, 31, 0x2E69A4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E699Cu, 0x2E69A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E69A4u;
label_2e69a4:
    // 0x2e69a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e69a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e69a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e69ac: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2e69acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2e69b0: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2e69b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2e69b4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2E69B4u;
    SET_GPR_U32(ctx, 31, 0x2E69BCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2E69B4u, 0x2E69BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E69BCu;
label_2e69bc:
    // 0x2e69bc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e69bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2e69c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e69c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e69c4: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2e69c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e69c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e69c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e69cc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2e69ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e69d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e69d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e69d4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2e69d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2e69d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e69d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e69dc: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x2e69dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e69e0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e69e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e69e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e69e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e69e8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e69e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e69ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e69ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e69f0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e69f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e69f4: 0x0  nop
    ctx->pc = 0x2e69f4u;
    // NOP
    // 0x2e69f8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2E69F8u;
    {
        const bool branch_taken_0x2e69f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e69f8) {
            ctx->pc = 0x2E6A18u;
            return;
        }
    }
    ctx->pc = 0x2E6A00u;
    // 0x2e6a00: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e6a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e6a04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e6a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e6a08: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e6a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6a0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e6a0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e6a10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6a14: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2e6a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x2e6a18u;
}
