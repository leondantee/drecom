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

// Function: __kernel_rem_pio2
// Address: 0x112a80 - 0x1135e8
void ps2___kernel_rem_pio2_0x112a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_rem_pio2_0x112a80");
#endif

    switch (ctx->pc) {
        case 0x112b50u: goto label_112b50;
        case 0x112b70u: goto label_112b70;
        case 0x112bd0u: goto label_112bd0;
        case 0x112be8u: goto label_112be8;
        case 0x112c10u: goto label_112c10;
        case 0x112c1cu: goto label_112c1c;
        case 0x112c60u: goto label_112c60;
        case 0x112c88u: goto label_112c88;
        case 0x112c9cu: goto label_112c9c;
        case 0x112ca8u: goto label_112ca8;
        case 0x112cb0u: goto label_112cb0;
        case 0x112cc4u: goto label_112cc4;
        case 0x112cd0u: goto label_112cd0;
        case 0x112cd8u: goto label_112cd8;
        case 0x112cecu: goto label_112cec;
        case 0x112d04u: goto label_112d04;
        case 0x112d18u: goto label_112d18;
        case 0x112d20u: goto label_112d20;
        case 0x112d30u: goto label_112d30;
        case 0x112d3cu: goto label_112d3c;
        case 0x112d48u: goto label_112d48;
        case 0x112d54u: goto label_112d54;
        case 0x112d60u: goto label_112d60;
        case 0x112decu: goto label_112dec;
        case 0x112e28u: goto label_112e28;
        case 0x112ec8u: goto label_112ec8;
        case 0x112edcu: goto label_112edc;
        case 0x112ee8u: goto label_112ee8;
        case 0x112ef8u: goto label_112ef8;
        case 0x112f20u: goto label_112f20;
        case 0x112f70u: goto label_112f70;
        case 0x112fb8u: goto label_112fb8;
        case 0x112fe4u: goto label_112fe4;
        case 0x112ff8u: goto label_112ff8;
        case 0x113020u: goto label_113020;
        case 0x11302cu: goto label_11302c;
        case 0x11307cu: goto label_11307c;
        case 0x1130b0u: goto label_1130b0;
        case 0x1130ecu: goto label_1130ec;
        case 0x1130fcu: goto label_1130fc;
        case 0x113124u: goto label_113124;
        case 0x11312cu: goto label_11312c;
        case 0x113134u: goto label_113134;
        case 0x113150u: goto label_113150;
        case 0x11315cu: goto label_11315c;
        case 0x113164u: goto label_113164;
        case 0x113194u: goto label_113194;
        case 0x1131b4u: goto label_1131b4;
        case 0x1131d0u: goto label_1131d0;
        case 0x1131e0u: goto label_1131e0;
        case 0x1131ecu: goto label_1131ec;
        case 0x113200u: goto label_113200;
        case 0x113220u: goto label_113220;
        case 0x113248u: goto label_113248;
        case 0x113274u: goto label_113274;
        case 0x113280u: goto label_113280;
        case 0x113308u: goto label_113308;
        case 0x113320u: goto label_113320;
        case 0x113348u: goto label_113348;
        case 0x113368u: goto label_113368;
        case 0x113380u: goto label_113380;
        case 0x1133b4u: goto label_1133b4;
        case 0x1133c8u: goto label_1133c8;
        case 0x1133e0u: goto label_1133e0;
        case 0x1133f4u: goto label_1133f4;
        case 0x113424u: goto label_113424;
        case 0x113440u: goto label_113440;
        case 0x11346cu: goto label_11346c;
        case 0x11347cu: goto label_11347c;
        case 0x113488u: goto label_113488;
        case 0x1134a8u: goto label_1134a8;
        case 0x1134d4u: goto label_1134d4;
        case 0x1134e4u: goto label_1134e4;
        case 0x1134f0u: goto label_1134f0;
        case 0x113520u: goto label_113520;
        case 0x113538u: goto label_113538;
        case 0x113584u: goto label_113584;
        case 0x113598u: goto label_113598;
        case 0x1135acu: goto label_1135ac;
        default: break;
    }

    ctx->pc = 0x112a80u;

    // 0x112a80: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x112a80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x112a84: 0x24cbfffd  addiu       $t3, $a2, -0x3
    ctx->pc = 0x112a84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x112a88: 0x16a001a  div         $zero, $t3, $t2
    ctx->pc = 0x112a88u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x112a8c: 0x27bdfcf0  addiu       $sp, $sp, -0x310
    ctx->pc = 0x112a8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966512));
    // 0x112a90: 0xafa80238  sw          $t0, 0x238($sp)
    ctx->pc = 0x112a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 8));
    // 0x112a94: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x112a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x112a98: 0xffbe02f0  sd          $fp, 0x2F0($sp)
    ctx->pc = 0x112a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 30));
    // 0x112a9c: 0x2442d700  addiu       $v0, $v0, -0x2900
    ctx->pc = 0x112a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956800));
    // 0x112aa0: 0xffb402b0  sd          $s4, 0x2B0($sp)
    ctx->pc = 0x112aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 20));
    // 0x112aa4: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x112aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x112aa8: 0xffb20290  sd          $s2, 0x290($sp)
    ctx->pc = 0x112aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 18));
    // 0x112aac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x112aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x112ab0: 0xffb10280  sd          $s1, 0x280($sp)
    ctx->pc = 0x112ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 17));
    // 0x112ab4: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x112ab4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x112ab8: 0xffbf0300  sd          $ra, 0x300($sp)
    ctx->pc = 0x112ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 31));
    // 0x112abc: 0x24feffff  addiu       $fp, $a3, -0x1
    ctx->pc = 0x112abcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x112ac0: 0xffb702e0  sd          $s7, 0x2E0($sp)
    ctx->pc = 0x112ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 23));
    // 0x112ac4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x112ac4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ac8: 0xffb602d0  sd          $s6, 0x2D0($sp)
    ctx->pc = 0x112ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 22));
    // 0x112acc: 0xffb502c0  sd          $s5, 0x2C0($sp)
    ctx->pc = 0x112accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 21));
    // 0x112ad0: 0xffb302a0  sd          $s3, 0x2A0($sp)
    ctx->pc = 0x112ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 19));
    // 0x112ad4: 0xffb00270  sd          $s0, 0x270($sp)
    ctx->pc = 0x112ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 16));
    // 0x112ad8: 0xafa40230  sw          $a0, 0x230($sp)
    ctx->pc = 0x112ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 4));
    // 0x112adc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x112adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112ae0: 0xafa50234  sw          $a1, 0x234($sp)
    ctx->pc = 0x112ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 5));
    // 0x112ae4: 0xafa30244  sw          $v1, 0x244($sp)
    ctx->pc = 0x112ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 3));
    // 0x112ae8: 0x3c39021  addu        $s2, $fp, $v1
    ctx->pc = 0x112ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x112aec: 0xafa9023c  sw          $t1, 0x23C($sp)
    ctx->pc = 0x112aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 9));
    // 0x112af0: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x112AF0u;
    {
        const bool branch_taken_0x112af0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x112af0) {
            ctx->pc = 0x112AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112AF0u;
            // 0x112af4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x112AF8u;
            goto label_112af8;
        }
    }
    ctx->pc = 0x112AF8u;
label_112af8:
    // 0x112af8: 0x5812  mflo        $t3
    ctx->pc = 0x112af8u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x112afc: 0xafab0240  sw          $t3, 0x240($sp)
    ctx->pc = 0x112afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 11));
    // 0x112b00: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x112b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b04: 0x18b602a  slt         $t4, $t4, $t3
    ctx->pc = 0x112b04u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x112b08: 0xc100a  movz        $v0, $zero, $t4
    ctx->pc = 0x112b08u;
    if (GPR_U64(ctx, 12) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x112b0c: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x112b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x112b10: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x112b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x112b14: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x112b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x112b18: 0x7e8823  subu        $s1, $v1, $fp
    ctx->pc = 0x112b18u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x112b1c: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x112b1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x112b20: 0xca3023  subu        $a2, $a2, $t2
    ctx->pc = 0x112b20u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x112b24: 0x640001c  bltz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x112B24u;
    {
        const bool branch_taken_0x112b24 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x112B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B24u;
        // 0x112b28: 0xafa60248  sw          $a2, 0x248($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b24) {
            ctx->pc = 0x112B98u;
            goto label_112b98;
        }
    }
    ctx->pc = 0x112B2Cu;
    // 0x112b2c: 0x8fa40244  lw          $a0, 0x244($sp)
    ctx->pc = 0x112b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x112b30: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x112b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x112b34: 0x29060003  slti        $a2, $t0, 0x3
    ctx->pc = 0x112b34u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x112b38: 0xafa50254  sw          $a1, 0x254($sp)
    ctx->pc = 0x112b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 5));
    // 0x112b3c: 0x28840000  slti        $a0, $a0, 0x0
    ctx->pc = 0x112b3cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x112b40: 0xafa6025c  sw          $a2, 0x25C($sp)
    ctx->pc = 0x112b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 6));
    // 0x112b44: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x112b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
    // 0x112b48: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x112b48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x112b4c: 0x0  nop
    ctx->pc = 0x112b4cu;
    // NOP
