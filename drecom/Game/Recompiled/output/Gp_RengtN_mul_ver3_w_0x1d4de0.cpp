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

// Function: Gp_RengtN_mul_ver3_w
// Address: 0x1d4de0 - 0x1d5284
void Gp_RengtN_mul_ver3_w_0x1d4de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_RengtN_mul_ver3_w_0x1d4de0");
#endif

    switch (ctx->pc) {
        case 0x1d4f04u: goto label_1d4f04;
        case 0x1d4f18u: goto label_1d4f18;
        case 0x1d4f50u: goto label_1d4f50;
        case 0x1d4ff8u: goto label_1d4ff8;
        case 0x1d5010u: goto label_1d5010;
        case 0x1d503cu: goto label_1d503c;
        case 0x1d5054u: goto label_1d5054;
        case 0x1d5110u: goto label_1d5110;
        case 0x1d5128u: goto label_1d5128;
        case 0x1d5154u: goto label_1d5154;
        case 0x1d516cu: goto label_1d516c;
        case 0x1d51f4u: goto label_1d51f4;
        default: break;
    }

    ctx->pc = 0x1d4de0u;

    // 0x1d4de0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1d4de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1d4de4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1d4de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1d4de8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d4de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d4dec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d4decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d4df0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d4df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d4df4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d4df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d4df8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d4df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d4dfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d4dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d4e00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d4e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d4e04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d4e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d4e08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4e0c: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x1d4e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
    // 0x1d4e10: 0xafa50168  sw          $a1, 0x168($sp)
    ctx->pc = 0x1d4e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 5));
    // 0x1d4e14: 0xafa60170  sw          $a2, 0x170($sp)
    ctx->pc = 0x1d4e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 6));
    // 0x1d4e18: 0xafa70178  sw          $a3, 0x178($sp)
    ctx->pc = 0x1d4e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 7));
    // 0x1d4e1c: 0xafa80180  sw          $t0, 0x180($sp)
    ctx->pc = 0x1d4e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 8));
    // 0x1d4e20: 0xafa90188  sw          $t1, 0x188($sp)
    ctx->pc = 0x1d4e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 9));
    // 0x1d4e24: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1d4e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1d4e28: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d4e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d4e2c: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1d4e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1d4e30: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1d4e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1d4e34: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1d4e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1d4e38: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1d4e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x1d4e3c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d4e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d4e40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d4e44: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1d4e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1d4e48: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1d4e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1d4e4c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D4E4Cu;
    {
        const bool branch_taken_0x1d4e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e4c) {
            ctx->pc = 0x1D4E94u;
            goto label_1d4e94;
        }
    }
    ctx->pc = 0x1D4E54u;
    // 0x1d4e54: 0x8fbe0168  lw          $fp, 0x168($sp)
    ctx->pc = 0x1d4e54u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1d4e58: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1d4e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d4e5c: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1d4e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1d4e60: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x1d4e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x1d4e64: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1d4e64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d4e68: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d4e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d4e6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d4e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d4e70: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d4e74: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d4e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4e78: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1d4e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x1d4e7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d4e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d4e80: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d4e80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d4e84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d4e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d4e88: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x1d4e88u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d4e8c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D4E8Cu;
    {
        const bool branch_taken_0x1d4e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e8c) {
            ctx->pc = 0x1D4ECCu;
            goto label_1d4ecc;
        }
    }
    ctx->pc = 0x1D4E94u;
label_1d4e94:
    // 0x1d4e94: 0x8fbe0160  lw          $fp, 0x160($sp)
    ctx->pc = 0x1d4e94u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d4e98: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x1d4e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1d4e9c: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1d4e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1d4ea0: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x1d4ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x1d4ea4: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1d4ea4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d4ea8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d4ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d4eac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d4eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d4eb0: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d4eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d4eb4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d4eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4eb8: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1d4eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x1d4ebc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d4ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d4ec0: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d4ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d4ec4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d4ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d4ec8: 0xa7c20006  sh          $v0, 0x6($fp)
    ctx->pc = 0x1d4ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 6), (uint16_t)GPR_U32(ctx, 2));
