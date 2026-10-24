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

// Function: entry_0023c568
// Address: 0x23c568 - 0x23c660
void entry_0023c568_0x23c568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c568_0x23c568");
#endif

    switch (ctx->pc) {
        case 0x23c604u: goto label_23c604;
        case 0x23c658u: goto label_23c658;
        default: break;
    }

    ctx->pc = 0x23c568u;

    // 0x23c568: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c56c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c570: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x23c570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c574: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x23c574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x23c578: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23c578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c57c: 0x0  nop
    ctx->pc = 0x23c57cu;
    // NOP
    // 0x23c580: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23c580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c584: 0x0  nop
    ctx->pc = 0x23c584u;
    // NOP
    // 0x23c588: 0x4500006e  bc1f        . + 4 + (0x6E << 2)
    ctx->pc = 0x23C588u;
    {
        const bool branch_taken_0x23c588 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c588) {
            ctx->pc = 0x23C744u;
            return;
        }
    }
    ctx->pc = 0x23C590u;
    // 0x23c590: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23c590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23c594: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c598: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23c598u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23c59c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c59cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c5a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c5a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c5a8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23c5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23c5ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c5acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c5b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c5b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c5b8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23c5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23c5bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23c5c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c5c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c5c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c5c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c5cc: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23c5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23c5d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23c5d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c5d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c5dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c5e0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23c5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23c5e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c5e8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c5ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23c5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23c5f0: 0x24065a00  addiu       $a2, $zero, 0x5A00
    ctx->pc = 0x23c5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
    // 0x23c5f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23c5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c5f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23c5f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23c5fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23C5FCu;
    SET_GPR_U32(ctx, 31, 0x23C604u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23C5FCu, 0x23C604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C604u;
label_23c604:
    // 0x23c604: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x23c604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x23c608: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x23c608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x23c60c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c610: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c614: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c618: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23c618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23c61c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x23c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x23c620: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x23c620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x23c624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c628: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c62c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c630: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23c630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23c634: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23c634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23c638: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23c638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23c63c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23c63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23c640: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c644: 0x24040526  addiu       $a0, $zero, 0x526
    ctx->pc = 0x23c644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1318));
    // 0x23c648: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23c648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23c64c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23c64cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23c650: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23C650u;
    SET_GPR_U32(ctx, 31, 0x23C658u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23C650u, 0x23C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C658u;
label_23c658:
    // 0x23c658: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x23C658u;
    {
        const bool branch_taken_0x23c658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c658) {
            ctx->pc = 0x23C744u;
            return;
        }
    }
    ctx->pc = 0x23C660u;
}