label_112b50:
    // 0x112b50: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x112b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x112b54: 0x6200008  bltz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x112B54u;
    {
        const bool branch_taken_0x112b54 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x112B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B54u;
        // 0x112b58: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b54) {
            ctx->pc = 0x112B78u;
            goto label_112b78;
        }
    }
    ctx->pc = 0x112B5Cu;
    // 0x112b5c: 0x8fa8023c  lw          $t0, 0x23C($sp)
    ctx->pc = 0x112b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x112b60: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x112b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x112b64: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x112b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x112b68: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x112B68u;
    SET_GPR_U32(ctx, 31, 0x112B70u);
    ctx->pc = 0x112B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B68u;
    // 0x112b6c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x112B68u, 0x112B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B70u;
label_112b70:
    // 0x112b70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x112B70u;
    {
        const bool branch_taken_0x112b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B70u;
        // 0x112b74: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b70) {
            ctx->pc = 0x112B80u;
            goto label_112b80;
        }
    }
    ctx->pc = 0x112B78u;
label_112b78:
    // 0x112b78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x112b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b7c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x112b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_112b80:
    // 0x112b80: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x112b80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x112b84: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x112b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x112b88: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x112B88u;
    {
        const bool branch_taken_0x112b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B88u;
        // 0x112b8c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b88) {
            ctx->pc = 0x112B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112b50;
        }
    }
    ctx->pc = 0x112B90u;
    // 0x112b90: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x112B90u;
    {
        const bool branch_taken_0x112b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B90u;
        // 0x112b94: 0x8fa60260  lw          $a2, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b90) {
            ctx->pc = 0x112BBCu;
            goto label_112bbc;
        }
    }
    ctx->pc = 0x112B98u;
label_112b98:
    // 0x112b98: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x112b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x112b9c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x112b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x112ba0: 0x8fa50238  lw          $a1, 0x238($sp)
    ctx->pc = 0x112ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x112ba4: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x112ba4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x112ba8: 0xafa40254  sw          $a0, 0x254($sp)
    ctx->pc = 0x112ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 4));
    // 0x112bac: 0x28a50003  slti        $a1, $a1, 0x3
    ctx->pc = 0x112bacu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x112bb0: 0xafa30260  sw          $v1, 0x260($sp)
    ctx->pc = 0x112bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
    // 0x112bb4: 0xafa5025c  sw          $a1, 0x25C($sp)
    ctx->pc = 0x112bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 5));
    // 0x112bb8: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x112bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_112bbc:
    // 0x112bbc: 0x14c00027  bnez        $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x112BBCu;
    {
        const bool branch_taken_0x112bbc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x112BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BBCu;
        // 0x112bc0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112bbc) {
            ctx->pc = 0x112C5Cu;
            goto label_112c5c;
        }
    }
    ctx->pc = 0x112BC4u;
    // 0x112bc4: 0x2bd70000  slti        $s7, $fp, 0x0
    ctx->pc = 0x112bc4u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x112bc8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x112bc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112bcc: 0x0  nop
    ctx->pc = 0x112bccu;
    // NOP
label_112bd0:
    // 0x112bd0: 0x16e00018  bnez        $s7, . + 4 + (0x18 << 2)
    ctx->pc = 0x112BD0u;
    {
        const bool branch_taken_0x112bd0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x112BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BD0u;
        // 0x112bd4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112bd0) {
            ctx->pc = 0x112C34u;
            goto label_112c34;
        }
    }
    ctx->pc = 0x112BD8u;
    // 0x112bd8: 0x3d4a821  addu        $s5, $fp, $s4
    ctx->pc = 0x112bd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x112bdc: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x112bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x112be0: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x112be0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x112be4: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x112be4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_112be8:
    // 0x112be8: 0x2b11023  subu        $v0, $s5, $s1
    ctx->pc = 0x112be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x112bec: 0x8fa80230  lw          $t0, 0x230($sp)
    ctx->pc = 0x112becu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x112bf0: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x112bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x112bf4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x112bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x112bf8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x112bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x112bfc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x112bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x112c00: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x112c00u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112c04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x112c04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x112c08: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x112C08u;
    SET_GPR_U32(ctx, 31, 0x112C10u);
    ctx->pc = 0x112C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C08u;
    // 0x112c0c: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x112C08u, 0x112C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C10u;
label_112c10:
    // 0x112c10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x112c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c14: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x112C14u;
    SET_GPR_U32(ctx, 31, 0x112C1Cu);
    ctx->pc = 0x112C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C14u;
    // 0x112c18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x112C14u, 0x112C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C1Cu;
label_112c1c:
    // 0x112c1c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x112c1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c20: 0x3d1102a  slt         $v0, $fp, $s1
    ctx->pc = 0x112c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x112c24: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x112C24u;
    {
        const bool branch_taken_0x112c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C24u;
        // 0x112c28: 0x8fa20254  lw          $v0, 0x254($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c24) {
            ctx->pc = 0x112BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112be8;
        }
    }
    ctx->pc = 0x112C2Cu;
    // 0x112c2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x112C2Cu;
    {
        const bool branch_taken_0x112c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C2Cu;
        // 0x112c30: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c2c) {
            ctx->pc = 0x112C44u;
            goto label_112c44;
        }
    }
    ctx->pc = 0x112C34u;
label_112c34:
    // 0x112c34: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x112c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x112c38: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x112c38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x112c3c: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x112c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x112c40: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x112c40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_112c44:
    // 0x112c44: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x112c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x112c48: 0xfc760000  sd          $s6, 0x0($v1)
    ctx->pc = 0x112c48u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 22));
    // 0x112c4c: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x112c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x112c50: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x112c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x112c54: 0x1040ffde  beqz        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x112C54u;
    {
        const bool branch_taken_0x112c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C54u;
        // 0x112c58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c54) {
            ctx->pc = 0x112BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112bd0;
        }
    }
    ctx->pc = 0x112C5Cu;
label_112c5c:
    // 0x112c5c: 0x8fb70244  lw          $s7, 0x244($sp)
    ctx->pc = 0x112c5cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_112c60:
    // 0x112c60: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x112c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x112c64: 0x1718c0  sll         $v1, $s7, 3
    ctx->pc = 0x112c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x112c68: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x112c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c6c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x112c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x112c70: 0x1ae00021  blez        $s7, . + 4 + (0x21 << 2)
    ctx->pc = 0x112C70u;
    {
        const bool branch_taken_0x112c70 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x112C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C70u;
        // 0x112c74: 0xdc520000  ld          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c70) {
            ctx->pc = 0x112CF8u;
            goto label_112cf8;
        }
    }
    ctx->pc = 0x112C78u;
    // 0x112c78: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x112c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x112c7c: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x112c7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c80: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x112c80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112c84: 0x0  nop
    ctx->pc = 0x112c84u;
    // NOP
label_112c88:
    // 0x112c88: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x112c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x112c8c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x112c8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x112c90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c94: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x112C94u;
    SET_GPR_U32(ctx, 31, 0x112C9Cu);
    ctx->pc = 0x112C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C94u;
    // 0x112c98: 0x2630ffff  addiu       $s0, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x112C94u, 0x112C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C9Cu;
label_112c9c:
    // 0x112c9c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x112c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ca0: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x112CA0u;
    SET_GPR_U32(ctx, 31, 0x112CA8u);
    ctx->pc = 0x112CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CA0u;
    // 0x112ca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x112CA0u, 0x112CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CA8u;
label_112ca8:
    // 0x112ca8: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x112CA8u;
    SET_GPR_U32(ctx, 31, 0x112CB0u);
    ctx->pc = 0x112CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CA8u;
    // 0x112cac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x112CA8u, 0x112CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CB0u;
label_112cb0:
    // 0x112cb0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x112cb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112cb4: 0x340582e0  ori         $a1, $zero, 0x82E0
    ctx->pc = 0x112cb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x112cb8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x112cb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x112cbc: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x112CBCu;
    SET_GPR_U32(ctx, 31, 0x112CC4u);
    ctx->pc = 0x112CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CBCu;
    // 0x112cc0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x112CBCu, 0x112CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CC4u;
label_112cc4:
    // 0x112cc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112cc8: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x112CC8u;
    SET_GPR_U32(ctx, 31, 0x112CD0u);
    ctx->pc = 0x112CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CC8u;
    // 0x112ccc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x112CC8u, 0x112CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CD0u;
