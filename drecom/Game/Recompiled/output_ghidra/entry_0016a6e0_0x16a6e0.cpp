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

// Function: entry_0016a6e0
// Address: 0x16a6e0 - 0x16a734
void entry_0016a6e0_0x16a6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a6e0_0x16a6e0");
#endif

    switch (ctx->pc) {
        case 0x16a714u: goto label_16a714;
        case 0x16a72cu: goto label_16a72c;
        default: break;
    }

    ctx->pc = 0x16a6e0u;

    // 0x16a6e0: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x16a6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a6e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16a6e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16a6e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a6ec: 0x0  nop
    ctx->pc = 0x16a6ecu;
    // NOP
    // 0x16a6f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16a6f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a6f4: 0x0  nop
    ctx->pc = 0x16a6f4u;
    // NOP
    // 0x16a6f8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x16A6F8u;
    {
        const bool branch_taken_0x16a6f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a6f8) {
            ctx->pc = 0x16A734u;
            return;
        }
    }
    ctx->pc = 0x16A700u;
    // 0x16a700: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16a700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16a704: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x16a704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16a708: 0xc7ac00b4  lwc1        $f12, 0xB4($sp)
    ctx->pc = 0x16a708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16a70c: 0xc040c8c  jal         func_103230
    ctx->pc = 0x16A70Cu;
    SET_GPR_U32(ctx, 31, 0x16A714u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x16A714u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A714u) { return; }
    ctx->pc = 0x16A714u;
label_16a714:
    // 0x16a714: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x16a714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a718: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16a718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16a71c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x16a71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16a720: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x16a720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x16a724: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x16A724u;
    SET_GPR_U32(ctx, 31, 0x16A72Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x16A72Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A72Cu) { return; }
    ctx->pc = 0x16A72Cu;
label_16a72c:
    // 0x16a72c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16A72Cu;
    {
        const bool branch_taken_0x16a72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a72c) {
            ctx->pc = 0x16A748u;
            return;
        }
    }
    ctx->pc = 0x16A734u;
}
