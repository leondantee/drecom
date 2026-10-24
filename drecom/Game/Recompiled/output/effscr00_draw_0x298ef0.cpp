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

// Function: effscr00_draw
// Address: 0x298ef0 - 0x299bb0
void effscr00_draw_0x298ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("effscr00_draw_0x298ef0");
#endif

    switch (ctx->pc) {
        case 0x298f1cu: goto label_298f1c;
        case 0x298f3cu: goto label_298f3c;
        case 0x299034u: goto label_299034;
        case 0x299068u: goto label_299068;
        case 0x29908cu: goto label_29908c;
        case 0x2990b4u: goto label_2990b4;
        case 0x2990c8u: goto label_2990c8;
        case 0x29939cu: goto label_29939c;
        case 0x2995f0u: goto label_2995f0;
        case 0x299604u: goto label_299604;
        case 0x2996e8u: goto label_2996e8;
        case 0x299700u: goto label_299700;
        case 0x2997e8u: goto label_2997e8;
        case 0x2998d0u: goto label_2998d0;
        case 0x2999b8u: goto label_2999b8;
        case 0x299aa8u: goto label_299aa8;
        case 0x299b4cu: goto label_299b4c;
        case 0x299b70u: goto label_299b70;
        default: break;
    }

    ctx->pc = 0x298ef0u;

    // 0x298ef0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x298ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x298ef4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x298ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x298ef8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x298ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x298efc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x298efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x298f00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x298f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x298f04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x298f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x298f08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x298f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x298f0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x298f10: 0xafa40138  sw          $a0, 0x138($sp)
    ctx->pc = 0x298f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 4));
    // 0x298f14: 0xc067654  jal         func_19D950
    ctx->pc = 0x298F14u;
    SET_GPR_U32(ctx, 31, 0x298F1Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x298F14u, 0x298F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F1Cu;
label_298f1c:
    // 0x298f1c: 0x3c053d4c  lui         $a1, 0x3D4C
    ctx->pc = 0x298f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15692 << 16));
    // 0x298f20: 0x34b0cccd  ori         $s0, $a1, 0xCCCD
    ctx->pc = 0x298f20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x298f24: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x298f24u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x298f28: 0x0  nop
    ctx->pc = 0x298f28u;
    // NOP
    // 0x298f2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x298f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x298f30: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x298f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x298f34: 0xc067654  jal         func_19D950
    ctx->pc = 0x298F34u;
    SET_GPR_U32(ctx, 31, 0x298F3Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x298F34u, 0x298F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F3Cu;
label_298f3c:
    // 0x298f3c: 0x3c103d4c  lui         $s0, 0x3D4C
    ctx->pc = 0x298f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15692 << 16));
    // 0x298f40: 0x3602cccd  ori         $v0, $s0, 0xCCCD
    ctx->pc = 0x298f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)52429);
    // 0x298f44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x298f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x298f48: 0x0  nop
    ctx->pc = 0x298f48u;
    // NOP
    // 0x298f4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x298f4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x298f50: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x298f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x298f54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x298f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x298f58: 0x8c340af0  lw          $s4, 0xAF0($at)
    ctx->pc = 0x298f58u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x298f5c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x298f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x298f60: 0x2455e550  addiu       $s5, $v0, -0x1AB0
    ctx->pc = 0x298f60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x298f64: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x298f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x298f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298f6c: 0x0  nop
    ctx->pc = 0x298f6cu;
    // NOP
    // 0x298f70: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x298f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x298f74: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x298f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x298f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298f7c: 0x0  nop
    ctx->pc = 0x298f7cu;
    // NOP
    // 0x298f80: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x298f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x298f84: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x298f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x298f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298f8c: 0x0  nop
    ctx->pc = 0x298f8cu;
    // NOP
    // 0x298f90: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x298f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x298f94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x298f94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298f98: 0x0  nop
    ctx->pc = 0x298f98u;
    // NOP
    // 0x298f9c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x298f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x298fa0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x298fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x298fa4: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x298fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x298fa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x298fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x298fac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x298FACu;
    {
        const bool branch_taken_0x298fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298fac) {
            ctx->pc = 0x298FDCu;
            goto label_298fdc;
        }
    }
    ctx->pc = 0x298FB4u;
    // 0x298fb4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x298fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x298fb8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x298fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x298fbc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x298fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x298fc0: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x298fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x298fc4: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x298fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x298fc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x298fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x298fcc: 0x8fb00138  lw          $s0, 0x138($sp)
    ctx->pc = 0x298fccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x298fd0: 0xfe020170  sd          $v0, 0x170($s0)
    ctx->pc = 0x298fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 368), GPR_U64(ctx, 2));
    // 0x298fd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x298FD4u;
    {
        const bool branch_taken_0x298fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298fd4) {
            ctx->pc = 0x298FF8u;
            goto label_298ff8;
        }
    }
    ctx->pc = 0x298FDCu;
label_298fdc:
    // 0x298fdc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x298fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x298fe0: 0x34450002  ori         $a1, $v0, 0x2
    ctx->pc = 0x298fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x298fe4: 0x5803c  dsll32      $s0, $a1, 0
    ctx->pc = 0x298fe4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 0));
    // 0x298fe8: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x298fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x298fec: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x298fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x298ff0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x298ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x298ff4: 0xfc430170  sd          $v1, 0x170($v0)
    ctx->pc = 0x298ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 368), GPR_U64(ctx, 3));
