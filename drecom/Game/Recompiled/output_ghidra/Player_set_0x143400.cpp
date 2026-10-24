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

// Function: Player_set
// Address: 0x143400 - 0x14395c
void Player_set_0x143400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Player_set_0x143400");
#endif

    switch (ctx->pc) {
        case 0x14348cu: goto label_14348c;
        case 0x143498u: goto label_143498;
        case 0x1434a4u: goto label_1434a4;
        case 0x143584u: goto label_143584;
        case 0x143598u: goto label_143598;
        case 0x1435b0u: goto label_1435b0;
        case 0x1435c4u: goto label_1435c4;
        case 0x1435d8u: goto label_1435d8;
        case 0x1435ecu: goto label_1435ec;
        case 0x143600u: goto label_143600;
        case 0x14361cu: goto label_14361c;
        case 0x143630u: goto label_143630;
        case 0x143644u: goto label_143644;
        case 0x14365cu: goto label_14365c;
        case 0x143670u: goto label_143670;
        case 0x143684u: goto label_143684;
        case 0x143698u: goto label_143698;
        case 0x1436a4u: goto label_1436a4;
        case 0x1436b4u: goto label_1436b4;
        case 0x1436c0u: goto label_1436c0;
        case 0x1436ccu: goto label_1436cc;
        case 0x14372cu: goto label_14372c;
        case 0x143748u: goto label_143748;
        case 0x143758u: goto label_143758;
        case 0x14376cu: goto label_14376c;
        case 0x143780u: goto label_143780;
        case 0x14379cu: goto label_14379c;
        case 0x1437a4u: goto label_1437a4;
        case 0x1437bcu: goto label_1437bc;
        case 0x1437d4u: goto label_1437d4;
        case 0x1437e8u: goto label_1437e8;
        case 0x143840u: goto label_143840;
        case 0x143854u: goto label_143854;
        case 0x1438bcu: goto label_1438bc;
        case 0x1438d0u: goto label_1438d0;
        default: break;
    }

    ctx->pc = 0x143400u;

    // 0x143400: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x143400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x143404: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x143404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x143408: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x143408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14340c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14340cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x143410: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x143410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x143414: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x143414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x143418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14341c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14341cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143420: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x143424: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x143424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x143428: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x14342c: 0x2454a4a0  addiu       $s4, $v0, -0x5B60
    ctx->pc = 0x14342cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943904));
    // 0x143430: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x143434: 0x2455b700  addiu       $s5, $v0, -0x4900
    ctx->pc = 0x143434u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948608));
    // 0x143438: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x14343c: 0x24519240  addiu       $s1, $v0, -0x6DC0
    ctx->pc = 0x14343cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
    // 0x143440: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x143440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x143444: 0x2453a530  addiu       $s3, $v0, -0x5AD0
    ctx->pc = 0x143444u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944048));
    // 0x143448: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x14344c: 0x2452c960  addiu       $s2, $v0, -0x36A0
    ctx->pc = 0x14344cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953312));
    // 0x143450: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x143450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x143454: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x143454u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBD2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBD2u, _value); } while (0);
    // 0x143458: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x143458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14345c: 0xa2820012  sb          $v0, 0x12($s4)
    ctx->pc = 0x14345cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EA4B2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EA4B2u, _value); } while (0);
    // 0x143460: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x143460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x143464: 0xa2a20012  sb          $v0, 0x12($s5)
    ctx->pc = 0x143464u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EB712u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EB712u, _value); } while (0);
    // 0x143468: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x143468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14346c: 0xa2220012  sb          $v0, 0x12($s1)
    ctx->pc = 0x14346cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9252u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3E9252u, _value); } while (0);
    // 0x143470: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x143470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x143474: 0xa2620012  sb          $v0, 0x12($s3)
    ctx->pc = 0x143474u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FA542u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5FA542u, _value); } while (0);
    // 0x143478: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x143478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14347c: 0xa2420012  sb          $v0, 0x12($s2)
    ctx->pc = 0x14347cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EC972u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EC972u, _value); } while (0);
    // 0x143480: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x143480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x143484: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x143484u;
    SET_GPR_U32(ctx, 31, 0x14348Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x143484u, 0x14348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14348Cu;
label_14348c:
    // 0x14348c: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x14348cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x143490: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x143490u;
    SET_GPR_U32(ctx, 31, 0x143498u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x143490u, 0x143498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143498u;
label_143498:
    // 0x143498: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x143498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x14349c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x14349Cu;
    SET_GPR_U32(ctx, 31, 0x1434A4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x14349Cu, 0x1434A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1434A4u;
label_1434a4:
    // 0x1434a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1434a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1434a8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1434a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1434ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1434acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1434b0: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x1434b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x1434b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1434b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1434b8: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x1434b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x1434bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1434bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1434c0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1434c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1434c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1434c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1434c8: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1434c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1434cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1434ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1434d0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1434d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1434d4: 0xa20010a9  sb          $zero, 0x10A9($s0)
    ctx->pc = 0x1434d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4265), (uint8_t)GPR_U32(ctx, 0));
    // 0x1434d8: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1434d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1434dc: 0xa602138c  sh          $v0, 0x138C($s0)
    ctx->pc = 0x1434dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5004), (uint16_t)GPR_U32(ctx, 2));
    // 0x1434e0: 0x8602138c  lh          $v0, 0x138C($s0)
    ctx->pc = 0x1434e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5004)));
    // 0x1434e4: 0xa60210a6  sh          $v0, 0x10A6($s0)
    ctx->pc = 0x1434e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 2));
    // 0x1434e8: 0xae001390  sw          $zero, 0x1390($s0)
    ctx->pc = 0x1434e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5008), GPR_U32(ctx, 0));
    // 0x1434ec: 0xae001394  sw          $zero, 0x1394($s0)
    ctx->pc = 0x1434ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5012), GPR_U32(ctx, 0));
    // 0x1434f0: 0xae001398  sw          $zero, 0x1398($s0)
    ctx->pc = 0x1434f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5016), GPR_U32(ctx, 0));
    // 0x1434f4: 0xae00139c  sw          $zero, 0x139C($s0)
    ctx->pc = 0x1434f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5020), GPR_U32(ctx, 0));
    // 0x1434f8: 0xae0013a0  sw          $zero, 0x13A0($s0)
    ctx->pc = 0x1434f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5024), GPR_U32(ctx, 0));
    // 0x1434fc: 0xa20013a4  sb          $zero, 0x13A4($s0)
    ctx->pc = 0x1434fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5028), (uint8_t)GPR_U32(ctx, 0));
    // 0x143500: 0xa20013a5  sb          $zero, 0x13A5($s0)
    ctx->pc = 0x143500u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5029), (uint8_t)GPR_U32(ctx, 0));
    // 0x143504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143508: 0xa20213a4  sb          $v0, 0x13A4($s0)
    ctx->pc = 0x143508u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5028), (uint8_t)GPR_U32(ctx, 2));
    // 0x14350c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14350cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143510: 0xa20213a5  sb          $v0, 0x13A5($s0)
    ctx->pc = 0x143510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5029), (uint8_t)GPR_U32(ctx, 2));
    // 0x143514: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x143514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x143518: 0x8c221a40  lw          $v0, 0x1A40($at)
    ctx->pc = 0x143518u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x14351c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x14351cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x143520: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x143520u;
    {
        const bool branch_taken_0x143520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143520) {
            ctx->pc = 0x143538u;
            goto label_143538;
        }
    }
    ctx->pc = 0x143528u;
    // 0x143528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14352c: 0xa20213a6  sb          $v0, 0x13A6($s0)
    ctx->pc = 0x14352cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5030), (uint8_t)GPR_U32(ctx, 2));
    // 0x143530: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x143530u;
    {
        const bool branch_taken_0x143530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143530) {
            ctx->pc = 0x14353Cu;
            goto label_14353c;
        }
    }
    ctx->pc = 0x143538u;
