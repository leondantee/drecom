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

// Function: entry_0012c388
// Address: 0x12c388 - 0x12c4d4
void entry_0012c388_0x12c388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c388_0x12c388");
#endif

    switch (ctx->pc) {
        case 0x12c398u: goto label_12c398;
        case 0x12c3bcu: goto label_12c3bc;
        case 0x12c3dcu: goto label_12c3dc;
        case 0x12c3f0u: goto label_12c3f0;
        case 0x12c404u: goto label_12c404;
        case 0x12c414u: goto label_12c414;
        case 0x12c42cu: goto label_12c42c;
        case 0x12c460u: goto label_12c460;
        case 0x12c488u: goto label_12c488;
        default: break;
    }

    ctx->pc = 0x12c388u;

    // 0x12c388: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c38c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12c38cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12c390: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12C390u;
    SET_GPR_U32(ctx, 31, 0x12C398u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12C390u, 0x12C398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C398u;
label_12c398:
    // 0x12c398: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x12c398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
    // 0x12c39c: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x12c39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x12c3a0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x12c3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12c3a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c3a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c3ac: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x12c3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12c3b0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x12c3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12c3b4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12C3B4u;
    SET_GPR_U32(ctx, 31, 0x12C3BCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12C3B4u, 0x12C3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3BCu;
label_12c3bc:
    // 0x12c3bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c3c0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12c3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12c3c4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x12c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x12c3c8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x12c3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x12c3cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12c3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12c3d0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c3d4: 0xc05ce88  jal         func_173A20
    ctx->pc = 0x12C3D4u;
    SET_GPR_U32(ctx, 31, 0x12C3DCu);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x12C3D4u, 0x12C3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3DCu;
label_12c3dc:
    // 0x12c3dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c3e0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c3e4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12c3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12c3e8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x12C3E8u;
    SET_GPR_U32(ctx, 31, 0x12C3F0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12C3E8u, 0x12C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3F0u;
label_12c3f0:
    // 0x12c3f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c3f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12c3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12c3f8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12c3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12c3fc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12C3FCu;
    SET_GPR_U32(ctx, 31, 0x12C404u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12C404u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12C404u) { return; }
    ctx->pc = 0x12C404u;
label_12c404:
    // 0x12c404: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c408: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12c408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c40c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12C40Cu;
    SET_GPR_U32(ctx, 31, 0x12C414u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12C40Cu, 0x12C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C414u;
label_12c414:
    // 0x12c414: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c418: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12c418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12c41c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12c41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12c420: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12c420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12c424: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12C424u;
    SET_GPR_U32(ctx, 31, 0x12C42Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12C424u, 0x12C42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C42Cu;
label_12c42c:
    // 0x12c42c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c430: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x12c430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12c434: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x12c434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c438: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12c438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12c43c: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x12c43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
    // 0x12c440: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c444: 0xc44112a8  lwc1        $f1, 0x12A8($v0)
    ctx->pc = 0x12c444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12c448: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x12c448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c44c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12c44cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12c450: 0xe44012a8  swc1        $f0, 0x12A8($v0)
    ctx->pc = 0x12c450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4776), bits); }
    // 0x12c454: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c458: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12C458u;
    SET_GPR_U32(ctx, 31, 0x12C460u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12C458u, 0x12C460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C460u;
label_12c460:
    // 0x12c460: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c464: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12c464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12c468: 0x106000b6  beqz        $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x12C468u;
    {
        const bool branch_taken_0x12c468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c468) {
            ctx->pc = 0x12C744u;
            return;
        }
    }
    ctx->pc = 0x12C470u;
    // 0x12c470: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x12c470u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x12c474: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c478: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12c478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x12c47c: 0x84268db8  lh          $a2, -0x7248($at)
    ctx->pc = 0x12c47cu;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x388DB8u));
    // 0x12c480: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x12C480u;
    SET_GPR_U32(ctx, 31, 0x12C488u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x12C480u, 0x12C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C488u;
label_12c488:
    // 0x12c488: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x12c488u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x12c48c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12c48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12c490: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12c490u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x12c494: 0x461000f  bgez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12C494u;
    {
        const bool branch_taken_0x12c494 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12c494) {
            ctx->pc = 0x12C4D4u;
            return;
        }
    }
    ctx->pc = 0x12C49Cu;
    // 0x12c49c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12c49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c4a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c4a4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12c4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12c4a8: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x12c4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x12c4ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c4b0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12c4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12c4b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c4b8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12c4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c4bc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c4c0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12c4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c4c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c4c8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12c4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12c4cc: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x12C4CCu;
    {
        const bool branch_taken_0x12c4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c4cc) {
            ctx->pc = 0x12C87Cu;
            return;
        }
    }
    ctx->pc = 0x12C4D4u;
}