label_298ff8:
    // 0x298ff8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x298ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x298ffc: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x298ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x299000: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x299000u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299004: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x299004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x299008: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x299008u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x29900c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x29900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299010: 0x8c4201a4  lw          $v0, 0x1A4($v0)
    ctx->pc = 0x299010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
    // 0x299014: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x299014u;
    {
        const bool branch_taken_0x299014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299014) {
            ctx->pc = 0x2990A0u;
            goto label_2990a0;
        }
    }
    ctx->pc = 0x29901Cu;
    // 0x29901c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x29901cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299020: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x299020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299024: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x299024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x299028: 0x8c4501a4  lw          $a1, 0x1A4($v0)
    ctx->pc = 0x299028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
    // 0x29902c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x29902Cu;
    SET_GPR_U32(ctx, 31, 0x299034u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x299034u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299034u) { return; }
    ctx->pc = 0x299034u;
label_299034:
    // 0x299034: 0x8fb00138  lw          $s0, 0x138($sp)
    ctx->pc = 0x299034u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299038: 0x960201a8  lhu         $v0, 0x1A8($s0)
    ctx->pc = 0x299038u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x29903c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x29903cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x299040: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x299040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x299044: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x299044u;
    {
        const bool branch_taken_0x299044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299044) {
            ctx->pc = 0x299070u;
            goto label_299070;
        }
    }
    ctx->pc = 0x29904Cu;
    // 0x29904c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x29904cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299050: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x299050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299054: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x299054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x299058: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x299058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x29905c: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x29905cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x299060: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x299060u;
    SET_GPR_U32(ctx, 31, 0x299068u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x299060u, 0x299068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299068u;
label_299068:
    // 0x299068: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x299068u;
    {
        const bool branch_taken_0x299068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299068) {
            ctx->pc = 0x29908Cu;
            goto label_29908c;
        }
    }
    ctx->pc = 0x299070u;
label_299070:
    // 0x299070: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x299070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299074: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x299074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299078: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x299078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29907c: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x29907cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x299080: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x299080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x299084: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x299084u;
    SET_GPR_U32(ctx, 31, 0x29908Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29908Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29908Cu) { return; }
    ctx->pc = 0x29908Cu;
label_29908c:
    // 0x29908c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x29908cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x299090: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x299090u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299094: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x299094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299098: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x299098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x29909c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x29909cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2990a0:
    // 0x2990a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2990a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2990a4: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x2990a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2990a8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2990a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2990ac: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2990ACu;
    SET_GPR_U32(ctx, 31, 0x2990B4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2990B4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2990B4u) { return; }
    ctx->pc = 0x2990B4u;
label_2990b4:
    // 0x2990b4: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2990b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2990b8: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x2990b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2990bc: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x2990bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2990c0: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x2990C0u;
    SET_GPR_U32(ctx, 31, 0x2990C8u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x2990C0u, 0x2990C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2990C8u;
label_2990c8:
    // 0x2990c8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2990c8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2990cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2990ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2990d0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2990d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2990d4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2990D4u;
    {
        const bool branch_taken_0x2990d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2990d4) {
            ctx->pc = 0x2990E0u;
            goto label_2990e0;
        }
    }
    ctx->pc = 0x2990DCu;
    // 0x2990dc: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x2990dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2990e0:
    // 0x2990e0: 0x118982  srl         $s1, $s1, 6
    ctx->pc = 0x2990e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
    // 0x2990e4: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2990e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2990e8: 0x94a201a8  lhu         $v0, 0x1A8($a1)
    ctx->pc = 0x2990e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 424)));
    // 0x2990ec: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x2990ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2990f0: 0x32030010  andi        $v1, $s0, 0x10
    ctx->pc = 0x2990f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x2990f4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2990F4u;
    {
        const bool branch_taken_0x2990f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2990f4) {
            ctx->pc = 0x299110u;
            goto label_299110;
        }
    }
    ctx->pc = 0x2990FCu;
    // 0x2990fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2990fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299100: 0x8fb20138  lw          $s2, 0x138($sp)
    ctx->pc = 0x299100u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299104: 0xe64001d4  swc1        $f0, 0x1D4($s2)
    ctx->pc = 0x299104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 468), bits); }
    // 0x299108: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x299108u;
    {
        const bool branch_taken_0x299108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299108) {
            ctx->pc = 0x299150u;
            goto label_299150;
        }
    }
    ctx->pc = 0x299110u;
label_299110:
    // 0x299110: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x299110u;
    {
        const bool branch_taken_0x299110 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x299110) {
            ctx->pc = 0x29912Cu;
            goto label_29912c;
        }
    }
    ctx->pc = 0x299118u;
    // 0x299118: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x299118u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29911c: 0x0  nop
    ctx->pc = 0x29911cu;
    // NOP
    // 0x299120: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x299120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x299124: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x299124u;
    {
        const bool branch_taken_0x299124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299124) {
            ctx->pc = 0x299148u;
            goto label_299148;
        }
    }
    ctx->pc = 0x29912Cu;