label_143538:
    // 0x143538: 0xa20013a6  sb          $zero, 0x13A6($s0)
    ctx->pc = 0x143538u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5030), (uint8_t)GPR_U32(ctx, 0));
label_14353c:
    // 0x14353c: 0xa20013a7  sb          $zero, 0x13A7($s0)
    ctx->pc = 0x14353cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5031), (uint8_t)GPR_U32(ctx, 0));
    // 0x143540: 0xa60013a8  sh          $zero, 0x13A8($s0)
    ctx->pc = 0x143540u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5032), (uint16_t)GPR_U32(ctx, 0));
    // 0x143544: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x143544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x143548: 0xa60213aa  sh          $v0, 0x13AA($s0)
    ctx->pc = 0x143548u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5034), (uint16_t)GPR_U32(ctx, 2));
    // 0x14354c: 0xa60013ac  sh          $zero, 0x13AC($s0)
    ctx->pc = 0x14354cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5036), (uint16_t)GPR_U32(ctx, 0));
    // 0x143550: 0x240204b0  addiu       $v0, $zero, 0x4B0
    ctx->pc = 0x143550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x143554: 0xa60213ae  sh          $v0, 0x13AE($s0)
    ctx->pc = 0x143554u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5038), (uint16_t)GPR_U32(ctx, 2));
    // 0x143558: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x143558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x14355c: 0x24425200  addiu       $v0, $v0, 0x5200
    ctx->pc = 0x14355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
    // 0x143560: 0xae021228  sw          $v0, 0x1228($s0)
    ctx->pc = 0x143560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4648), GPR_U32(ctx, 2));
    // 0x143564: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x143564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x143568: 0xae02121c  sw          $v0, 0x121C($s0)
    ctx->pc = 0x143568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4636), GPR_U32(ctx, 2));
    // 0x14356c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143570: 0xa2021219  sb          $v0, 0x1219($s0)
    ctx->pc = 0x143570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4633), (uint8_t)GPR_U32(ctx, 2));
    // 0x143574: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x143574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x143578: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x143578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14357c: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x14357Cu;
    SET_GPR_U32(ctx, 31, 0x143584u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x14357Cu, 0x143584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143584u;
label_143584:
    // 0x143584: 0xae02131c  sw          $v0, 0x131C($s0)
    ctx->pc = 0x143584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4892), GPR_U32(ctx, 2));
    // 0x143588: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x143588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x14358c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x14358cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x143590: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x143590u;
    SET_GPR_U32(ctx, 31, 0x143598u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x143590u, 0x143598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143598u;
label_143598:
    // 0x143598: 0xae021320  sw          $v0, 0x1320($s0)
    ctx->pc = 0x143598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4896), GPR_U32(ctx, 2));
    // 0x14359c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x14359cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1435a0: 0x34448000  ori         $a0, $v0, 0x8000
    ctx->pc = 0x1435a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1435a4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1435a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1435a8: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x1435A8u;
    SET_GPR_U32(ctx, 31, 0x1435B0u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x1435A8u, 0x1435B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1435B0u;
label_1435b0:
    // 0x1435b0: 0xae021324  sw          $v0, 0x1324($s0)
    ctx->pc = 0x1435b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4900), GPR_U32(ctx, 2));
    // 0x1435b4: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1435b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x1435b8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1435b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1435bc: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x1435BCu;
    SET_GPR_U32(ctx, 31, 0x1435C4u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x1435BCu, 0x1435C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1435C4u;
label_1435c4:
    // 0x1435c4: 0xae021328  sw          $v0, 0x1328($s0)
    ctx->pc = 0x1435c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4904), GPR_U32(ctx, 2));
    // 0x1435c8: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x1435c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x1435cc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1435ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1435d0: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x1435D0u;
    SET_GPR_U32(ctx, 31, 0x1435D8u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x1435D0u, 0x1435D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1435D8u;
label_1435d8:
    // 0x1435d8: 0xae421244  sw          $v0, 0x1244($s2)
    ctx->pc = 0x1435d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4676), GPR_U32(ctx, 2));
    // 0x1435dc: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x1435dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x1435e0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1435e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1435e4: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x1435E4u;
    SET_GPR_U32(ctx, 31, 0x1435ECu);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x1435E4u, 0x1435ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1435ECu;
