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

// Function: Water_dust_move
// Address: 0x1aeaf0 - 0x1af084
void Water_dust_move_0x1aeaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Water_dust_move_0x1aeaf0");
#endif

    switch (ctx->pc) {
        case 0x1aeb60u: goto label_1aeb60;
        case 0x1aeb84u: goto label_1aeb84;
        case 0x1aeb94u: goto label_1aeb94;
        case 0x1aeba8u: goto label_1aeba8;
        case 0x1aebbcu: goto label_1aebbc;
        case 0x1aec08u: goto label_1aec08;
        case 0x1aec6cu: goto label_1aec6c;
        case 0x1aec80u: goto label_1aec80;
        case 0x1aecb0u: goto label_1aecb0;
        case 0x1aecd4u: goto label_1aecd4;
        case 0x1aed08u: goto label_1aed08;
        case 0x1aed58u: goto label_1aed58;
        case 0x1aeff0u: goto label_1aeff0;
        case 0x1af00cu: goto label_1af00c;
        case 0x1af018u: goto label_1af018;
        default: break;
    }

    ctx->pc = 0x1aeaf0u;

    // 0x1aeaf0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1aeaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1aeaf4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x1aeaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1aeaf8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1aeaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1aeafc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1aeafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1aeb00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1aeb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1aeb04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aeb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aeb08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aeb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aeb0c: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1aeb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1aeb10: 0x2472f010  addiu       $s2, $v1, -0xFF0
    ctx->pc = 0x1aeb10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963216));
    // 0x1aeb14: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1aeb14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1aeb18: 0x2474f000  addiu       $s4, $v1, -0x1000
    ctx->pc = 0x1aeb18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x1aeb1c: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1aeb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1aeb20: 0x9023f001  lbu         $v1, -0xFFF($at)
    ctx->pc = 0x1aeb20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5EF001u));
    // 0x1aeb24: 0x1060014e  beqz        $v1, . + 4 + (0x14E << 2)
    ctx->pc = 0x1AEB24u;
    {
        const bool branch_taken_0x1aeb24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeb24) {
            ctx->pc = 0x1AF060u;
            goto label_1af060;
        }
    }
    ctx->pc = 0x1AEB2Cu;
    // 0x1aeb2c: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x1aeb2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1aeb30: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1aeb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1aeb34: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1aeb34u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1aeb38: 0xa022b500  sb          $v0, -0x4B00($at)
    ctx->pc = 0x1aeb38u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948096), (uint8_t)GPR_U32(ctx, 2));
    // 0x1aeb3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1aeb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1aeb40: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x1aeb40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1aeb44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1aeb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1aeb48: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1aeb48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1aeb4c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1aeb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1aeb50: 0x246501a0  addiu       $a1, $v1, 0x1A0
    ctx->pc = 0x1aeb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x1aeb54: 0x24460190  addiu       $a2, $v0, 0x190
    ctx->pc = 0x1aeb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x1aeb58: 0xc040c80  jal         func_103200
    ctx->pc = 0x1AEB58u;
    SET_GPR_U32(ctx, 31, 0x1AEB60u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1AEB60u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AEB60u) { return; }
    ctx->pc = 0x1AEB60u;