label_29912c:
    // 0x29912c: 0x113042  srl         $a2, $s1, 1
    ctx->pc = 0x29912cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x299130: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x299130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x299134: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x299134u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x299138: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x299138u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29913c: 0x0  nop
    ctx->pc = 0x29913cu;
    // NOP
    // 0x299140: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x299140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x299144: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x299144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_299148:
    // 0x299148: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x299148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x29914c: 0xe4c001d4  swc1        $f0, 0x1D4($a2)
    ctx->pc = 0x29914cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 468), bits); }
label_299150:
    // 0x299150: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x299150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299154: 0x946801a8  lhu         $t0, 0x1A8($v1)
    ctx->pc = 0x299154u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 424)));
    // 0x299158: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x299158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x29915c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x29915cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x299160: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x299160u;
    {
        const bool branch_taken_0x299160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x299160) {
            ctx->pc = 0x2991B4u;
            goto label_2991b4;
        }
    }
    ctx->pc = 0x299168u;
    // 0x299168: 0x3c074220  lui         $a3, 0x4220
    ctx->pc = 0x299168u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16928 << 16));
    // 0x29916c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x29916cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299170: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x299170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299174: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x299174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299178: 0x0  nop
    ctx->pc = 0x299178u;
    // NOP
    // 0x29917c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x29917Cu;
    {
        const bool branch_taken_0x29917c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29917c) {
            ctx->pc = 0x2991A0u;
            goto label_2991a0;
        }
    }
    ctx->pc = 0x299184u;
    // 0x299184: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x299184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x299188: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x299188u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29918c: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x29918cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299190: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x299190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299194: 0x0  nop
    ctx->pc = 0x299194u;
    // NOP
    // 0x299198: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x299198u;
    {
        const bool branch_taken_0x299198 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x299198) {
            ctx->pc = 0x2991B4u;
            goto label_2991b4;
        }
    }
    ctx->pc = 0x2991A0u;
label_2991a0:
    // 0x2991a0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2991a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2991a4: 0xa06001c4  sb          $zero, 0x1C4($v1)
    ctx->pc = 0x2991a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 452), (uint8_t)GPR_U32(ctx, 0));
    // 0x2991a8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x2991a8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2991ac: 0x10000276  b           . + 4 + (0x276 << 2)
    ctx->pc = 0x2991ACu;
    {
        const bool branch_taken_0x2991ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2991ac) {
            ctx->pc = 0x299B88u;
            goto label_299b88;
        }
    }
    ctx->pc = 0x2991B4u;