label_112cd0:
    // 0x112cd0: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x112CD0u;
    SET_GPR_U32(ctx, 31, 0x112CD8u);
    ctx->pc = 0x112CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CD0u;
    // 0x112cd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x112CD0u, 0x112CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CD8u;
label_112cd8:
    // 0x112cd8: 0xde640000  ld          $a0, 0x0($s3)
    ctx->pc = 0x112cd8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x112cdc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x112cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ce0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x112ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x112ce4: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x112CE4u;
    SET_GPR_U32(ctx, 31, 0x112CECu);
    ctx->pc = 0x112CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CE4u;
    // 0x112ce8: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x112CE4u, 0x112CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CECu;
label_112cec:
    // 0x112cec: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x112cecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x112cf0: 0x1e20ffe5  bgtz        $s1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x112CF0u;
    {
        const bool branch_taken_0x112cf0 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x112CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CF0u;
        // 0x112cf4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112cf0) {
            ctx->pc = 0x112C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112c88;
        }
    }
    ctx->pc = 0x112CF8u;
label_112cf8:
    // 0x112cf8: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x112cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x112cfc: 0xc045284  jal         func_114A10
    ctx->pc = 0x112CFCu;
    SET_GPR_U32(ctx, 31, 0x112D04u);
    ctx->pc = 0x112D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CFCu;
    // 0x112d00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A10u, 0x112CFCu, 0x112D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D04u;
label_112d04:
    // 0x112d04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x112d04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d08: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x112d08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x112d0c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x112d0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x112d10: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x112D10u;
    SET_GPR_U32(ctx, 31, 0x112D18u);
    ctx->pc = 0x112D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D10u;
    // 0x112d14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x112D10u, 0x112D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D18u;
label_112d18:
    // 0x112d18: 0xc0451e4  jal         func_114790
    ctx->pc = 0x112D18u;
    SET_GPR_U32(ctx, 31, 0x112D20u);
    ctx->pc = 0x112D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D18u;
    // 0x112d1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114790u;
    {
        ctx->pc = 0x112D20u;
        ps2_stubs::floor(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x112D20u) { return; }
    ctx->pc = 0x112D20u;
label_112d20:
    // 0x112d20: 0x34058040  ori         $a1, $zero, 0x8040
    ctx->pc = 0x112d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
    // 0x112d24: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x112d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x112d28: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x112D28u;
    SET_GPR_U32(ctx, 31, 0x112D30u);
    ctx->pc = 0x112D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D28u;
    // 0x112d2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x112D28u, 0x112D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D30u;
label_112d30:
    // 0x112d30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d34: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x112D34u;
    SET_GPR_U32(ctx, 31, 0x112D3Cu);
    ctx->pc = 0x112D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D34u;
    // 0x112d38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x112D34u, 0x112D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D3Cu;
label_112d3c:
    // 0x112d3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x112d3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d40: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x112D40u;
    SET_GPR_U32(ctx, 31, 0x112D48u);
    ctx->pc = 0x112D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D40u;
    // 0x112d44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x112D40u, 0x112D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D48u;
label_112d48:
    // 0x112d48: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x112d48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d4c: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x112D4Cu;
    SET_GPR_U32(ctx, 31, 0x112D54u);
    ctx->pc = 0x112D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D4Cu;
    // 0x112d50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x112D4Cu, 0x112D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D54u;
label_112d54:
    // 0x112d54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d58: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x112D58u;
    SET_GPR_U32(ctx, 31, 0x112D60u);
    ctx->pc = 0x112D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D58u;
    // 0x112d5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x112D58u, 0x112D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D60u;
label_112d60:
    // 0x112d60: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x112d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x112d64: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x112D64u;
    {
        const bool branch_taken_0x112d64 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x112D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D64u;
        // 0x112d68: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d64) {
            ctx->pc = 0x112DB0u;
            goto label_112db0;
        }
    }
    ctx->pc = 0x112D6Cu;
    // 0x112d6c: 0x26e2ffff  addiu       $v0, $s7, -0x1
    ctx->pc = 0x112d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x112d70: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x112d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x112d74: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x112d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x112d78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112d7c: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x112d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x112d80: 0x8fa60248  lw          $a2, 0x248($sp)
    ctx->pc = 0x112d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x112d84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x112d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x112d88: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x112d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x112d8c: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x112d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x112d90: 0x62a007  srav        $s4, $v0, $v1
    ctx->pc = 0x112d90u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x112d94: 0x741804  sllv        $v1, $s4, $v1
    ctx->pc = 0x112d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 3) & 0x1F));
    // 0x112d98: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x112d98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x112d9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x112d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112da0: 0x822007  srav        $a0, $v0, $a0
    ctx->pc = 0x112da0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x112da4: 0xafa4024c  sw          $a0, 0x24C($sp)
    ctx->pc = 0x112da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 4));
    // 0x112da8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x112DA8u;
    {
        const bool branch_taken_0x112da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DA8u;
        // 0x112dac: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112da8) {
            ctx->pc = 0x112DFCu;
            goto label_112dfc;
        }
    }
    ctx->pc = 0x112DB0u;
label_112db0:
    // 0x112db0: 0x8fa80248  lw          $t0, 0x248($sp)
    ctx->pc = 0x112db0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x112db4: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x112DB4u;
    {
        const bool branch_taken_0x112db4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x112DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DB4u;
        // 0x112db8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112db4) {
            ctx->pc = 0x112DD8u;
            goto label_112dd8;
        }
    }
    ctx->pc = 0x112DBCu;
    // 0x112dbc: 0x26e2ffff  addiu       $v0, $s7, -0x1
    ctx->pc = 0x112dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x112dc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112dc4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x112dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x112dc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x112dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112dcc: 0x425c3  sra         $a0, $a0, 23
    ctx->pc = 0x112dccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 23));
    // 0x112dd0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x112DD0u;
    {
        const bool branch_taken_0x112dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DD0u;
        // 0x112dd4: 0xafa4024c  sw          $a0, 0x24C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112dd0) {
            ctx->pc = 0x112DFCu;
            goto label_112dfc;
        }
    }
    ctx->pc = 0x112DD8u;
label_112dd8:
    // 0x112dd8: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x112dd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x112ddc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x112ddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x112de0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112de4: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x112DE4u;
    SET_GPR_U32(ctx, 31, 0x112DECu);
    ctx->pc = 0x112DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112DE4u;
    // 0x112de8: 0xafa2024c  sw          $v0, 0x24C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x112DE4u, 0x112DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DECu;
label_112dec:
    // 0x112dec: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x112decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x112df0: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x112df0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x112df4: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x112df4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x112df8: 0xafa3024c  sw          $v1, 0x24C($sp)
    ctx->pc = 0x112df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 3));
label_112dfc:
    // 0x112dfc: 0x8fa4024c  lw          $a0, 0x24C($sp)
    ctx->pc = 0x112dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x112e00: 0x1880003b  blez        $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x112E00u;
    {
        const bool branch_taken_0x112e00 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x112E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E00u;
        // 0x112e04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e00) {
            ctx->pc = 0x112EF0u;
            goto label_112ef0;
        }
    }
    ctx->pc = 0x112E08u;
    // 0x112e08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x112e08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x112e0c: 0x1ae00011  blez        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x112E0Cu;
    {
        const bool branch_taken_0x112e0c = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x112E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E0Cu;
        // 0x112e10: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e0c) {
            ctx->pc = 0x112E54u;
            goto label_112e54;
        }
    }
    ctx->pc = 0x112E14u;
    // 0x112e14: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x112e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x112e18: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x112e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x112e1c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x112e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x112e20: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x112e20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e24: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x112e24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_112e28:
    // 0x112e28: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x112E28u;
    {
        const bool branch_taken_0x112e28 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x112E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E28u;
        // 0x112e2c: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e28) {
            ctx->pc = 0x112E40u;
            goto label_112e40;
        }
    }
    ctx->pc = 0x112E30u;
    // 0x112e30: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x112E30u;
    {
        const bool branch_taken_0x112e30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E30u;
        // 0x112e34: 0xb11023  subu        $v0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e30) {
            ctx->pc = 0x112E48u;
            goto label_112e48;
        }
    }
    ctx->pc = 0x112E38u;
    // 0x112e38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x112E38u;
    {
        const bool branch_taken_0x112e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E38u;
        // 0x112e3c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e38) {
            ctx->pc = 0x112E44u;
            goto label_112e44;
        }
    }
    ctx->pc = 0x112E40u;
label_112e40:
    // 0x112e40: 0x911023  subu        $v0, $a0, $s1
    ctx->pc = 0x112e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_112e44:
    // 0x112e44: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x112e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_112e48:
    // 0x112e48: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x112e48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x112e4c: 0x1680fff6  bnez        $s4, . + 4 + (-0xA << 2)
    ctx->pc = 0x112E4Cu;
    {
        const bool branch_taken_0x112e4c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x112E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E4Cu;
        // 0x112e50: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e4c) {
            ctx->pc = 0x112E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112e28;
        }
    }
    ctx->pc = 0x112E54u;