label_1aeb60:
    // 0x1aeb60: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1aeb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aeb64: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1aeb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aeb68: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1aeb68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aeb6c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1aeb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aeb70: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1aeb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aeb74: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aeb74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aeb78: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1aeb78u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1aeb7c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1AEB7Cu;
    SET_GPR_U32(ctx, 31, 0x1AEB84u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1AEB7Cu, 0x1AEB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB84u;
label_1aeb84:
    // 0x1aeb84: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x1aeb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aeb88: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1aeb88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1aeb8c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1AEB8Cu;
    SET_GPR_U32(ctx, 31, 0x1AEB94u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1AEB8Cu, 0x1AEB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB94u;
label_1aeb94:
    // 0x1aeb94: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1aeb94u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1aeb98: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1aeb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1aeb9c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1aeb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1aeba0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1AEBA0u;
    SET_GPR_U32(ctx, 31, 0x1AEBA8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1AEBA8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AEBA8u) { return; }
    ctx->pc = 0x1AEBA8u;
label_1aeba8:
    // 0x1aeba8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1aeba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1aebac: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1aebacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1aebb0: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x1aebb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aebb4: 0xc040d0e  jal         func_103438
    ctx->pc = 0x1AEBB4u;
    SET_GPR_U32(ctx, 31, 0x1AEBBCu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x1AEBBCu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AEBBCu) { return; }
    ctx->pc = 0x1AEBBCu;
label_1aebbc:
    // 0x1aebbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aebbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aebc0: 0x0  nop
    ctx->pc = 0x1aebc0u;
    // NOP
    // 0x1aebc4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1aebc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1aebc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aebc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aebcc: 0x0  nop
    ctx->pc = 0x1aebccu;
    // NOP
    // 0x1aebd0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1aebd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1aebd4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1aebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1aebd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aebd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aebdc: 0x0  nop
    ctx->pc = 0x1aebdcu;
    // NOP
    // 0x1aebe0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1aebe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1aebe4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1aebe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aebe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aebec: 0x0  nop
    ctx->pc = 0x1aebecu;
    // NOP
    // 0x1aebf0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1aebf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1aebf4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1aebf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1aebf8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1aebf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1aebfc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1aebfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1aec00: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1AEC00u;
    SET_GPR_U32(ctx, 31, 0x1AEC08u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1AEC08u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AEC08u) { return; }
    ctx->pc = 0x1AEC08u;
label_1aec08:
    // 0x1aec08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1aec08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1aec0c: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x1aec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1aec10: 0x24630190  addiu       $v1, $v1, 0x190
    ctx->pc = 0x1aec10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x1aec14: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1aec14u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aec18: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1aec18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1aec1c: 0x2463eff0  addiu       $v1, $v1, -0x1010
    ctx->pc = 0x1aec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963184));
    // 0x1aec20: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1aec20u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5EEFF0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5EEFF0u, _value); } while (0);
    // 0x1aec24: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1aec24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1aec28: 0xc421eff4  lwc1        $f1, -0x100C($at)
    ctx->pc = 0x1aec28u;
    { uint32_t bits = FAST_READ32(0x5EEFF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aec2c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1aec2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aec30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1aec30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1aec34: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1aec34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1aec38: 0xe420eff4  swc1        $f0, -0x100C($at)
    ctx->pc = 0x1aec38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5EEFF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5EEFF4u, _value); } while (0); }
    // 0x1aec3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1aec3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1aec40: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1aec40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1aec44: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1aec44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1aec48: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1aec48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1aec4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEC4Cu;
    {
        const bool branch_taken_0x1aec4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aec4c) {
            ctx->pc = 0x1AEC60u;
            goto label_1aec60;
        }
    }
    ctx->pc = 0x1AEC54u;
    // 0x1aec54: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x1aec54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1aec58: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x1AEC58u;
    {
        const bool branch_taken_0x1aec58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aec58) {
            ctx->pc = 0x1AF050u;
            goto label_1af050;
        }
    }
    ctx->pc = 0x1AEC60u;
label_1aec60:
    // 0x1aec60: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1aec60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aec64: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x1AEC64u;
    {
        const bool branch_taken_0x1aec64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aec64) {
            ctx->pc = 0x1AF050u;
            goto label_1af050;
        }
    }
    ctx->pc = 0x1AEC6Cu;
label_1aec6c:
    // 0x1aec6c: 0x26511d08  addiu       $s1, $s2, 0x1D08
    ctx->pc = 0x1aec6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 7432));
    // 0x1aec70: 0x26317ff8  addiu       $s1, $s1, 0x7FF8
    ctx->pc = 0x1aec70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32760));
    // 0x1aec74: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1aec74u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1aec78: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1AEC78u;
    {
        const bool branch_taken_0x1aec78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aec78) {
            ctx->pc = 0x1AED38u;
            goto label_1aed38;
        }
    }
    ctx->pc = 0x1AEC80u;
