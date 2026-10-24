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

// Function: entry_0034a0d0
// Address: 0x34a0d0 - 0x34a1fc
void entry_0034a0d0_0x34a0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034a0d0_0x34a0d0");
#endif

    switch (ctx->pc) {
        case 0x34a0fcu: goto label_34a0fc;
        case 0x34a118u: goto label_34a118;
        case 0x34a130u: goto label_34a130;
        case 0x34a178u: goto label_34a178;
        case 0x34a188u: goto label_34a188;
        case 0x34a194u: goto label_34a194;
        default: break;
    }

    ctx->pc = 0x34a0d0u;

    // 0x34a0d0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34a0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a0d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a0d8: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x34a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x34a0dc: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x34a0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x34a0e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34a0e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34a0e4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x34a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34a0e8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34a0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34a0ec: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34a0f0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x34a0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x34a0f4: 0xc05c848  jal         func_172120
    ctx->pc = 0x34A0F4u;
    SET_GPR_U32(ctx, 31, 0x34A0FCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34A0F4u, 0x34A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A0FCu;
label_34a0fc:
    // 0x34a0fc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x34a0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x34a100: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a104: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x34a104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a108: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x34a108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a10c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x34a10cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34a110: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34A110u;
    SET_GPR_U32(ctx, 31, 0x34A118u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34A110u, 0x34A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A118u;
label_34a118:
    // 0x34a118: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a11c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34a11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34a120: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34a120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a124: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34a124u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34a128: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34A128u;
    SET_GPR_U32(ctx, 31, 0x34A130u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34A128u, 0x34A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A130u;
label_34a130:
    // 0x34a130: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a134: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34a134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a138: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34a138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a13c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a140: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x34a140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a144: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34a144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34a148: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34a148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34a14c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a150: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34a150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a154: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x34a154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x34a158: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x34a158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x34a15c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34a15cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34a160: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x34a160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a164: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34a164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34a168: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34a168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34a16c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34a16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a170: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34A170u;
    SET_GPR_U32(ctx, 31, 0x34A178u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34A170u, 0x34A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A178u;
label_34a178:
    // 0x34a178: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34a178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a17c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34a17cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34a180: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34A180u;
    SET_GPR_U32(ctx, 31, 0x34A188u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34A180u, 0x34A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A188u;
label_34a188:
    // 0x34a188: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34a188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a18c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34A18Cu;
    SET_GPR_U32(ctx, 31, 0x34A194u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34A18Cu, 0x34A194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A194u;
label_34a194:
    // 0x34a194: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a198: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34a198u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34a19c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x34A19Cu;
    {
        const bool branch_taken_0x34a19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a19c) {
            ctx->pc = 0x34A1FCu;
            return;
        }
    }
    ctx->pc = 0x34A1A4u;
    // 0x34a1a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a1a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a1ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34a1acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a1b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a1b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a1b8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34a1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a1bc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a1c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34a1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a1c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a1c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34a1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a1cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a1d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34a1d4: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34a1d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a1dc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a1e0: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x34a1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x34a1e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a1e8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34a1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a1ec: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34a1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34a1f0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x34a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34a1f4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34a1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34a1f8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34a1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x34a1fcu;
}