label_1435ec:
    // 0x1435ec: 0xae821240  sw          $v0, 0x1240($s4)
    ctx->pc = 0x1435ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4672), GPR_U32(ctx, 2));
    // 0x1435f0: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x1435f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x1435f4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1435f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1435f8: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x1435F8u;
    SET_GPR_U32(ctx, 31, 0x143600u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x1435F8u, 0x143600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143600u;
label_143600:
    // 0x143600: 0xae821244  sw          $v0, 0x1244($s4)
    ctx->pc = 0x143600u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4676), GPR_U32(ctx, 2));
    // 0x143604: 0x8e821240  lw          $v0, 0x1240($s4)
    ctx->pc = 0x143604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4672)));
    // 0x143608: 0xaea21240  sw          $v0, 0x1240($s5)
    ctx->pc = 0x143608u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4672), GPR_U32(ctx, 2));
    // 0x14360c: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x14360cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x143610: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x143610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x143614: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x143614u;
    SET_GPR_U32(ctx, 31, 0x14361Cu);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x143614u, 0x14361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14361Cu;
label_14361c:
    // 0x14361c: 0xaea21244  sw          $v0, 0x1244($s5)
    ctx->pc = 0x14361cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4676), GPR_U32(ctx, 2));
    // 0x143620: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x143620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x143624: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x143624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x143628: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x143628u;
    SET_GPR_U32(ctx, 31, 0x143630u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x143628u, 0x143630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143630u;
label_143630:
    // 0x143630: 0xae221240  sw          $v0, 0x1240($s1)
    ctx->pc = 0x143630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4672), GPR_U32(ctx, 2));
    // 0x143634: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x143634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x143638: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x143638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14363c: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x14363Cu;
    SET_GPR_U32(ctx, 31, 0x143644u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x14363Cu, 0x143644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143644u;
label_143644:
    // 0x143644: 0xae221244  sw          $v0, 0x1244($s1)
    ctx->pc = 0x143644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4676), GPR_U32(ctx, 2));
    // 0x143648: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x143648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x14364c: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x14364cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x143650: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x143650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x143654: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x143654u;
    SET_GPR_U32(ctx, 31, 0x14365Cu);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x143654u, 0x14365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14365Cu;