label_1aec80:
    // 0x1aec80: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1aec80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1aec84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1aec84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1aec88: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1aec88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1aec8c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1AEC8Cu;
    {
        const bool branch_taken_0x1aec8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aec8c) {
            ctx->pc = 0x1AED30u;
            goto label_1aed30;
        }
    }
    ctx->pc = 0x1AEC94u;
    // 0x1aec94: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1aec94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1aec98: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x1aec98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1aec9c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1aec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1aeca0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1aeca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1aeca4: 0x2446eff0  addiu       $a2, $v0, -0x1010
    ctx->pc = 0x1aeca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963184));
    // 0x1aeca8: 0xc040c80  jal         func_103200
    ctx->pc = 0x1AECA8u;
    SET_GPR_U32(ctx, 31, 0x1AECB0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1AECB0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AECB0u) { return; }
    ctx->pc = 0x1AECB0u;
label_1aecb0:
    // 0x1aecb0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1aecb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aecb4: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1aecb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aecb8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1aecb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aecbc: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1aecbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aecc0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1aecc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aecc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aecc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aecc8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1aecc8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1aeccc: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1AECCCu;
    SET_GPR_U32(ctx, 31, 0x1AECD4u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1AECCCu, 0x1AECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AECD4u;
label_1aecd4:
    // 0x1aecd4: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x1aecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x1aecd8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1aecd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1aecdc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1aecdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aece0: 0x0  nop
    ctx->pc = 0x1aece0u;
    // NOP
    // 0x1aece4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1aece4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aece8: 0x0  nop
    ctx->pc = 0x1aece8u;
    // NOP
    // 0x1aecec: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1AECECu;
    {
        const bool branch_taken_0x1aecec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aecec) {
            ctx->pc = 0x1AED28u;
            goto label_1aed28;
        }
    }
    ctx->pc = 0x1AECF4u;
    // 0x1aecf4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1aecf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aecf8: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1aecf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aecfc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1aecfcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aed00: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1AED00u;
    SET_GPR_U32(ctx, 31, 0x1AED08u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1AED00u, 0x1AED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED08u;
label_1aed08:
    // 0x1aed08: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1aed08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x1aed0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1aed0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aed10: 0x0  nop
    ctx->pc = 0x1aed10u;
    // NOP
    // 0x1aed14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1aed14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aed18: 0x0  nop
    ctx->pc = 0x1aed18u;
    // NOP
    // 0x1aed1c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AED1Cu;
    {
        const bool branch_taken_0x1aed1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aed1c) {
            ctx->pc = 0x1AED30u;
            goto label_1aed30;
        }
    }
    ctx->pc = 0x1AED24u;
    // 0x1aed24: 0x0  nop
    ctx->pc = 0x1aed24u;
    // NOP
label_1aed28:
    // 0x1aed28: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1aed28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aed2c: 0x0  nop
    ctx->pc = 0x1aed2cu;
    // NOP
label_1aed30:
    // 0x1aed30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1aed30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1aed34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aed34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1aed38:
    // 0x1aed38: 0x2e0307d0  sltiu       $v1, $s0, 0x7D0
    ctx->pc = 0x1aed38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1aed3c: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1AED3Cu;
    {
        const bool branch_taken_0x1aed3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aed3c) {
            ctx->pc = 0x1AEC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aec80;
        }
    }
    ctx->pc = 0x1AED44u;
    // 0x1aed44: 0x26511d08  addiu       $s1, $s2, 0x1D08
    ctx->pc = 0x1aed44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 7432));
    // 0x1aed48: 0x26317ff8  addiu       $s1, $s1, 0x7FF8
    ctx->pc = 0x1aed48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32760));
    // 0x1aed4c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1aed4cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1aed50: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x1AED50u;
    {
        const bool branch_taken_0x1aed50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aed50) {
            ctx->pc = 0x1AF040u;
            goto label_1af040;
        }
    }
    ctx->pc = 0x1AED58u;