label_112e54:
    // 0x112e54: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x112e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x112e58: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x112E58u;
    {
        const bool branch_taken_0x112e58 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x112E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E58u;
        // 0x112e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e58) {
            ctx->pc = 0x112EA4u;
            goto label_112ea4;
        }
    }
    ctx->pc = 0x112E60u;
    // 0x112e60: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112E60u;
    {
        const bool branch_taken_0x112e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x112E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E60u;
        // 0x112e64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e60) {
            ctx->pc = 0x112E78u;
            goto label_112e78;
        }
    }
    ctx->pc = 0x112E68u;
    // 0x112e68: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x112E68u;
    {
        const bool branch_taken_0x112e68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x112E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E68u;
        // 0x112e6c: 0x8fa6024c  lw          $a2, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e68) {
            ctx->pc = 0x112E84u;
            goto label_112e84;
        }
    }
    ctx->pc = 0x112E70u;
    // 0x112e70: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x112E70u;
    {
        const bool branch_taken_0x112e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112e70) {
            ctx->pc = 0x112EACu;
            goto label_112eac;
        }
    }
    ctx->pc = 0x112E78u;
label_112e78:
    // 0x112e78: 0x26e3ffff  addiu       $v1, $s7, -0x1
    ctx->pc = 0x112e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x112e7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x112E7Cu;
    {
        const bool branch_taken_0x112e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E7Cu;
        // 0x112e80: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e7c) {
            ctx->pc = 0x112E8Cu;
            goto label_112e8c;
        }
    }
    ctx->pc = 0x112E84u;
label_112e84:
    // 0x112e84: 0x26e3ffff  addiu       $v1, $s7, -0x1
    ctx->pc = 0x112e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x112e88: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x112e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_112e8c:
    // 0x112e8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112e90: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x112e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x112e94: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x112e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x112e98: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x112e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x112e9c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x112e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x112ea0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x112ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_112ea4:
    // 0x112ea4: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x112ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x112ea8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x112ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_112eac:
    // 0x112eac: 0x14c20010  bne         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x112EACu;
    {
        const bool branch_taken_0x112eac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x112EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EACu;
        // 0x112eb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112eac) {
            ctx->pc = 0x112EF0u;
            goto label_112ef0;
        }
    }
    ctx->pc = 0x112EB4u;
    // 0x112eb4: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x112eb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x112eb8: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x112eb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x112ebc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x112ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ec0: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x112EC0u;
    SET_GPR_U32(ctx, 31, 0x112EC8u);
    ctx->pc = 0x112EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112EC0u;
    // 0x112ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x112EC0u, 0x112EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112EC8u;
label_112ec8:
    // 0x112ec8: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x112EC8u;
    {
        const bool branch_taken_0x112ec8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x112ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EC8u;
        // 0x112ecc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ec8) {
            ctx->pc = 0x112EECu;
            goto label_112eec;
        }
    }
    ctx->pc = 0x112ED0u;
    // 0x112ed0: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x112ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x112ed4: 0xc045284  jal         func_114A10
    ctx->pc = 0x112ED4u;
    SET_GPR_U32(ctx, 31, 0x112EDCu);
    ctx->pc = 0x112ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112ED4u;
    // 0x112ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A10u, 0x112ED4u, 0x112EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112EDCu;
label_112edc:
    // 0x112edc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ee0: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x112EE0u;
    SET_GPR_U32(ctx, 31, 0x112EE8u);
    ctx->pc = 0x112EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112EE0u;
    // 0x112ee4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x112EE0u, 0x112EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112EE8u;
label_112ee8:
    // 0x112ee8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x112ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112eec:
    // 0x112eec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_112ef0:
    // 0x112ef0: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x112EF0u;
    SET_GPR_U32(ctx, 31, 0x112EF8u);
    ctx->pc = 0x112EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112EF0u;
    // 0x112ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x112EF0u, 0x112EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112EF8u;
label_112ef8:
    // 0x112ef8: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x112EF8u;
    {
        const bool branch_taken_0x112ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EF8u;
        // 0x112efc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ef8) {
            ctx->pc = 0x113074u;
            goto label_113074;
        }
    }
    ctx->pc = 0x112F00u;
    // 0x112f00: 0x8fa80244  lw          $t0, 0x244($sp)
    ctx->pc = 0x112f00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x112f04: 0x26f4ffff  addiu       $s4, $s7, -0x1
    ctx->pc = 0x112f04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x112f08: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x112f08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x112f0c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x112F0Cu;
    {
        const bool branch_taken_0x112f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F0Cu;
        // 0x112f10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f0c) {
            ctx->pc = 0x112F40u;
            goto label_112f40;
        }
    }
    ctx->pc = 0x112F14u;
    // 0x112f14: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x112f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x112f18: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x112f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x112f1c: 0x0  nop
    ctx->pc = 0x112f1cu;
    // NOP
label_112f20:
    // 0x112f20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x112f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x112f24: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x112f24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x112f28: 0x8fa50244  lw          $a1, 0x244($sp)
    ctx->pc = 0x112f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x112f2c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x112f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x112f30: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x112f30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x112f34: 0x285102a  slt         $v0, $s4, $a1
    ctx->pc = 0x112f34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x112f38: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x112F38u;
    {
        const bool branch_taken_0x112f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112f38) {
            ctx->pc = 0x112F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112f20;
        }
    }
    ctx->pc = 0x112F40u;
label_112f40:
    // 0x112f40: 0x1620004c  bnez        $s1, . + 4 + (0x4C << 2)
    ctx->pc = 0x112F40u;
    {
        const bool branch_taken_0x112f40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x112F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F40u;
        // 0x112f44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f40) {
            ctx->pc = 0x113074u;
            goto label_113074;
        }
    }
    ctx->pc = 0x112F48u;
    // 0x112f48: 0x8fa60244  lw          $a2, 0x244($sp)
    ctx->pc = 0x112f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x112f4c: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x112f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x112f50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112f54: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x112f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x112f58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x112f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112f5c: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x112F5Cu;
    {
        const bool branch_taken_0x112f5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x112F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F5Cu;
        // 0x112f60: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f5c) {
            ctx->pc = 0x112F94u;
            goto label_112f94;
        }
    }
    ctx->pc = 0x112F64u;
    // 0x112f64: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x112f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x112f68: 0x8fa80244  lw          $t0, 0x244($sp)
    ctx->pc = 0x112f68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x112f6c: 0x0  nop
    ctx->pc = 0x112f6cu;
    // NOP
label_112f70:
    // 0x112f70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x112f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x112f74: 0x1101023  subu        $v0, $t0, $s0
    ctx->pc = 0x112f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x112f78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112f7c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x112f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x112f80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x112f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112f84: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x112F84u;
    {
        const bool branch_taken_0x112f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x112f84) {
            ctx->pc = 0x112F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112f70;
        }
    }
    ctx->pc = 0x112F8Cu;
    // 0x112f8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x112F8Cu;
    {
        const bool branch_taken_0x112f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F8Cu;
        // 0x112f90: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f8c) {
            ctx->pc = 0x112F9Cu;
            goto label_112f9c;
        }
    }
    ctx->pc = 0x112F94u;
label_112f94:
    // 0x112f94: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x112f94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x112f98: 0x2f0b821  addu        $s7, $s7, $s0
    ctx->pc = 0x112f98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_112f9c:
    // 0x112f9c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x112f9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fa0: 0x2f4102a  slt         $v0, $s7, $s4
    ctx->pc = 0x112fa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x112fa4: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x112FA4u;
    {
        const bool branch_taken_0x112fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FA4u;
        // 0x112fa8: 0xafb70250  sw          $s7, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112fa4) {
            ctx->pc = 0x11306Cu;
            goto label_11306c;
        }
    }
    ctx->pc = 0x112FACu;
    // 0x112fac: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x112facu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x112fb0: 0x2bd70000  slti        $s7, $fp, 0x0
    ctx->pc = 0x112fb0u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x112fb4: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x112fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_112fb8:
    // 0x112fb8: 0x3d4a821  addu        $s5, $fp, $s4
    ctx->pc = 0x112fb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x112fbc: 0x8fa4023c  lw          $a0, 0x23C($sp)
    ctx->pc = 0x112fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x112fc0: 0x1580c0  sll         $s0, $s5, 3
    ctx->pc = 0x112fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x112fc4: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x112fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x112fc8: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x112fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x112fcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112fd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x112fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fd4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x112fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112fd8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x112fd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fdc: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x112FDCu;
    SET_GPR_U32(ctx, 31, 0x112FE4u);
    ctx->pc = 0x112FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112FDCu;
    // 0x112fe0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x112FDCu, 0x112FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112FE4u;
