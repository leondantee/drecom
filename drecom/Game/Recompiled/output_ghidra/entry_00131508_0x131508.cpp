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

// Function: entry_00131508
// Address: 0x131508 - 0x1315a8
void entry_00131508_0x131508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131508_0x131508");
#endif

    switch (ctx->pc) {
        case 0x131518u: goto label_131518;
        case 0x131524u: goto label_131524;
        case 0x131534u: goto label_131534;
        case 0x13154cu: goto label_13154c;
        default: break;
    }

    ctx->pc = 0x131508u;

    // 0x131508: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13150c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13150cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131510: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x131510u;
    SET_GPR_U32(ctx, 31, 0x131518u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x131510u, 0x131518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131518u;
label_131518:
    // 0x131518: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13151c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x13151Cu;
    SET_GPR_U32(ctx, 31, 0x131524u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x13151Cu, 0x131524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131524u;
label_131524:
    // 0x131524: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131528: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x131528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13152c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x13152Cu;
    SET_GPR_U32(ctx, 31, 0x131534u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x13152Cu, 0x131534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131534u;
label_131534:
    // 0x131534: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131538: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13153c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x13153cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x131540: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x131540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x131544: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x131544u;
    SET_GPR_U32(ctx, 31, 0x13154Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x131544u, 0x13154Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13154Cu;
label_13154c:
    // 0x13154c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x13154cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x131550: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131554: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x131554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131558: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13155c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x13155cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131560: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x131560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x131564: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x131564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x131568: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13156c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x13156cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131570: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131574: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x131574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131578: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x131578u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13157c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x13157cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x131580: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131584: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x131584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131588: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x131588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13158c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13158cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131590: 0x0  nop
    ctx->pc = 0x131590u;
    // NOP
    // 0x131594: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x131594u;
    {
        const bool branch_taken_0x131594 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131594) {
            ctx->pc = 0x1315A8u;
            return;
        }
    }
    ctx->pc = 0x13159Cu;
    // 0x13159c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x13159cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1315a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1315a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1315a4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1315a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x1315a8u;
}
