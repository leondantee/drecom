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

// Function: entry_00163710
// Address: 0x163710 - 0x163790
void entry_00163710_0x163710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163710_0x163710");
#endif

    ctx->pc = 0x163710u;

    // 0x163710: 0x3c02c3cf  lui         $v0, 0xC3CF
    ctx->pc = 0x163710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50127 << 16));
    // 0x163714: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163718: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x163718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16371c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16371cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x163720: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x163720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x163724: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x163724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163728: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x16372c: 0xc4204f38  lwc1        $f0, 0x4F38($at)
    ctx->pc = 0x16372cu;
    { uint32_t bits = FAST_READ32(0x3F4F38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163730: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163730u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163734: 0x0  nop
    ctx->pc = 0x163734u;
    // NOP
    // 0x163738: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x163738u;
    {
        const bool branch_taken_0x163738 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163738) {
            ctx->pc = 0x163790u;
            return;
        }
    }
    ctx->pc = 0x163740u;
    // 0x163740: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163744: 0xc4214f38  lwc1        $f1, 0x4F38($at)
    ctx->pc = 0x163744u;
    { uint32_t bits = FAST_READ32(0x3F4F38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163748: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x163748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x16374c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16374cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163750: 0x0  nop
    ctx->pc = 0x163750u;
    // NOP
    // 0x163754: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163758: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x16375c: 0xe4204f38  swc1        $f0, 0x4F38($at)
    ctx->pc = 0x16375cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F38u, _value); } while (0); }
    // 0x163760: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163764: 0xc4214f38  lwc1        $f1, 0x4F38($at)
    ctx->pc = 0x163764u;
    { uint32_t bits = FAST_READ32(0x3F4F38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163768: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x163768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16376c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16376cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163770: 0x0  nop
    ctx->pc = 0x163770u;
    // NOP
    // 0x163774: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x163774u;
    {
        const bool branch_taken_0x163774 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163774) {
            ctx->pc = 0x1637D8u;
            return;
        }
    }
    ctx->pc = 0x16377Cu;
    // 0x16377c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x16377cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163780: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163784: 0xe4204f38  swc1        $f0, 0x4F38($at)
    ctx->pc = 0x163784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F38u, _value); } while (0); }
    // 0x163788: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x163788u;
    {
        const bool branch_taken_0x163788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163788) {
            ctx->pc = 0x1637D8u;
            return;
        }
    }
    ctx->pc = 0x163790u;
}
