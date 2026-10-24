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

// Function: quorem
// Address: 0x115b08 - 0x115d1c
void quorem_0x115b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quorem_0x115b08");
#endif

    switch (ctx->pc) {
        case 0x115b98u: goto label_115b98;
        case 0x115c10u: goto label_115c10;
        case 0x115c3cu: goto label_115c3c;
        case 0x115c58u: goto label_115c58;
        case 0x115cd0u: goto label_115cd0;
        default: break;
    }

    ctx->pc = 0x115b08u;

    // 0x115b08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x115b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x115b0c: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x115b0cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b10: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x115b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x115b14: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x115b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x115b18: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x115b18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b1c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x115b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x115b20: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x115b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x115b24: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x115b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x115b28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x115b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x115b2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x115b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x115b30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115b34: 0x8dd00010  lw          $s0, 0x10($t6)
    ctx->pc = 0x115b34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x115b38: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x115b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x115b3c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x115b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x115b40: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x115B40u;
    {
        const bool branch_taken_0x115b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B40u;
        // 0x115b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b40) {
            ctx->pc = 0x115CF4u;
            goto label_115cf4;
        }
    }
    ctx->pc = 0x115B48u;
    // 0x115b48: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x115b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x115b4c: 0x25cb0014  addiu       $t3, $t6, 0x14
    ctx->pc = 0x115b4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
    // 0x115b50: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x115b50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x115b54: 0x26910014  addiu       $s1, $s4, 0x14
    ctx->pc = 0x115b54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x115b58: 0x1679821  addu        $s3, $t3, $a3
    ctx->pc = 0x115b58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x115b5c: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x115b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x115b60: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x115b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x115b64: 0x8d0d0000  lw          $t5, 0x0($t0)
    ctx->pc = 0x115b64u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x115b68: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x115b68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x115b70: 0x1a2001b  divu        $zero, $t5, $v0
    ctx->pc = 0x115b70u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
    // 0x115b74: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x115B74u;
    {
        const bool branch_taken_0x115b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115b74) {
            ctx->pc = 0x115B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115B74u;
            // 0x115b78: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x115B7Cu;
            goto label_115b7c;
        }
    }
    ctx->pc = 0x115B7Cu;
label_115b7c:
    // 0x115b7c: 0xa812  mflo        $s5
    ctx->pc = 0x115b7cu;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x115b80: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x115b80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b84: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x115B84u;
    {
        const bool branch_taken_0x115b84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x115B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B84u;
        // 0x115b88: 0x160b02d  daddu       $s6, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b84) {
            ctx->pc = 0x115C30u;
            goto label_115c30;
        }
    }
    ctx->pc = 0x115B8Cu;
    // 0x115b8c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x115b8cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x115b90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b94: 0x0  nop
    ctx->pc = 0x115b94u;
    // NOP
label_115b98:
    // 0x115b98: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x115b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x115b9c: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x115b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x115ba0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x115ba0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x115ba4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x115ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x115ba8: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x115ba8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x115bac: 0x522818  mult        $a1, $v0, $s2
    ctx->pc = 0x115bacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x115bb0: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x115bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x115bb4: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x115bb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x115bb8: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x115bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x115bbc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x115bbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x115bc0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x115bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x115bc4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x115bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x115bc8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x115bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x115bcc: 0x824821  addu        $t1, $a0, $v0
    ctx->pc = 0x115bccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x115bd0: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x115bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x115bd4: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x115bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x115bd8: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x115bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x115bdc: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x115bdcu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x115be0: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x115be0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x115be4: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x115be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x115be8: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x115be8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x115bec: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x115becu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x115bf0: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x115bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x115bf4: 0x56403  sra         $t4, $a1, 16
    ctx->pc = 0x115bf4u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x115bf8: 0x10e0ffe7  beqz        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x115BF8u;
    {
        const bool branch_taken_0x115bf8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x115BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BF8u;
        // 0x115bfc: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115bf8) {
            ctx->pc = 0x115B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115b98;
        }
    }
    ctx->pc = 0x115C00u;
    // 0x115c00: 0x15a0000c  bnez        $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x115C00u;
    {
        const bool branch_taken_0x115c00 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x115C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C00u;
        // 0x115c04: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c00) {
            ctx->pc = 0x115C34u;
            goto label_115c34;
        }
    }
    ctx->pc = 0x115C08u;
    // 0x115c08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x115C08u;
    {
        const bool branch_taken_0x115c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C08u;
        // 0x115c0c: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c08) {
            ctx->pc = 0x115C14u;
            goto label_115c14;
        }
    }
    ctx->pc = 0x115C10u;
