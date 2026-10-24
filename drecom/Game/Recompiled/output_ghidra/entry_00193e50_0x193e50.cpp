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

// Function: entry_00193e50
// Address: 0x193e50 - 0x193ec0
void entry_00193e50_0x193e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193e50_0x193e50");
#endif

    switch (ctx->pc) {
        case 0x193e7cu: goto label_193e7c;
        default: break;
    }

    ctx->pc = 0x193e50u;

    // 0x193e50: 0xc6c10338  lwc1        $f1, 0x338($s6)
    ctx->pc = 0x193e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193e54: 0xc7c001b4  lwc1        $f0, 0x1B4($fp)
    ctx->pc = 0x193e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193e58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x193e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x193e5c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x193e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x193e60: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x193e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x193e64: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x193e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x193e68: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x193e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193e6c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x193e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193e70: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x193e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x193e74: 0xc040c60  jal         func_103180
    ctx->pc = 0x193E74u;
    SET_GPR_U32(ctx, 31, 0x193E7Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x193E7Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x193E7Cu) { return; }
    ctx->pc = 0x193E7Cu;
label_193e7c:
    // 0x193e7c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x193e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193e80: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x193e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x193e84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193e88: 0x0  nop
    ctx->pc = 0x193e88u;
    // NOP
    // 0x193e8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x193e8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193e90: 0x0  nop
    ctx->pc = 0x193e90u;
    // NOP
    // 0x193e94: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x193E94u;
    {
        const bool branch_taken_0x193e94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193e94) {
            ctx->pc = 0x193EC0u;
            return;
        }
    }
    ctx->pc = 0x193E9Cu;
    // 0x193e9c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x193e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193ea0: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x193ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x193ea4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x193ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x193ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193eac: 0x0  nop
    ctx->pc = 0x193eacu;
    // NOP
    // 0x193eb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x193eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193eb4: 0x0  nop
    ctx->pc = 0x193eb4u;
    // NOP
    // 0x193eb8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x193EB8u;
    {
        const bool branch_taken_0x193eb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193eb8) {
            ctx->pc = 0x193EC8u;
            return;
        }
    }
    ctx->pc = 0x193EC0u;
}
