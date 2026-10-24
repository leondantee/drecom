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

// Function: entry_0020e3e8
// Address: 0x20e3e8 - 0x20e4e4
void entry_0020e3e8_0x20e3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e3e8_0x20e3e8");
#endif

    switch (ctx->pc) {
        case 0x20e3f8u: goto label_20e3f8;
        case 0x20e404u: goto label_20e404;
        case 0x20e44cu: goto label_20e44c;
        case 0x20e4b8u: goto label_20e4b8;
        case 0x20e4d8u: goto label_20e4d8;
        default: break;
    }

    ctx->pc = 0x20e3e8u;

    // 0x20e3e8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e3ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20e3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e3f0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20E3F0u;
    SET_GPR_U32(ctx, 31, 0x20E3F8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20E3F0u, 0x20E3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E3F8u;
label_20e3f8:
    // 0x20e3f8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e3fc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x20E3FCu;
    SET_GPR_U32(ctx, 31, 0x20E404u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x20E3FCu, 0x20E404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E404u;
label_20e404:
    // 0x20e404: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e408: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x20e408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e40c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e410: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x20e410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e414: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20e414u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20e418: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x20e418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x20e41c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e420: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x20e420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e424: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e428: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x20e428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e42c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20e42cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20e430: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x20e430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x20e434: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e438: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20e438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20e43c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x20e43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20e440: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x20e440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20e444: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x20E444u;
    SET_GPR_U32(ctx, 31, 0x20E44Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x20E444u, 0x20E44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E44Cu;
label_20e44c:
    // 0x20e44c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e450: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x20e450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e454: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20e454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e458: 0x0  nop
    ctx->pc = 0x20e458u;
    // NOP
    // 0x20e45c: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x20E45Cu;
    {
        const bool branch_taken_0x20e45c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e45c) {
            ctx->pc = 0x20E504u;
            return;
        }
    }
    ctx->pc = 0x20E464u;
    // 0x20e464: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e468: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x20e468u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x20e46c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20E46Cu;
    {
        const bool branch_taken_0x20e46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e46c) {
            ctx->pc = 0x20E4E4u;
            return;
        }
    }
    ctx->pc = 0x20E474u;
    // 0x20e474: 0x24020520  addiu       $v0, $zero, 0x520
    ctx->pc = 0x20e474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x20e478: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x20e478u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20e47c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e480: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20e480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20e484: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x20e484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20e488: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20e488u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e48c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x20e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20e490: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20e490u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x20e494: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20e494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20e498: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x20e498u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x20e49c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20e4a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20e4a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20e4a8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x20e4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20e4ac: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x20e4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x20e4b0: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x20E4B0u;
    SET_GPR_U32(ctx, 31, 0x20E4B8u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x20E4B8u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20E4B8u) { return; }
    ctx->pc = 0x20E4B8u;
label_20e4b8:
    // 0x20e4b8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x20e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x20e4bc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x20e4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x20e4c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20e4c4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x20e4c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20e4c8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x20e4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20e4cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20e4ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20e4d0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x20E4D0u;
    SET_GPR_U32(ctx, 31, 0x20E4D8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x20E4D0u, 0x20E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E4D8u;
label_20e4d8:
    // 0x20e4d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e4dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e4e0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x20e4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x20e4e4u;
}
