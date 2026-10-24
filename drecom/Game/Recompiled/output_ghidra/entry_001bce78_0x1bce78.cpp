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

// Function: entry_001bce78
// Address: 0x1bce78 - 0x1bcf80
void entry_001bce78_0x1bce78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bce78_0x1bce78");
#endif

    switch (ctx->pc) {
        case 0x1bce88u: goto label_1bce88;
        case 0x1bce9cu: goto label_1bce9c;
        case 0x1bceb0u: goto label_1bceb0;
        case 0x1bcebcu: goto label_1bcebc;
        case 0x1bced8u: goto label_1bced8;
        case 0x1bcf28u: goto label_1bcf28;
        case 0x1bcf40u: goto label_1bcf40;
        default: break;
    }

    ctx->pc = 0x1bce78u;

    // 0x1bce78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bce78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bce7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bce7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bce80: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BCE80u;
    SET_GPR_U32(ctx, 31, 0x1BCE88u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BCE80u, 0x1BCE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE88u;
label_1bce88:
    // 0x1bce88: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1bce88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bce8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bce90: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bce90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bce94: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BCE94u;
    SET_GPR_U32(ctx, 31, 0x1BCE9Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BCE94u, 0x1BCE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE9Cu;
label_1bce9c:
    // 0x1bce9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bce9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bcea0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bcea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcea4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bcea4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bcea8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BCEA8u;
    SET_GPR_U32(ctx, 31, 0x1BCEB0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BCEA8u, 0x1BCEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCEB0u;
label_1bceb0:
    // 0x1bceb0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bceb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bceb4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BCEB4u;
    SET_GPR_U32(ctx, 31, 0x1BCEBCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BCEB4u, 0x1BCEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCEBCu;
label_1bcebc:
    // 0x1bcebc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bcebcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bcec0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcec4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bcec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcec8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1bcec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1bcecc: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1bceccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1bced0: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1BCED0u;
    SET_GPR_U32(ctx, 31, 0x1BCED8u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BCED0u, 0x1BCED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCED8u;
label_1bced8:
    // 0x1bced8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1bced8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1bcedc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcee0: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1bcee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcee4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1bcee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x1bcee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bcee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bceec: 0x0  nop
    ctx->pc = 0x1bceecu;
    // NOP
    // 0x1bcef0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1bcef0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bcef4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1bcef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bcef8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bcef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bcefc: 0x0  nop
    ctx->pc = 0x1bcefcu;
    // NOP
    // 0x1bcf00: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1BCF00u;
    {
        const bool branch_taken_0x1bcf00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcf00) {
            ctx->pc = 0x1BCF80u;
            return;
        }
    }
    ctx->pc = 0x1BCF08u;
    // 0x1bcf08: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bcf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcf0c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bcf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcf10: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcf14: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x1bcf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x1bcf18: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x1bcf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x1bcf1c: 0x24660170  addiu       $a2, $v1, 0x170
    ctx->pc = 0x1bcf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x1bcf20: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1BCF20u;
    SET_GPR_U32(ctx, 31, 0x1BCF28u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1BCF20u, 0x1BCF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF28u;
label_1bcf28:
    // 0x1bcf28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcf2c: 0x8fb20068  lw          $s2, 0x68($sp)
    ctx->pc = 0x1bcf2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcf30: 0xc46c1b40  lwc1        $f12, 0x1B40($v1)
    ctx->pc = 0x1bcf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bcf34: 0xc64d1b48  lwc1        $f13, 0x1B48($s2)
    ctx->pc = 0x1bcf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bcf38: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1BCF38u;
    SET_GPR_U32(ctx, 31, 0x1BCF40u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1BCF38u, 0x1BCF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF40u;
label_1bcf40:
    // 0x1bcf40: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcf44: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1bcf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1bcf48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bcf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcf4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcf50: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1bcf50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bcf54: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x1bcf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1bcf58: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bcf58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcf5c: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1bcf5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bcf60: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bcf60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcf64: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x1bcf64u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bcf68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcf6c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bcf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bcf70: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bcf70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcf74: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1bcf74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1bcf78: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1BCF78u;
    {
        const bool branch_taken_0x1bcf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcf78) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BCF80u;
}