label_112fe4:
    // 0x112fe4: 0x16e00017  bnez        $s7, . + 4 + (0x17 << 2)
    ctx->pc = 0x112FE4u;
    {
        const bool branch_taken_0x112fe4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x112FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FE4u;
        // 0x112fe8: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112fe4) {
            ctx->pc = 0x113044u;
            goto label_113044;
        }
    }
    ctx->pc = 0x112FECu;
    // 0x112fec: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x112fecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x112ff0: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x112ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x112ff4: 0x0  nop
    ctx->pc = 0x112ff4u;
    // NOP
label_112ff8:
    // 0x112ff8: 0x8fa50230  lw          $a1, 0x230($sp)
    ctx->pc = 0x112ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x112ffc: 0x2b11023  subu        $v0, $s5, $s1
    ctx->pc = 0x112ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x113000: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x113000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x113004: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x113004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x113008: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x113008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11300c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x11300cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x113010: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x113010u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113014: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x113014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x113018: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x113018u;
    SET_GPR_U32(ctx, 31, 0x113020u);
    ctx->pc = 0x11301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113018u;
    // 0x11301c: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x113018u, 0x113020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113020u;
label_113020:
    // 0x113020: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x113020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113024: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x113024u;
    SET_GPR_U32(ctx, 31, 0x11302Cu);
    ctx->pc = 0x113028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113024u;
    // 0x113028: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x113024u, 0x11302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11302Cu;
label_11302c:
    // 0x11302c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11302cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113030: 0x3d1102a  slt         $v0, $fp, $s1
    ctx->pc = 0x113030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x113034: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x113034u;
    {
        const bool branch_taken_0x113034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113034u;
        // 0x113038: 0x8fa60254  lw          $a2, 0x254($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113034) {
            ctx->pc = 0x112FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112ff8;
        }
    }
    ctx->pc = 0x11303Cu;
    // 0x11303c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11303Cu;
    {
        const bool branch_taken_0x11303c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11303Cu;
        // 0x113040: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11303c) {
            ctx->pc = 0x113054u;
            goto label_113054;
        }
    }
    ctx->pc = 0x113044u;
label_113044:
    // 0x113044: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x113044u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x113048: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x113048u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11304c: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x11304cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x113050: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x113050u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_113054:
    // 0x113054: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x113054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x113058: 0xfc760000  sd          $s6, 0x0($v1)
    ctx->pc = 0x113058u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 22));
    // 0x11305c: 0x8fa80250  lw          $t0, 0x250($sp)
    ctx->pc = 0x11305cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x113060: 0x114102a  slt         $v0, $t0, $s4
    ctx->pc = 0x113060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x113064: 0x1040ffd4  beqz        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x113064u;
    {
        const bool branch_taken_0x113064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113064u;
        // 0x113068: 0x8fa30240  lw          $v1, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113064) {
            ctx->pc = 0x112FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112fb8;
        }
    }
    ctx->pc = 0x11306Cu;
label_11306c:
    // 0x11306c: 0x1000fefc  b           . + 4 + (-0x104 << 2)
    ctx->pc = 0x11306Cu;
    {
        const bool branch_taken_0x11306c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11306Cu;
        // 0x113070: 0x8fb70250  lw          $s7, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11306c) {
            ctx->pc = 0x112C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112c60;
        }
    }
    ctx->pc = 0x113074u;
label_113074:
    // 0x113074: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x113074u;
    SET_GPR_U32(ctx, 31, 0x11307Cu);
    ctx->pc = 0x113078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113074u;
    // 0x113078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x113074u, 0x11307Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11307Cu;
label_11307c:
    // 0x11307c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11307Cu;
    {
        const bool branch_taken_0x11307c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11307Cu;
        // 0x113080: 0x8fa60248  lw          $a2, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11307c) {
            ctx->pc = 0x1130D8u;
            goto label_1130d8;
        }
    }
    ctx->pc = 0x113084u;
    // 0x113084: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x113084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x113088: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x113088u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x11308c: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x11308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x113090: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x113090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    // 0x113094: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x113094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x113098: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x113098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11309c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11309cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1130a0: 0x1480003e  bnez        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1130A0u;
    {
        const bool branch_taken_0x1130a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1130A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130A0u;
        // 0x1130a4: 0x32730007  andi        $s3, $s3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130a0) {
            ctx->pc = 0x11319Cu;
            goto label_11319c;
        }
    }
    ctx->pc = 0x1130A8u;
    // 0x1130a8: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x1130a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
    // 0x1130ac: 0x8fa30248  lw          $v1, 0x248($sp)
    ctx->pc = 0x1130acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_1130b0:
    // 0x1130b0: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x1130b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x1130b4: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x1130b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1130b8: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x1130b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x1130bc: 0xafa30248  sw          $v1, 0x248($sp)
    ctx->pc = 0x1130bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
    // 0x1130c0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1130c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1130c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1130c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1130c8: 0x1080fff9  beqz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1130C8u;
    {
        const bool branch_taken_0x1130c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1130CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130C8u;
        // 0x1130cc: 0x8fa30248  lw          $v1, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130c8) {
            ctx->pc = 0x1130B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1130b0;
        }
    }
    ctx->pc = 0x1130D0u;
    // 0x1130d0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1130D0u;
    {
        const bool branch_taken_0x1130d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1130d0) {
            ctx->pc = 0x1131A0u;
            goto label_1131a0;
        }
    }
    ctx->pc = 0x1130D8u;
label_1130d8:
    // 0x1130d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1130d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130dc: 0x341082e0  ori         $s0, $zero, 0x82E0
    ctx->pc = 0x1130dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x1130e0: 0x1083fc  dsll32      $s0, $s0, 15
    ctx->pc = 0x1130e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 15));
    // 0x1130e4: 0xc045284  jal         func_114A10
    ctx->pc = 0x1130E4u;
    SET_GPR_U32(ctx, 31, 0x1130ECu);
    ctx->pc = 0x1130E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1130E4u;
    // 0x1130e8: 0x62823  negu        $a1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A10u, 0x1130E4u, 0x1130ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1130ECu;
label_1130ec:
    // 0x1130ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1130ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1130f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130f4: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1130F4u;
    SET_GPR_U32(ctx, 31, 0x1130FCu);
    ctx->pc = 0x1130F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1130F4u;
    // 0x1130f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1130F4u, 0x1130FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1130FCu;
label_1130fc:
    // 0x1130fc: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1130FCu;
    {
        const bool branch_taken_0x1130fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x113100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130FCu;
        // 0x113100: 0x8fa80248  lw          $t0, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130fc) {
            ctx->pc = 0x113178u;
            goto label_113178;
        }
    }
    ctx->pc = 0x113104u;
    // 0x113104: 0x32730007  andi        $s3, $s3, 0x7
    ctx->pc = 0x113104u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x113108: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x113108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x11310c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x11310cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x113110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x113110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113114: 0x25080018  addiu       $t0, $t0, 0x18
    ctx->pc = 0x113114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x113118: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x113118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
    // 0x11311c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11311Cu;
    SET_GPR_U32(ctx, 31, 0x113124u);
    ctx->pc = 0x113120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11311Cu;
    // 0x113120: 0xafa80248  sw          $t0, 0x248($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11311Cu, 0x113124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113124u;
label_113124:
    // 0x113124: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x113124u;
    SET_GPR_U32(ctx, 31, 0x11312Cu);
    ctx->pc = 0x113128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113124u;
    // 0x113128: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x113124u, 0x11312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11312Cu;
label_11312c:
    // 0x11312c: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x11312Cu;
    SET_GPR_U32(ctx, 31, 0x113134u);
    ctx->pc = 0x113130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11312Cu;
    // 0x113130: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x11312Cu, 0x113134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113134u;
label_113134:
    // 0x113134: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x113134u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113138: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x113138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11313c: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x11313cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x113140: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x113140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113144: 0x3a28821  addu        $s1, $sp, $v0
    ctx->pc = 0x113144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113148: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x113148u;
    SET_GPR_U32(ctx, 31, 0x113150u);
    ctx->pc = 0x11314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113148u;
    // 0x11314c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x113148u, 0x113150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113150u;
label_113150:
    // 0x113150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x113150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113154: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x113154u;
    SET_GPR_U32(ctx, 31, 0x11315Cu);
    ctx->pc = 0x113158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113154u;
    // 0x113158: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x113154u, 0x11315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11315Cu;
label_11315c:
    // 0x11315c: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x11315Cu;
    SET_GPR_U32(ctx, 31, 0x113164u);
    ctx->pc = 0x113160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11315Cu;
    // 0x113160: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x11315Cu, 0x113164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113164u;
