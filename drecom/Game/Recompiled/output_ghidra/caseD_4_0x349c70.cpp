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
// Address: 0x349c70 - 0x349da0
void caseD_4_0x349c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x349c70");
#endif

    switch (ctx->pc) {
        case 0x349c7cu: goto label_349c7c;
        case 0x349d04u: goto label_349d04;
        case 0x349d10u: goto label_349d10;
        case 0x349d70u: goto label_349d70;
        case 0x349d98u: goto label_349d98;
        default: break;
    }

    ctx->pc = 0x349c70u;

    // 0x349c70: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349c74: 0xc05cd10  jal         func_173440
    ctx->pc = 0x349C74u;
    SET_GPR_U32(ctx, 31, 0x349C7Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x349C74u, 0x349C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349C7Cu;
label_349c7c:
    // 0x349c7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349c80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x349c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349c84: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x349c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349c88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349c8c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x349c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349c90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x349c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x349c94: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x349c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x349c98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349c9c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x349c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349ca0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x349ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349ca4: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x349ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x349ca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x349ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349cac: 0x0  nop
    ctx->pc = 0x349cacu;
    // NOP
    // 0x349cb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x349cb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x349cb4: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x349cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x349cb8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349cbc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x349cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349cc0: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x349cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x349cc4: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x349cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x349cc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x349cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x349ccc: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x349cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349cd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x349cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x349cd4: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x349cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x349cd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349cdc: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x349cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x349ce0: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x349ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x349ce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x349ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x349ce8: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x349ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349cec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x349cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x349cf0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x349cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x349cf4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349cf8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x349cf8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x349cfc: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x349CFCu;
    SET_GPR_U32(ctx, 31, 0x349D04u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x349CFCu, 0x349D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D04u;
label_349d04:
    // 0x349d04: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349d08: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x349D08u;
    SET_GPR_U32(ctx, 31, 0x349D10u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x349D08u, 0x349D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D10u;
label_349d10:
    // 0x349d10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349d14: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x349d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x349d18: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x349d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349d1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349d20: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x349d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349d24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x349d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349d28: 0x0  nop
    ctx->pc = 0x349d28u;
    // NOP
    // 0x349d2c: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
    ctx->pc = 0x349D2Cu;
    {
        const bool branch_taken_0x349d2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x349d2c) {
            ctx->pc = 0x349DE4u;
            return;
        }
    }
    ctx->pc = 0x349D34u;
    // 0x349d34: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x349d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x349d38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349d3c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x349d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x349d40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349d44: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x349d44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x349d48: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349d4c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349d50: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x349d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x349d54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x349d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x349d58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x349d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x349d5c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x349d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x349d60: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x349d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x349d64: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x349d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x349d68: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x349D68u;
    SET_GPR_U32(ctx, 31, 0x349D70u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x349D68u, 0x349D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D70u;
label_349d70:
    // 0x349d70: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x349D70u;
    {
        const bool branch_taken_0x349d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x349d70) {
            ctx->pc = 0x349DA0u;
            return;
        }
    }
    ctx->pc = 0x349D78u;
    // 0x349d78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349d7c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349d80: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x349d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x349d84: 0x24060412  addiu       $a2, $zero, 0x412
    ctx->pc = 0x349d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x349d88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x349d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349d8c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x349d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x349d90: 0xc0965d0  jal         func_259740
    ctx->pc = 0x349D90u;
    SET_GPR_U32(ctx, 31, 0x349D98u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x349D90u, 0x349D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D98u;
label_349d98:
    // 0x349d98: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x349D98u;
    {
        const bool branch_taken_0x349d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349d98) {
            ctx->pc = 0x349DCCu;
            return;
        }
    }
    ctx->pc = 0x349DA0u;
}
