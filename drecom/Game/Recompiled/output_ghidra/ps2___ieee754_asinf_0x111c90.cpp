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

// Function: __ieee754_asinf
// Address: 0x111c90 - 0x11202c
void ps2___ieee754_asinf_0x111c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_asinf_0x111c90");
#endif

    switch (ctx->pc) {
        case 0x111e50u: goto label_111e50;
        case 0x111f34u: goto label_111f34;
        default: break;
    }

    ctx->pc = 0x111c90u;

    // 0x111c90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x111c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x111c94: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x111c94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x111c98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x111c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x111c9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x111c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ca0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x111ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x111ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x111ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x111ca8: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x111ca8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x111cac: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x111cacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x111cb0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x111cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x111cb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x111cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x111cb8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x111cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x111cbc: 0x2228024  and         $s0, $s1, $v0
    ctx->pc = 0x111cbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x111cc0: 0x1603000b  bne         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x111CC0u;
    {
        const bool branch_taken_0x111cc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x111CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CC0u;
        // 0x111cc4: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x111cc0) {
            ctx->pc = 0x111CF0u;
            goto label_111cf0;
        }
    }
    ctx->pc = 0x111CC8u;
    // 0x111cc8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x111cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x111ccc: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x111cccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x111cd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111cd4: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x111cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x111cd8: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x111cd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x111cdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111ce0: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x111ce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x111ce4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x111ce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x111ce8: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x111CE8u;
    {
        const bool branch_taken_0x111ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CE8u;
        // 0x111cec: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ce8) {
            ctx->pc = 0x11200Cu;
            goto label_11200c;
        }
    }
    ctx->pc = 0x111CF0u;
label_111cf0:
    // 0x111cf0: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x111cf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x111cf4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x111CF4u;
    {
        const bool branch_taken_0x111cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CF4u;
        // 0x111cf8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111cf4) {
            ctx->pc = 0x111D14u;
            goto label_111d14;
        }
    }
    ctx->pc = 0x111CFCu;
    // 0x111cfc: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x111cfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x111d00: 0x0  nop
    ctx->pc = 0x111d00u;
    // NOP
    // 0x111d04: 0x0  nop
    ctx->pc = 0x111d04u;
    // NOP
    // 0x111d08: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x111d08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    // 0x111d0c: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x111D0Cu;
    {
        const bool branch_taken_0x111d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D0Cu;
        // 0x111d10: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d0c) {
            ctx->pc = 0x112014u;
            goto label_112014;
        }
    }
    ctx->pc = 0x111D14u;
label_111d14:
    // 0x111d14: 0x3c023eff  lui         $v0, 0x3EFF
    ctx->pc = 0x111d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
    // 0x111d18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x111d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x111d1c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x111d1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x111d20: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x111D20u;
    {
        const bool branch_taken_0x111d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D20u;
        // 0x111d24: 0x3c0231ff  lui         $v0, 0x31FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d20) {
            ctx->pc = 0x111E48u;
            goto label_111e48;
        }
    }
    ctx->pc = 0x111D28u;
    // 0x111d28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x111d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x111d2c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x111d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x111d30: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x111D30u;
    {
        const bool branch_taken_0x111d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111d30) {
            ctx->pc = 0x111D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111D30u;
            // 0x111d34: 0x460c6502  mul.s       $f20, $f12, $f12 (Delay Slot)
            ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x111D64u;
            goto label_111d64;
        }
    }
    ctx->pc = 0x111D38u;
    // 0x111d38: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x111d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x111d3c: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x111d3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x111d40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111d44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111d48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111d4c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x111d4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x111d50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x111d50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x111d54: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x111D54u;
    {
        const bool branch_taken_0x111d54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x111d54) {
            ctx->pc = 0x111D64u;
            goto label_111d64;
        }
    }
    ctx->pc = 0x111D5Cu;
    // 0x111d5c: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x111D5Cu;
    {
        const bool branch_taken_0x111d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D5Cu;
        // 0x111d60: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d5c) {
            ctx->pc = 0x11200Cu;
            goto label_11200c;
        }
    }
    ctx->pc = 0x111D64u;
