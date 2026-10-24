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

// Function: entry_00149794
// Address: 0x149794 - 0x149824
void entry_00149794_0x149794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149794_0x149794");
#endif

    switch (ctx->pc) {
        case 0x1497a0u: goto label_1497a0;
        case 0x1497d4u: goto label_1497d4;
        default: break;
    }

    ctx->pc = 0x149794u;

    // 0x149794: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x149794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149798: 0xc05cd10  jal         func_173440
    ctx->pc = 0x149798u;
    SET_GPR_U32(ctx, 31, 0x1497A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x149798u, 0x1497A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1497A0u;
label_1497a0:
    // 0x1497a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1497a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1497a4: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x1497a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1497a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1497a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1497ac: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1497acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1497b0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1497b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1497b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1497b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1497b8: 0xc4401b30  lwc1        $f0, 0x1B30($v0)
    ctx->pc = 0x1497b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1497bc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1497bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1497c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1497c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1497c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1497c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1497c8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1497c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1497cc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1497CCu;
    SET_GPR_U32(ctx, 31, 0x1497D4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1497CCu, 0x1497D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1497D4u;
label_1497d4:
    // 0x1497d4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1497d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1497d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1497d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1497dc: 0xc4411b30  lwc1        $f1, 0x1B30($v0)
    ctx->pc = 0x1497dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1497e0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1497e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1497e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1497e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1497e8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1497e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1497ec: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1497ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1497f0: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x1497f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x1497f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1497f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1497f8: 0x0  nop
    ctx->pc = 0x1497f8u;
    // NOP
    // 0x1497fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1497fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149800: 0x0  nop
    ctx->pc = 0x149800u;
    // NOP
    // 0x149804: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x149804u;
    {
        const bool branch_taken_0x149804 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x149804) {
            ctx->pc = 0x149824u;
            return;
        }
    }
    ctx->pc = 0x14980Cu;
    // 0x14980c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x14980cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149810: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x149810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149814: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x149814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149818: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14981c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x14981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149820: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x149820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x149824u;
}
