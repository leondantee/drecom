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

// Function: Em03_R1_br_mv07
// Address: 0x2c8430 - 0x2c85c8
void Em03_R1_br_mv07_0x2c8430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_br_mv07_0x2c8430");
#endif

    switch (ctx->pc) {
        case 0x2c84b4u: goto label_2c84b4;
        default: break;
    }

    ctx->pc = 0x2c8430u;

    // 0x2c8430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c8434: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2c8434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2c8438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c843c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2c843cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2c8440: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2c8440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2c8444: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x2c8444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x2c8448: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c844c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2c844cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8450: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x2c8450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x2c8454: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2c8454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2c8458: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c8458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c845c: 0x0  nop
    ctx->pc = 0x2c845cu;
    // NOP
    // 0x2c8460: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c8460u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8464: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c8464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8468: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8468u;
    {
        const bool branch_taken_0x2c8468 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8468) {
            ctx->pc = 0x2C8474u;
            goto label_2c8474;
        }
    }
    ctx->pc = 0x2C8470u;
    // 0x2c8470: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x2c8470u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2c8474:
    // 0x2c8474: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c8478: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2c8478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2c847c: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x2C847Cu;
    {
        const bool branch_taken_0x2c847c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c847c) {
            ctx->pc = 0x2C85B4u;
            goto label_2c85b4;
        }
    }
    ctx->pc = 0x2C8484u;
    // 0x2c8484: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c8484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c8488: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x2c8488u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x2c848c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c848cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c8490: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C8490u;
    {
        const bool branch_taken_0x2c8490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8490) {
            ctx->pc = 0x2C8508u;
            goto label_2c8508;
        }
    }
    ctx->pc = 0x2C8498u;
    // 0x2c8498: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c849c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c849cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c84a0: 0x9463005a  lhu         $v1, 0x5A($v1)
    ctx->pc = 0x2c84a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 90)));
    // 0x2c84a4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C84A4u;
    {
        const bool branch_taken_0x2c84a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c84a4) {
            ctx->pc = 0x2C8508u;
            goto label_2c8508;
        }
    }
    ctx->pc = 0x2C84ACu;
    // 0x2c84ac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C84ACu;
    SET_GPR_U32(ctx, 31, 0x2C84B4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C84ACu, 0x2C84B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C84B4u;
label_2c84b4:
    // 0x2c84b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c84b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c84b8: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x2c84b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2c84bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c84bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c84c0: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C84C0u;
    {
        const bool branch_taken_0x2c84c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c84c0) {
            ctx->pc = 0x2C8508u;
            goto label_2c8508;
        }
    }
    ctx->pc = 0x2C84C8u;
    // 0x2c84c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c84c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c84cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c84ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c84d0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c84d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c84d4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c84d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c84d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c84d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c84dc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c84dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c84e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c84e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c84e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c84e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c84e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c84e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c84ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c84ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c84f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c84f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c84f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c84f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c84f8: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x2c84f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x2c84fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c84fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c8500: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8504: 0xa464005a  sh          $a0, 0x5A($v1)
    ctx->pc = 0x2c8504u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 90), (uint16_t)GPR_U32(ctx, 4));
label_2c8508:
    // 0x2c8508: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c850c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c850cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8510: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2c8510u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2c8514: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2c8514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2c8518: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2c8518u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2c851c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C851Cu;
    {
        const bool branch_taken_0x2c851c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c851c) {
            ctx->pc = 0x2C8568u;
            goto label_2c8568;
        }
    }
    ctx->pc = 0x2C8524u;
    // 0x2c8524: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c8528: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c852c: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x2c852cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2c8530: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C8530u;
    {
        const bool branch_taken_0x2c8530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8530) {
            ctx->pc = 0x2C8568u;
            goto label_2c8568;
        }
    }
    ctx->pc = 0x2C8538u;
    // 0x2c8538: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c8538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c853c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c8540: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c8540u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c8544: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2c8544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c8548: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c854c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c854cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c8550: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c8554: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c8554u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8558: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c855c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c855cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8560: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c8564: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c8564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2c8568:
    // 0x2c8568: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c8568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c856c: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x2c856cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2c8570: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2c8570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2c8574: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2c8574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c8578: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2c8578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2c857c: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C857Cu;
    {
        const bool branch_taken_0x2c857c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c857c) {
            ctx->pc = 0x2C85B4u;
            goto label_2c85b4;
        }
    }
    ctx->pc = 0x2C8584u;
    // 0x2c8584: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c8584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8588: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c858c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c858cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c8590: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c8590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c8594: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c8598: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c8598u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c859c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c85a0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c85a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c85a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c85a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c85a8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c85a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c85ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c85acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c85b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c85b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2c85b4:
    // 0x2c85b4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2c85b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c85b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c85b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c85bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2c85bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c85c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C85C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C85C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C85C8u;
}
