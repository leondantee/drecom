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

// Function: entry_001b807c
// Address: 0x1b807c - 0x1b8188
void entry_001b807c_0x1b807c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b807c_0x1b807c");
#endif

    switch (ctx->pc) {
        case 0x1b8090u: goto label_1b8090;
        case 0x1b809cu: goto label_1b809c;
        case 0x1b80b4u: goto label_1b80b4;
        case 0x1b80c4u: goto label_1b80c4;
        case 0x1b80e0u: goto label_1b80e0;
        case 0x1b8130u: goto label_1b8130;
        case 0x1b8148u: goto label_1b8148;
        default: break;
    }

    ctx->pc = 0x1b807cu;

    // 0x1b807c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b807cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8080: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1b8080u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1b8084: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b8084u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b8088: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B8088u;
    SET_GPR_U32(ctx, 31, 0x1B8090u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B8088u, 0x1B8090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8090u;
label_1b8090:
    // 0x1b8090: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8094: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1B8094u;
    SET_GPR_U32(ctx, 31, 0x1B809Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B8094u, 0x1B809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B809Cu;
label_1b809c:
    // 0x1b809c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b809cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b80a0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b80a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b80a4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1b80a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1b80a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b80a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b80ac: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1B80ACu;
    SET_GPR_U32(ctx, 31, 0x1B80B4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1B80ACu, 0x1B80B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B80B4u;
label_1b80b4:
    // 0x1b80b4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b80b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b80b8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b80b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b80bc: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1B80BCu;
    SET_GPR_U32(ctx, 31, 0x1B80C4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B80BCu, 0x1B80C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B80C4u;
label_1b80c4:
    // 0x1b80c4: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1b80c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b80c8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b80c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b80cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b80ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b80d0: 0x25040120  addiu       $a0, $t0, 0x120
    ctx->pc = 0x1b80d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 288));
    // 0x1b80d4: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1b80d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1b80d8: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1B80D8u;
    SET_GPR_U32(ctx, 31, 0x1B80E0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1B80D8u, 0x1B80E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B80E0u;
label_1b80e0:
    // 0x1b80e0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1b80e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1b80e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b80e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b80e8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b80e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b80ec: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1b80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x1b80f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b80f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b80f4: 0x0  nop
    ctx->pc = 0x1b80f4u;
    // NOP
    // 0x1b80f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b80f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b80fc: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b80fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8100: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b8100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8104: 0x0  nop
    ctx->pc = 0x1b8104u;
    // NOP
    // 0x1b8108: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1B8108u;
    {
        const bool branch_taken_0x1b8108 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8108) {
            ctx->pc = 0x1B8188u;
            return;
        }
    }
    ctx->pc = 0x1B8110u;
    // 0x1b8110: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8114: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8118: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b811c: 0x24841b40  addiu       $a0, $a0, 0x1B40
    ctx->pc = 0x1b811cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
    // 0x1b8120: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1b8120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1b8124: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x1b8124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x1b8128: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B8128u;
    SET_GPR_U32(ctx, 31, 0x1B8130u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B8128u, 0x1B8130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8130u;
label_1b8130:
    // 0x1b8130: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8134: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8138: 0xc48c1b40  lwc1        $f12, 0x1B40($a0)
    ctx->pc = 0x1b8138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b813c: 0xc44d1b48  lwc1        $f13, 0x1B48($v0)
    ctx->pc = 0x1b813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b8140: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B8140u;
    SET_GPR_U32(ctx, 31, 0x1B8148u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B8140u, 0x1B8148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8148u;
label_1b8148:
    // 0x1b8148: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b814c: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1b814cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1b8150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8154: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8158: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1b8158u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b815c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1b815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1b8160: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8164: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1b8164u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b8168: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b816c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1b816cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8170: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8174: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b8174u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8178: 0x8fb20068  lw          $s2, 0x68($sp)
    ctx->pc = 0x1b8178u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b817c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1b817cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1b8180: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1B8180u;
    {
        const bool branch_taken_0x1b8180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8180) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B8188u;
}