label_113164:
    // 0x113164: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x113164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x113168: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x113168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11316c: 0x3a38021  addu        $s0, $sp, $v1
    ctx->pc = 0x11316cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x113170: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113170u;
    {
        const bool branch_taken_0x113170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113170u;
        // 0x113174: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113170) {
            ctx->pc = 0x11318Cu;
            goto label_11318c;
        }
    }
    ctx->pc = 0x113178u;
label_113178:
    // 0x113178: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x113178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x11317c: 0x32730007  andi        $s3, $s3, 0x7
    ctx->pc = 0x11317cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x113180: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x113180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113184: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x113184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113188: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x113188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
label_11318c:
    // 0x11318c: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x11318Cu;
    SET_GPR_U32(ctx, 31, 0x113194u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x11318Cu, 0x113194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113194u;
label_113194:
    // 0x113194: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x113194u;
    {
        const bool branch_taken_0x113194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113194u;
        // 0x113198: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113194) {
            ctx->pc = 0x1131A0u;
            goto label_1131a0;
        }
    }
    ctx->pc = 0x11319Cu;
label_11319c:
    // 0x11319c: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x11319cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
label_1131a0:
    // 0x1131a0: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1131a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1131a4: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1131a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1131a8: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x1131a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1131ac: 0xc045284  jal         func_114A10
    ctx->pc = 0x1131ACu;
    SET_GPR_U32(ctx, 31, 0x1131B4u);
    ctx->pc = 0x1131B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1131ACu;
    // 0x1131b0: 0x8fa50248  lw          $a1, 0x248($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A10u, 0x1131ACu, 0x1131B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131B4u;
label_1131b4:
    // 0x1131b4: 0x6800015  bltz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x1131B4u;
    {
        const bool branch_taken_0x1131b4 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1131B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131B4u;
        // 0x1131b8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131b4) {
            ctx->pc = 0x11320Cu;
            goto label_11320c;
        }
    }
    ctx->pc = 0x1131BCu;
    // 0x1131bc: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x1131bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x1131c0: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x1131c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x1131c4: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1131c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1131c8: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x1131c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1131cc: 0x7d8021  addu        $s0, $v1, $sp
    ctx->pc = 0x1131ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_1131d0:
    // 0x1131d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1131d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1131d4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x1131d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1131d8: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x1131D8u;
    SET_GPR_U32(ctx, 31, 0x1131E0u);
    ctx->pc = 0x1131DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1131D8u;
    // 0x1131dc: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x1131D8u, 0x1131E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131E0u;
label_1131e0:
    // 0x1131e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1131e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1131e4: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1131E4u;
    SET_GPR_U32(ctx, 31, 0x1131ECu);
    ctx->pc = 0x1131E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1131E4u;
    // 0x1131e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1131E4u, 0x1131ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131ECu;
label_1131ec:
    // 0x1131ec: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x1131ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x1131f0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1131f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1131f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1131f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1131f8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1131F8u;
    SET_GPR_U32(ctx, 31, 0x113200u);
    ctx->pc = 0x1131FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1131F8u;
    // 0x1131fc: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1131F8u, 0x113200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113200u;
label_113200:
    // 0x113200: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x113200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x113204: 0x681fff2  bgez        $s4, . + 4 + (-0xE << 2)
    ctx->pc = 0x113204u;
    {
        const bool branch_taken_0x113204 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x113208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113204u;
        // 0x113208: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113204) {
            ctx->pc = 0x1131D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1131d0;
        }
    }
    ctx->pc = 0x11320Cu;
label_11320c:
    // 0x11320c: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x11320cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113210: 0x682002c  bltzl       $s4, . + 4 + (0x2C << 2)
    ctx->pc = 0x113210u;
    {
        const bool branch_taken_0x113210 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x113210) {
            ctx->pc = 0x113214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113210u;
            // 0x113214: 0x8fa2025c  lw          $v0, 0x25C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1132C4u;
            goto label_1132c4;
        }
    }
    ctx->pc = 0x113218u;
    // 0x113218: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x113218u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x11321c: 0x0  nop
    ctx->pc = 0x11321cu;
    // NOP
label_113220:
    // 0x113220: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x113220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x113224: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x113224u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113228: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x113228u;
    {
        const bool branch_taken_0x113228 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113228u;
        // 0x11322c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113228) {
            ctx->pc = 0x1132A4u;
            goto label_1132a4;
        }
    }
    ctx->pc = 0x113230u;
    // 0x113230: 0x2f49023  subu        $s2, $s7, $s4
    ctx->pc = 0x113230u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x113234: 0x640001c  bltz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x113234u;
    {
        const bool branch_taken_0x113234 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x113238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113234u;
        // 0x113238: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113234) {
            ctx->pc = 0x1132A8u;
            goto label_1132a8;
        }
    }
    ctx->pc = 0x11323Cu;
    // 0x11323c: 0x2691ffff  addiu       $s1, $s4, -0x1
    ctx->pc = 0x11323cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x113240: 0x3c1e003b  lui         $fp, 0x3B
    ctx->pc = 0x113240u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    // 0x113244: 0x0  nop
    ctx->pc = 0x113244u;
    // NOP
label_113248:
    // 0x113248: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x113248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x11324c: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x11324cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x113250: 0x27c2d710  addiu       $v0, $fp, -0x28F0
    ctx->pc = 0x113250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956816));
    // 0x113254: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x113254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x113258: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x113258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11325c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x11325cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x113260: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x113260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x113264: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x113264u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x113268: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x113268u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11326c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11326Cu;
    SET_GPR_U32(ctx, 31, 0x113274u);
    ctx->pc = 0x113270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11326Cu;
    // 0x113270: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11326Cu, 0x113274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113274u;
label_113274:
    // 0x113274: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x113274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113278: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x113278u;
    SET_GPR_U32(ctx, 31, 0x113280u);
    ctx->pc = 0x11327Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113278u;
    // 0x11327c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x113278u, 0x113280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113280u;
label_113280:
    // 0x113280: 0x8fa80244  lw          $t0, 0x244($sp)
    ctx->pc = 0x113280u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x113284: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x113284u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113288: 0x110102a  slt         $v0, $t0, $s0
    ctx->pc = 0x113288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11328c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11328Cu;
    {
        const bool branch_taken_0x11328c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11328Cu;
        // 0x113290: 0x270102a  slt         $v0, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11328c) {
            ctx->pc = 0x1132ACu;
            goto label_1132ac;
        }
    }
    ctx->pc = 0x113294u;
    // 0x113294: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x113294u;
    {
        const bool branch_taken_0x113294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113294u;
        // 0x113298: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113294) {
            ctx->pc = 0x113248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113248;
        }
    }
    ctx->pc = 0x11329Cu;
    // 0x11329c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11329Cu;
    {
        const bool branch_taken_0x11329c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11329Cu;
        // 0x1132a0: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11329c) {
            ctx->pc = 0x1132B4u;
            goto label_1132b4;
        }
    }
    ctx->pc = 0x1132A4u;
label_1132a4:
    // 0x1132a4: 0x2f49023  subu        $s2, $s7, $s4
    ctx->pc = 0x1132a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
label_1132a8:
    // 0x1132a8: 0x2691ffff  addiu       $s1, $s4, -0x1
    ctx->pc = 0x1132a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_1132ac:
    // 0x1132ac: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1132acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1132b0: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1132b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1132b4:
    // 0x1132b4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1132b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1132b8: 0x681ffd9  bgez        $s4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1132B8u;
    {
        const bool branch_taken_0x1132b8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1132BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132B8u;
        // 0x1132bc: 0xfc560000  sd          $s6, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132b8) {
            ctx->pc = 0x113220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113220;
        }
    }
    ctx->pc = 0x1132C0u;
    // 0x1132c0: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x1132c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_1132c4:
    // 0x1132c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1132C4u;
    {
        const bool branch_taken_0x1132c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132C4u;
        // 0x1132c8: 0x8fa30238  lw          $v1, 0x238($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132c4) {
            ctx->pc = 0x1132E4u;
            goto label_1132e4;
        }
    }
    ctx->pc = 0x1132CCu;
    // 0x1132cc: 0x1c600021  bgtz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1132CCu;
    {
        const bool branch_taken_0x1132cc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1132D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132CCu;
        // 0x1132d0: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132cc) {
            ctx->pc = 0x113354u;
            goto label_113354;
        }
    }
    ctx->pc = 0x1132D4u;
    // 0x1132d4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1132D4u;
    {
        const bool branch_taken_0x1132d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132D4u;
        // 0x1132d8: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132d4) {
            ctx->pc = 0x1132FCu;
            goto label_1132fc;
        }
    }
    ctx->pc = 0x1132DCu;
    // 0x1132dc: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1132DCu;
    {
        const bool branch_taken_0x1132dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132DCu;
        // 0x1132e0: 0xdfbf0300  ld          $ra, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132dc) {
            ctx->pc = 0x1135BCu;
            goto label_1135bc;
        }
    }
    ctx->pc = 0x1132E4u;
