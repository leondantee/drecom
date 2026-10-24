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

// Function: entry_0036f360
// Address: 0x36f360 - 0x36f40c
void entry_0036f360_0x36f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036f360_0x36f360");
#endif

    switch (ctx->pc) {
        case 0x36f3bcu: goto label_36f3bc;
        default: break;
    }

    ctx->pc = 0x36f360u;

    // 0x36f360: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f364: 0x0  nop
    ctx->pc = 0x36f364u;
    // NOP
    // 0x36f368: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x36f368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36f36c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f36cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f370: 0x0  nop
    ctx->pc = 0x36f370u;
    // NOP
    // 0x36f374: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x36f374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36f378: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x36f378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x36f37c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f380: 0x0  nop
    ctx->pc = 0x36f380u;
    // NOP
    // 0x36f384: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x36f384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36f388: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36f38c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f390: 0x0  nop
    ctx->pc = 0x36f390u;
    // NOP
    // 0x36f394: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x36f394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x36f398: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36f39c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f3a0: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f3a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f3a4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x36f3a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f3a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x36f3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x36f3ac: 0x8c25dcf0  lw          $a1, -0x2310($at)
    ctx->pc = 0x36f3acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x36f3b0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x36f3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36f3b4: 0xc05db20  jal         func_176C80
    ctx->pc = 0x36F3B4u;
    SET_GPR_U32(ctx, 31, 0x36F3BCu);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x36F3B4u, 0x36F3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F3BCu;
label_36f3bc:
    // 0x36f3bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f3bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f3c0: 0x0  nop
    ctx->pc = 0x36f3c0u;
    // NOP
    // 0x36f3c4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x36f3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36f3c8: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x36f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x36f3cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f3d0: 0x0  nop
    ctx->pc = 0x36f3d0u;
    // NOP
    // 0x36f3d4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x36f3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36f3d8: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x36f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x36f3dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f3e0: 0x0  nop
    ctx->pc = 0x36f3e0u;
    // NOP
    // 0x36f3e4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x36f3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36f3e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36f3ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f3f0: 0x0  nop
    ctx->pc = 0x36f3f0u;
    // NOP
    // 0x36f3f4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x36f3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x36f3f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36f3fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f400: 0x9042000d  lbu         $v0, 0xD($v0)
    ctx->pc = 0x36f400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x36f404: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x36f404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f408: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x36f408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    ctx->pc = 0x36f40cu;
}