label_2991b4:
    // 0x2991b4: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x2991b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x2991b8: 0x8c263580  lw          $a2, 0x3580($at)
    ctx->pc = 0x2991b8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x853580u));
    // 0x2991bc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2991bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2991c0: 0xac6601d0  sw          $a2, 0x1D0($v1)
    ctx->pc = 0x2991c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 6));
    // 0x2991c4: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x2991c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x2991c8: 0x8c303580  lw          $s0, 0x3580($at)
    ctx->pc = 0x2991c8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x853580u));
    // 0x2991cc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x2991ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x2991d0: 0x34630017  ori         $v1, $v1, 0x17
    ctx->pc = 0x2991d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23);
    // 0x2991d4: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x2991d4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2991d8: 0x26700008  addiu       $s0, $s3, 0x8
    ctx->pc = 0x2991d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2991dc: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x2991dcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x2991e0: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x2991e0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2991e4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x2991e4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2991e8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x2991e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2991ec: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x2991ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x2991f0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2991f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x2991f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2991f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2991f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2991f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2991fc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2991fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299200: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299200u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x299204: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x299204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299208: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299208u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x29920c: 0x3c060eee  lui         $a2, 0xEEE
    ctx->pc = 0x29920cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3822 << 16));
    // 0x299210: 0x34c3eeee  ori         $v1, $a2, 0xEEEE
    ctx->pc = 0x299210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)61166);
    // 0x299214: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x299214u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x299218: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x299218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x29921c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x29921cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x299220: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x299220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299224: 0xdc630160  ld          $v1, 0x160($v1)
    ctx->pc = 0x299224u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x299228: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299228u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29922c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x29922cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299230: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299230u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299234: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x299234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x299238: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299238u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29923c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x29923cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299240: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299240u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299248: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x299248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29924c: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x29924cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x299250: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x299250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x299254: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x299254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299258: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299258u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29925c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x29925cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299260: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299260u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299264: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x299264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x299268: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299268u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29926c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x29926cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299270: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299270u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299274: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x299274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x299278: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299278u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29927c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x29927cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299280: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299280u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299284: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x299284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x299288: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299288u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29928c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x29928cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299290: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299290u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299294: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x299294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299298: 0xdc430168  ld          $v1, 0x168($v0)
    ctx->pc = 0x299298u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x29929c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x29929cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2992a0: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x2992a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2992a4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2992a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2992a8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2992a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2992ac: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x2992acu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2992b0: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x2992b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2992b4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2992b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2992b8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2992b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2992bc: 0xdc430170  ld          $v1, 0x170($v0)
    ctx->pc = 0x2992bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 368)));
    // 0x2992c0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x2992c0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2992c4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x2992c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2992c8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2992c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2992cc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2992ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2992d0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x2992d0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2992d4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x2992d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2992d8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2992d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2992dc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2992dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2992e0: 0xdc430180  ld          $v1, 0x180($v0)
    ctx->pc = 0x2992e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x2992e4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x2992e4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2992e8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x2992e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2992ec: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2992ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2992f0: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x2992f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2992f4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x2992f4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2992f8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x2992f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2992fc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2992fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299300: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x299300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299304: 0xdc430178  ld          $v1, 0x178($v0)
    ctx->pc = 0x299304u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x299308: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299308u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29930c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x29930cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299310: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299310u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299314: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x299314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x299318: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299318u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29931c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x29931cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299320: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299320u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299324: 0x3c02e02e  lui         $v0, 0xE02E
    ctx->pc = 0x299324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57390 << 16));
    // 0x299328: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x299328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29932c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x29932cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x299330: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x299330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x299334: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x299334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299338: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299338u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29933c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x29933cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299340: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299340u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299344: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x299344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x299348: 0x34424242  ori         $v0, $v0, 0x4242
    ctx->pc = 0x299348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16962);
    // 0x29934c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x29934cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x299350: 0x3c024241  lui         $v0, 0x4241
    ctx->pc = 0x299350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16961 << 16));
    // 0x299354: 0x34422412  ori         $v0, $v0, 0x2412
    ctx->pc = 0x299354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9234);
    // 0x299358: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x299358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29935c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x29935cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x299360: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x299360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299364: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299364u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299368: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x299368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x29936c: 0x944201a8  lhu         $v0, 0x1A8($v0)
    ctx->pc = 0x29936cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 424)));
    // 0x299370: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x299370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x299374: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x299374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x299378: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x299378u;
    {
        const bool branch_taken_0x299378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299378) {
            ctx->pc = 0x2993A4u;
            goto label_2993a4;
        }
    }
    ctx->pc = 0x299380u;
    // 0x299380: 0xc68001b4  lwc1        $f0, 0x1B4($s4)
    ctx->pc = 0x299380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299384: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x299384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x299388: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x299388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x29938c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x29938cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x299390: 0xc7ac011c  lwc1        $f12, 0x11C($sp)
    ctx->pc = 0x299390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x299394: 0xc040c60  jal         func_103180
    ctx->pc = 0x299394u;
    SET_GPR_U32(ctx, 31, 0x29939Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29939Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29939Cu) { return; }
    ctx->pc = 0x29939Cu;
label_29939c:
    // 0x29939c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29939Cu;
    {
        const bool branch_taken_0x29939c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29939c) {
            ctx->pc = 0x2993B4u;
            goto label_2993b4;
        }
    }
    ctx->pc = 0x2993A4u;
label_2993a4:
    // 0x2993a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2993a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2993a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2993a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2993ac: 0x0  nop
    ctx->pc = 0x2993acu;
    // NOP
    // 0x2993b0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2993b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_2993b4:
    // 0x2993b4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2993b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2993b8: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x2993b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x2993bc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2993bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2993c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2993c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2993c4: 0x0  nop
    ctx->pc = 0x2993c4u;
    // NOP
    // 0x2993c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2993c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2993cc: 0x0  nop
    ctx->pc = 0x2993ccu;
    // NOP
    // 0x2993d0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2993D0u;
    {
        const bool branch_taken_0x2993d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2993d0) {
            ctx->pc = 0x2993F8u;
            goto label_2993f8;
        }
    }
    ctx->pc = 0x2993D8u;
    // 0x2993d8: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2993d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2993dc: 0x3c024516  lui         $v0, 0x4516
    ctx->pc = 0x2993dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17686 << 16));
    // 0x2993e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2993e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2993e4: 0x0  nop
    ctx->pc = 0x2993e4u;
    // NOP
    // 0x2993e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2993e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2993ec: 0x0  nop
    ctx->pc = 0x2993ecu;
    // NOP
    // 0x2993f0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2993F0u;
    {
        const bool branch_taken_0x2993f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2993f0) {
            ctx->pc = 0x29940Cu;
            goto label_29940c;
        }
    }
    ctx->pc = 0x2993F8u;
label_2993f8:
    // 0x2993f8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2993f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2993fc: 0xa04001c4  sb          $zero, 0x1C4($v0)
    ctx->pc = 0x2993fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 452), (uint8_t)GPR_U32(ctx, 0));
    // 0x299400: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x299400u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x299404: 0x100001e0  b           . + 4 + (0x1E0 << 2)
    ctx->pc = 0x299404u;
    {
        const bool branch_taken_0x299404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299404) {
            ctx->pc = 0x299B88u;
            goto label_299b88;
        }
    }
    ctx->pc = 0x29940Cu;
