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

// Function: entry_00196240
// Address: 0x196240 - 0x196388
void entry_00196240_0x196240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196240_0x196240");
#endif

    ctx->pc = 0x196240u;

label_196240:
    // 0x196240: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x196240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x196244: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x196244u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x196248: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x196248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19624c: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x19624cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x196250: 0x96630036  lhu         $v1, 0x36($s3)
    ctx->pc = 0x196250u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x196254: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x196254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x196258: 0xa6630036  sh          $v1, 0x36($s3)
    ctx->pc = 0x196258u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x19625c: 0x32c5ffff  andi        $a1, $s6, 0xFFFF
    ctx->pc = 0x19625cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x196260: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x196260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x196264: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x196264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196268: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x196268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x19626c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19626cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x196270: 0xa4650204  sh          $a1, 0x204($v1)
    ctx->pc = 0x196270u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 516), (uint16_t)GPR_U32(ctx, 5));
    // 0x196274: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x196274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x196278: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x196278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x19627c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19627cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196280: 0x2c32014  dsllv       $a0, $v1, $s6
    ctx->pc = 0x196280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (GPR_U32(ctx, 22) & 0x3F));
    // 0x196284: 0xdca32208  ld          $v1, 0x2208($a1)
    ctx->pc = 0x196284u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8712)));
    // 0x196288: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x196288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x19628c: 0xfca32208  sd          $v1, 0x2208($a1)
    ctx->pc = 0x19628cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8712), GPR_U64(ctx, 3));
    // 0x196290: 0x96630036  lhu         $v1, 0x36($s3)
    ctx->pc = 0x196290u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x196294: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x196294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x196298: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x196298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x19629c: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x19629Cu;
    {
        const bool branch_taken_0x19629c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19629c) {
            ctx->pc = 0x196388u;
            return;
        }
    }
    ctx->pc = 0x1962A4u;
    // 0x1962a4: 0x13c000e5  beqz        $fp, . + 4 + (0xE5 << 2)
    ctx->pc = 0x1962A4u;
    {
        const bool branch_taken_0x1962a4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1962a4) {
            ctx->pc = 0x19663Cu;
            return;
        }
    }
    ctx->pc = 0x1962ACu;
    // 0x1962ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1962acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1962b0: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x1962b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1962b4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1962b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1962b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1962b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1962bc: 0x94650034  lhu         $a1, 0x34($v1)
    ctx->pc = 0x1962bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1962c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1962c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1962c4: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x1962c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1962c8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1962c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1962cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1962ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1962d0: 0xa4650036  sh          $a1, 0x36($v1)
    ctx->pc = 0x1962d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 5));
    // 0x1962d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1962d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1962d8: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x1962d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1962dc: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1962dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1962e0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1962e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1962e4: 0x94830036  lhu         $v1, 0x36($a0)
    ctx->pc = 0x1962e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x1962e8: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1962e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1962ec: 0xa4830036  sh          $v1, 0x36($a0)
    ctx->pc = 0x1962ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x1962f0: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x1962f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1962f4: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x1962f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x1962f8: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x1962f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1962fc: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x1962fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x196300: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x196300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x196304: 0x94630204  lhu         $v1, 0x204($v1)
    ctx->pc = 0x196304u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x196308: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x196308u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19630c: 0x17c0ffcc  bnez        $fp, . + 4 + (-0x34 << 2)
    ctx->pc = 0x19630Cu;
    {
        const bool branch_taken_0x19630c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x19630c) {
            ctx->pc = 0x196240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196240;
        }
    }
    ctx->pc = 0x196314u;
    // 0x196314: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x196314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196318: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x196318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x19631c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x19631cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196320: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x196320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x196324: 0x32c5ffff  andi        $a1, $s6, 0xFFFF
    ctx->pc = 0x196324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x196328: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x196328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x19632c: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x19632cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196330: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x196330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x196334: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x196334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x196338: 0xa4650204  sh          $a1, 0x204($v1)
    ctx->pc = 0x196338u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 516), (uint16_t)GPR_U32(ctx, 5));
    // 0x19633c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19633cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196340: 0x2c32014  dsllv       $a0, $v1, $s6
    ctx->pc = 0x196340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (GPR_U32(ctx, 22) & 0x3F));
    // 0x196344: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x196344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x196348: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x196348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x19634c: 0xfc642208  sd          $a0, 0x2208($v1)
    ctx->pc = 0x19634cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8712), GPR_U64(ctx, 4));
    // 0x196350: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x196350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x196354: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x196354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x196358: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x196358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19635c: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x19635cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x196360: 0x96630036  lhu         $v1, 0x36($s3)
    ctx->pc = 0x196360u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x196364: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x196364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x196368: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x196368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x19636c: 0x1060ffb4  beqz        $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x19636Cu;
    {
        const bool branch_taken_0x19636c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19636c) {
            ctx->pc = 0x196240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196240;
        }
    }
    ctx->pc = 0x196374u;
    // 0x196374: 0x96630036  lhu         $v1, 0x36($s3)
    ctx->pc = 0x196374u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x196378: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x196378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19637c: 0xa6630036  sh          $v1, 0x36($s3)
    ctx->pc = 0x19637cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x196380: 0x1000ffaf  b           . + 4 + (-0x51 << 2)
    ctx->pc = 0x196380u;
    {
        const bool branch_taken_0x196380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196380) {
            ctx->pc = 0x196240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196240;
        }
    }
    ctx->pc = 0x196388u;
}
