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

// Function: entry_001f3564
// Address: 0x1f3564 - 0x1f35b4
void entry_001f3564_0x1f3564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3564_0x1f3564");
#endif

    switch (ctx->pc) {
        case 0x1f3598u: goto label_1f3598;
        default: break;
    }

    ctx->pc = 0x1f3564u;

    // 0x1f3564: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1f3564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3568: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x1f3568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x1f356c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1f356cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1f3570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3574: 0x0  nop
    ctx->pc = 0x1f3574u;
    // NOP
    // 0x1f3578: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f3578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f357c: 0x0  nop
    ctx->pc = 0x1f357cu;
    // NOP
    // 0x1f3580: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1F3580u;
    {
        const bool branch_taken_0x1f3580 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3580) {
            ctx->pc = 0x1F35B4u;
            return;
        }
    }
    ctx->pc = 0x1F3588u;
    // 0x1f3588: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f3588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f358c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f358cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f3590: 0xc040c24  jal         func_103090
    ctx->pc = 0x1F3590u;
    SET_GPR_U32(ctx, 31, 0x1F3598u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1F3598u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F3598u) { return; }
    ctx->pc = 0x1F3598u;
label_1f3598:
    // 0x1f3598: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f359c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f359cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f35a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f35a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f35a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f35a8: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f35a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f35ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f35acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f35b0: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f35b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    ctx->pc = 0x1f35b4u;
}
