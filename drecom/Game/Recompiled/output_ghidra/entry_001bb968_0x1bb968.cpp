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

// Function: entry_001bb968
// Address: 0x1bb968 - 0x1bba78
void entry_001bb968_0x1bb968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb968_0x1bb968");
#endif

    switch (ctx->pc) {
        case 0x1bb978u: goto label_1bb978;
        case 0x1bb988u: goto label_1bb988;
        case 0x1bb9a4u: goto label_1bb9a4;
        case 0x1bb9b0u: goto label_1bb9b0;
        case 0x1bb9ccu: goto label_1bb9cc;
        case 0x1bba1cu: goto label_1bba1c;
        case 0x1bba38u: goto label_1bba38;
        default: break;
    }

    ctx->pc = 0x1bb968u;

    // 0x1bb968: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb96c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bb96cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bb970: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BB970u;
    SET_GPR_U32(ctx, 31, 0x1BB978u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BB970u, 0x1BB978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB978u;
label_1bb978:
    // 0x1bb978: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb97c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bb97cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bb980: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BB980u;
    SET_GPR_U32(ctx, 31, 0x1BB988u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BB980u, 0x1BB988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB988u;
label_1bb988:
    // 0x1bb988: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bb988u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bb98c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bb98cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bb990: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb994: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bb994u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bb998: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bb998u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bb99c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BB99Cu;
    SET_GPR_U32(ctx, 31, 0x1BB9A4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BB99Cu, 0x1BB9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB9A4u;
label_1bb9a4:
    // 0x1bb9a4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bb9a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bb9a8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BB9A8u;
    SET_GPR_U32(ctx, 31, 0x1BB9B0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BB9A8u, 0x1BB9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB9B0u;
label_1bb9b0:
    // 0x1bb9b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bb9b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bb9b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb9b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb9bc: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1bb9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1bb9c0: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1bb9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1bb9c4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1BB9C4u;
    SET_GPR_U32(ctx, 31, 0x1BB9CCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BB9C4u, 0x1BB9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB9CCu;
label_1bb9cc:
    // 0x1bb9cc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1bb9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1bb9d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb9d4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1bb9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb9d8: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1bb9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x1bb9dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bb9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb9e0: 0x0  nop
    ctx->pc = 0x1bb9e0u;
    // NOP
    // 0x1bb9e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1bb9e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bb9e8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1bb9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb9ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bb9ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb9f0: 0x0  nop
    ctx->pc = 0x1bb9f0u;
    // NOP
    // 0x1bb9f4: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x1BB9F4u;
    {
        const bool branch_taken_0x1bb9f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb9f4) {
            ctx->pc = 0x1BBA78u;
            return;
        }
    }
    ctx->pc = 0x1BB9FCu;
    // 0x1bb9fc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bba00: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bba04: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bba08: 0x24841b40  addiu       $a0, $a0, 0x1B40
    ctx->pc = 0x1bba08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
    // 0x1bba0c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1bba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1bba10: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x1bba10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x1bba14: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1BBA14u;
    SET_GPR_U32(ctx, 31, 0x1BBA1Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1BBA14u, 0x1BBA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBA1Cu;
label_1bba1c:
    // 0x1bba1c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bba1cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bba20: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bba20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bba24: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bba24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bba28: 0xc48c1b40  lwc1        $f12, 0x1B40($a0)
    ctx->pc = 0x1bba28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bba2c: 0xc46d1b48  lwc1        $f13, 0x1B48($v1)
    ctx->pc = 0x1bba2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bba30: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1BBA30u;
    SET_GPR_U32(ctx, 31, 0x1BBA38u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1BBA30u, 0x1BBA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBA38u;
label_1bba38:
    // 0x1bba38: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1bba38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bba3c: 0xe4c01290  swc1        $f0, 0x1290($a2)
    ctx->pc = 0x1bba3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4752), bits); }
    // 0x1bba40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bba40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bba44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bba44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bba48: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1bba48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bba4c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1bba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1bba50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bba50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bba54: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1bba54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bba58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bba5c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1bba5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bba60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bba60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bba64: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bba64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bba68: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bba68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bba6c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1bba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1bba70: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1BBA70u;
    {
        const bool branch_taken_0x1bba70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bba70) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BBA78u;
}
