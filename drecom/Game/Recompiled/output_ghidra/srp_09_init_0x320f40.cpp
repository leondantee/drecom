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

// Function: srp_09_init
// Address: 0x320f40 - 0x3211b8
void srp_09_init_0x320f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_09_init_0x320f40");
#endif

    switch (ctx->pc) {
        case 0x320fa0u: goto label_320fa0;
        case 0x320fc0u: goto label_320fc0;
        case 0x321004u: goto label_321004;
        case 0x321124u: goto label_321124;
        default: break;
    }

    ctx->pc = 0x320f40u;

    // 0x320f40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x320f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x320f44: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x320f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x320f48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x320f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x320f4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x320f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x320f50: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x320f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x320f54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x320f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320f58: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x320f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320f5c: 0xac430358  sw          $v1, 0x358($v0)
    ctx->pc = 0x320f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 856), GPR_U32(ctx, 3));
    // 0x320f60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x320f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320f64: 0x8c420ac4  lw          $v0, 0xAC4($v0)
    ctx->pc = 0x320f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2756)));
    // 0x320f68: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x320f68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x320f6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x320f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320f70: 0x8c420270  lw          $v0, 0x270($v0)
    ctx->pc = 0x320f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x320f74: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x320f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x320f78: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x320F78u;
    {
        const bool branch_taken_0x320f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320f78) {
            ctx->pc = 0x320F94u;
            goto label_320f94;
        }
    }
    ctx->pc = 0x320F80u;
    // 0x320f80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320f84: 0x8c830b18  lw          $v1, 0xB18($a0)
    ctx->pc = 0x320f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x320f88: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x320f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x320f8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x320f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x320f90: 0xac820b18  sw          $v0, 0xB18($a0)
    ctx->pc = 0x320f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 2));
label_320f94:
    // 0x320f94: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320f98: 0xc0c9930  jal         func_3264C0
    ctx->pc = 0x320F98u;
    SET_GPR_U32(ctx, 31, 0x320FA0u);
    ctx->pc = 0x3264C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C0u, 0x320F98u, 0x320FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320FA0u;
label_320fa0:
    // 0x320fa0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320fa4: 0x246302b0  addiu       $v1, $v1, 0x2B0
    ctx->pc = 0x320fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x320fa8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x320fa8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320fac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320fb0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x320fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x320fb4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x320fb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x320fb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x320FB8u;
    {
        const bool branch_taken_0x320fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320fb8) {
            ctx->pc = 0x320FE0u;
            goto label_320fe0;
        }
    }
    ctx->pc = 0x320FC0u;
label_320fc0:
    // 0x320fc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320fc4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x320fc4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320fc8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320fcc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320fd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320fd4: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x320fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x320fd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x320fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x320fdc: 0x0  nop
    ctx->pc = 0x320fdcu;
    // NOP
label_320fe0:
    // 0x320fe0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320fe4: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x320fe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x320fe8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320fec: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x320fecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x320ff0: 0x1020fff3  beqz        $at, . + 4 + (-0xD << 2)
    ctx->pc = 0x320FF0u;
    {
        const bool branch_taken_0x320ff0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x320ff0) {
            ctx->pc = 0x320FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320fc0;
        }
    }
    ctx->pc = 0x320FF8u;
    // 0x320ff8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x320ff8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x320ffc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x320FFCu;
    {
        const bool branch_taken_0x320ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320ffc) {
            ctx->pc = 0x321030u;
            goto label_321030;
        }
    }
    ctx->pc = 0x321004u;
label_321004:
    // 0x321004: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x321004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x321008: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32100c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32100cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x321010: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x321010u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x321014: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x321014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x321018: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32101c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32101cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x321020: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x321020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x321024: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x321024u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x321028: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x321028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32102c: 0x0  nop
    ctx->pc = 0x32102cu;
    // NOP
