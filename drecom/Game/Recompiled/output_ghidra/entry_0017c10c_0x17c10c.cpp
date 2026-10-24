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

// Function: entry_0017c10c
// Address: 0x17c10c - 0x17c1a0
void entry_0017c10c_0x17c10c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c10c_0x17c10c");
#endif

    switch (ctx->pc) {
        case 0x17c140u: goto label_17c140;
        case 0x17c168u: goto label_17c168;
        case 0x17c174u: goto label_17c174;
        default: break;
    }

    ctx->pc = 0x17c10cu;

    // 0x17c10c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x17c10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c110: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x17c110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c114: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x17c114u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c118: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x17c118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c11c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x17c11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c120: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c120u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c124: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x17c124u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17c128: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x17c128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c12c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x17c12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c130: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c134: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x17c134u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x17c138: 0xc045630  jal         func_1158C0
    ctx->pc = 0x17C138u;
    SET_GPR_U32(ctx, 31, 0x17C140u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x17C138u, 0x17C140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C140u;
label_17c140:
    // 0x17c140: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x17c140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c144: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17c144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c148: 0x0  nop
    ctx->pc = 0x17c148u;
    // NOP
    // 0x17c14c: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x17C14Cu;
    {
        const bool branch_taken_0x17c14c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c14c) {
            ctx->pc = 0x17C1A0u;
            return;
        }
    }
    ctx->pc = 0x17C154u;
    // 0x17c154: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c158: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17c158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17c15c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17c15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c160: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C160u;
    SET_GPR_U32(ctx, 31, 0x17C168u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C168u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C168u) { return; }
    ctx->pc = 0x17C168u;
label_17c168:
    // 0x17c168: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c16c: 0xc067588  jal         func_19D620
    ctx->pc = 0x17C16Cu;
    SET_GPR_U32(ctx, 31, 0x17C174u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x17C16Cu, 0x17C174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C174u;
label_17c174:
    // 0x17c174: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x17c178: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x17c178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c17c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c17cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c180: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x17c180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c184: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c184u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c188: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x17c188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x17c18c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c190: 0x0  nop
    ctx->pc = 0x17c190u;
    // NOP
    // 0x17c194: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x17c194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x17c198: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17C198u;
    {
        const bool branch_taken_0x17c198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c198) {
            ctx->pc = 0x17C1E8u;
            return;
        }
    }
    ctx->pc = 0x17C1A0u;
}
