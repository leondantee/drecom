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

// Function: entry_001318f8
// Address: 0x1318f8 - 0x131998
void entry_001318f8_0x1318f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001318f8_0x1318f8");
#endif

    switch (ctx->pc) {
        case 0x131908u: goto label_131908;
        case 0x131914u: goto label_131914;
        case 0x131924u: goto label_131924;
        case 0x13193cu: goto label_13193c;
        default: break;
    }

    ctx->pc = 0x1318f8u;

    // 0x1318f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1318f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1318fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1318fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131900: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x131900u;
    SET_GPR_U32(ctx, 31, 0x131908u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x131900u, 0x131908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131908u;
label_131908:
    // 0x131908: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13190c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x13190Cu;
    SET_GPR_U32(ctx, 31, 0x131914u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x13190Cu, 0x131914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131914u;
label_131914:
    // 0x131914: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131918: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x131918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13191c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x13191Cu;
    SET_GPR_U32(ctx, 31, 0x131924u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x13191Cu, 0x131924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131924u;
label_131924:
    // 0x131924: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131928: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13192c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x13192cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x131930: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x131930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x131934: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x131934u;
    SET_GPR_U32(ctx, 31, 0x13193Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x131934u, 0x13193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13193Cu;
label_13193c:
    // 0x13193c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x13193cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x131940: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131944: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x131944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131948: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13194c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x13194cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131950: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x131950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x131954: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x131954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x131958: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13195c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x13195cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131960: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131964: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x131964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131968: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x131968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13196c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x13196cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x131970: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131974: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x131974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131978: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x131978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13197c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13197cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131980: 0x0  nop
    ctx->pc = 0x131980u;
    // NOP
    // 0x131984: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x131984u;
    {
        const bool branch_taken_0x131984 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131984) {
            ctx->pc = 0x131998u;
            return;
        }
    }
    ctx->pc = 0x13198Cu;
    // 0x13198c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x13198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131990: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131994: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x131994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x131998u;
}