label_321030:
    // 0x321030: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x321034: 0x90630347  lbu         $v1, 0x347($v1)
    ctx->pc = 0x321034u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x321038: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x321038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32103c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x32103cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x321040: 0x1020fff0  beqz        $at, . + 4 + (-0x10 << 2)
    ctx->pc = 0x321040u;
    {
        const bool branch_taken_0x321040 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x321040) {
            ctx->pc = 0x321004u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321004;
        }
    }
    ctx->pc = 0x321048u;
    // 0x321048: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32104c: 0xa0600345  sb          $zero, 0x345($v1)
    ctx->pc = 0x32104cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 0));
    // 0x321050: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x321054: 0xa0600348  sb          $zero, 0x348($v1)
    ctx->pc = 0x321054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 0));
    // 0x321058: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32105c: 0x90640344  lbu         $a0, 0x344($v1)
    ctx->pc = 0x32105cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x321060: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x321064: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x321064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x321068: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32106c: 0xac600278  sw          $zero, 0x278($v1)
    ctx->pc = 0x32106cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 632), GPR_U32(ctx, 0));
    // 0x321070: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x321074: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x321074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321078: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x321078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x32107c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x32107cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x321080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x321080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321084: 0x0  nop
    ctx->pc = 0x321084u;
    // NOP
    // 0x321088: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x321088u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32108c: 0x0  nop
    ctx->pc = 0x32108cu;
    // NOP
    // 0x321090: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x321090u;
    {
        const bool branch_taken_0x321090 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x321090) {
            ctx->pc = 0x32110Cu;
            goto label_32110c;
        }
    }
    ctx->pc = 0x321098u;
    // 0x321098: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32109c: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x32109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3210a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3210a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3210a4: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x3210a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3210a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3210a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3210ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3210acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3210b0: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x3210b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x3210b4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3210B4u;
    {
        const bool branch_taken_0x3210b4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3210b4) {
            ctx->pc = 0x3210D0u;
            goto label_3210d0;
        }
    }
    ctx->pc = 0x3210BCu;
    // 0x3210bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3210bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3210c0: 0x0  nop
    ctx->pc = 0x3210c0u;
    // NOP
    // 0x3210c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3210c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3210c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3210C8u;
    {
        const bool branch_taken_0x3210c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3210c8) {
            ctx->pc = 0x3210ECu;
            goto label_3210ec;
        }
    }
    ctx->pc = 0x3210D0u;
label_3210d0:
    // 0x3210d0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x3210d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3210d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3210d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3210d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3210d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3210dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3210dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3210e0: 0x0  nop
    ctx->pc = 0x3210e0u;
    // NOP
    // 0x3210e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3210e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3210e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3210e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3210ec:
    // 0x3210ec: 0x0  nop
    ctx->pc = 0x3210ecu;
    // NOP
    // 0x3210f0: 0x0  nop
    ctx->pc = 0x3210f0u;
    // NOP
    // 0x3210f4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3210f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3210f8: 0x0  nop
    ctx->pc = 0x3210f8u;
    // NOP
    // 0x3210fc: 0x0  nop
    ctx->pc = 0x3210fcu;
    // NOP
    // 0x321100: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x321100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x321104: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x321104u;
    {
        const bool branch_taken_0x321104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321104) {
            ctx->pc = 0x321118u;
            goto label_321118;
        }
    }
    ctx->pc = 0x32110Cu;
label_32110c:
    // 0x32110c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32110cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321110: 0x0  nop
    ctx->pc = 0x321110u;
    // NOP
    // 0x321114: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x321114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_321118:
    // 0x321118: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x321118u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32111c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x32111Cu;
    {
        const bool branch_taken_0x32111c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32111c) {
            ctx->pc = 0x321188u;
            goto label_321188;
        }
    }
    ctx->pc = 0x321124u;
label_321124:
    // 0x321124: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x321128: 0xc4620338  lwc1        $f2, 0x338($v1)
    ctx->pc = 0x321128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32112c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32112Cu;
    {
        const bool branch_taken_0x32112c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x32112c) {
            ctx->pc = 0x321148u;
            goto label_321148;
        }
    }
    ctx->pc = 0x321134u;
    // 0x321134: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x321134u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321138: 0x0  nop
    ctx->pc = 0x321138u;
    // NOP
    // 0x32113c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32113cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x321140: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x321140u;
    {
        const bool branch_taken_0x321140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321140) {
            ctx->pc = 0x321164u;
            goto label_321164;
        }
    }
    ctx->pc = 0x321148u;
label_321148:
    // 0x321148: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x321148u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x32114c: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x32114cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x321150: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x321150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x321154: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x321154u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321158: 0x0  nop
    ctx->pc = 0x321158u;
    // NOP
    // 0x32115c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32115cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x321160: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x321160u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_321164:
    // 0x321164: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x321164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321168: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x321168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32116c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x32116cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x321170: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x321170u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x321174: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x321178: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x321178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32117c: 0xe4600ac8  swc1        $f0, 0xAC8($v1)
    ctx->pc = 0x32117cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2760), bits); }
    // 0x321180: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x321180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x321184: 0x0  nop
    ctx->pc = 0x321184u;
    // NOP
label_321188:
    // 0x321188: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32118c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x32118cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x321190: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x321190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x321194: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x321194u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x321198: 0x1020ffe2  beqz        $at, . + 4 + (-0x1E << 2)
    ctx->pc = 0x321198u;
    {
        const bool branch_taken_0x321198 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x321198) {
            ctx->pc = 0x321124u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321124;
        }
    }
    ctx->pc = 0x3211A0u;
    // 0x3211a0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3211a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3211a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3211a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3211a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3211a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3211ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3211acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3211b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3211B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3211B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3211B8u;
}