label_1aed58:
    // 0x1aed58: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1aed58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1aed5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1aed5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1aed60: 0x146000b5  bnez        $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x1AED60u;
    {
        const bool branch_taken_0x1aed60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aed60) {
            ctx->pc = 0x1AF038u;
            goto label_1af038;
        }
    }
    ctx->pc = 0x1AED68u;
    // 0x1aed68: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1aed68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1aed6c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1aed6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1aed70: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1aed70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1aed74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aed74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aed78: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1aed78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1aed7c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1aed7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1aed80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1aed80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aed84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aed88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aed88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aed8c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1aed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1aed90: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aed90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aed94: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1aed94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1aed98: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1aed98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1aed9c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1aed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aeda0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aeda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aeda4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1aeda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1aeda8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1aeda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1aedac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1aedacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1aedb0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aedb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aedb4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x1aedb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x1aedb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aedb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aedbc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aedbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aedc0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aedc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aedc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aedc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aedc8: 0x0  nop
    ctx->pc = 0x1aedc8u;
    // NOP
    // 0x1aedcc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1aedccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1aedd0: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1aedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x1aedd4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1aedd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1aedd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aedd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aeddc: 0x0  nop
    ctx->pc = 0x1aeddcu;
    // NOP
    // 0x1aede0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1aede0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1aede4: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1aede4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1aede8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aede8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aedec: 0x0  nop
    ctx->pc = 0x1aedecu;
    // NOP
    // 0x1aedf0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1aedf0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1aedf4: 0x938380cc  lbu         $v1, -0x7F34($gp)
    ctx->pc = 0x1aedf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934732)));
    // 0x1aedf8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1aedf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1aedfc: 0xa38280cc  sb          $v0, -0x7F34($gp)
    ctx->pc = 0x1aedfcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934732), (uint8_t)GPR_U32(ctx, 2));
    // 0x1aee00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1aee00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1aee04: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1aee04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1aee08: 0x24427510  addiu       $v0, $v0, 0x7510
    ctx->pc = 0x1aee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29968));
    // 0x1aee0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aee10: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1aee10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aee14: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aee14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aee18: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aee18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aee1c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aee1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aee20: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aee20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aee24: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aee24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1aee28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aee28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aee2c: 0x0  nop
    ctx->pc = 0x1aee2cu;
    // NOP
    // 0x1aee30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aee30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aee34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aee34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aee38: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1aee38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1aee3c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aee3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aee40: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1aee40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1aee44: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1aee44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1aee48: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1aee48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aee4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aee50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aee50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aee54: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1aee54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1aee58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aee58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aee5c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1aee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1aee60: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1aee60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1aee64: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1aee64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aee68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aee6c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1aee6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1aee70: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1aee70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1aee74: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1aee74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1aee78: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aee78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aee7c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x1aee7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x1aee80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aee80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aee84: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aee84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aee88: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aee88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aee8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aee8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aee90: 0x0  nop
    ctx->pc = 0x1aee90u;
    // NOP
    // 0x1aee94: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1aee94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1aee98: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1aee98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1aee9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aee9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aeea0: 0x0  nop
    ctx->pc = 0x1aeea0u;
    // NOP
    // 0x1aeea4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1aeea4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1aeea8: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1aeea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1aeeac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aeeacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aeeb0: 0x0  nop
    ctx->pc = 0x1aeeb0u;
    // NOP
    // 0x1aeeb4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1aeeb4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1aeeb8: 0x938380cc  lbu         $v1, -0x7F34($gp)
    ctx->pc = 0x1aeeb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934732)));
    // 0x1aeebc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1aeebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1aeec0: 0xa38280cc  sb          $v0, -0x7F34($gp)
    ctx->pc = 0x1aeec0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934732), (uint8_t)GPR_U32(ctx, 2));
    // 0x1aeec4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1aeec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1aeec8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1aeec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1aeecc: 0x24427510  addiu       $v0, $v0, 0x7510
    ctx->pc = 0x1aeeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29968));
    // 0x1aeed0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aeed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aeed4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1aeed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aeed8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aeed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aeedc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aeedcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aeee0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aeee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aeee4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aeee4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aeee8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aeee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1aeeec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aeeecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aeef0: 0x0  nop
    ctx->pc = 0x1aeef0u;
    // NOP
    // 0x1aeef4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aeef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aeef8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aeef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aeefc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1aeefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1aef00: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aef00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aef04: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1aef04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1aef08: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1aef08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1aef0c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1aef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aef10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aef10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aef14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aef14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aef18: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1aef18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1aef1c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aef1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aef20: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1aef20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1aef24: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1aef24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1aef28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1aef28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aef2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aef30: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1aef30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1aef34: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1aef34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1aef38: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1aef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1aef3c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aef3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aef40: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x1aef40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x1aef44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aef44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aef48: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aef48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aef4c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aef4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aef50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aef50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aef54: 0x0  nop
    ctx->pc = 0x1aef54u;
    // NOP
    // 0x1aef58: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1aef58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1aef5c: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1aef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x1aef60: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1aef60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1aef64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aef64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aef68: 0x0  nop
    ctx->pc = 0x1aef68u;
    // NOP
    // 0x1aef6c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1aef6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1aef70: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1aef70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1aef74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aef74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aef78: 0x0  nop
    ctx->pc = 0x1aef78u;
    // NOP
    // 0x1aef7c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1aef7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1aef80: 0x938380cc  lbu         $v1, -0x7F34($gp)
    ctx->pc = 0x1aef80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934732)));
    // 0x1aef84: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1aef84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1aef88: 0xa38280cc  sb          $v0, -0x7F34($gp)
    ctx->pc = 0x1aef88u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934732), (uint8_t)GPR_U32(ctx, 2));
    // 0x1aef8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1aef8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1aef90: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1aef90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1aef94: 0x24427510  addiu       $v0, $v0, 0x7510
    ctx->pc = 0x1aef94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29968));
    // 0x1aef98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aef9c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1aef9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aefa0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aefa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aefa4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aefa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aefa8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aefa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aefac: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aefacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aefb0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aefb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1aefb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aefb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aefb8: 0x0  nop
    ctx->pc = 0x1aefb8u;
    // NOP
    // 0x1aefbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aefbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aefc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aefc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aefc4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1aefc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1aefc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aefc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aefcc: 0x0  nop
    ctx->pc = 0x1aefccu;
    // NOP
    // 0x1aefd0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1aefd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1aefd4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1aefd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1aefd8: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1aefd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1aefdc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1aefdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1aefe0: 0x2445eff0  addiu       $a1, $v0, -0x1010
    ctx->pc = 0x1aefe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963184));
    // 0x1aefe4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1aefe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1aefe8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1AEFE8u;
    SET_GPR_U32(ctx, 31, 0x1AEFF0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1AEFF0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AEFF0u) { return; }
    ctx->pc = 0x1AEFF0u;
