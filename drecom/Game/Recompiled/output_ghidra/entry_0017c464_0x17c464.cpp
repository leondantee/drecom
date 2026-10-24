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

// Function: entry_0017c464
// Address: 0x17c464 - 0x17c534
void entry_0017c464_0x17c464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c464_0x17c464");
#endif

    switch (ctx->pc) {
        case 0x17c498u: goto label_17c498;
        case 0x17c4c0u: goto label_17c4c0;
        case 0x17c4ccu: goto label_17c4cc;
        case 0x17c4f4u: goto label_17c4f4;
        case 0x17c528u: goto label_17c528;
        default: break;
    }

    ctx->pc = 0x17c464u;

    // 0x17c464: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x17c464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c468: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x17c468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c46c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x17c46cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c470: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x17c470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c474: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x17c474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c478: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c47c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x17c47cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17c480: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x17c480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c484: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x17c484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c488: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c48c: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x17c48cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x17c490: 0xc045630  jal         func_1158C0
    ctx->pc = 0x17C490u;
    SET_GPR_U32(ctx, 31, 0x17C498u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x17C490u, 0x17C498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C498u;
label_17c498:
    // 0x17c498: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x17c498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c49c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17c49cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c4a0: 0x0  nop
    ctx->pc = 0x17c4a0u;
    // NOP
    // 0x17c4a4: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x17C4A4u;
    {
        const bool branch_taken_0x17c4a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c4a4) {
            ctx->pc = 0x17C534u;
            return;
        }
    }
    ctx->pc = 0x17C4ACu;
    // 0x17c4ac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c4b0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17c4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17c4b4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17c4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c4b8: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C4B8u;
    SET_GPR_U32(ctx, 31, 0x17C4C0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C4C0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C4C0u) { return; }
    ctx->pc = 0x17C4C0u;
label_17c4c0:
    // 0x17c4c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c4c4: 0xc067588  jal         func_19D620
    ctx->pc = 0x17C4C4u;
    SET_GPR_U32(ctx, 31, 0x17C4CCu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x17C4C4u, 0x17C4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C4CCu;
label_17c4cc:
    // 0x17c4cc: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x17c4d0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x17c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c4d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c4d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c4d8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x17c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c4dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c4e0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17c4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c4e4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17c4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c4e8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17c4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c4ec: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C4ECu;
    SET_GPR_U32(ctx, 31, 0x17C4F4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C4F4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C4F4u) { return; }
    ctx->pc = 0x17C4F4u;
label_17c4f4:
    // 0x17c4f4: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x17c4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c4f8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x17c4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c4fc: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x17c4fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c500: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x17c500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c504: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x17c504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c508: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c50c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x17c50cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17c510: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x17c510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c514: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x17c514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c518: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c51c: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x17c51cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x17c520: 0xc045630  jal         func_1158C0
    ctx->pc = 0x17C520u;
    SET_GPR_U32(ctx, 31, 0x17C528u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x17C520u, 0x17C528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C528u;
label_17c528:
    // 0x17c528: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x17c528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x17c52c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17C52Cu;
    {
        const bool branch_taken_0x17c52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c52c) {
            ctx->pc = 0x17C564u;
            return;
        }
    }
    ctx->pc = 0x17C534u;
}