label_1d4ecc:
    // 0x1d4ecc: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x1d4eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1d4ed0: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x1d4ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x1d4ed4: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x1d4ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1d4ed8: 0x24530080  addiu       $s3, $v0, 0x80
    ctx->pc = 0x1d4ed8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1d4edc: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x1d4edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x1d4ee0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d4ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d4ee4: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x1d4ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x1d4ee8: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x1d4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x1d4eec: 0x24570080  addiu       $s7, $v0, 0x80
    ctx->pc = 0x1d4eecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1d4ef0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d4ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d4ef4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1d4ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1d4ef8: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1d4ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1d4efc: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D4EFCu;
    SET_GPR_U32(ctx, 31, 0x1D4F04u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D4F04u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4F04u) { return; }
    ctx->pc = 0x1D4F04u;
label_1d4f04:
    // 0x1d4f04: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d4f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4f08: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1d4f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1d4f0c: 0x2445e510  addiu       $a1, $v0, -0x1AF0
    ctx->pc = 0x1d4f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x1d4f10: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D4F10u;
    SET_GPR_U32(ctx, 31, 0x1D4F18u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D4F18u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4F18u) { return; }
    ctx->pc = 0x1D4F18u;
label_1d4f18:
    // 0x1d4f18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d4f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d4f1c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1d4f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1d4f20: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1d4f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1d4f24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d4f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d4f28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4F28u;
    {
        const bool branch_taken_0x1d4f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4f28) {
            ctx->pc = 0x1D4F38u;
            goto label_1d4f38;
        }
    }
    ctx->pc = 0x1D4F30u;
    // 0x1d4f30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4f34: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1d4f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_1d4f38:
    // 0x1d4f38: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x1d4f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1d4f3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4f40: 0x1462006a  bne         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1D4F40u;
    {
        const bool branch_taken_0x1d4f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4f40) {
            ctx->pc = 0x1D50ECu;
            goto label_1d50ec;
        }
    }
    ctx->pc = 0x1D4F48u;
    // 0x1d4f48: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d4f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d4f4c: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x1d4f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d4f50:
    // 0x1d4f50: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1d4f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d4f54: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d4f58: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d4f5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4f60: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1d4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1d4f64: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x1d4f64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d4f68: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1d4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d4f6c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d4f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d4f70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d4f74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4f78: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1d4f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1d4f7c: 0x24510050  addiu       $s1, $v0, 0x50
    ctx->pc = 0x1d4f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1d4f80: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x1d4f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1d4f84: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d4f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4f88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4f8c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d4f90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4f94: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1d4f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1d4f98: 0x24540020  addiu       $s4, $v0, 0x20
    ctx->pc = 0x1d4f98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d4f9c: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x1d4f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1d4fa0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4fa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4fa8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d4fac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4fb0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1d4fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1d4fb4: 0x24550050  addiu       $s5, $v0, 0x50
    ctx->pc = 0x1d4fb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1d4fb8: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x1d4fb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d4fbc: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1d4fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1d4fc0: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x1d4fc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d4fc4: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x1d4fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x1d4fc8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1d4fc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1d4fcc: 0x1640ffe0  bnez        $s2, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1D4FCCu;
    {
        const bool branch_taken_0x1d4fcc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4fcc) {
            ctx->pc = 0x1D4F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4f50;
        }
    }
    ctx->pc = 0x1D4FD4u;
    // 0x1d4fd4: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1d4fd4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d4fd8: 0x26700020  addiu       $s0, $s3, 0x20
    ctx->pc = 0x1d4fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1d4fdc: 0x26710050  addiu       $s1, $s3, 0x50
    ctx->pc = 0x1d4fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x1d4fe0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d4fe0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d4fe4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d4fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d4fe8: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1d4fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d4fec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d4fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4ff0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1D4FF0u;
    SET_GPR_U32(ctx, 31, 0x1D4FF8u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1D4FF8u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4FF8u) { return; }
    ctx->pc = 0x1D4FF8u;