label_14365c:
    // 0x14365c: 0xae62131c  sw          $v0, 0x131C($s3)
    ctx->pc = 0x14365cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4892), GPR_U32(ctx, 2));
    // 0x143660: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x143660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x143664: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x143664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x143668: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x143668u;
    SET_GPR_U32(ctx, 31, 0x143670u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x143668u, 0x143670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143670u;
label_143670:
    // 0x143670: 0xae621320  sw          $v0, 0x1320($s3)
    ctx->pc = 0x143670u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4896), GPR_U32(ctx, 2));
    // 0x143674: 0x24043000  addiu       $a0, $zero, 0x3000
    ctx->pc = 0x143674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x143678: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x143678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14367c: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x14367Cu;
    SET_GPR_U32(ctx, 31, 0x143684u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x14367Cu, 0x143684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143684u;
label_143684:
    // 0x143684: 0xae62138c  sw          $v0, 0x138C($s3)
    ctx->pc = 0x143684u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5004), GPR_U32(ctx, 2));
    // 0x143688: 0x24043000  addiu       $a0, $zero, 0x3000
    ctx->pc = 0x143688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x14368c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x14368cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x143690: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x143690u;
    SET_GPR_U32(ctx, 31, 0x143698u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x143690u, 0x143698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143698u;
label_143698:
    // 0x143698: 0xae621390  sw          $v0, 0x1390($s3)
    ctx->pc = 0x143698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5008), GPR_U32(ctx, 2));
    // 0x14369c: 0xc050e58  jal         func_143960
    ctx->pc = 0x14369Cu;
    SET_GPR_U32(ctx, 31, 0x1436A4u);
    ctx->pc = 0x143960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143960u, 0x14369Cu, 0x1436A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436A4u;
label_1436a4:
    // 0x1436a4: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x1436a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x1436a8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1436a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1436ac: 0xc050ea4  jal         func_143A90
    ctx->pc = 0x1436ACu;
    SET_GPR_U32(ctx, 31, 0x1436B4u);
    ctx->pc = 0x143A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143A90u, 0x1436ACu, 0x1436B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436B4u;
