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

// Function: entry_001937f8
// Address: 0x1937f8 - 0x193860
void entry_001937f8_0x1937f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001937f8_0x1937f8");
#endif

    switch (ctx->pc) {
        case 0x19381cu: goto label_19381c;
        default: break;
    }

    ctx->pc = 0x1937f8u;

    // 0x1937f8: 0xc6c10338  lwc1        $f1, 0x338($s6)
    ctx->pc = 0x1937f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1937fc: 0xc7c001b4  lwc1        $f0, 0x1B4($fp)
    ctx->pc = 0x1937fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193800: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x193800u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x193804: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x193804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x193808: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x193808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x19380c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x19380cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193810: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x193810u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x193814: 0xc040c60  jal         func_103180
    ctx->pc = 0x193814u;
    SET_GPR_U32(ctx, 31, 0x19381Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x19381Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19381Cu) { return; }
    ctx->pc = 0x19381Cu;
label_19381c:
    // 0x19381c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x19381cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193820: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x193820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x193824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193828: 0x0  nop
    ctx->pc = 0x193828u;
    // NOP
    // 0x19382c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19382cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193830: 0x0  nop
    ctx->pc = 0x193830u;
    // NOP
    // 0x193834: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x193834u;
    {
        const bool branch_taken_0x193834 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193834) {
            ctx->pc = 0x193860u;
            return;
        }
    }
    ctx->pc = 0x19383Cu;
    // 0x19383c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x19383cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193840: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x193840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x193844: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x193844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x193848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19384c: 0x0  nop
    ctx->pc = 0x19384cu;
    // NOP
    // 0x193850: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x193850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193854: 0x0  nop
    ctx->pc = 0x193854u;
    // NOP
    // 0x193858: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x193858u;
    {
        const bool branch_taken_0x193858 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193858) {
            ctx->pc = 0x193868u;
            return;
        }
    }
    ctx->pc = 0x193860u;
}
