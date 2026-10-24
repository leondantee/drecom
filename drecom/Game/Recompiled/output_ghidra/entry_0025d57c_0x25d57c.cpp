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

// Function: entry_0025d57c
// Address: 0x25d57c - 0x25d5f8
void entry_0025d57c_0x25d57c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d57c_0x25d57c");
#endif

    switch (ctx->pc) {
        case 0x25d5a4u: goto label_25d5a4;
        default: break;
    }

    ctx->pc = 0x25d57cu;

    // 0x25d57c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x25d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x25d580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d584: 0x0  nop
    ctx->pc = 0x25d584u;
    // NOP
    // 0x25d588: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25d588u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25d58c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x25d58cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25d590: 0xe60009d0  swc1        $f0, 0x9D0($s0)
    ctx->pc = 0x25d590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2512), bits); }
    // 0x25d594: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x25d594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x25d598: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x25d598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x25d59c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25D59Cu;
    SET_GPR_U32(ctx, 31, 0x25D5A4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25D5A4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D5A4u) { return; }
    ctx->pc = 0x25D5A4u;
label_25d5a4:
    // 0x25d5a4: 0xc60009d0  lwc1        $f0, 0x9D0($s0)
    ctx->pc = 0x25d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d5a8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x25d5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x25d5ac: 0xc60009d4  lwc1        $f0, 0x9D4($s0)
    ctx->pc = 0x25d5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d5b0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x25d5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x25d5b4: 0x960209e0  lhu         $v0, 0x9E0($s0)
    ctx->pc = 0x25d5b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25d5b8: 0xa7a200d8  sh          $v0, 0xD8($sp)
    ctx->pc = 0x25d5b8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 216), (uint16_t)GPR_U32(ctx, 2));
    // 0x25d5bc: 0x92040012  lbu         $a0, 0x12($s0)
    ctx->pc = 0x25d5bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x25d5c0: 0xa3a400f0  sb          $a0, 0xF0($sp)
    ctx->pc = 0x25d5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 4));
    // 0x25d5c4: 0x8fa50228  lw          $a1, 0x228($sp)
    ctx->pc = 0x25d5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x25d5c8: 0x30a60001  andi        $a2, $a1, 0x1
    ctx->pc = 0x25d5c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x25d5cc: 0x10c00033  beqz        $a2, . + 4 + (0x33 << 2)
    ctx->pc = 0x25D5CCu;
    {
        const bool branch_taken_0x25d5cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d5cc) {
            ctx->pc = 0x25D69Cu;
            return;
        }
    }
    ctx->pc = 0x25D5D4u;
    // 0x25d5d4: 0x8e021098  lw          $v0, 0x1098($s0)
    ctx->pc = 0x25d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4248)));
    // 0x25d5d8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x25d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x25d5dc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D5DCu;
    {
        const bool branch_taken_0x25d5dc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25d5dc) {
            ctx->pc = 0x25D5F8u;
            return;
        }
    }
    ctx->pc = 0x25D5E4u;
    // 0x25d5e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d5e8: 0x0  nop
    ctx->pc = 0x25d5e8u;
    // NOP
    // 0x25d5ec: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25d5ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25d5f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25D5F0u;
    {
        const bool branch_taken_0x25d5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d5f0) {
            ctx->pc = 0x25D614u;
            return;
        }
    }
    ctx->pc = 0x25D5F8u;
}
