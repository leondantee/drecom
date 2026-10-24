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

// Function: entry_0019b564
// Address: 0x19b564 - 0x19b61c
void entry_0019b564_0x19b564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b564_0x19b564");
#endif

    switch (ctx->pc) {
        case 0x19b574u: goto label_19b574;
        case 0x19b594u: goto label_19b594;
        case 0x19b5a0u: goto label_19b5a0;
        case 0x19b5e8u: goto label_19b5e8;
        default: break;
    }

    ctx->pc = 0x19b564u;

    // 0x19b564: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b568: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19b568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b56c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x19B56Cu;
    SET_GPR_U32(ctx, 31, 0x19B574u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19B56Cu, 0x19B574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B574u;
label_19b574:
    // 0x19b574: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b578: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b57c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b580: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x19b580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x19b584: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x19b584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x19b588: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x19b588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b58c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x19B58Cu;
    SET_GPR_U32(ctx, 31, 0x19B594u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x19B594u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19B594u) { return; }
    ctx->pc = 0x19B594u;
label_19b594:
    // 0x19b594: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b598: 0xc05cd10  jal         func_173440
    ctx->pc = 0x19B598u;
    SET_GPR_U32(ctx, 31, 0x19B5A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x19B598u, 0x19B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B5A0u;
label_19b5a0:
    // 0x19b5a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b5a4: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x19b5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b5a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b5ac: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x19b5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b5b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19b5b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19b5b4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19b5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x19b5b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b5bc: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x19b5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b5c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b5c4: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x19b5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b5c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19b5c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19b5cc: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x19b5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x19b5d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b5d4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19b5d8: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x19b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19b5dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19b5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19b5e0: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x19B5E0u;
    SET_GPR_U32(ctx, 31, 0x19B5E8u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x19B5E0u, 0x19B5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B5E8u;
label_19b5e8:
    // 0x19b5e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b5ec: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19b5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b5f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19b5f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b5f4: 0x0  nop
    ctx->pc = 0x19b5f4u;
    // NOP
    // 0x19b5f8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x19B5F8u;
    {
        const bool branch_taken_0x19b5f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b5f8) {
            ctx->pc = 0x19B63Cu;
            return;
        }
    }
    ctx->pc = 0x19B600u;
    // 0x19b600: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b604: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x19b604u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x19b608: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B608u;
    {
        const bool branch_taken_0x19b608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b608) {
            ctx->pc = 0x19B61Cu;
            return;
        }
    }
    ctx->pc = 0x19B610u;
    // 0x19b610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b614: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b618: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x19b618u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x19b61cu;
}
