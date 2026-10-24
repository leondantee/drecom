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

// Function: entry_0026fb30
// Address: 0x26fb30 - 0x26fbc4
void entry_0026fb30_0x26fb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026fb30_0x26fb30");
#endif

    switch (ctx->pc) {
        case 0x26fb58u: goto label_26fb58;
        case 0x26fb68u: goto label_26fb68;
        case 0x26fb74u: goto label_26fb74;
        default: break;
    }

    ctx->pc = 0x26fb30u;

    // 0x26fb30: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x26fb30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fb34: 0x910209da  lbu         $v0, 0x9DA($t0)
    ctx->pc = 0x26fb34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2522)));
    // 0x26fb38: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26fb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26fb3c: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x26fb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x26fb40: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26FB40u;
    {
        const bool branch_taken_0x26fb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fb40) {
            ctx->pc = 0x26FBE4u;
            return;
        }
    }
    ctx->pc = 0x26FB48u;
    // 0x26fb48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fb4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26fb4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26fb50: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26FB50u;
    SET_GPR_U32(ctx, 31, 0x26FB58u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26FB50u, 0x26FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB58u;
label_26fb58:
    // 0x26fb58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fb5c: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x26fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x26fb60: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26FB60u;
    SET_GPR_U32(ctx, 31, 0x26FB68u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26FB60u, 0x26FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB68u;
label_26fb68:
    // 0x26fb68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fb6c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x26FB6Cu;
    SET_GPR_U32(ctx, 31, 0x26FB74u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26FB6Cu, 0x26FB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB74u;
label_26fb74:
    // 0x26fb74: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fb78: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x26fb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fb7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26fb7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fb80: 0x0  nop
    ctx->pc = 0x26fb80u;
    // NOP
    // 0x26fb84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26fb84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fb88: 0x0  nop
    ctx->pc = 0x26fb88u;
    // NOP
    // 0x26fb8c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x26FB8Cu;
    {
        const bool branch_taken_0x26fb8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26fb8c) {
            ctx->pc = 0x26FBC4u;
            return;
        }
    }
    ctx->pc = 0x26FB94u;
    // 0x26fb94: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fb98: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x26fb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fb9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fba0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x26fba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fba4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26fba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26fba8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x26fba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x26fbac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fbb0: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x26fbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fbb4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fbb8: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x26fbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fbbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26fbbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26fbc0: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x26fbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    ctx->pc = 0x26fbc4u;
}