label_115c10:
    // 0x115c10: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x115c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_115c14:
    // 0x115c14: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x115c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x115c18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x115C18u;
    {
        const bool branch_taken_0x115c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115c18) {
            ctx->pc = 0x115C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115C18u;
            // 0x115c1c: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115C30u;
            goto label_115c30;
        }
    }
    ctx->pc = 0x115C20u;
    // 0x115c20: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x115c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x115c24: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x115C24u;
    {
        const bool branch_taken_0x115c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C24u;
        // 0x115c28: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c24) {
            ctx->pc = 0x115C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115c10;
        }
    }
    ctx->pc = 0x115C2Cu;
    // 0x115c2c: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x115c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_115c30:
    // 0x115c30: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x115c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_115c34:
    // 0x115c34: 0xc0465a0  jal         func_119680
    ctx->pc = 0x115C34u;
    SET_GPR_U32(ctx, 31, 0x115C3Cu);
    ctx->pc = 0x115C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115C34u;
    // 0x115c38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119680u, 0x115C34u, 0x115C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C3Cu;
label_115c3c:
    // 0x115c3c: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x115C3Cu;
    {
        const bool branch_taken_0x115c3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x115C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C3Cu;
        // 0x115c40: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c3c) {
            ctx->pc = 0x115CF0u;
            goto label_115cf0;
        }
    }
    ctx->pc = 0x115C44u;
    // 0x115c44: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x115c44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x115c48: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x115c48u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c4c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x115c4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c50: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x115c50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c54: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x115c54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_115c58:
    // 0x115c58: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x115c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x115c5c: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x115c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x115c60: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x115c60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x115c64: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x115c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x115c68: 0x43402  srl         $a2, $a0, 16
    ctx->pc = 0x115c68u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x115c6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x115c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x115c70: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x115c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x115c74: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x115c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x115c78: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x115c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x115c7c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x115c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x115c80: 0xc24821  addu        $t1, $a2, $v0
    ctx->pc = 0x115c80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x115c84: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x115c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x115c88: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x115c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x115c8c: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x115c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x115c90: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x115c90u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x115c94: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x115c94u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x115c98: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x115c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x115c9c: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x115c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x115ca0: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x115ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x115ca4: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x115ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x115ca8: 0x56403  sra         $t4, $a1, 16
    ctx->pc = 0x115ca8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x115cac: 0x26b102b  sltu        $v0, $s3, $t3
    ctx->pc = 0x115cacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x115cb0: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x115CB0u;
    {
        const bool branch_taken_0x115cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CB0u;
        // 0x115cb4: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cb0) {
            ctx->pc = 0x115C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115c58;
        }
    }
    ctx->pc = 0x115CB8u;
    // 0x115cb8: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x115cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x115cbc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x115cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x115cc0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x115CC0u;
    {
        const bool branch_taken_0x115cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CC0u;
        // 0x115cc4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cc0) {
            ctx->pc = 0x115CF4u;
            goto label_115cf4;
        }
    }
    ctx->pc = 0x115CC8u;
    // 0x115cc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x115CC8u;
    {
        const bool branch_taken_0x115cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CC8u;
        // 0x115ccc: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cc8) {
            ctx->pc = 0x115CD4u;
            goto label_115cd4;
        }
    }
    ctx->pc = 0x115CD0u;
label_115cd0:
    // 0x115cd0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x115cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_115cd4:
    // 0x115cd4: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x115cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x115cd8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x115CD8u;
    {
        const bool branch_taken_0x115cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115cd8) {
            ctx->pc = 0x115CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115CD8u;
            // 0x115cdc: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115CF0u;
            goto label_115cf0;
        }
    }
    ctx->pc = 0x115CE0u;
    // 0x115ce0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x115ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x115ce4: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x115CE4u;
    {
        const bool branch_taken_0x115ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115ce4) {
            ctx->pc = 0x115CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115CE4u;
            // 0x115ce8: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115cd0;
        }
    }
    ctx->pc = 0x115CECu;
    // 0x115cec: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x115cecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_115cf0:
    // 0x115cf0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x115cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_115cf4:
    // 0x115cf4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x115cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115cf8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x115cf8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115cfc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x115cfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115d00: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x115d00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115d04: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x115d04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115d08: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x115d08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115d0c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x115d0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115d10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115d14: 0x3e00008  jr          $ra
    ctx->pc = 0x115D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D14u;
        // 0x115d18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115D1Cu;
}