label_1132e4:
    // 0x1132e4: 0x8fa40238  lw          $a0, 0x238($sp)
    ctx->pc = 0x1132e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1132e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1132e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1132ec: 0x10820050  beq         $a0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1132ECu;
    {
        const bool branch_taken_0x1132ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1132F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132ECu;
        // 0x1132f0: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132ec) {
            ctx->pc = 0x113430u;
            goto label_113430;
        }
    }
    ctx->pc = 0x1132F4u;
    // 0x1132f4: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x1132F4u;
    {
        const bool branch_taken_0x1132f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132F4u;
        // 0x1132f8: 0xdfbf0300  ld          $ra, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132f4) {
            ctx->pc = 0x1135BCu;
            goto label_1135bc;
        }
    }
    ctx->pc = 0x1132FCu;
label_1132fc:
    // 0x1132fc: 0x680000a  bltz        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x1132FCu;
    {
        const bool branch_taken_0x1132fc = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x113300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132FCu;
        // 0x113300: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132fc) {
            ctx->pc = 0x113328u;
            goto label_113328;
        }
    }
    ctx->pc = 0x113304u;
    // 0x113304: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x113304u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_113308:
    // 0x113308: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x113308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11330c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11330cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113310: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x113310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x113314: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x113314u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x113318: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x113318u;
    SET_GPR_U32(ctx, 31, 0x113320u);
    ctx->pc = 0x11331Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113318u;
    // 0x11331c: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x113318u, 0x113320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113320u;
label_113320:
    // 0x113320: 0x681fff9  bgez        $s4, . + 4 + (-0x7 << 2)
    ctx->pc = 0x113320u;
    {
        const bool branch_taken_0x113320 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x113324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113320u;
        // 0x113324: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113320) {
            ctx->pc = 0x113308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113308;
        }
    }
    ctx->pc = 0x113328u;
label_113328:
    // 0x113328: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x113328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11332c: 0xfcb60000  sd          $s6, 0x0($a1)
    ctx->pc = 0x11332cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 22));
    // 0x113330: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x113330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x113334: 0x10c000a0  beqz        $a2, . + 4 + (0xA0 << 2)
    ctx->pc = 0x113334u;
    {
        const bool branch_taken_0x113334 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x113338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113334u;
        // 0x113338: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113334) {
            ctx->pc = 0x1135B8u;
            goto label_1135b8;
        }
    }
    ctx->pc = 0x11333Cu;
    // 0x11333c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x11333cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113340: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x113340u;
    SET_GPR_U32(ctx, 31, 0x113348u);
    ctx->pc = 0x113344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113340u;
    // 0x113344: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x113340u, 0x113348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113348u;
label_113348:
    // 0x113348: 0x8fa80234  lw          $t0, 0x234($sp)
    ctx->pc = 0x113348u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11334c: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x11334Cu;
    {
        const bool branch_taken_0x11334c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11334Cu;
        // 0x113350: 0xfd020000  sd          $v0, 0x0($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11334c) {
            ctx->pc = 0x1135B4u;
            goto label_1135b4;
        }
    }
    ctx->pc = 0x113354u;
label_113354:
    // 0x113354: 0x680000e  bltz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x113354u;
    {
        const bool branch_taken_0x113354 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x113358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113354u;
        // 0x113358: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113354) {
            ctx->pc = 0x113390u;
            goto label_113390;
        }
    }
    ctx->pc = 0x11335Cu;
    // 0x11335c: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x11335cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x113360: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x113360u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x113364: 0x2a900001  slti        $s0, $s4, 0x1
    ctx->pc = 0x113364u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)1) ? 1 : 0);
label_113368:
    // 0x113368: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x113368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11336c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11336cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113370: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x113370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x113374: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x113374u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x113378: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x113378u;
    SET_GPR_U32(ctx, 31, 0x113380u);
    ctx->pc = 0x11337Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113378u;
    // 0x11337c: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x113378u, 0x113380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113380u;
label_113380:
    // 0x113380: 0x681fff9  bgez        $s4, . + 4 + (-0x7 << 2)
    ctx->pc = 0x113380u;
    {
        const bool branch_taken_0x113380 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x113384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113380u;
        // 0x113384: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113380) {
            ctx->pc = 0x113368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113368;
        }
    }
    ctx->pc = 0x113388u;
    // 0x113388: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x113388u;
    {
        const bool branch_taken_0x113388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113388u;
        // 0x11338c: 0x8fa20234  lw          $v0, 0x234($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113388) {
            ctx->pc = 0x11339Cu;
            goto label_11339c;
        }
    }
    ctx->pc = 0x113390u;
label_113390:
    // 0x113390: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x113390u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x113394: 0x2a900001  slti        $s0, $s4, 0x1
    ctx->pc = 0x113394u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x113398: 0x8fa20234  lw          $v0, 0x234($sp)
    ctx->pc = 0x113398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_11339c:
    // 0x11339c: 0xfc560000  sd          $s6, 0x0($v0)
    ctx->pc = 0x11339cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 22));
    // 0x1133a0: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x1133a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x1133a4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1133A4u;
    {
        const bool branch_taken_0x1133a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1133A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133A4u;
        // 0x1133a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133a4) {
            ctx->pc = 0x1133BCu;
            goto label_1133bc;
        }
    }
    ctx->pc = 0x1133ACu;
    // 0x1133ac: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1133ACu;
    SET_GPR_U32(ctx, 31, 0x1133B4u);
    ctx->pc = 0x1133B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1133ACu;
    // 0x1133b0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1133ACu, 0x1133B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133B4u;
label_1133b4:
    // 0x1133b4: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x1133b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1133b8: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1133b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_1133bc:
    // 0x1133bc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1133bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1133c0: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1133C0u;
    SET_GPR_U32(ctx, 31, 0x1133C8u);
    ctx->pc = 0x1133C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1133C0u;
    // 0x1133c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1133C0u, 0x1133C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133C8u;
label_1133c8:
    // 0x1133c8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1133c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1133cc: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1133CCu;
    {
        const bool branch_taken_0x1133cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1133D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133CCu;
        // 0x1133d0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133cc) {
            ctx->pc = 0x113404u;
            goto label_113404;
        }
    }
    ctx->pc = 0x1133D4u;
    // 0x1133d4: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x1133d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1133d8: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x1133d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x1133dc: 0x0  nop
    ctx->pc = 0x1133dcu;
    // NOP
label_1133e0:
    // 0x1133e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1133e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1133e4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1133e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1133e8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1133e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1133ec: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1133ECu;
    SET_GPR_U32(ctx, 31, 0x1133F4u);
    ctx->pc = 0x1133F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1133ECu;
    // 0x1133f0: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1133ECu, 0x1133F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133F4u;
label_1133f4:
    // 0x1133f4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1133f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1133f8: 0x2f4102a  slt         $v0, $s7, $s4
    ctx->pc = 0x1133f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1133fc: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1133FCu;
    {
        const bool branch_taken_0x1133fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133FCu;
        // 0x113400: 0x1410c0  sll         $v0, $s4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133fc) {
            ctx->pc = 0x1133E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1133e0;
        }
    }
    ctx->pc = 0x113404u;
label_113404:
    // 0x113404: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x113404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x113408: 0xfcb60008  sd          $s6, 0x8($a1)
    ctx->pc = 0x113408u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 22));
    // 0x11340c: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x11340cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x113410: 0x10c00069  beqz        $a2, . + 4 + (0x69 << 2)
    ctx->pc = 0x113410u;
    {
        const bool branch_taken_0x113410 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x113414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113410u;
        // 0x113414: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113410) {
            ctx->pc = 0x1135B8u;
            goto label_1135b8;
        }
    }
    ctx->pc = 0x113418u;
    // 0x113418: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x113418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11341c: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x11341Cu;
    SET_GPR_U32(ctx, 31, 0x113424u);
    ctx->pc = 0x113420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11341Cu;
    // 0x113420: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x11341Cu, 0x113424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113424u;
label_113424:
    // 0x113424: 0x8fa80234  lw          $t0, 0x234($sp)
    ctx->pc = 0x113424u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x113428: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x113428u;
    {
        const bool branch_taken_0x113428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113428u;
        // 0x11342c: 0xfd020008  sd          $v0, 0x8($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113428) {
            ctx->pc = 0x1135B4u;
            goto label_1135b4;
        }
    }
    ctx->pc = 0x113430u;
