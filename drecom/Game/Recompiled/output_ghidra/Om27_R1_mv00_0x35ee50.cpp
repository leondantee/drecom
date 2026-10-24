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

// Function: Om27_R1_mv00
// Address: 0x35ee50 - 0x35f138
void Om27_R1_mv00_0x35ee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om27_R1_mv00_0x35ee50");
#endif

    switch (ctx->pc) {
        case 0x35ef18u: goto label_35ef18;
        default: break;
    }

    ctx->pc = 0x35ee50u;

    // 0x35ee50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35ee54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35ee54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x35ee58: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35ee58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35ee5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35ee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ee60: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x35ee60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35ee64: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35ee64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35ee68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35ee68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35ee6c: 0x10830089  beq         $a0, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x35EE6Cu;
    {
        const bool branch_taken_0x35ee6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35ee6c) {
            ctx->pc = 0x35F094u;
            goto label_35f094;
        }
    }
    ctx->pc = 0x35EE74u;
    // 0x35ee74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35ee78: 0x10830068  beq         $a0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x35EE78u;
    {
        const bool branch_taken_0x35ee78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35ee78) {
            ctx->pc = 0x35F01Cu;
            goto label_35f01c;
        }
    }
    ctx->pc = 0x35EE80u;
    // 0x35ee80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ee84: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x35EE84u;
    {
        const bool branch_taken_0x35ee84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35ee84) {
            ctx->pc = 0x35EF48u;
            goto label_35ef48;
        }
    }
    ctx->pc = 0x35EE8Cu;
    // 0x35ee8c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35EE8Cu;
    {
        const bool branch_taken_0x35ee8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ee8c) {
            ctx->pc = 0x35EE9Cu;
            goto label_35ee9c;
        }
    }
    ctx->pc = 0x35EE94u;
    // 0x35ee94: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x35EE94u;
    {
        const bool branch_taken_0x35ee94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ee94) {
            ctx->pc = 0x35F128u;
            goto label_35f128;
        }
    }
    ctx->pc = 0x35EE9Cu;
label_35ee9c:
    // 0x35ee9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35ee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35eea0: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x35eea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35eea4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x35eea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x35eea8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35eea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35eeac: 0x0  nop
    ctx->pc = 0x35eeacu;
    // NOP
    // 0x35eeb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x35eeb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x35eeb4: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x35eeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x35eeb8: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x35eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x35eebc: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x35eebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x35eec0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35eec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35eec4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35eec8: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x35eec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x35eecc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35eed0: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x35eed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35eed4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x35eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x35eed8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35eed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35eedc: 0x0  nop
    ctx->pc = 0x35eedcu;
    // NOP
    // 0x35eee0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x35eee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x35eee4: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x35eee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x35eee8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35eeec: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x35eeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35eef0: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x35eef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x35eef4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35eef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35eef8: 0x0  nop
    ctx->pc = 0x35eef8u;
    // NOP
    // 0x35eefc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x35eefcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35ef00: 0x0  nop
    ctx->pc = 0x35ef00u;
    // NOP
    // 0x35ef04: 0x45010088  bc1t        . + 4 + (0x88 << 2)
    ctx->pc = 0x35EF04u;
    {
        const bool branch_taken_0x35ef04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35ef04) {
            ctx->pc = 0x35F128u;
            goto label_35f128;
        }
    }
    ctx->pc = 0x35EF0Cu;
    // 0x35ef0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35ef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ef10: 0xc087258  jal         func_21C960
    ctx->pc = 0x35EF10u;
    SET_GPR_U32(ctx, 31, 0x35EF18u);
    ctx->pc = 0x21C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C960u, 0x35EF10u, 0x35EF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EF18u;
label_35ef18:
    // 0x35ef18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35ef18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35ef1c: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x35ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x35ef20: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x35ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x35ef24: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x35ef24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35ef28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35ef28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35ef2c: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x35ef2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x35ef30: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35ef30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ef34: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x35ef34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x35ef38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35ef38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35ef3c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x35ef3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x35ef40: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x35EF40u;
    {
        const bool branch_taken_0x35ef40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ef40) {
            ctx->pc = 0x35F128u;
            goto label_35f128;
        }
    }
    ctx->pc = 0x35EF48u;
