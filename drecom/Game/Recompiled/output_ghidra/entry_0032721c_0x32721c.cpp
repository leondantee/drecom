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

// Function: entry_0032721c
// Address: 0x32721c - 0x3272d0
void entry_0032721c_0x32721c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032721c_0x32721c");
#endif

    switch (ctx->pc) {
        case 0x327260u: goto label_327260;
        case 0x32726cu: goto label_32726c;
        case 0x327278u: goto label_327278;
        default: break;
    }

    ctx->pc = 0x32721cu;

    // 0x32721c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x32721cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327220: 0x90620041  lbu         $v0, 0x41($v1)
    ctx->pc = 0x327220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 65)));
    // 0x327224: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x327224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x327228: 0xa0620041  sb          $v0, 0x41($v1)
    ctx->pc = 0x327228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x32722c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x32722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327230: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x327230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x327234: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x327234u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x327238: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x327238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32723c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x32723cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x327240: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x327240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327244: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x327244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x327248: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x327248u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32724c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x32724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327250: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x327250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x327254: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x327254u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x327258: 0xc067648  jal         func_19D920
    ctx->pc = 0x327258u;
    SET_GPR_U32(ctx, 31, 0x327260u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x327258u, 0x327260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327260u;
label_327260:
    // 0x327260: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x327260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x327264: 0xc067648  jal         func_19D920
    ctx->pc = 0x327264u;
    SET_GPR_U32(ctx, 31, 0x32726Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x327264u, 0x32726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32726Cu;
label_32726c:
    // 0x32726c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x32726cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x327270: 0xc067648  jal         func_19D920
    ctx->pc = 0x327270u;
    SET_GPR_U32(ctx, 31, 0x327278u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x327270u, 0x327278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327278u;
label_327278:
    // 0x327278: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x327278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x32727c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x32727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327280: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x327280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327284: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x327284u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x327288: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x327288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32728c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x32728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327290: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x327290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x327294: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x327294u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x327298: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x327298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32729c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x32729cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3272a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3272a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3272a4: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x3272a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3272a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3272a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3272ac: 0xc4400238  lwc1        $f0, 0x238($v0)
    ctx->pc = 0x3272acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3272b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3272b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3272b4: 0x0  nop
    ctx->pc = 0x3272b4u;
    // NOP
    // 0x3272b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3272B8u;
    {
        const bool branch_taken_0x3272b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3272b8) {
            ctx->pc = 0x3272D0u;
            return;
        }
    }
    ctx->pc = 0x3272C0u;
    // 0x3272c0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3272c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3272c4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3272c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3272c8: 0xc0675b8  jal         func_19D6E0
    ctx->pc = 0x3272C8u;
    SET_GPR_U32(ctx, 31, 0x3272D0u);
    ctx->pc = 0x19D6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6E0u, 0x3272C8u, 0x3272D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3272D0u;
}