label_29940c:
    // 0x29940c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x29940cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299410: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x299410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x299414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299418: 0x0  nop
    ctx->pc = 0x299418u;
    // NOP
    // 0x29941c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29941cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299420: 0x0  nop
    ctx->pc = 0x299420u;
    // NOP
    // 0x299424: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x299424u;
    {
        const bool branch_taken_0x299424 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x299424) {
            ctx->pc = 0x299450u;
            goto label_299450;
        }
    }
    ctx->pc = 0x29942Cu;
    // 0x29942c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x29942cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299430: 0x3c02450f  lui         $v0, 0x450F
    ctx->pc = 0x299430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
    // 0x299434: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x299434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x299438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29943c: 0x0  nop
    ctx->pc = 0x29943cu;
    // NOP
    // 0x299440: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x299440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299444: 0x0  nop
    ctx->pc = 0x299444u;
    // NOP
    // 0x299448: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x299448u;
    {
        const bool branch_taken_0x299448 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x299448) {
            ctx->pc = 0x299464u;
            goto label_299464;
        }
    }
    ctx->pc = 0x299450u;
label_299450:
    // 0x299450: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x299450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299454: 0xa04001c4  sb          $zero, 0x1C4($v0)
    ctx->pc = 0x299454u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 452), (uint8_t)GPR_U32(ctx, 0));
    // 0x299458: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x299458u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29945c: 0x100001ca  b           . + 4 + (0x1CA << 2)
    ctx->pc = 0x29945Cu;
    {
        const bool branch_taken_0x29945c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29945c) {
            ctx->pc = 0x299B88u;
            goto label_299b88;
        }
    }
    ctx->pc = 0x299464u;
label_299464:
    // 0x299464: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x299464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299468: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x299468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x29946c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x29946cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x299470: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x299470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299474: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x299474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299478: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x299478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29947c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x29947cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x299480: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x299480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299484: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x299484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x299488: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x299488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x29948c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29948cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299490: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x299490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299494: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x299494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x299498: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x299498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x29949c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x29949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2994a0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2994a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2994a4: 0xc46101b4  lwc1        $f1, 0x1B4($v1)
    ctx->pc = 0x2994a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2994a8: 0xc44001b8  lwc1        $f0, 0x1B8($v0)
    ctx->pc = 0x2994a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2994ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2994acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2994b0: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2994b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2994b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2994b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2994b8: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x2994b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2994bc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2994bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2994c0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2994c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2994c4: 0xc46101b4  lwc1        $f1, 0x1B4($v1)
    ctx->pc = 0x2994c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2994c8: 0xc44001b8  lwc1        $f0, 0x1B8($v0)
    ctx->pc = 0x2994c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2994cc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2994ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2994d0: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2994d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2994d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2994d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2994d8: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x2994d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2994dc: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x2994dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2994e0: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2994e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2994e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2994e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2994e8: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x2994e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2994ec: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x2994ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2994f0: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2994f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2994f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2994f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2994f8: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x2994f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2994fc: 0x3c023f60  lui         $v0, 0x3F60
    ctx->pc = 0x2994fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16224 << 16));
    // 0x299500: 0x3442e0e1  ori         $v0, $v0, 0xE0E1
    ctx->pc = 0x299500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57569);
    // 0x299504: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x299504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299508: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x299508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29950c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29950cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x299510: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x299510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x299514: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x299514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x299518: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x299518u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29951c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x29951cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x299520: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x299520u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x299524: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x299524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x299528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29952c: 0x0  nop
    ctx->pc = 0x29952cu;
    // NOP
    // 0x299530: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x299530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x299534: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x299534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x299538: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x299538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29953c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x29953cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299540: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x299544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299548: 0x0  nop
    ctx->pc = 0x299548u;
    // NOP
    // 0x29954c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29954cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299550: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299550u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299554: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x299554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x299558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29955c: 0x0  nop
    ctx->pc = 0x29955cu;
    // NOP
    // 0x299560: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x299560u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x299564: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x299564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x299568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29956c: 0x0  nop
    ctx->pc = 0x29956cu;
    // NOP
    // 0x299570: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299574: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x299574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x299578: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x299578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x29957c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29957cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299580: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x299580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299584: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x299588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29958c: 0x0  nop
    ctx->pc = 0x29958cu;
    // NOP
    // 0x299590: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299590u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299594: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299594u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299598: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x299598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x29959c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29959cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2995a0: 0x0  nop
    ctx->pc = 0x2995a0u;
    // NOP
    // 0x2995a4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2995a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2995a8: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x2995a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x2995ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2995acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2995b0: 0x0  nop
    ctx->pc = 0x2995b0u;
    // NOP
    // 0x2995b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2995b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2995b8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2995b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2995bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2995bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2995c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2995c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2995c4: 0x0  nop
    ctx->pc = 0x2995c4u;
    // NOP
    // 0x2995c8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2995c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2995cc: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2995ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2995d0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2995d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2995d4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2995d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2995d8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2995d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2995dc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2995dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2995e0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2995e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2995e4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x2995e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2995e8: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x2995E8u;
    SET_GPR_U32(ctx, 31, 0x2995F0u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x2995F0u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2995F0u) { return; }
    ctx->pc = 0x2995F0u;
label_2995f0:
    // 0x2995f0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2995f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2995f4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2995f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2995f8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2995f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2995fc: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x2995FCu;
    SET_GPR_U32(ctx, 31, 0x299604u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x299604u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299604u) { return; }
    ctx->pc = 0x299604u;