label_1436b4:
    // 0x1436b4: 0x8e041330  lw          $a0, 0x1330($s0)
    ctx->pc = 0x1436b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
    // 0x1436b8: 0xc09528c  jal         func_254A30
    ctx->pc = 0x1436B8u;
    SET_GPR_U32(ctx, 31, 0x1436C0u);
    ctx->pc = 0x254A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254A30u, 0x1436B8u, 0x1436C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436C0u;
label_1436c0:
    // 0x1436c0: 0x8e041334  lw          $a0, 0x1334($s0)
    ctx->pc = 0x1436c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
    // 0x1436c4: 0xc09528c  jal         func_254A30
    ctx->pc = 0x1436C4u;
    SET_GPR_U32(ctx, 31, 0x1436CCu);
    ctx->pc = 0x254A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254A30u, 0x1436C4u, 0x1436CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436CCu;
label_1436cc:
    // 0x1436cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1436ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1436d0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1436d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1436d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1436d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1436d8: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1436d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1436dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1436dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1436e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1436e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1436e4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1436e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1436e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1436e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1436ec: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1436ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1436f0: 0x2402dfff  addiu       $v0, $zero, -0x2001
    ctx->pc = 0x1436f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x1436f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1436f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1436f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1436f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1436fc: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1436fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x143700: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x143700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x143704: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x143704u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x143708: 0x2402fdff  addiu       $v0, $zero, -0x201
    ctx->pc = 0x143708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x14370c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14370cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x143710: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x143710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x143714: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x143714u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x143718: 0x8e041340  lw          $a0, 0x1340($s0)
    ctx->pc = 0x143718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4928)));
    // 0x14371c: 0x8e051330  lw          $a1, 0x1330($s0)
    ctx->pc = 0x14371cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
    // 0x143720: 0x8e061324  lw          $a2, 0x1324($s0)
    ctx->pc = 0x143720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4900)));
    // 0x143724: 0xc050efc  jal         func_143BF0
    ctx->pc = 0x143724u;
    SET_GPR_U32(ctx, 31, 0x14372Cu);
    ctx->pc = 0x143BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143BF0u, 0x143724u, 0x14372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14372Cu;
label_14372c:
    // 0x14372c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x14372cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x143730: 0xae021338  sw          $v0, 0x1338($s0)
    ctx->pc = 0x143730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4920), GPR_U32(ctx, 2));
    // 0x143734: 0x8e041344  lw          $a0, 0x1344($s0)
    ctx->pc = 0x143734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4932)));
    // 0x143738: 0x8e051334  lw          $a1, 0x1334($s0)
    ctx->pc = 0x143738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
    // 0x14373c: 0x8e061328  lw          $a2, 0x1328($s0)
    ctx->pc = 0x14373cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4904)));
    // 0x143740: 0xc050efc  jal         func_143BF0
    ctx->pc = 0x143740u;
    SET_GPR_U32(ctx, 31, 0x143748u);
    ctx->pc = 0x143BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143BF0u, 0x143740u, 0x143748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143748u;
label_143748:
    // 0x143748: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x143748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x14374c: 0xae02133c  sw          $v0, 0x133C($s0)
    ctx->pc = 0x14374cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 2));
    // 0x143750: 0xc051134  jal         func_1444D0
    ctx->pc = 0x143750u;
    SET_GPR_U32(ctx, 31, 0x143758u);
    ctx->pc = 0x1444D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1444D0u, 0x143750u, 0x143758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143758u;
label_143758:
    // 0x143758: 0x8e041340  lw          $a0, 0x1340($s0)
    ctx->pc = 0x143758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4928)));
    // 0x14375c: 0x8e051330  lw          $a1, 0x1330($s0)
    ctx->pc = 0x14375cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
    // 0x143760: 0x8e061338  lw          $a2, 0x1338($s0)
    ctx->pc = 0x143760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x143764: 0xc050f38  jal         func_143CE0
    ctx->pc = 0x143764u;
    SET_GPR_U32(ctx, 31, 0x14376Cu);
    ctx->pc = 0x143CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143CE0u, 0x143764u, 0x14376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14376Cu;