label_111d64:
    // 0x111d64: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x111d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x111d68: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x111d68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x111d6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111d70: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x111d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x111d74: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x111d74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x111d78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x111d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111d7c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111d7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111d80: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x111d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x111d84: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x111d84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x111d88: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x111d88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x111d8c: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x111d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x111d90: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x111d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x111d94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111d98: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x111d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x111d9c: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x111d9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x111da0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x111da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x111da4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x111da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x111da8: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x111da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x111dac: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x111dacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x111db0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x111db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x111db4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x111db4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x111db8: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x111db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x111dbc: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x111dbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x111dc0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x111dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111dc4: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x111dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x111dc8: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x111dc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x111dcc: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x111dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x111dd0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111dd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111dd4: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x111dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x111dd8: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x111dd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x111ddc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x111ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x111de0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x111de0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x111de4: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x111de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x111de8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x111de8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x111dec: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x111decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x111df0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111df4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x111df4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x111df8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x111df8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x111dfc: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x111dfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x111e00: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111e00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111e04: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x111e04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x111e08: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x111e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x111e0c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x111e0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x111e10: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111e14: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x111e14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x111e18: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x111e18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x111e1c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x111e1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x111e20: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111e20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111e24: 0x46030d80  add.s       $f22, $f1, $f3
    ctx->pc = 0x111e24u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x111e28: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x111e28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x111e2c: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x111e2cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111e30: 0x0  nop
    ctx->pc = 0x111e30u;
    // NOP
    // 0x111e34: 0x0  nop
    ctx->pc = 0x111e34u;
    // NOP
    // 0x111e38: 0x4616aa03  div.s       $f8, $f21, $f22
    ctx->pc = 0x111e38u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[21], ctx->f[22]); }
    // 0x111e3c: 0x46086002  mul.s       $f0, $f12, $f8
    ctx->pc = 0x111e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
    // 0x111e40: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x111E40u;
    {
        const bool branch_taken_0x111e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E40u;
        // 0x111e44: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e40) {
            ctx->pc = 0x11200Cu;
            goto label_11200c;
        }
    }
    ctx->pc = 0x111E48u;
label_111e48:
    // 0x111e48: 0xc045420  jal         func_115080
    ctx->pc = 0x111E48u;
    SET_GPR_U32(ctx, 31, 0x111E50u);
    ctx->pc = 0x115080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115080u, 0x111E48u, 0x111E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E50u;
label_111e50:
    // 0x111e50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111e54: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x111e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x111e58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x111e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x111e5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x111e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111e60: 0x46005201  sub.s       $f8, $f10, $f0
    ctx->pc = 0x111e60u;
    ctx->f[8] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x111e64: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x111e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x111e68: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x111e68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x111e6c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x111e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x111e70: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x111e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x111e74: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x111e74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x111e78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111e7c: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x111e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x111e80: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x111e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x111e84: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x111e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x111e88: 0x46024502  mul.s       $f20, $f8, $f2
    ctx->pc = 0x111e88u;
    ctx->f[20] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x111e8c: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x111e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x111e90: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x111e90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x111e94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111e98: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x111e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x111e9c: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x111e9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x111ea0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x111ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111ea4: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x111ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x111ea8: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x111ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x111eac: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x111eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x111eb0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111eb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111eb4: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x111eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x111eb8: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x111eb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x111ebc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x111ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x111ec0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x111ec0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x111ec4: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x111ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x111ec8: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x111ec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x111ecc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x111eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x111ed0: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x111ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x111ed4: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x111ed4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x111ed8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x111ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x111edc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x111edcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x111ee0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x111ee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x111ee4: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x111ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x111ee8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x111ee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x111eec: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x111eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x111ef0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x111ef0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x111ef4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111ef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111ef8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x111ef8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x111efc: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x111efcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x111f00: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x111f00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x111f04: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111f08: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x111f08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x111f0c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x111f0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x111f10: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x111f10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x111f14: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111f14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111f18: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x111f18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x111f1c: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x111f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x111f20: 0x460a0d80  add.s       $f22, $f1, $f10
    ctx->pc = 0x111f20u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x111f24: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111f28: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x111f28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x111f2c: 0xc0449be  jal         func_1126F8
    ctx->pc = 0x111F2Cu;
    SET_GPR_U32(ctx, 31, 0x111F34u);
    ctx->pc = 0x111F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F2Cu;
    // 0x111f30: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126F8u, 0x111F2Cu, 0x111F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F34u;