label_1aeff0:
    // 0x1aeff0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1aeff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1aeff4: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x1aeff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1aeff8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1aeff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1aeffc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1aeffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1af000: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1af000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1af004: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1AF004u;
    SET_GPR_U32(ctx, 31, 0x1AF00Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1AF00Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AF00Cu) { return; }
    ctx->pc = 0x1AF00Cu;
label_1af00c:
    // 0x1af00c: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x1af00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1af010: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1AF010u;
    SET_GPR_U32(ctx, 31, 0x1AF018u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1AF010u, 0x1AF018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF018u;
label_1af018:
    // 0x1af018: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x1af018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1af01c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1af01cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1af020: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1af020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1af024: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1af024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1af028: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af02c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1af02cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1af030: 0xa424a4d0  sh          $a0, -0x5B30($at)
    ctx->pc = 0x1af030u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943952), (uint16_t)GPR_U32(ctx, 4));
    // 0x1af034: 0x0  nop
    ctx->pc = 0x1af034u;
    // NOP
label_1af038:
    // 0x1af038: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1af038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1af03c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1af03cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1af040:
    // 0x1af040: 0x2e0307d0  sltiu       $v1, $s0, 0x7D0
    ctx->pc = 0x1af040u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1af044: 0x1460ff44  bnez        $v1, . + 4 + (-0xBC << 2)
    ctx->pc = 0x1AF044u;
    {
        const bool branch_taken_0x1af044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af044) {
            ctx->pc = 0x1AED58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aed58;
        }
    }
    ctx->pc = 0x1AF04Cu;
    // 0x1af04c: 0x0  nop
    ctx->pc = 0x1af04cu;
    // NOP
label_1af050:
    // 0x1af050: 0x72601e28  paddub      $v1, $s3, $zero
    ctx->pc = 0x1af050u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1af054: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x1af054u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1af058: 0x1460ff04  bnez        $v1, . + 4 + (-0xFC << 2)
    ctx->pc = 0x1AF058u;
    {
        const bool branch_taken_0x1af058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af058) {
            ctx->pc = 0x1AEC6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aec6c;
        }
    }
    ctx->pc = 0x1AF060u;
label_1af060:
    // 0x1af060: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x1af060u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1af064: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1af064u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1af068: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1af068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af06c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1af06cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af078: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1af078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1af07c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF084u;
}