label_14376c:
    // 0x14376c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x14376cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x143770: 0xa0400090  sb          $zero, 0x90($v0)
    ctx->pc = 0x143770u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x143774: 0xfe000a08  sd          $zero, 0xA08($s0)
    ctx->pc = 0x143774u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2568), GPR_U64(ctx, 0));
    // 0x143778: 0xc050f9c  jal         func_143E70
    ctx->pc = 0x143778u;
    SET_GPR_U32(ctx, 31, 0x143780u);
    ctx->pc = 0x143E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143E70u, 0x143778u, 0x143780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143780u;
label_143780:
    // 0x143780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143784: 0xa20213f8  sb          $v0, 0x13F8($s0)
    ctx->pc = 0x143784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5112), (uint8_t)GPR_U32(ctx, 2));
    // 0x143788: 0xa20013f9  sb          $zero, 0x13F9($s0)
    ctx->pc = 0x143788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x14378c: 0x920213f8  lbu         $v0, 0x13F8($s0)
    ctx->pc = 0x14378cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5112)));
    // 0x143790: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x143790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x143794: 0xc051004  jal         func_144010
    ctx->pc = 0x143794u;
    SET_GPR_U32(ctx, 31, 0x14379Cu);
    ctx->pc = 0x144010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144010u, 0x143794u, 0x14379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14379Cu;
label_14379c:
    // 0x14379c: 0xc051110  jal         func_144440
    ctx->pc = 0x14379Cu;
    SET_GPR_U32(ctx, 31, 0x1437A4u);
    ctx->pc = 0x144440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144440u, 0x14379Cu, 0x1437A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437A4u;
label_1437a4:
    // 0x1437a4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1437a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1437a8: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x1437a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x1437ac: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1437acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1437b0: 0xae6200c0  sw          $v0, 0xC0($s3)
    ctx->pc = 0x1437b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 2));
    // 0x1437b4: 0xc051158  jal         func_144560
    ctx->pc = 0x1437B4u;
    SET_GPR_U32(ctx, 31, 0x1437BCu);
    ctx->pc = 0x144560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144560u, 0x1437B4u, 0x1437BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437BCu;
label_1437bc:
    // 0x1437bc: 0x8e0301ec  lw          $v1, 0x1EC($s0)
    ctx->pc = 0x1437bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1437c0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1437C0u;
    {
        const bool branch_taken_0x1437c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1437c0) {
            ctx->pc = 0x143828u;
            goto label_143828;
        }
    }
    ctx->pc = 0x1437C8u;
    // 0x1437c8: 0x8e0401ec  lw          $a0, 0x1EC($s0)
    ctx->pc = 0x1437c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1437cc: 0xc0794b0  jal         func_1E52C0
    ctx->pc = 0x1437CCu;
    SET_GPR_U32(ctx, 31, 0x1437D4u);
    ctx->pc = 0x1E52C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E52C0u, 0x1437CCu, 0x1437D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437D4u;
label_1437d4:
    // 0x1437d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1437d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1437d8: 0x8c250ae8  lw          $a1, 0xAE8($at)
    ctx->pc = 0x1437d8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1437dc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1437dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1437e0: 0xc079534  jal         func_1E54D0
    ctx->pc = 0x1437E0u;
    SET_GPR_U32(ctx, 31, 0x1437E8u);
    ctx->pc = 0x1E54D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E54D0u, 0x1437E0u, 0x1437E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437E8u;
