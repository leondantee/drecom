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

// Function: caseD_9
// Address: 0x2de908 - 0x2de9f4
void caseD_9_0x2de908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x2de908");
#endif

    switch (ctx->pc) {
        case 0x2de918u: goto label_2de918;
        case 0x2de924u: goto label_2de924;
        case 0x2de934u: goto label_2de934;
        case 0x2de940u: goto label_2de940;
        case 0x2de958u: goto label_2de958;
        case 0x2de9a4u: goto label_2de9a4;
        case 0x2de9b4u: goto label_2de9b4;
        default: break;
    }

    ctx->pc = 0x2de908u;

    // 0x2de908: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de90c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2de90cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2de910: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DE910u;
    SET_GPR_U32(ctx, 31, 0x2DE918u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DE910u, 0x2DE918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE918u;
label_2de918:
    // 0x2de918: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de91c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DE91Cu;
    SET_GPR_U32(ctx, 31, 0x2DE924u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DE91Cu, 0x2DE924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE924u;
label_2de924:
    // 0x2de924: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de928: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2de928u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2de92c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DE92Cu;
    SET_GPR_U32(ctx, 31, 0x2DE934u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DE92Cu, 0x2DE934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE934u;
label_2de934:
    // 0x2de934: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de938: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DE938u;
    SET_GPR_U32(ctx, 31, 0x2DE940u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DE938u, 0x2DE940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE940u;
label_2de940:
    // 0x2de940: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de944: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de948: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2de948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2de94c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2de94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2de950: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2DE950u;
    SET_GPR_U32(ctx, 31, 0x2DE958u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2DE950u, 0x2DE958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE958u;
label_2de958:
    // 0x2de958: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2de958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2de95c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de960: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2de960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de964: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2de964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2de968: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2de968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de96c: 0x0  nop
    ctx->pc = 0x2de96cu;
    // NOP
    // 0x2de970: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2de970u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2de974: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2de974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de978: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2de978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de97c: 0x0  nop
    ctx->pc = 0x2de97cu;
    // NOP
    // 0x2de980: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x2DE980u;
    {
        const bool branch_taken_0x2de980 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de980) {
            ctx->pc = 0x2DE9F4u;
            return;
        }
    }
    ctx->pc = 0x2DE988u;
    // 0x2de988: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de98c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de990: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2de990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2de994: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2de994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2de998: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x2de998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x2de99c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2DE99Cu;
    SET_GPR_U32(ctx, 31, 0x2DE9A4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2DE99Cu, 0x2DE9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE9A4u;
label_2de9a4:
    // 0x2de9a4: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x2de9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2de9a8: 0xc7ad0018  lwc1        $f13, 0x18($sp)
    ctx->pc = 0x2de9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2de9ac: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2DE9ACu;
    SET_GPR_U32(ctx, 31, 0x2DE9B4u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2DE9ACu, 0x2DE9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE9B4u;
label_2de9b4:
    // 0x2de9b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de9b8: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x2de9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x2de9bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2de9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de9c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de9c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2de9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2de9c8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2de9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2de9cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de9d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2de9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2de9d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de9d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2de9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2de9dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de9e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2de9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2de9e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de9e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2de9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2de9ec: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2DE9ECu;
    {
        const bool branch_taken_0x2de9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de9ec) {
            ctx->pc = 0x2DEAF8u;
            return;
        }
    }
    ctx->pc = 0x2DE9F4u;
}
