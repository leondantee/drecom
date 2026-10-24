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

// Function: caseD_4
// Address: 0x34afd4 - 0x34b094
void caseD_4_0x34afd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x34afd4");
#endif

    switch (ctx->pc) {
        case 0x34afe0u: goto label_34afe0;
        case 0x34b02cu: goto label_34b02c;
        case 0x34b038u: goto label_34b038;
        case 0x34b08cu: goto label_34b08c;
        default: break;
    }

    ctx->pc = 0x34afd4u;

    // 0x34afd4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34afd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34afd8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34AFD8u;
    SET_GPR_U32(ctx, 31, 0x34AFE0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34AFD8u, 0x34AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AFE0u;
label_34afe0:
    // 0x34afe0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34afe4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34afe8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34afe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34afec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34afecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aff0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x34aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34aff4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34aff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34aff8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x34aff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34affc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b000: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34b000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b004: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34b004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b008: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x34b008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x34b00c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34b00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b010: 0x0  nop
    ctx->pc = 0x34b010u;
    // NOP
    // 0x34b014: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34b014u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34b018: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34b018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34b01c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b020: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b020u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b024: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34B024u;
    SET_GPR_U32(ctx, 31, 0x34B02Cu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34B024u, 0x34B02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B02Cu;
label_34b02c:
    // 0x34b02c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b030: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34B030u;
    SET_GPR_U32(ctx, 31, 0x34B038u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34B030u, 0x34B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B038u;
label_34b038:
    // 0x34b038: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b03c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b040: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34b040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b044: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x34b044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x34b048: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34b048u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b04c: 0x0  nop
    ctx->pc = 0x34b04cu;
    // NOP
    // 0x34b050: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34b050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b054: 0x0  nop
    ctx->pc = 0x34b054u;
    // NOP
    // 0x34b058: 0x450000bc  bc1f        . + 4 + (0xBC << 2)
    ctx->pc = 0x34B058u;
    {
        const bool branch_taken_0x34b058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b058) {
            ctx->pc = 0x34B34Cu;
            return;
        }
    }
    ctx->pc = 0x34B060u;
    // 0x34b060: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x34b060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34b064: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b068: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34b068u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b06c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b070: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b074: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34b074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34b078: 0x24060810  addiu       $a2, $zero, 0x810
    ctx->pc = 0x34b078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2064));
    // 0x34b07c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34b07cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b080: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34b080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34b084: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34B084u;
    SET_GPR_U32(ctx, 31, 0x34B08Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34B084u, 0x34B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B08Cu;
label_34b08c:
    // 0x34b08c: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x34B08Cu;
    {
        const bool branch_taken_0x34b08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b08c) {
            ctx->pc = 0x34B34Cu;
            return;
        }
    }
    ctx->pc = 0x34B094u;
}