label_299604:
    // 0x299604: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x299604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x299608: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x299608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29960c: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x29960cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299610: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299614: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x299614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x299618: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x299618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29961c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x29961cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x299620: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x299620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299624: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x299624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x299628: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x299628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29962c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29962cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299630: 0x0  nop
    ctx->pc = 0x299630u;
    // NOP
    // 0x299634: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x299634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x299638: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x299638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x29963c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29963cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299640: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x299640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299644: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x299648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29964c: 0x0  nop
    ctx->pc = 0x29964cu;
    // NOP
    // 0x299650: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299650u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299654: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299654u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299658: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x299658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x29965c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29965cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299660: 0x0  nop
    ctx->pc = 0x299660u;
    // NOP
    // 0x299664: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x299664u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x299668: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x299668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x29966c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29966cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299670: 0x0  nop
    ctx->pc = 0x299670u;
    // NOP
    // 0x299674: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299678: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x299678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x29967c: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x29967cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x299680: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x299680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299684: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x299684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299688: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x29968c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29968cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299690: 0x0  nop
    ctx->pc = 0x299690u;
    // NOP
    // 0x299694: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299698: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299698u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29969c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x29969cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x2996a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2996a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2996a4: 0x0  nop
    ctx->pc = 0x2996a4u;
    // NOP
    // 0x2996a8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2996a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2996ac: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x2996acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x2996b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2996b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2996b4: 0x0  nop
    ctx->pc = 0x2996b4u;
    // NOP
    // 0x2996b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2996b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2996bc: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2996bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2996c0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2996c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2996c4: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2996c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2996c8: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2996c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2996cc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2996ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2996d0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2996d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2996d4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2996d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2996d8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2996d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2996dc: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2996dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2996e0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x2996E0u;
    SET_GPR_U32(ctx, 31, 0x2996E8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x2996E8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2996E8u) { return; }
    ctx->pc = 0x2996E8u;
label_2996e8:
    // 0x2996e8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2996e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2996ec: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2996ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2996f0: 0x27b40090  addiu       $s4, $sp, 0x90
    ctx->pc = 0x2996f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2996f4: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2996f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2996f8: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x2996F8u;
    SET_GPR_U32(ctx, 31, 0x299700u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x299700u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299700u) { return; }
    ctx->pc = 0x299700u;
label_299700:
    // 0x299700: 0x26150010  addiu       $s5, $s0, 0x10
    ctx->pc = 0x299700u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x299704: 0x72a08628  paddub      $s0, $s5, $zero
    ctx->pc = 0x299704u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x299708: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x299708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29970c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x29970cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x299710: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x299710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299714: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x299714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299718: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299718u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29971c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x29971cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x299720: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x299720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299724: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x299724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x299728: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x299728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29972c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29972cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299730: 0x0  nop
    ctx->pc = 0x299730u;
    // NOP
    // 0x299734: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x299734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x299738: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x299738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x29973c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29973cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299740: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x299740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299744: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x299748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29974c: 0x0  nop
    ctx->pc = 0x29974cu;
    // NOP
    // 0x299750: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299750u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299754: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299754u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299758: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x299758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x29975c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29975cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299760: 0x0  nop
    ctx->pc = 0x299760u;
    // NOP
    // 0x299764: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x299764u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x299768: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x299768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x29976c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29976cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299770: 0x0  nop
    ctx->pc = 0x299770u;
    // NOP
    // 0x299774: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299778: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x299778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x29977c: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x29977cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x299780: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x299780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299784: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x299784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299788: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x29978c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29978cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299790: 0x0  nop
    ctx->pc = 0x299790u;
    // NOP
    // 0x299794: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299794u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299798: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299798u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29979c: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x29979cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x2997a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2997a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2997a4: 0x0  nop
    ctx->pc = 0x2997a4u;
    // NOP
    // 0x2997a8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2997a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2997ac: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x2997acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x2997b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2997b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2997b4: 0x0  nop
    ctx->pc = 0x2997b4u;
    // NOP
    // 0x2997b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2997b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2997bc: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2997bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2997c0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2997c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2997c4: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2997c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2997c8: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2997c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2997cc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2997ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2997d0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2997d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2997d4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2997d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2997d8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2997d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2997dc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2997dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2997e0: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x2997E0u;
    SET_GPR_U32(ctx, 31, 0x2997E8u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x2997E8u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2997E8u) { return; }
    ctx->pc = 0x2997E8u;