label_1d4ff8:
    // 0x1d4ff8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1d4ff8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1d4ffc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d4ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d5000: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x1d5000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1d5004: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5008: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1D5008u;
    SET_GPR_U32(ctx, 31, 0x1D5010u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1D5010u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D5010u) { return; }
    ctx->pc = 0x1D5010u;
label_1d5010:
    // 0x1d5010: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d5010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d5014: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1d5014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1d5018: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d5018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d501c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d501cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d5020: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1d5020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1d5024: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1d5024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1d5028: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d5028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d502c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d502cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d5030: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1d5030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d5034: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D5034u;
    SET_GPR_U32(ctx, 31, 0x1D503Cu);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D5034u, 0x1D503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D503Cu;
label_1d503c:
    // 0x1d503c: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x1d503cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x1d5040: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1d5040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d5044: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d5044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d5048: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x1d5048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1d504c: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D504Cu;
    SET_GPR_U32(ctx, 31, 0x1D5054u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D504Cu, 0x1D5054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5054u;
label_1d5054:
    // 0x1d5054: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1d5054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1d5058: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d5058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1d505c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1d505cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1d5060: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x1d5060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1d5064: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1d5064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1d5068: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5068u;
    {
        const bool branch_taken_0x1d5068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5068) {
            ctx->pc = 0x1D5080u;
            goto label_1d5080;
        }
    }
    ctx->pc = 0x1D5070u;
    // 0x1d5070: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d5070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5074: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d5074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d5078: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d5078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d507c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1d507cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1d5080:
    // 0x1d5080: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x1d5080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1d5084: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1d5084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1d5088: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5088u;
    {
        const bool branch_taken_0x1d5088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5088) {
            ctx->pc = 0x1D50A0u;
            goto label_1d50a0;
        }
    }
    ctx->pc = 0x1D5090u;
    // 0x1d5090: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d5090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d5094: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d5094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d5098: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d5098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d509c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1d509cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_1d50a0:
    // 0x1d50a0: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x1d50a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1d50a4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1d50a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1d50a8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D50A8u;
    {
        const bool branch_taken_0x1d50a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d50a8) {
            ctx->pc = 0x1D50D4u;
            goto label_1d50d4;
        }
    }
    ctx->pc = 0x1D50B0u;
    // 0x1d50b0: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x1d50b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1d50b4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1d50b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1d50b8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D50B8u;
    {
        const bool branch_taken_0x1d50b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d50b8) {
            ctx->pc = 0x1D50D4u;
            goto label_1d50d4;
        }
    }
    ctx->pc = 0x1D50C0u;
    // 0x1d50c0: 0x8e6400bc  lw          $a0, 0xBC($s3)
    ctx->pc = 0x1d50c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x1d50c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d50c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d50c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d50c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d50cc: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x1D50CCu;
    {
        const bool branch_taken_0x1d50cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d50cc) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D50D4u;
