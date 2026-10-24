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

// Function: entry_0016e200
// Address: 0x16e200 - 0x16e250
void entry_0016e200_0x16e200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e200_0x16e200");
#endif

    switch (ctx->pc) {
        case 0x16e234u: goto label_16e234;
        case 0x16e248u: goto label_16e248;
        default: break;
    }

    ctx->pc = 0x16e200u;

    // 0x16e200: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x16e200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e204: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16e204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16e208: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16e208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e20c: 0x0  nop
    ctx->pc = 0x16e20cu;
    // NOP
    // 0x16e210: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e210u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e214: 0x0  nop
    ctx->pc = 0x16e214u;
    // NOP
    // 0x16e218: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x16E218u;
    {
        const bool branch_taken_0x16e218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e218) {
            ctx->pc = 0x16E250u;
            return;
        }
    }
    ctx->pc = 0x16E220u;
    // 0x16e220: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16e220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16e224: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x16e224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16e228: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x16e228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16e22c: 0xc040c8c  jal         func_103230
    ctx->pc = 0x16E22Cu;
    SET_GPR_U32(ctx, 31, 0x16E234u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x16E234u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16E234u) { return; }
    ctx->pc = 0x16E234u;
label_16e234:
    // 0x16e234: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16e234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16e238: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x16e238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16e23c: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x16e23cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16e240: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x16E240u;
    SET_GPR_U32(ctx, 31, 0x16E248u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x16E248u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16E248u) { return; }
    ctx->pc = 0x16E248u;
label_16e248:
    // 0x16e248: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16E248u;
    {
        const bool branch_taken_0x16e248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e248) {
            ctx->pc = 0x16E264u;
            return;
        }
    }
    ctx->pc = 0x16E250u;
}
