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

// Function: entry_001be460
// Address: 0x1be460 - 0x1be564
void entry_001be460_0x1be460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be460_0x1be460");
#endif

    switch (ctx->pc) {
        case 0x1be470u: goto label_1be470;
        case 0x1be47cu: goto label_1be47c;
        case 0x1be490u: goto label_1be490;
        case 0x1be49cu: goto label_1be49c;
        case 0x1be4b4u: goto label_1be4b4;
        case 0x1be508u: goto label_1be508;
        case 0x1be524u: goto label_1be524;
        default: break;
    }

    ctx->pc = 0x1be460u;

    // 0x1be460: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be464: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1be464u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1be468: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BE468u;
    SET_GPR_U32(ctx, 31, 0x1BE470u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BE468u, 0x1BE470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE470u;
label_1be470:
    // 0x1be470: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be474: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BE474u;
    SET_GPR_U32(ctx, 31, 0x1BE47Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BE474u, 0x1BE47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE47Cu;
label_1be47c:
    // 0x1be47c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1be47cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be480: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be484: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1be484u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1be488: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BE488u;
    SET_GPR_U32(ctx, 31, 0x1BE490u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BE488u, 0x1BE490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE490u;
label_1be490:
    // 0x1be490: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1be490u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1be494: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BE494u;
    SET_GPR_U32(ctx, 31, 0x1BE49Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BE494u, 0x1BE49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE49Cu;
label_1be49c:
    // 0x1be49c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be4a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be4a4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1be4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1be4a8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1be4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1be4ac: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1BE4ACu;
    SET_GPR_U32(ctx, 31, 0x1BE4B4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BE4ACu, 0x1BE4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4B4u;
label_1be4b4:
    // 0x1be4b4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1be4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1be4b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be4bc: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1be4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be4c0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1be4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x1be4c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be4c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be4c8: 0x0  nop
    ctx->pc = 0x1be4c8u;
    // NOP
    // 0x1be4cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1be4ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1be4d0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1be4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be4d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1be4d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be4d8: 0x0  nop
    ctx->pc = 0x1be4d8u;
    // NOP
    // 0x1be4dc: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1BE4DCu;
    {
        const bool branch_taken_0x1be4dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be4dc) {
            ctx->pc = 0x1BE564u;
            return;
        }
    }
    ctx->pc = 0x1BE4E4u;
    // 0x1be4e4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be4e8: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1be4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be4ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be4f0: 0x24931b40  addiu       $s3, $a0, 0x1B40
    ctx->pc = 0x1be4f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
    // 0x1be4f4: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x1be4f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1be4f8: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x1be4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1be4fc: 0x24660170  addiu       $a2, $v1, 0x170
    ctx->pc = 0x1be4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x1be500: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1BE500u;
    SET_GPR_U32(ctx, 31, 0x1BE508u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1BE500u, 0x1BE508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE508u;
label_1be508:
    // 0x1be508: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1be508u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1be50c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be510: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be514: 0xc48c1b40  lwc1        $f12, 0x1B40($a0)
    ctx->pc = 0x1be514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1be518: 0xc46d1b48  lwc1        $f13, 0x1B48($v1)
    ctx->pc = 0x1be518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1be51c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1BE51Cu;
    SET_GPR_U32(ctx, 31, 0x1BE524u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1BE51Cu, 0x1BE524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE524u;
label_1be524:
    // 0x1be524: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be528: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1be528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1be52c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1be52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be530: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be534: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1be534u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be538: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1be538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1be53c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be540: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1be540u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be544: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be548: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1be548u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be54c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be550: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1be550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be554: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be558: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1be558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1be55c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1BE55Cu;
    {
        const bool branch_taken_0x1be55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be55c) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BE564u;
}
