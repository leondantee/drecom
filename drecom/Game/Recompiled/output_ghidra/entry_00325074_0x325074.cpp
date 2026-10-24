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

// Function: entry_00325074
// Address: 0x325074 - 0x3250d8
void entry_00325074_0x325074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00325074_0x325074");
#endif

    switch (ctx->pc) {
        case 0x3250c8u: goto label_3250c8;
        default: break;
    }

    ctx->pc = 0x325074u;

    // 0x325074: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325078: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x325078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x32507c: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x32507cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x325080: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325084: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x325084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325088: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x325088u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32508c: 0x3c0243d7  lui         $v0, 0x43D7
    ctx->pc = 0x32508cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17367 << 16));
    // 0x325090: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325094: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x325094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325098: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x325098u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32509c: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x32509cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x3250a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3250a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3250a4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x3250a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3250a8: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x3250a8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3250ac: 0x3c0242aa  lui         $v0, 0x42AA
    ctx->pc = 0x3250acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17066 << 16));
    // 0x3250b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3250b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3250b4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x3250b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3250b8: 0x46000bc2  mul.s       $f15, $f1, $f0
    ctx->pc = 0x3250b8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3250bc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x3250bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3250c0: 0xc0c91ec  jal         func_3247B0
    ctx->pc = 0x3250C0u;
    SET_GPR_U32(ctx, 31, 0x3250C8u);
    ctx->pc = 0x3247B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247B0u, 0x3250C0u, 0x3250C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3250C8u;
label_3250c8:
    // 0x3250c8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3250c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3250cc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x3250ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3250d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3250D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3250D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3250D8u;
}
