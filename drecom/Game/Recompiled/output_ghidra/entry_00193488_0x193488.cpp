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

// Function: entry_00193488
// Address: 0x193488 - 0x1934f0
void entry_00193488_0x193488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193488_0x193488");
#endif

    switch (ctx->pc) {
        case 0x1934acu: goto label_1934ac;
        default: break;
    }

    ctx->pc = 0x193488u;

    // 0x193488: 0xc6c10338  lwc1        $f1, 0x338($s6)
    ctx->pc = 0x193488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19348c: 0xc7c001b4  lwc1        $f0, 0x1B4($fp)
    ctx->pc = 0x19348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193490: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x193490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x193494: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x193494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x193498: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x193498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x19349c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x19349cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1934a0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1934a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1934a4: 0xc040c60  jal         func_103180
    ctx->pc = 0x1934A4u;
    SET_GPR_U32(ctx, 31, 0x1934ACu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x1934ACu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1934ACu) { return; }
    ctx->pc = 0x1934ACu;
label_1934ac:
    // 0x1934ac: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1934acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1934b0: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x1934b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x1934b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1934b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1934b8: 0x0  nop
    ctx->pc = 0x1934b8u;
    // NOP
    // 0x1934bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1934bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1934c0: 0x0  nop
    ctx->pc = 0x1934c0u;
    // NOP
    // 0x1934c4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1934C4u;
    {
        const bool branch_taken_0x1934c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1934c4) {
            ctx->pc = 0x1934F0u;
            return;
        }
    }
    ctx->pc = 0x1934CCu;
    // 0x1934cc: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1934ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1934d0: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1934d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x1934d4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1934d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1934d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1934d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1934dc: 0x0  nop
    ctx->pc = 0x1934dcu;
    // NOP
    // 0x1934e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1934e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1934e4: 0x0  nop
    ctx->pc = 0x1934e4u;
    // NOP
    // 0x1934e8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1934E8u;
    {
        const bool branch_taken_0x1934e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1934e8) {
            ctx->pc = 0x1934F8u;
            return;
        }
    }
    ctx->pc = 0x1934F0u;
}
