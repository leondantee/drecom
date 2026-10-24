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

// Function: entry_0021bcb0
// Address: 0x21bcb0 - 0x21bef0
void entry_0021bcb0_0x21bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021bcb0_0x21bcb0");
#endif

    switch (ctx->pc) {
        case 0x21bd0cu: goto label_21bd0c;
        case 0x21bd30u: goto label_21bd30;
        case 0x21bd54u: goto label_21bd54;
        case 0x21bd78u: goto label_21bd78;
        case 0x21bdb4u: goto label_21bdb4;
        case 0x21bde8u: goto label_21bde8;
        case 0x21beb0u: goto label_21beb0;
        case 0x21bed4u: goto label_21bed4;
        default: break;
    }

    ctx->pc = 0x21bcb0u;

    // 0x21bcb0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21bcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21bcb4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21bcb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21bcb8: 0x1203008d  beq         $s0, $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x21BCB8u;
    {
        const bool branch_taken_0x21bcb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21bcb8) {
            ctx->pc = 0x21BEF0u;
            return;
        }
    }
    ctx->pc = 0x21BCC0u;
    // 0x21bcc0: 0x3c0242f1  lui         $v0, 0x42F1
    ctx->pc = 0x21bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17137 << 16));
    // 0x21bcc4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21bcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21bcc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bcc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bccc: 0x0  nop
    ctx->pc = 0x21bcccu;
    // NOP
    // 0x21bcd0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21bcd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21bcd4: 0x3c0242f1  lui         $v0, 0x42F1
    ctx->pc = 0x21bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17137 << 16));
    // 0x21bcd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bcd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bcdc: 0x0  nop
    ctx->pc = 0x21bcdcu;
    // NOP
    // 0x21bce0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21bce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21bce4: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x21bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x21bce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bcec: 0x0  nop
    ctx->pc = 0x21bcecu;
    // NOP
    // 0x21bcf0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21bcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21bcf4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x21bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x21bcf8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21bcf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21bcfc: 0x0  nop
    ctx->pc = 0x21bcfcu;
    // NOP
    // 0x21bd00: 0xe60c009c  swc1        $f12, 0x9C($s0)
    ctx->pc = 0x21bd00u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21bd04: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BD04u;
    SET_GPR_U32(ctx, 31, 0x21BD0Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BD04u, 0x21BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BD0Cu;
label_21bd0c:
    // 0x21bd0c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21bd10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21bd10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bd14: 0x0  nop
    ctx->pc = 0x21bd14u;
    // NOP
    // 0x21bd18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21bd18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21bd1c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x21bd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21bd20: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x21bd20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21bd24: 0xe60c0090  swc1        $f12, 0x90($s0)
    ctx->pc = 0x21bd24u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21bd28: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BD28u;
    SET_GPR_U32(ctx, 31, 0x21BD30u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BD28u, 0x21BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BD30u;
label_21bd30:
    // 0x21bd30: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21bd34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21bd34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bd38: 0x0  nop
    ctx->pc = 0x21bd38u;
    // NOP
    // 0x21bd3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21bd3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21bd40: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x21bd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21bd44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21bd44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21bd48: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21bd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21bd4c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BD4Cu;
    SET_GPR_U32(ctx, 31, 0x21BD54u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BD4Cu, 0x21BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BD54u;
label_21bd54:
    // 0x21bd54: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21bd58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21bd58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bd5c: 0x0  nop
    ctx->pc = 0x21bd5cu;
    // NOP
    // 0x21bd60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21bd60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21bd64: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x21bd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21bd68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21bd68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21bd6c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21bd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21bd70: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BD70u;
    SET_GPR_U32(ctx, 31, 0x21BD78u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BD70u, 0x21BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BD78u;
label_21bd78:
    // 0x21bd78: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x21bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x21bd7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21bd7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bd80: 0x0  nop
    ctx->pc = 0x21bd80u;
    // NOP
    // 0x21bd84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21bd84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21bd88: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x21bd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21bd8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21bd8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21bd90: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21bd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21bd94: 0x3c023f74  lui         $v0, 0x3F74
    ctx->pc = 0x21bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16244 << 16));
    // 0x21bd98: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x21bd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x21bd9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bd9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bda0: 0x0  nop
    ctx->pc = 0x21bda0u;
    // NOP
    // 0x21bda4: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x21bda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x21bda8: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21bda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21bdac: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x21BDACu;
    SET_GPR_U32(ctx, 31, 0x21BDB4u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x21BDACu, 0x21BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BDB4u;
label_21bdb4:
    // 0x21bdb4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x21bdb4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x21bdb8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x21bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x21bdbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bdbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bdc0: 0x0  nop
    ctx->pc = 0x21bdc0u;
    // NOP
    // 0x21bdc4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x21bdc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21bdc8: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x21bdc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x21bdcc: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x21bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x21bdd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bdd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bdd4: 0x0  nop
    ctx->pc = 0x21bdd4u;
    // NOP
    // 0x21bdd8: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x21bdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x21bddc: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21bddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21bde0: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21BDE0u;
    SET_GPR_U32(ctx, 31, 0x21BDE8u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21BDE0u, 0x21BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BDE8u;
label_21bde8:
    // 0x21bde8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x21bde8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x21bdec: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x21bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x21bdf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bdf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bdf4: 0x0  nop
    ctx->pc = 0x21bdf4u;
    // NOP
    // 0x21bdf8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x21bdf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21bdfc: 0xe6010058  swc1        $f1, 0x58($s0)
    ctx->pc = 0x21bdfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x21be00: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x21be00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x21be04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21be04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21be08: 0x0  nop
    ctx->pc = 0x21be08u;
    // NOP
    // 0x21be0c: 0xe6010060  swc1        $f1, 0x60($s0)
    ctx->pc = 0x21be0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x21be10: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x21be10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x21be14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21be14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21be18: 0x0  nop
    ctx->pc = 0x21be18u;
    // NOP
    // 0x21be1c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x21be1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x21be20: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x21be20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x21be24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21be24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21be28: 0x0  nop
    ctx->pc = 0x21be28u;
    // NOP
    // 0x21be2c: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x21be2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x21be30: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x21be30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x21be34: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x21be34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x21be38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21be38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21be3c: 0x0  nop
    ctx->pc = 0x21be3cu;
    // NOP
    // 0x21be40: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x21be40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x21be44: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x21be44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x21be48: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x21be48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x21be4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21be4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21be50: 0x0  nop
    ctx->pc = 0x21be50u;
    // NOP
    // 0x21be54: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x21be54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x21be58: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x21be58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
    // 0x21be5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21be5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21be60: 0x0  nop
    ctx->pc = 0x21be60u;
    // NOP
    // 0x21be64: 0xe6010084  swc1        $f1, 0x84($s0)
    ctx->pc = 0x21be64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x21be68: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x21be68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x21be6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21be6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21be70: 0x0  nop
    ctx->pc = 0x21be70u;
    // NOP
    // 0x21be74: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21be74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21be78: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x21be78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x21be7c: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x21be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x21be80: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x21be80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x21be84: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21be84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21be88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21be88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21be8c: 0x0  nop
    ctx->pc = 0x21be8cu;
    // NOP
    // 0x21be90: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x21be90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x21be94: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x21be94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x21be98: 0x34626666  ori         $v0, $v1, 0x6666
    ctx->pc = 0x21be98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x21be9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21be9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bea0: 0x0  nop
    ctx->pc = 0x21bea0u;
    // NOP
    // 0x21bea4: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x21bea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x21bea8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BEA8u;
    SET_GPR_U32(ctx, 31, 0x21BEB0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BEA8u, 0x21BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BEB0u;
label_21beb0:
    // 0x21beb0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x21beb0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x21beb4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x21beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x21beb8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x21beb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21bebc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21bebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bec0: 0x0  nop
    ctx->pc = 0x21bec0u;
    // NOP
    // 0x21bec4: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x21bec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21bec8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x21bec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x21becc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BECCu;
    SET_GPR_U32(ctx, 31, 0x21BED4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BECCu, 0x21BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BED4u;
label_21bed4:
    // 0x21bed4: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x21bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x21bed8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x21bed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21bedc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21bedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bee0: 0x0  nop
    ctx->pc = 0x21bee0u;
    // NOP
    // 0x21bee4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x21bee4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21bee8: 0xe60c0038  swc1        $f12, 0x38($s0)
    ctx->pc = 0x21bee8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x21beec: 0x0  nop
    ctx->pc = 0x21beecu;
    // NOP
    ctx->pc = 0x21bef0u;
}