label_2997e8:
    // 0x2997e8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2997e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2997ec: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2997ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2997f0: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2997f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2997f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2997f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2997f8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2997f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2997fc: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2997fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299800: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x299800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x299804: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x299804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299808: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x299808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x29980c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29980cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x299810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299814: 0x0  nop
    ctx->pc = 0x299814u;
    // NOP
    // 0x299818: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x299818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x29981c: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x29981cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x299820: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x299820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299824: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x299824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299828: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x29982c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29982cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299830: 0x0  nop
    ctx->pc = 0x299830u;
    // NOP
    // 0x299834: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299834u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299838: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299838u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29983c: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x29983cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x299840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299844: 0x0  nop
    ctx->pc = 0x299844u;
    // NOP
    // 0x299848: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x299848u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29984c: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x29984cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x299850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299854: 0x0  nop
    ctx->pc = 0x299854u;
    // NOP
    // 0x299858: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29985c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x29985cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x299860: 0x3c0342e0  lui         $v1, 0x42E0
    ctx->pc = 0x299860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17120 << 16));
    // 0x299864: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x299864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299868: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x299868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29986c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x29986cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x299870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299874: 0x0  nop
    ctx->pc = 0x299874u;
    // NOP
    // 0x299878: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299878u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29987c: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x29987cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299880: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x299880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x299884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299888: 0x0  nop
    ctx->pc = 0x299888u;
    // NOP
    // 0x29988c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x29988cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x299890: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x299890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x299894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299898: 0x0  nop
    ctx->pc = 0x299898u;
    // NOP
    // 0x29989c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29989cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2998a0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2998a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2998a4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2998a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2998a8: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2998a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2998ac: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2998acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2998b0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2998b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2998b4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2998b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2998b8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2998b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2998bc: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x2998bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2998c0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2998c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2998c4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2998c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2998c8: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x2998C8u;
    SET_GPR_U32(ctx, 31, 0x2998D0u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x2998D0u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2998D0u) { return; }
    ctx->pc = 0x2998D0u;
label_2998d0:
    // 0x2998d0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2998d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2998d4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2998d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2998d8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2998d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2998dc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2998dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2998e0: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2998e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2998e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2998e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2998e8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2998e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2998ec: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2998ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2998f0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2998f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2998f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2998f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2998f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2998f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2998fc: 0x0  nop
    ctx->pc = 0x2998fcu;
    // NOP
    // 0x299900: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x299900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x299904: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x299904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x299908: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x299908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29990c: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x29990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299910: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x299914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299918: 0x0  nop
    ctx->pc = 0x299918u;
    // NOP
    // 0x29991c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29991cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299920: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299920u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299924: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x299924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x299928: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x299928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29992c: 0x0  nop
    ctx->pc = 0x29992cu;
    // NOP
    // 0x299930: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x299930u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x299934: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x299934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x299938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29993c: 0x0  nop
    ctx->pc = 0x29993cu;
    // NOP
    // 0x299940: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299944: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x299944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x299948: 0x3c0442e0  lui         $a0, 0x42E0
    ctx->pc = 0x299948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17120 << 16));
    // 0x29994c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x29994cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299950: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x299950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299954: 0x3c054500  lui         $a1, 0x4500
    ctx->pc = 0x299954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17664 << 16));
    // 0x299958: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x299958u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29995c: 0x0  nop
    ctx->pc = 0x29995cu;
    // NOP
    // 0x299960: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299960u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299964: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299964u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299968: 0x3c064380  lui         $a2, 0x4380
    ctx->pc = 0x299968u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17280 << 16));
    // 0x29996c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29996cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299970: 0x0  nop
    ctx->pc = 0x299970u;
    // NOP
    // 0x299974: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x299974u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x299978: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x299978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x29997c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29997cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299980: 0x0  nop
    ctx->pc = 0x299980u;
    // NOP
    // 0x299984: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299988: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x299988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x29998c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x29998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299990: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x299990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x299994: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x299994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x299998: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x299998u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29999c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x29999cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2999a0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2999a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2999a4: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x2999a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2999a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2999a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2999ac: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2999acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2999b0: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x2999B0u;
    SET_GPR_U32(ctx, 31, 0x2999B8u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x2999B8u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2999B8u) { return; }
    ctx->pc = 0x2999B8u;
label_2999b8:
    // 0x2999b8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2999b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2999bc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2999bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2999c0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2999c0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2999c4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2999c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2999c8: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2999c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2999cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2999ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2999d0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2999d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2999d4: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2999d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2999d8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2999d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2999dc: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2999dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2999e0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2999e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2999e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2999e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2999e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2999e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2999ec: 0x0  nop
    ctx->pc = 0x2999ecu;
    // NOP
    // 0x2999f0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2999f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2999f4: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x2999f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x2999f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2999f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2999fc: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2999fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299a00: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x299a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299a08: 0x0  nop
    ctx->pc = 0x299a08u;
    // NOP
    // 0x299a0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299a0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299a10: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299a10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299a14: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x299a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x299a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299a1c: 0x0  nop
    ctx->pc = 0x299a1cu;
    // NOP
    // 0x299a20: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x299a20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x299a24: 0x3c043a80  lui         $a0, 0x3A80
    ctx->pc = 0x299a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14976 << 16));
    // 0x299a28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x299a28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299a2c: 0x0  nop
    ctx->pc = 0x299a2cu;
    // NOP
    // 0x299a30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299a30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299a34: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x299a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x299a38: 0x3c0642e0  lui         $a2, 0x42E0
    ctx->pc = 0x299a38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17120 << 16));
    // 0x299a3c: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x299a3cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299a40: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x299a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299a44: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x299a48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299a4c: 0x0  nop
    ctx->pc = 0x299a4cu;
    // NOP
    // 0x299a50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299a50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299a54: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299a54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299a58: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x299a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x299a5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299a60: 0x0  nop
    ctx->pc = 0x299a60u;
    // NOP
    // 0x299a64: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x299a64u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x299a68: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x299a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x299a6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299a70: 0x0  nop
    ctx->pc = 0x299a70u;
    // NOP
    // 0x299a74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299a74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299a78: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x299a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x299a7c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x299a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299a80: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x299a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x299a84: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x299a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x299a88: 0x78510000  lq          $s1, 0x0($v0)
    ctx->pc = 0x299a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299a8c: 0x7e110000  sq          $s1, 0x0($s0)
    ctx->pc = 0x299a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 17));
    // 0x299a90: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x299a90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x299a94: 0x72208628  paddub      $s0, $s1, $zero
    ctx->pc = 0x299a94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x299a98: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x299a98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x299a9c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x299a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x299aa0: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x299AA0u;
    SET_GPR_U32(ctx, 31, 0x299AA8u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x299AA8u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299AA8u) { return; }
    ctx->pc = 0x299AA8u;
