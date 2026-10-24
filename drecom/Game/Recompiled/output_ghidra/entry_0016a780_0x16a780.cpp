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

// Function: entry_0016a780
// Address: 0x16a780 - 0x16a7d4
void entry_0016a780_0x16a780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a780_0x16a780");
#endif

    switch (ctx->pc) {
        case 0x16a7b4u: goto label_16a7b4;
        case 0x16a7ccu: goto label_16a7cc;
        default: break;
    }

    ctx->pc = 0x16a780u;

    // 0x16a780: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x16a780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a784: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16a784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16a788: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16a788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a78c: 0x0  nop
    ctx->pc = 0x16a78cu;
    // NOP
    // 0x16a790: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16a790u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a794: 0x0  nop
    ctx->pc = 0x16a794u;
    // NOP
    // 0x16a798: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x16A798u;
    {
        const bool branch_taken_0x16a798 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a798) {
            ctx->pc = 0x16A7D4u;
            return;
        }
    }
    ctx->pc = 0x16A7A0u;
    // 0x16a7a0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16a7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16a7a4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16a7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16a7a8: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x16a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16a7ac: 0xc040c8c  jal         func_103230
    ctx->pc = 0x16A7ACu;
    SET_GPR_U32(ctx, 31, 0x16A7B4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x16A7B4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A7B4u) { return; }
    ctx->pc = 0x16A7B4u;
label_16a7b4:
    // 0x16a7b4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x16a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a7b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16a7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16a7bc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x16a7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16a7c0: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x16a7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16a7c4: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x16A7C4u;
    SET_GPR_U32(ctx, 31, 0x16A7CCu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x16A7CCu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A7CCu) { return; }
    ctx->pc = 0x16A7CCu;
label_16a7cc:
    // 0x16a7cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16A7CCu;
    {
        const bool branch_taken_0x16a7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a7cc) {
            ctx->pc = 0x16A7E4u;
            return;
        }
    }
    ctx->pc = 0x16A7D4u;
}