label_1437e8:
    // 0x1437e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1437e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1437ec: 0xac220ae8  sw          $v0, 0xAE8($at)
    ctx->pc = 0x1437ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1437f0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1437f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1437f4: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x1437f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1437f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1437f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1437fc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1437fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x143800: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x143800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x143804: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x143804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x143808: 0x24650ae8  addiu       $a1, $v1, 0xAE8
    ctx->pc = 0x143808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x14380c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14380cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x143810: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x143810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x143814: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x143814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x143818: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x143818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x14381c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14381cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x143820: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x143820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x143824: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x143824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_143828:
    // 0x143828: 0x8e4301ec  lw          $v1, 0x1EC($s2)
    ctx->pc = 0x143828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 492)));
    // 0x14382c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x14382Cu;
    {
        const bool branch_taken_0x14382c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14382c) {
            ctx->pc = 0x1438A4u;
            goto label_1438a4;
        }
    }
    ctx->pc = 0x143834u;
    // 0x143834: 0x8e4401ec  lw          $a0, 0x1EC($s2)
    ctx->pc = 0x143834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 492)));
    // 0x143838: 0xc0794b0  jal         func_1E52C0
    ctx->pc = 0x143838u;
    SET_GPR_U32(ctx, 31, 0x143840u);
    ctx->pc = 0x1E52C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E52C0u, 0x143838u, 0x143840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143840u;
label_143840:
    // 0x143840: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x143840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x143844: 0x8c250ae8  lw          $a1, 0xAE8($at)
    ctx->pc = 0x143844u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x143848: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x143848u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14384c: 0xc079534  jal         func_1E54D0
    ctx->pc = 0x14384Cu;
    SET_GPR_U32(ctx, 31, 0x143854u);
    ctx->pc = 0x1E54D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E54D0u, 0x14384Cu, 0x143854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143854u;
label_143854:
    // 0x143854: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x143854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x143858: 0xac220ae8  sw          $v0, 0xAE8($at)
    ctx->pc = 0x143858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x14385c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14385cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x143860: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x143860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x143864: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x143864u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x143868: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x143868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x14386c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14386cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x143870: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x143870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x143874: 0x24650ae8  addiu       $a1, $v1, 0xAE8
    ctx->pc = 0x143874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x143878: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x143878u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x14387c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x14387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x143880: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x143880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x143884: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x143884u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x143888: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x143888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14388c: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x14388cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x143890: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x143890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x143894: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x143894u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x143898: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x143898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14389c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x14389cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1438a0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1438a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_1438a4:
    // 0x1438a4: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x1438a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x1438a8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1438A8u;
    {
        const bool branch_taken_0x1438a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1438a8) {
            ctx->pc = 0x143920u;
            goto label_143920;
        }
    }
    ctx->pc = 0x1438B0u;
    // 0x1438b0: 0x8e2401ec  lw          $a0, 0x1EC($s1)
    ctx->pc = 0x1438b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x1438b4: 0xc0794b0  jal         func_1E52C0
    ctx->pc = 0x1438B4u;
    SET_GPR_U32(ctx, 31, 0x1438BCu);
    ctx->pc = 0x1E52C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E52C0u, 0x1438B4u, 0x1438BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438BCu;
label_1438bc:
    // 0x1438bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1438bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1438c0: 0x8c250ae8  lw          $a1, 0xAE8($at)
    ctx->pc = 0x1438c0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1438c4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1438c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1438c8: 0xc079534  jal         func_1E54D0
    ctx->pc = 0x1438C8u;
    SET_GPR_U32(ctx, 31, 0x1438D0u);
    ctx->pc = 0x1E54D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E54D0u, 0x1438C8u, 0x1438D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438D0u;
label_1438d0:
    // 0x1438d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1438d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1438d4: 0xac220ae8  sw          $v0, 0xAE8($at)
    ctx->pc = 0x1438d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1438d8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1438d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1438dc: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x1438dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1438e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1438e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1438e4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1438e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1438e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1438e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1438ec: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1438ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1438f0: 0x24650ae8  addiu       $a1, $v1, 0xAE8
    ctx->pc = 0x1438f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1438f4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1438f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1438f8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1438f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1438fc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1438fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x143900: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x143900u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x143904: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x143904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x143908: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x143908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x14390c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14390cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x143910: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x143910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x143914: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x143914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x143918: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x143918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x14391c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x14391cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_143920:
    // 0x143920: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x143920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x143924: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x143924u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x143928: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x143928u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14392c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x14392cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x143930: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x143930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x143934: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x143934u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x143938: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x143938u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14393c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14393cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143940: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x143940u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143944: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x143944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14394c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14394cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143950: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x143950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x143954: 0x3e00008  jr          $ra
    ctx->pc = 0x143954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14395Cu;
}
