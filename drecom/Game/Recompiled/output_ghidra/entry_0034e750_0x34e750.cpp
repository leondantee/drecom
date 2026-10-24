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

// Function: entry_0034e750
// Address: 0x34e750 - 0x34e87c
void entry_0034e750_0x34e750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034e750_0x34e750");
#endif

    switch (ctx->pc) {
        case 0x34e77cu: goto label_34e77c;
        case 0x34e798u: goto label_34e798;
        case 0x34e7b0u: goto label_34e7b0;
        case 0x34e7f8u: goto label_34e7f8;
        case 0x34e808u: goto label_34e808;
        case 0x34e814u: goto label_34e814;
        default: break;
    }

    ctx->pc = 0x34e750u;

    // 0x34e750: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x34e750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x34e754: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x34e754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x34e758: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34e758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34e75c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e760: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34e760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e764: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x34e764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x34e768: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x34e768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34e76c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34e770: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x34e770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x34e774: 0xc05c848  jal         func_172120
    ctx->pc = 0x34E774u;
    SET_GPR_U32(ctx, 31, 0x34E77Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34E774u, 0x34E77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E77Cu;
label_34e77c:
    // 0x34e77c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x34e77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x34e780: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34e780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e784: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x34e784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e788: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x34e788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e78c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x34e78cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34e790: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34E790u;
    SET_GPR_U32(ctx, 31, 0x34E798u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34E790u, 0x34E798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E798u;
label_34e798:
    // 0x34e798: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34e798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e79c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34e79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34e7a0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e7a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34e7a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34e7a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34E7A8u;
    SET_GPR_U32(ctx, 31, 0x34E7B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34E7A8u, 0x34E7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E7B0u;
label_34e7b0:
    // 0x34e7b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e7b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e7b8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34e7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e7bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e7c0: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x34e7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e7c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34e7c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34e7c8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34e7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34e7cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e7d0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e7d4: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x34e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x34e7d8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x34e7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x34e7dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34e7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34e7e0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x34e7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e7e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34e7e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34e7e8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34e7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34e7ec: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34e7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e7f0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34E7F0u;
    SET_GPR_U32(ctx, 31, 0x34E7F8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34E7F0u, 0x34E7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E7F8u;
label_34e7f8:
    // 0x34e7f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e7fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34e7fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34e800: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34E800u;
    SET_GPR_U32(ctx, 31, 0x34E808u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34E800u, 0x34E808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E808u;
label_34e808:
    // 0x34e808: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34e808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e80c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34E80Cu;
    SET_GPR_U32(ctx, 31, 0x34E814u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34E80Cu, 0x34E814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E814u;
label_34e814:
    // 0x34e814: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34e814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e818: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34e818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34e81c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x34E81Cu;
    {
        const bool branch_taken_0x34e81c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e81c) {
            ctx->pc = 0x34E87Cu;
            return;
        }
    }
    ctx->pc = 0x34E824u;
    // 0x34e824: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34e824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e828: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34e828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e82c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34e82cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34e830: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34e830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e834: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34e834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e838: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34e838u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34e83c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e840: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34e840u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e844: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34e844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e848: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34e848u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e84c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e850: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34e850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34e854: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34e854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34e858: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34e858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e85c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e860: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x34e860u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x34e864: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34e864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e868: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34e868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e86c: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34e870: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x34e870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34e874: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34e874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34e878: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34e878u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x34e87cu;
}
