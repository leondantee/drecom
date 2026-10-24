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

// Function: entry_00185d08
// Address: 0x185d08 - 0x185d8c
void entry_00185d08_0x185d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185d08_0x185d08");
#endif

    ctx->pc = 0x185d08u;

    // 0x185d08: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185d0c: 0xc4210284  lwc1        $f1, 0x284($at)
    ctx->pc = 0x185d0cu;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185d10: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185d14: 0xc42002d4  lwc1        $f0, 0x2D4($at)
    ctx->pc = 0x185d14u;
    { uint32_t bits = FAST_READ32(0x4802D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185d18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x185d18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185d1c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x185d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x185d20: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x185d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x185d24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185d28: 0x0  nop
    ctx->pc = 0x185d28u;
    // NOP
    // 0x185d2c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x185d2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x185d30: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185d34: 0xc4200284  lwc1        $f0, 0x284($at)
    ctx->pc = 0x185d34u;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185d38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x185d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x185d3c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185d40: 0xe42002c4  swc1        $f0, 0x2C4($at)
    ctx->pc = 0x185d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802C4u, _value); } while (0); }
    // 0x185d44: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185d48: 0xc42202c4  lwc1        $f2, 0x2C4($at)
    ctx->pc = 0x185d48u;
    { uint32_t bits = FAST_READ32(0x4802C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x185d4c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x185d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x185d50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x185d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x185d54: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185d58: 0xc4200284  lwc1        $f0, 0x284($at)
    ctx->pc = 0x185d58u;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185d5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x185d5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x185d60: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x185d60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185d64: 0x0  nop
    ctx->pc = 0x185d64u;
    // NOP
    // 0x185d68: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x185D68u;
    {
        const bool branch_taken_0x185d68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185d68) {
            ctx->pc = 0x185D8Cu;
            return;
        }
    }
    ctx->pc = 0x185D70u;
    // 0x185d70: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x185d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x185d74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x185d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x185d78: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185d7c: 0xc4200284  lwc1        $f0, 0x284($at)
    ctx->pc = 0x185d7cu;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185d80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x185d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x185d84: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185d88: 0xe42002c4  swc1        $f0, 0x2C4($at)
    ctx->pc = 0x185d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802C4u, _value); } while (0); }
    ctx->pc = 0x185d8cu;
}
