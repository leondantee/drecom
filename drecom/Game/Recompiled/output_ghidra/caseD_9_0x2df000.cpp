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
// Address: 0x2df000 - 0x2df0ec
void caseD_9_0x2df000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x2df000");
#endif

    switch (ctx->pc) {
        case 0x2df010u: goto label_2df010;
        case 0x2df01cu: goto label_2df01c;
        case 0x2df02cu: goto label_2df02c;
        case 0x2df038u: goto label_2df038;
        case 0x2df050u: goto label_2df050;
        case 0x2df09cu: goto label_2df09c;
        case 0x2df0acu: goto label_2df0ac;
        default: break;
    }

    ctx->pc = 0x2df000u;

    // 0x2df000: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2df000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df004: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df004u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2df008: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DF008u;
    SET_GPR_U32(ctx, 31, 0x2DF010u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DF008u, 0x2DF010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF010u;
label_2df010:
    // 0x2df010: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2df010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df014: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DF014u;
    SET_GPR_U32(ctx, 31, 0x2DF01Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DF014u, 0x2DF01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF01Cu;
label_2df01c:
    // 0x2df01c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2df01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df020: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df020u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2df024: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DF024u;
    SET_GPR_U32(ctx, 31, 0x2DF02Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DF024u, 0x2DF02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF02Cu;
label_2df02c:
    // 0x2df02c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2df02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df030: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DF030u;
    SET_GPR_U32(ctx, 31, 0x2DF038u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DF030u, 0x2DF038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF038u;
label_2df038:
    // 0x2df038: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df03c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2df03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df040: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2df040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2df044: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2df044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2df048: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2DF048u;
    SET_GPR_U32(ctx, 31, 0x2DF050u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2DF048u, 0x2DF050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF050u;
label_2df050:
    // 0x2df050: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2df050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2df054: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df058: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2df058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2df05c: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2df05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2df060: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2df060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df064: 0x0  nop
    ctx->pc = 0x2df064u;
    // NOP
    // 0x2df068: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2df068u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2df06c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2df06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df070: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2df070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2df074: 0x0  nop
    ctx->pc = 0x2df074u;
    // NOP
    // 0x2df078: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x2DF078u;
    {
        const bool branch_taken_0x2df078 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2df078) {
            ctx->pc = 0x2DF0ECu;
            return;
        }
    }
    ctx->pc = 0x2DF080u;
    // 0x2df080: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df084: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2df084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df088: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2df088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2df08c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2df08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2df090: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x2df090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x2df094: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2DF094u;
    SET_GPR_U32(ctx, 31, 0x2DF09Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2DF094u, 0x2DF09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF09Cu;
label_2df09c:
    // 0x2df09c: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x2df09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2df0a0: 0xc7ad0018  lwc1        $f13, 0x18($sp)
    ctx->pc = 0x2df0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2df0a4: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2DF0A4u;
    SET_GPR_U32(ctx, 31, 0x2DF0ACu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2DF0A4u, 0x2DF0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF0ACu;
label_2df0ac:
    // 0x2df0ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df0b0: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x2df0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x2df0b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df0b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df0bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df0c0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2df0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2df0c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df0c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2df0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df0cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df0d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df0d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df0d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df0dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df0e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2df0e4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2DF0E4u;
    {
        const bool branch_taken_0x2df0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df0e4) {
            ctx->pc = 0x2DF1F0u;
            return;
        }
    }
    ctx->pc = 0x2DF0ECu;
}