label_1d50d4:
    // 0x1d50d4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d50d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d50d8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1d50d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1d50dc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d50dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d50e0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1d50e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1d50e4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1D50E4u;
    {
        const bool branch_taken_0x1d50e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d50e4) {
            ctx->pc = 0x1D5250u;
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D50ECu;
label_1d50ec:
    // 0x1d50ec: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1d50ecu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d50f0: 0x26700020  addiu       $s0, $s3, 0x20
    ctx->pc = 0x1d50f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1d50f4: 0x26710050  addiu       $s1, $s3, 0x50
    ctx->pc = 0x1d50f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x1d50f8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d50f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d50fc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d50fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d5100: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1d5100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d5104: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5108: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1D5108u;
    SET_GPR_U32(ctx, 31, 0x1D5110u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1D5110u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D5110u) { return; }
    ctx->pc = 0x1D5110u;
label_1d5110:
    // 0x1d5110: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1d5110u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1d5114: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d5114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d5118: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x1d5118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1d511c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d511cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5120: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1D5120u;
    SET_GPR_U32(ctx, 31, 0x1D5128u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1D5128u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D5128u) { return; }
    ctx->pc = 0x1D5128u;
label_1d5128:
    // 0x1d5128: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d5128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d512c: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1d512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1d5130: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d5130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d5134: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d5134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d5138: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1d5138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1d513c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1d513cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1d5140: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d5140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d5144: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d5144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d5148: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1d5148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d514c: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D514Cu;
    SET_GPR_U32(ctx, 31, 0x1D5154u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D514Cu, 0x1D5154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5154u;
label_1d5154:
    // 0x1d5154: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x1d5154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x1d5158: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1d5158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d515c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d515cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d5160: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x1d5160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1d5164: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D5164u;
    SET_GPR_U32(ctx, 31, 0x1D516Cu);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D5164u, 0x1D516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D516Cu;
label_1d516c:
    // 0x1d516c: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1d516cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1d5170: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d5170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1d5174: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1d5174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1d5178: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x1d5178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1d517c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1d517cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1d5180: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5180u;
    {
        const bool branch_taken_0x1d5180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5180) {
            ctx->pc = 0x1D5198u;
            goto label_1d5198;
        }
    }
    ctx->pc = 0x1D5188u;
    // 0x1d5188: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d5188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d518c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d518cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d5190: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d5190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d5194: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1d5194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1d5198:
    // 0x1d5198: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x1d5198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1d519c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1d519cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1d51a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D51A0u;
    {
        const bool branch_taken_0x1d51a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d51a0) {
            ctx->pc = 0x1D51B8u;
            goto label_1d51b8;
        }
    }
    ctx->pc = 0x1D51A8u;
    // 0x1d51a8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d51a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d51ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d51acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d51b0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d51b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d51b4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1d51b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_1d51b8:
    // 0x1d51b8: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x1d51b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1d51bc: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1d51bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1d51c0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D51C0u;
    {
        const bool branch_taken_0x1d51c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d51c0) {
            ctx->pc = 0x1D51D8u;
            goto label_1d51d8;
        }
    }
    ctx->pc = 0x1D51C8u;
    // 0x1d51c8: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x1d51c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1d51cc: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1d51ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1d51d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D51D0u;
    {
        const bool branch_taken_0x1d51d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d51d0) {
            ctx->pc = 0x1D51E8u;
            goto label_1d51e8;
        }
    }
    ctx->pc = 0x1D51D8u;
label_1d51d8:
    // 0x1d51d8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d51d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d51dc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1d51dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1d51e0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d51e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d51e4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1d51e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_1d51e8:
    // 0x1d51e8: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d51e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d51ec: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x1d51ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d51f0: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1d51f0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d51f4:
    // 0x1d51f4: 0x26c40001  addiu       $a0, $s6, 0x1
    ctx->pc = 0x1d51f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d51f8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d51f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d51fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d51fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d5200: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d5200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d5204: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d5204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d5208: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1d5208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1d520c: 0x24740020  addiu       $s4, $v1, 0x20
    ctx->pc = 0x1d520cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1d5210: 0x26c40001  addiu       $a0, $s6, 0x1
    ctx->pc = 0x1d5210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d5214: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d5214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d5218: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d5218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d521c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d521cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d5220: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d5220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d5224: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1d5224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1d5228: 0x24750050  addiu       $s5, $v1, 0x50
    ctx->pc = 0x1d5228u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1d522c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1d522cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5230: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x1d5230u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
    // 0x1d5234: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x1d5234u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5238: 0x7ea30000  sq          $v1, 0x0($s5)
    ctx->pc = 0x1d5238u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 3));
    // 0x1d523c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d523cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d5240: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1d5240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1d5244: 0x1640ffeb  bnez        $s2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D5244u;
    {
        const bool branch_taken_0x1d5244 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5244) {
            ctx->pc = 0x1D51F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d51f4;
        }
    }
    ctx->pc = 0x1D524Cu;
    // 0x1d524c: 0x0  nop
    ctx->pc = 0x1d524cu;
    // NOP
label_1d5250:
    // 0x1d5250: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1d5250u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d5254: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d5254u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d5258: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d5258u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d525c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d525cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d5260: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d5260u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d5264: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d5264u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5268: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d5268u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d526c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d526cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d5270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5278: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x1d5278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1d527c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D527Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D527Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5284u;
}
