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

// Function: Em02_R1_br_mv02
// Address: 0x29e8c0 - 0x29ea38
void Em02_R1_br_mv02_0x29e8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_br_mv02_0x29e8c0");
#endif

    switch (ctx->pc) {
        case 0x29e8fcu: goto label_29e8fc;
        default: break;
    }

    ctx->pc = 0x29e8c0u;

    // 0x29e8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29e8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29e8c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x29e8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x29e8c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x29e8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x29e8cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29e8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29e8d0: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x29e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x29e8d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29e8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29e8d8: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x29E8D8u;
    {
        const bool branch_taken_0x29e8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e8d8) {
            ctx->pc = 0x29E958u;
            goto label_29e958;
        }
    }
    ctx->pc = 0x29E8E0u;
    // 0x29e8e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e8e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e8e8: 0x94630046  lhu         $v1, 0x46($v1)
    ctx->pc = 0x29e8e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x29e8ec: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x29E8ECu;
    {
        const bool branch_taken_0x29e8ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e8ec) {
            ctx->pc = 0x29E958u;
            goto label_29e958;
        }
    }
    ctx->pc = 0x29E8F4u;
    // 0x29e8f4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29E8F4u;
    SET_GPR_U32(ctx, 31, 0x29E8FCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29E8F4u, 0x29E8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E8FCu;
label_29e8fc:
    // 0x29e8fc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29e8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e900: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x29e900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x29e904: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29e904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e908: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x29E908u;
    {
        const bool branch_taken_0x29e908 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29e908) {
            ctx->pc = 0x29E958u;
            goto label_29e958;
        }
    }
    ctx->pc = 0x29E910u;
    // 0x29e910: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e914: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e918: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x29e918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29e91c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x29e91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x29e920: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29E920u;
    {
        const bool branch_taken_0x29e920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e920) {
            ctx->pc = 0x29E958u;
            goto label_29e958;
        }
    }
    ctx->pc = 0x29E928u;
    // 0x29e928: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e92c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e930: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e934: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x29e934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29e938: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e93c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e93cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e940: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e944: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e944u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e948: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e94c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e94cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e950: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e954: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29e958:
    // 0x29e958: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e95c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e960: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x29e960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x29e964: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x29E964u;
    {
        const bool branch_taken_0x29e964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e964) {
            ctx->pc = 0x29E9B8u;
            goto label_29e9b8;
        }
    }
    ctx->pc = 0x29E96Cu;
    // 0x29e96c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e970: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e974: 0x9463004a  lhu         $v1, 0x4A($v1)
    ctx->pc = 0x29e974u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 74)));
    // 0x29e978: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29e978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29e97c: 0x28610168  slti        $at, $v1, 0x168
    ctx->pc = 0x29e97cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)360) ? 1 : 0);
    // 0x29e980: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x29E980u;
    {
        const bool branch_taken_0x29e980 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e980) {
            ctx->pc = 0x29E9B8u;
            goto label_29e9b8;
        }
    }
    ctx->pc = 0x29E988u;
    // 0x29e988: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e98c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e990: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e990u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e994: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x29e994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29e998: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e99c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e99cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e9a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e9a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e9a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e9ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e9acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e9b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e9b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29e9b8:
    // 0x29e9b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e9bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e9c0: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x29e9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e9c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e9c8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x29e9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e9cc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x29e9ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e9d0: 0x0  nop
    ctx->pc = 0x29e9d0u;
    // NOP
    // 0x29e9d4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x29E9D4u;
    {
        const bool branch_taken_0x29e9d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e9d4) {
            ctx->pc = 0x29EA28u;
            goto label_29ea28;
        }
    }
    ctx->pc = 0x29E9DCu;
    // 0x29e9dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e9e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e9e4: 0x94630048  lhu         $v1, 0x48($v1)
    ctx->pc = 0x29e9e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x29e9e8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29e9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29e9ec: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x29e9ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x29e9f0: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x29E9F0u;
    {
        const bool branch_taken_0x29e9f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e9f0) {
            ctx->pc = 0x29EA28u;
            goto label_29ea28;
        }
    }
    ctx->pc = 0x29E9F8u;
    // 0x29e9f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e9fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ea00: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29ea00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29ea04: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29ea08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ea0c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29ea0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29ea10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ea14: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29ea14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ea18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ea1c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29ea1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ea20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ea24: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29ea24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29ea28:
    // 0x29ea28: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x29ea28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ea2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29ea2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29ea30: 0x3e00008  jr          $ra
    ctx->pc = 0x29EA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EA38u;
}