label_111f34:
    // 0x111f34: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x111f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x111f38: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x111f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x111f3c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x111f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x111f40: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x111F40u;
    {
        const bool branch_taken_0x111f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F40u;
        // 0x111f44: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f40) {
            ctx->pc = 0x111F84u;
            goto label_111f84;
        }
    }
    ctx->pc = 0x111F48u;
    // 0x111f48: 0x0  nop
    ctx->pc = 0x111f48u;
    // NOP
    // 0x111f4c: 0x0  nop
    ctx->pc = 0x111f4cu;
    // NOP
    // 0x111f50: 0x4616aa03  div.s       $f8, $f21, $f22
    ctx->pc = 0x111f50u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[21], ctx->f[22]); }
    // 0x111f54: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x111f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x111f58: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x111f58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x111f5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111f60: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x111f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x111f64: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x111f64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x111f68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x111f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111f6c: 0x46083842  mul.s       $f1, $f7, $f8
    ctx->pc = 0x111f6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x111f70: 0x46013840  add.s       $f1, $f7, $f1
    ctx->pc = 0x111f70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x111f74: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x111f74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x111f78: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x111f78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x111f7c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x111F7Cu;
    {
        const bool branch_taken_0x111f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F7Cu;
        // 0x111f80: 0x46011501  sub.s       $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f7c) {
            ctx->pc = 0x112000u;
            goto label_112000;
        }
    }
    ctx->pc = 0x111F84u;
label_111f84:
    // 0x111f84: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x111f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x111f88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x111f88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f8c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x111f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x111f90: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x111f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x111f94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x111f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x111f98: 0x44834000  mtc1        $v1, $f8
    ctx->pc = 0x111f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x111f9c: 0x46084002  mul.s       $f0, $f8, $f8
    ctx->pc = 0x111f9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x111fa0: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x111fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x111fa4: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x111fa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x111fa8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x111fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x111fac: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x111facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x111fb0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x111fb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x111fb4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x111fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x111fb8: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x111fb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x111fbc: 0x46083900  add.s       $f4, $f7, $f8
    ctx->pc = 0x111fbcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x111fc0: 0x0  nop
    ctx->pc = 0x111fc0u;
    // NOP
    // 0x111fc4: 0x0  nop
    ctx->pc = 0x111fc4u;
    // NOP
    // 0x111fc8: 0x4616a943  div.s       $f5, $f21, $f22
    ctx->pc = 0x111fc8u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[21], ctx->f[22]); }
    // 0x111fcc: 0x46073840  add.s       $f1, $f7, $f7
    ctx->pc = 0x111fccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x111fd0: 0x0  nop
    ctx->pc = 0x111fd0u;
    // NOP
    // 0x111fd4: 0x0  nop
    ctx->pc = 0x111fd4u;
    // NOP
    // 0x111fd8: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x111fd8u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x111fdc: 0x46084080  add.s       $f2, $f8, $f8
    ctx->pc = 0x111fdcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x111fe0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x111fe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x111fe4: 0x46023581  sub.s       $f22, $f6, $f2
    ctx->pc = 0x111fe4u;
    ctx->f[22] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x111fe8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x111fe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x111fec: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x111fecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x111ff0: 0x46030d41  sub.s       $f21, $f1, $f3
    ctx->pc = 0x111ff0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x111ff4: 0x4616a801  sub.s       $f0, $f21, $f22
    ctx->pc = 0x111ff4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x111ff8: 0x46003501  sub.s       $f20, $f6, $f0
    ctx->pc = 0x111ff8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x111ffc: 0x0  nop
    ctx->pc = 0x111ffcu;
    // NOP
label_112000:
    // 0x112000: 0x1e200002  bgtz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x112000u;
    {
        const bool branch_taken_0x112000 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x112004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112000u;
        // 0x112004: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112000) {
            ctx->pc = 0x11200Cu;
            goto label_11200c;
        }
    }
    ctx->pc = 0x112008u;
    // 0x112008: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x112008u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_11200c:
    // 0x11200c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11200cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112010: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x112010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_112014:
    // 0x112014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112018: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x112018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x11201c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x11201cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x112020: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x112020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x112024: 0x3e00008  jr          $ra
    ctx->pc = 0x112024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112024u;
        // 0x112028: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11202Cu;
}