label_113430:
    // 0x113430: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x113430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113434: 0x1a800019  blez        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x113434u;
    {
        const bool branch_taken_0x113434 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x113438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113434u;
        // 0x113438: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113434) {
            ctx->pc = 0x11349Cu;
            goto label_11349c;
        }
    }
    ctx->pc = 0x11343Cu;
    // 0x11343c: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x11343cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_113440:
    // 0x113440: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x113440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x113444: 0x1488c0  sll         $s1, $s4, 3
    ctx->pc = 0x113444u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x113448: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x113448u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x11344c: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x11344cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x113450: 0x2b29021  addu        $s2, $s5, $s2
    ctx->pc = 0x113450u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x113454: 0xde330000  ld          $s3, 0x0($s1)
    ctx->pc = 0x113454u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x113458: 0xde500000  ld          $s0, 0x0($s2)
    ctx->pc = 0x113458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11345c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11345cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113460: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x113460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113464: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x113464u;
    SET_GPR_U32(ctx, 31, 0x11346Cu);
    ctx->pc = 0x113468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113464u;
    // 0x113468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x113464u, 0x11346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11346Cu;
label_11346c:
    // 0x11346c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11346cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113474: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x113474u;
    SET_GPR_U32(ctx, 31, 0x11347Cu);
    ctx->pc = 0x113478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113474u;
    // 0x113478: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x113474u, 0x11347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11347Cu;
label_11347c:
    // 0x11347c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11347cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113480: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x113480u;
    SET_GPR_U32(ctx, 31, 0x113488u);
    ctx->pc = 0x113484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113480u;
    // 0x113484: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x113480u, 0x113488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113488u;
label_113488:
    // 0x113488: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x113488u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x11348c: 0x1e80ffec  bgtz        $s4, . + 4 + (-0x14 << 2)
    ctx->pc = 0x11348Cu;
    {
        const bool branch_taken_0x11348c = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x113490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11348Cu;
        // 0x113490: 0xfe560000  sd          $s6, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11348c) {
            ctx->pc = 0x113440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113440;
        }
    }
    ctx->pc = 0x113494u;
    // 0x113494: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x113494u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113498: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x113498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_11349c:
    // 0x11349c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x11349Cu;
    {
        const bool branch_taken_0x11349c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11349c) {
            ctx->pc = 0x1134A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11349Cu;
            // 0x1134a0: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113504u;
            goto label_113504;
        }
    }
    ctx->pc = 0x1134A4u;
    // 0x1134a4: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x1134a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1134a8:
    // 0x1134a8: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x1134a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1134ac: 0x1488c0  sll         $s1, $s4, 3
    ctx->pc = 0x1134acu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x1134b0: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x1134b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1134b4: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x1134b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1134b8: 0x2b29021  addu        $s2, $s5, $s2
    ctx->pc = 0x1134b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x1134bc: 0xde330000  ld          $s3, 0x0($s1)
    ctx->pc = 0x1134bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1134c0: 0xde500000  ld          $s0, 0x0($s2)
    ctx->pc = 0x1134c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1134c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1134c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1134c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1134c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1134cc: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1134CCu;
    SET_GPR_U32(ctx, 31, 0x1134D4u);
    ctx->pc = 0x1134D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1134CCu;
    // 0x1134d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1134CCu, 0x1134D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1134D4u;
label_1134d4:
    // 0x1134d4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1134d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1134d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1134d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1134dc: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1134DCu;
    SET_GPR_U32(ctx, 31, 0x1134E4u);
    ctx->pc = 0x1134E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1134DCu;
    // 0x1134e0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1134DCu, 0x1134E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1134E4u;
label_1134e4:
    // 0x1134e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1134e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1134e8: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1134E8u;
    SET_GPR_U32(ctx, 31, 0x1134F0u);
    ctx->pc = 0x1134ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1134E8u;
    // 0x1134ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1134E8u, 0x1134F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1134F0u;
label_1134f0:
    // 0x1134f0: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1134f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x1134f4: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x1134f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1134f8: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1134F8u;
    {
        const bool branch_taken_0x1134f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1134FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134F8u;
        // 0x1134fc: 0xfe560000  sd          $s6, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1134f8) {
            ctx->pc = 0x1134A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1134a8;
        }
    }
    ctx->pc = 0x113500u;
    // 0x113500: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x113500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_113504:
    // 0x113504: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x113504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x113508: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x113508u;
    {
        const bool branch_taken_0x113508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113508u;
        // 0x11350c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113508) {
            ctx->pc = 0x113550u;
            goto label_113550;
        }
    }
    ctx->pc = 0x113510u;
    // 0x113510: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x113510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x113514: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x113514u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x113518: 0xdfb200f8  ld          $s2, 0xF8($sp)
    ctx->pc = 0x113518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x11351c: 0x0  nop
    ctx->pc = 0x11351cu;
    // NOP
label_113520:
    // 0x113520: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x113520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x113524: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x113524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113528: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x113528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x11352c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x11352cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x113530: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x113530u;
    SET_GPR_U32(ctx, 31, 0x113538u);
    ctx->pc = 0x113534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113530u;
    // 0x113534: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x113530u, 0x113538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113538u;
label_113538:
    // 0x113538: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x113538u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11353c: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x11353cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x113540: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x113540u;
    {
        const bool branch_taken_0x113540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113540u;
        // 0x113544: 0x8fa2024c  lw          $v0, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113540) {
            ctx->pc = 0x113520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113520;
        }
    }
    ctx->pc = 0x113548u;
    // 0x113548: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x113548u;
    {
        const bool branch_taken_0x113548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113548) {
            ctx->pc = 0x11355Cu;
            goto label_11355c;
        }
    }
    ctx->pc = 0x113550u;
label_113550:
    // 0x113550: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x113550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x113554: 0xdfb200f8  ld          $s2, 0xF8($sp)
    ctx->pc = 0x113554u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x113558: 0x8fa2024c  lw          $v0, 0x24C($sp)
    ctx->pc = 0x113558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_11355c:
    // 0x11355c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11355Cu;
    {
        const bool branch_taken_0x11355c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11355Cu;
        // 0x113560: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11355c) {
            ctx->pc = 0x113578u;
            goto label_113578;
        }
    }
    ctx->pc = 0x113564u;
    // 0x113564: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x113564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x113568: 0xfc760010  sd          $s6, 0x10($v1)
    ctx->pc = 0x113568u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 22));
    // 0x11356c: 0xfc710000  sd          $s1, 0x0($v1)
    ctx->pc = 0x11356cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 17));
    // 0x113570: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x113570u;
    {
        const bool branch_taken_0x113570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113570u;
        // 0x113574: 0xfc720008  sd          $s2, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113570) {
            ctx->pc = 0x1135B4u;
            goto label_1135b4;
        }
    }
    ctx->pc = 0x113578u;
label_113578:
    // 0x113578: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x113578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11357c: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x11357Cu;
    SET_GPR_U32(ctx, 31, 0x113584u);
    ctx->pc = 0x113580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11357Cu;
    // 0x113580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x11357Cu, 0x113584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113584u;
label_113584:
    // 0x113584: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x113584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x113588: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x113588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11358c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x11358cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x113590: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x113590u;
    SET_GPR_U32(ctx, 31, 0x113598u);
    ctx->pc = 0x113594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113590u;
    // 0x113594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x113590u, 0x113598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113598u;
label_113598:
    // 0x113598: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x113598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11359c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11359cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1135a0: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x1135a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x1135a4: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1135A4u;
    SET_GPR_U32(ctx, 31, 0x1135ACu);
    ctx->pc = 0x1135A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1135A4u;
    // 0x1135a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1135A4u, 0x1135ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1135ACu;
label_1135ac:
    // 0x1135ac: 0x8fa60234  lw          $a2, 0x234($sp)
    ctx->pc = 0x1135acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1135b0: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x1135b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_1135b4:
    // 0x1135b4: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x1135b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_1135b8:
    // 0x1135b8: 0xdfbf0300  ld          $ra, 0x300($sp)
    ctx->pc = 0x1135b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
label_1135bc:
    // 0x1135bc: 0xdfbe02f0  ld          $fp, 0x2F0($sp)
    ctx->pc = 0x1135bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1135c0: 0xdfb702e0  ld          $s7, 0x2E0($sp)
    ctx->pc = 0x1135c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1135c4: 0xdfb602d0  ld          $s6, 0x2D0($sp)
    ctx->pc = 0x1135c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1135c8: 0xdfb502c0  ld          $s5, 0x2C0($sp)
    ctx->pc = 0x1135c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x1135cc: 0xdfb402b0  ld          $s4, 0x2B0($sp)
    ctx->pc = 0x1135ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1135d0: 0xdfb302a0  ld          $s3, 0x2A0($sp)
    ctx->pc = 0x1135d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1135d4: 0xdfb20290  ld          $s2, 0x290($sp)
    ctx->pc = 0x1135d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1135d8: 0xdfb10280  ld          $s1, 0x280($sp)
    ctx->pc = 0x1135d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1135dc: 0xdfb00270  ld          $s0, 0x270($sp)
    ctx->pc = 0x1135dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1135e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1135E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1135E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1135E0u;
        // 0x1135e4: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1135E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1135E8u;
}
