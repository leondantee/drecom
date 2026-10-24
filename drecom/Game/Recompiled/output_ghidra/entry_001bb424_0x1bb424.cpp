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

// Function: entry_001bb424
// Address: 0x1bb424 - 0x1bb508
void entry_001bb424_0x1bb424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb424_0x1bb424");
#endif

    switch (ctx->pc) {
        case 0x1bb45cu: goto label_1bb45c;
        case 0x1bb46cu: goto label_1bb46c;
        case 0x1bb480u: goto label_1bb480;
        case 0x1bb4a0u: goto label_1bb4a0;
        default: break;
    }

    ctx->pc = 0x1bb424u;

    // 0x1bb424: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bb428: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1bb428u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1bb42c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1bb42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1bb430: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bb434: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1bb434u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1bb438: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb43c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1bb43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bb440: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x1bb440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x1bb444: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1bb444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1bb448: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1bb448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1bb44c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb450: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bb450u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bb454: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BB454u;
    SET_GPR_U32(ctx, 31, 0x1BB45Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BB454u, 0x1BB45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB45Cu;
label_1bb45c:
    // 0x1bb45c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bb45cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bb460: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb464: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BB464u;
    SET_GPR_U32(ctx, 31, 0x1BB46Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BB464u, 0x1BB46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB46Cu;
label_1bb46c:
    // 0x1bb46c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bb46cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bb470: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb474: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bb474u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bb478: 0xc057480  jal         func_15D200
    ctx->pc = 0x1BB478u;
    SET_GPR_U32(ctx, 31, 0x1BB480u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BB478u, 0x1BB480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB480u;
label_1bb480:
    // 0x1bb480: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb484: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb488: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x1bb488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1bb48c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1bb48cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1bb490: 0x244612c0  addiu       $a2, $v0, 0x12C0
    ctx->pc = 0x1bb490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1bb494: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1bb494u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1bb498: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1BB498u;
    SET_GPR_U32(ctx, 31, 0x1BB4A0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BB498u, 0x1BB4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB4A0u;
label_1bb4a0:
    // 0x1bb4a0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1bb4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1bb4a4: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1bb4a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb4a8: 0xc4e11284  lwc1        $f1, 0x1284($a3)
    ctx->pc = 0x1bb4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb4ac: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x1bb4acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb4b0: 0xc5000124  lwc1        $f0, 0x124($t0)
    ctx->pc = 0x1bb4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb4b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bb4b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bb4b8: 0xe5000124  swc1        $f0, 0x124($t0)
    ctx->pc = 0x1bb4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 292), bits); }
    // 0x1bb4bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb4c0: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1bb4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb4c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb4c8: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1bb4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb4cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bb4ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bb4d0: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1bb4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1bb4d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb4d8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1bb4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb4dc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1bb4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb4e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bb4e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb4e4: 0x0  nop
    ctx->pc = 0x1bb4e4u;
    // NOP
    // 0x1bb4e8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB4E8u;
    {
        const bool branch_taken_0x1bb4e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb4e8) {
            ctx->pc = 0x1BB508u;
            return;
        }
    }
    ctx->pc = 0x1BB4F0u;
    // 0x1bb4f0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1bb4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb4f4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb4f8: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1bb4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1bb4fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb500: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bb500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb504: 0xaca21b60  sw          $v0, 0x1B60($a1)
    ctx->pc = 0x1bb504u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 2));
    ctx->pc = 0x1bb508u;
}