label_35ef48:
    // 0x35ef48: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x35ef48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ef4c: 0x8ca31330  lw          $v1, 0x1330($a1)
    ctx->pc = 0x35ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4912)));
    // 0x35ef50: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x35ef50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35ef54: 0xaca41330  sw          $a0, 0x1330($a1)
    ctx->pc = 0x35ef54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4912), GPR_U32(ctx, 4));
    // 0x35ef58: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x35ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x35ef5c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x35ef5cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35ef60: 0x0  nop
    ctx->pc = 0x35ef60u;
    // NOP
    // 0x35ef64: 0x0  nop
    ctx->pc = 0x35ef64u;
    // NOP
    // 0x35ef68: 0x1810  mfhi        $v1
    ctx->pc = 0x35ef68u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x35ef6c: 0x1460006e  bnez        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x35EF6Cu;
    {
        const bool branch_taken_0x35ef6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ef6c) {
            ctx->pc = 0x35F128u;
            goto label_35f128;
        }
    }
    ctx->pc = 0x35EF74u;
    // 0x35ef74: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35ef74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ef78: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x35ef78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ef7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x35ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x35ef80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35ef80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ef84: 0x0  nop
    ctx->pc = 0x35ef84u;
    // NOP
    // 0x35ef88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x35ef88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x35ef8c: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x35ef8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x35ef90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ef94: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x35ef94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ef98: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x35ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x35ef9c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x35ef9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x35efa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35efa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35efa4: 0x0  nop
    ctx->pc = 0x35efa4u;
    // NOP
    // 0x35efa8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x35efa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35efac: 0x0  nop
    ctx->pc = 0x35efacu;
    // NOP
    // 0x35efb0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x35EFB0u;
    {
        const bool branch_taken_0x35efb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35efb0) {
            ctx->pc = 0x35EFCCu;
            goto label_35efcc;
        }
    }
    ctx->pc = 0x35EFB8u;
    // 0x35efb8: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x35efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x35efbc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x35efbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x35efc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35efc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35efc4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35efc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35efc8: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x35efc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_35efcc:
    // 0x35efcc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35efccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35efd0: 0x8c631330  lw          $v1, 0x1330($v1)
    ctx->pc = 0x35efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
    // 0x35efd4: 0x28610097  slti        $at, $v1, 0x97
    ctx->pc = 0x35efd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)151) ? 1 : 0);
    // 0x35efd8: 0x14200053  bnez        $at, . + 4 + (0x53 << 2)
    ctx->pc = 0x35EFD8u;
    {
        const bool branch_taken_0x35efd8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35efd8) {
            ctx->pc = 0x35F128u;
            goto label_35f128;
        }
    }
    ctx->pc = 0x35EFE0u;
    // 0x35efe0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35efe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35efe4: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x35efe4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x35efe8: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x35efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x35efec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x35efecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x35eff0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35eff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35eff4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35eff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35eff8: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x35eff8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x35effc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35effcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f000: 0xac601330  sw          $zero, 0x1330($v1)
    ctx->pc = 0x35f000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 0));
    // 0x35f004: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35f004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f008: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x35f008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x35f00c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35f010: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x35f010u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x35f014: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x35F014u;
    {
        const bool branch_taken_0x35f014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f014) {
            ctx->pc = 0x35F128u;
            goto label_35f128;
        }
    }
    ctx->pc = 0x35F01Cu;
label_35f01c:
    // 0x35f01c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35f01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f020: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x35f020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f024: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x35f024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x35f028: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x35f028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x35f02c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35f02cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f030: 0x0  nop
    ctx->pc = 0x35f030u;
    // NOP
    // 0x35f034: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x35f034u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x35f038: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x35f038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x35f03c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35f03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f040: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x35f040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f044: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x35f044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x35f048: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x35f048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x35f04c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35f04cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f050: 0x0  nop
    ctx->pc = 0x35f050u;
    // NOP
    // 0x35f054: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x35f054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x35f058: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x35f058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x35f05c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f060: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x35f060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35f064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f068: 0x0  nop
    ctx->pc = 0x35f068u;
    // NOP
    // 0x35f06c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x35f06cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35f070: 0x0  nop
    ctx->pc = 0x35f070u;
    // NOP
    // 0x35f074: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x35F074u;
    {
        const bool branch_taken_0x35f074 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35f074) {
            ctx->pc = 0x35F128u;
            goto label_35f128;
        }
    }
    ctx->pc = 0x35F07Cu;
    // 0x35f07c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f080: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x35f080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x35f084: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35f084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35f088: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x35f088u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x35f08c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x35F08Cu;
    {
        const bool branch_taken_0x35f08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f08c) {
            ctx->pc = 0x35F128u;
            goto label_35f128;
        }
    }
    ctx->pc = 0x35F094u;
label_35f094:
    // 0x35f094: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x35f094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x35f098: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x35f098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x35f09c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35f09cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f0a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f0a4: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x35f0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x35f0a8: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x35f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x35f0ac: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x35f0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x35f0b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35f0b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f0b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f0b8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x35f0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x35f0bc: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x35f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x35f0c0: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x35f0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x35f0c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35f0c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f0c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f0cc: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x35f0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x35f0d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35f0d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f0d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f0d8: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x35f0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x35f0dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35f0dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f0e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f0e4: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x35f0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x35f0e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35f0e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f0ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f0f0: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x35f0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x35f0f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f0f8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35f0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f0fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f100: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f104: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35f104u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35f108: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f10c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35f10cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f110: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f114: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35f114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f118: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f11c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35f11cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f120: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f124: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35f124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_35f128:
    // 0x35f128: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35f128u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f12c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35f12cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35f130: 0x3e00008  jr          $ra
    ctx->pc = 0x35F130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F138u;
}
