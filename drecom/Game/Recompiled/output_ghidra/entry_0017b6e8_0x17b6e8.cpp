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

// Function: entry_0017b6e8
// Address: 0x17b6e8 - 0x17b768
void entry_0017b6e8_0x17b6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b6e8_0x17b6e8");
#endif

    switch (ctx->pc) {
        case 0x17b720u: goto label_17b720;
        default: break;
    }

    ctx->pc = 0x17b6e8u;

    // 0x17b6e8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x17b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x17b6ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17b6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x17b6f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17b6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17b6f4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x17b6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b6f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17b6f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17b6fc: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x17b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x17b700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b704: 0x0  nop
    ctx->pc = 0x17b704u;
    // NOP
    // 0x17b708: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x17b708u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17b70c: 0x0  nop
    ctx->pc = 0x17b70cu;
    // NOP
    // 0x17b710: 0x0  nop
    ctx->pc = 0x17b710u;
    // NOP
    // 0x17b714: 0x0  nop
    ctx->pc = 0x17b714u;
    // NOP
    // 0x17b718: 0xc0454c4  jal         func_115310
    ctx->pc = 0x17B718u;
    SET_GPR_U32(ctx, 31, 0x17B720u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x17B718u, 0x17B720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B720u;
label_17b720:
    // 0x17b720: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x17b720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b724: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17b724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17b728: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17b728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17b72c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17b730: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17b730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17b734: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x17b734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b738: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x17b738u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b73c: 0x0  nop
    ctx->pc = 0x17b73cu;
    // NOP
    // 0x17b740: 0x45010051  bc1t        . + 4 + (0x51 << 2)
    ctx->pc = 0x17B740u;
    {
        const bool branch_taken_0x17b740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b740) {
            ctx->pc = 0x17B888u;
            return;
        }
    }
    ctx->pc = 0x17B748u;
    // 0x17b748: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b74c: 0xc421ef10  lwc1        $f1, -0x10F0($at)
    ctx->pc = 0x17b74cu;
    { uint32_t bits = FAST_READ32(0x47EF10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b750: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x17b750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b754: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17b754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17b758: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b75c: 0xe420ef10  swc1        $f0, -0x10F0($at)
    ctx->pc = 0x17b75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47EF10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47EF10u, _value); } while (0); }
    // 0x17b760: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x17B760u;
    {
        const bool branch_taken_0x17b760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b760) {
            ctx->pc = 0x17B888u;
            return;
        }
    }
    ctx->pc = 0x17B768u;
}