label_299aa8:
    // 0x299aa8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x299aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x299aac: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x299aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x299ab0: 0x8c233580  lw          $v1, 0x3580($at)
    ctx->pc = 0x299ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x853580u));
    // 0x299ab4: 0x2039023  subu        $s2, $s0, $v1
    ctx->pc = 0x299ab4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x299ab8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x299ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x299abc: 0x121882  srl         $v1, $s2, 2
    ctx->pc = 0x299abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 2));
    // 0x299ac0: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x299ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x299ac4: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x299ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x299ac8: 0x8c233580  lw          $v1, 0x3580($at)
    ctx->pc = 0x299ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x853580u));
    // 0x299acc: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x299accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x299ad0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x299ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x299ad4: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x299ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x299ad8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x299ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x299adc: 0x33c40  sll         $a3, $v1, 17
    ctx->pc = 0x299adcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 17));
    // 0x299ae0: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x299ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x299ae4: 0x24663580  addiu       $a2, $v1, 0x3580
    ctx->pc = 0x299ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 13696));
    // 0x299ae8: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x299ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x299aec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x299aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x299af0: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x299af0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x299af4: 0x618021  addu        $s0, $v1, $at
    ctx->pc = 0x299af4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x299af8: 0x110182b  sltu        $v1, $t0, $s0
    ctx->pc = 0x299af8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x299afc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x299AFCu;
    {
        const bool branch_taken_0x299afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x299afc) {
            ctx->pc = 0x299B14u;
            goto label_299b14;
        }
    }
    ctx->pc = 0x299B04u;
    // 0x299b04: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x299b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299b08: 0xa06001c4  sb          $zero, 0x1C4($v1)
    ctx->pc = 0x299b08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 452), (uint8_t)GPR_U32(ctx, 0));
    // 0x299b0c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x299B0Cu;
    {
        const bool branch_taken_0x299b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299b0c) {
            ctx->pc = 0x299B88u;
            goto label_299b88;
        }
    }
    ctx->pc = 0x299B14u;
label_299b14:
    // 0x299b14: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x299b14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x299b18: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x299b18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x299b1c: 0x2650fff0  addiu       $s0, $s2, -0x10
    ctx->pc = 0x299b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x299b20: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x299b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x299b24: 0x108102  srl         $s0, $s0, 4
    ctx->pc = 0x299b24u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x299b28: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x299b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x299b2c: 0x2021825  or          $v1, $s0, $v0
    ctx->pc = 0x299b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x299b30: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x299b30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x299b34: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x299b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299b38: 0xac5201cc  sw          $s2, 0x1CC($v0)
    ctx->pc = 0x299b38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 460), GPR_U32(ctx, 18));
    // 0x299b3c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x299b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299b40: 0xc46c01d4  lwc1        $f12, 0x1D4($v1)
    ctx->pc = 0x299b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x299b44: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x299B44u;
    SET_GPR_U32(ctx, 31, 0x299B4Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x299B44u, 0x299B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B4Cu;
label_299b4c:
    // 0x299b4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x299b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x299b50: 0x8c30013c  lw          $s0, 0x13C($at)
    ctx->pc = 0x299b50u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x299b54: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x299b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x299b58: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x299b58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x299b5c: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x299b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x299b60: 0x8c243580  lw          $a0, 0x3580($at)
    ctx->pc = 0x299b60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x853580u));
    // 0x299b64: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x299b64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x299b68: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x299B68u;
    SET_GPR_U32(ctx, 31, 0x299B70u);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x299B68u, 0x299B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B70u;
label_299b70:
    // 0x299b70: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x299b70u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x299b74: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x299b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x299b78: 0x8c233580  lw          $v1, 0x3580($at)
    ctx->pc = 0x299b78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x853580u));
    // 0x299b7c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x299b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x299b80: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x299b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x299b84: 0xac233580  sw          $v1, 0x3580($at)
    ctx->pc = 0x299b84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x853580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x853580u, _value); } while (0);
label_299b88:
    // 0x299b88: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x299b88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x299b8c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x299b8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299b90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x299b90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299b94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x299b94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299b98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x299b98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299b9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x299b9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299ba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x299ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299ba4: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x299ba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x299ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x299BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299BB0u;
}
