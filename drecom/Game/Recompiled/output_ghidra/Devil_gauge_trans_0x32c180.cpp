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

// Function: Devil_gauge_trans
// Address: 0x32c180 - 0x32cfac
void Devil_gauge_trans_0x32c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Devil_gauge_trans_0x32c180");
#endif

    switch (ctx->pc) {
        case 0x32c454u: goto label_32c454;
        case 0x32c560u: goto label_32c560;
        case 0x32c590u: goto label_32c590;
        case 0x32c59cu: goto label_32c59c;
        case 0x32c5d4u: goto label_32c5d4;
        case 0x32c5fcu: goto label_32c5fc;
        case 0x32c624u: goto label_32c624;
        case 0x32c6a0u: goto label_32c6a0;
        case 0x32c6ccu: goto label_32c6cc;
        case 0x32c760u: goto label_32c760;
        case 0x32c77cu: goto label_32c77c;
        case 0x32c7b0u: goto label_32c7b0;
        case 0x32c7ccu: goto label_32c7cc;
        case 0x32c800u: goto label_32c800;
        case 0x32c81cu: goto label_32c81c;
        case 0x32c850u: goto label_32c850;
        case 0x32c874u: goto label_32c874;
        case 0x32c8d4u: goto label_32c8d4;
        case 0x32ca8cu: goto label_32ca8c;
        case 0x32cab4u: goto label_32cab4;
        case 0x32cb44u: goto label_32cb44;
        case 0x32cb60u: goto label_32cb60;
        case 0x32cb94u: goto label_32cb94;
        case 0x32cbb0u: goto label_32cbb0;
        case 0x32cbe4u: goto label_32cbe4;
        case 0x32cc00u: goto label_32cc00;
        case 0x32cc34u: goto label_32cc34;
        case 0x32cc50u: goto label_32cc50;
        case 0x32ccb0u: goto label_32ccb0;
        case 0x32cd10u: goto label_32cd10;
        case 0x32ce30u: goto label_32ce30;
        case 0x32ce98u: goto label_32ce98;
        case 0x32cec4u: goto label_32cec4;
        case 0x32cf2cu: goto label_32cf2c;
        case 0x32cf78u: goto label_32cf78;
        default: break;
    }

    ctx->pc = 0x32c180u;

    // 0x32c180: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x32c180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x32c184: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x32c184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x32c188: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x32c188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x32c18c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x32c18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x32c190: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x32c190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x32c194: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32c194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x32c198: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32c198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32c19c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32c19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32c1a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32c1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32c1a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32c1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32c1a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32c1ac: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x32c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x32c1b0: 0x2442c2f0  addiu       $v0, $v0, -0x3D10
    ctx->pc = 0x32c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951664));
    // 0x32c1b4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x32c1b4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c1b8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x32c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x32c1bc: 0x2456dbc0  addiu       $s6, $v0, -0x2440
    ctx->pc = 0x32c1bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x32c1c0: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x32c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x32c1c4: 0x2442b9a0  addiu       $v0, $v0, -0x4660
    ctx->pc = 0x32c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949280));
    // 0x32c1c8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x32c1c8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c1cc: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x32c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x32c1d0: 0x2442c180  addiu       $v0, $v0, -0x3E80
    ctx->pc = 0x32c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951296));
    // 0x32c1d4: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x32c1d4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c1d8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x32c1d8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32c1dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c1e0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x32c1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x32c1e4: 0x9026e88c  lbu         $a2, -0x1774($at)
    ctx->pc = 0x32c1e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x47E88Cu));
    // 0x32c1e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32c1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32c1ec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32c1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32c1f0: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x32c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x32c1f4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x32c1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x32c1f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32c1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32c1fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x32c1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x32c200: 0xa022e88c  sb          $v0, -0x1774($at)
    ctx->pc = 0x32c200u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47E88Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47E88Cu, _value); } while (0);
    // 0x32c204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c208: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x32c208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x32c20c: 0x9026e890  lbu         $a2, -0x1770($at)
    ctx->pc = 0x32c20cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x47E890u));
    // 0x32c210: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32c210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32c214: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x32c214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x32c218: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x32c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x32c21c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x32c21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x32c220: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32c220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32c224: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x32c224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x32c228: 0xa022e890  sb          $v0, -0x1770($at)
    ctx->pc = 0x32c228u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47E890u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47E890u, _value); } while (0);
    // 0x32c22c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x32c22cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c230: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x32c230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x32c234: 0x9032e88c  lbu         $s2, -0x1774($at)
    ctx->pc = 0x32c234u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)FAST_READ8(0x47E88Cu));
    // 0x32c238: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x32c238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x32c23c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32c240: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x32c240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x32c244: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x32c244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x32c248: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32c248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32c24c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x32c24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x32c250: 0xa022e88c  sb          $v0, -0x1774($at)
    ctx->pc = 0x32c250u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47E88Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47E88Cu, _value); } while (0);
    // 0x32c254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c258: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x32c258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x32c25c: 0x9026e890  lbu         $a2, -0x1770($at)
    ctx->pc = 0x32c25cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x47E890u));
    // 0x32c260: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x32c260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32c264: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x32c264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x32c268: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x32c268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x32c26c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x32c26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x32c270: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32c270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32c274: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x32c274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x32c278: 0xa022e890  sb          $v0, -0x1770($at)
    ctx->pc = 0x32c278u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47E890u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47E890u, _value); } while (0);
    // 0x32c27c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32c27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32c280: 0x8c231a40  lw          $v1, 0x1A40($at)
    ctx->pc = 0x32c280u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x32c284: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x32c284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x32c288: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x32c288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x32c28c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32c28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32c290: 0x144002a2  bnez        $v0, . + 4 + (0x2A2 << 2)
    ctx->pc = 0x32C290u;
    {
        const bool branch_taken_0x32c290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c290) {
            ctx->pc = 0x32CD1Cu;
            goto label_32cd1c;
        }
    }
    ctx->pc = 0x32C298u;
    // 0x32c298: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x32c298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32c29c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32c29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32c2a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c2a4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32C2A4u;
    {
        const bool branch_taken_0x32c2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c2a4) {
            ctx->pc = 0x32C2C0u;
            goto label_32c2c0;
        }
    }
    ctx->pc = 0x32C2ACu;
    // 0x32c2ac: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x32c2acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x32c2b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32c2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32c2b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c2b8: 0x14620298  bne         $v1, $v0, . + 4 + (0x298 << 2)
    ctx->pc = 0x32C2B8u;
    {
        const bool branch_taken_0x32c2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32c2b8) {
            ctx->pc = 0x32CD1Cu;
            goto label_32cd1c;
        }
    }
    ctx->pc = 0x32C2C0u;
label_32c2c0:
    // 0x32c2c0: 0x92c213a6  lbu         $v0, 0x13A6($s6)
    ctx->pc = 0x32c2c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 5030)));
    // 0x32c2c4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x32c2c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32c2c8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32c2cc: 0x10c20038  beq         $a2, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x32C2CCu;
    {
        const bool branch_taken_0x32c2cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c2cc) {
            ctx->pc = 0x32C3B0u;
            goto label_32c3b0;
        }
    }
    ctx->pc = 0x32C2D4u;
    // 0x32c2d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32c2d8: 0x10c3002b  beq         $a2, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x32C2D8u;
    {
        const bool branch_taken_0x32c2d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x32c2d8) {
            ctx->pc = 0x32C388u;
            goto label_32c388;
        }
    }
    ctx->pc = 0x32C2E0u;
    // 0x32c2e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c2e4: 0x10c2001e  beq         $a2, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x32C2E4u;
    {
        const bool branch_taken_0x32c2e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c2e4) {
            ctx->pc = 0x32C360u;
            goto label_32c360;
        }
    }
    ctx->pc = 0x32C2ECu;
    // 0x32c2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c2f0: 0x10c2000f  beq         $a2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x32C2F0u;
    {
        const bool branch_taken_0x32c2f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c2f0) {
            ctx->pc = 0x32C330u;
            goto label_32c330;
        }
    }
    ctx->pc = 0x32C2F8u;
    // 0x32c2f8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x32C2F8u;
    {
        const bool branch_taken_0x32c2f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c2f8) {
            ctx->pc = 0x32C308u;
            goto label_32c308;
        }
    }
    ctx->pc = 0x32C300u;
    // 0x32c300: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x32C300u;
    {
        const bool branch_taken_0x32c300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c300) {
            ctx->pc = 0x32C3D8u;
            goto label_32c3d8;
        }
    }
    ctx->pc = 0x32C308u;
label_32c308:
    // 0x32c308: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x32c308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x32c30c: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x32c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x32c310: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x32c310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x32c314: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x32c314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x32c318: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x32c318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x32c31c: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32c320: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c324: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32c324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x32c328: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x32C328u;
    {
        const bool branch_taken_0x32c328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c328) {
            ctx->pc = 0x32C3F8u;
            goto label_32c3f8;
        }
    }
    ctx->pc = 0x32C330u;
label_32c330:
    // 0x32c330: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x32c330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x32c334: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x32c334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x32c338: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x32c338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x32c33c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x32c33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x32c340: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x32c340u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x32c344: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x32c344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x32c348: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x32c348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x32c34c: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32c350: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c354: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32c354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x32c358: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x32C358u;
    {
        const bool branch_taken_0x32c358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c358) {
            ctx->pc = 0x32C3F8u;
            goto label_32c3f8;
        }
    }
    ctx->pc = 0x32C360u;
label_32c360:
    // 0x32c360: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c364: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x32c364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x32c368: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32c368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c36c: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x32c36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
    // 0x32c370: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32c370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c374: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x32c374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x32c378: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c37c: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32c37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x32c380: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x32C380u;
    {
        const bool branch_taken_0x32c380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c380) {
            ctx->pc = 0x32C3F8u;
            goto label_32c3f8;
        }
    }
    ctx->pc = 0x32C388u;
label_32c388:
    // 0x32c388: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32c388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c38c: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x32c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x32c390: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c394: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x32c394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x32c398: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c39c: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32c3a0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c3a4: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32c3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x32c3a8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x32C3A8u;
    {
        const bool branch_taken_0x32c3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c3a8) {
            ctx->pc = 0x32C3F8u;
            goto label_32c3f8;
        }
    }
    ctx->pc = 0x32C3B0u;
label_32c3b0:
    // 0x32c3b0: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x32c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x32c3b4: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x32c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
    // 0x32c3b8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x32c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x32c3bc: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32c3c0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c3c4: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x32c3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x32c3c8: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x32c3c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x32c3cc: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32c3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x32c3d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32C3D0u;
    {
        const bool branch_taken_0x32c3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c3d0) {
            ctx->pc = 0x32C3F8u;
            goto label_32c3f8;
        }
    }
    ctx->pc = 0x32C3D8u;
label_32c3d8:
    // 0x32c3d8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c3dc: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x32c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x32c3e0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c3e4: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x32c3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x32c3e8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c3ec: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32c3f0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32c3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c3f4: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x32c3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
label_32c3f8:
    // 0x32c3f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32c3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32c3fc: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x32c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x32c400: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x32c400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x32c404: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x32C404u;
    {
        const bool branch_taken_0x32c404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c404) {
            ctx->pc = 0x32C4C0u;
            goto label_32c4c0;
        }
    }
    ctx->pc = 0x32C40Cu;
    // 0x32c40c: 0x86c313ac  lh          $v1, 0x13AC($s6)
    ctx->pc = 0x32c40cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 5036)));
    // 0x32c410: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32c410u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c414: 0x0  nop
    ctx->pc = 0x32c414u;
    // NOP
    // 0x32c418: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32c418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32c41c: 0x86c213ae  lh          $v0, 0x13AE($s6)
    ctx->pc = 0x32c41cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 5038)));
    // 0x32c420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c424: 0x0  nop
    ctx->pc = 0x32c424u;
    // NOP
    // 0x32c428: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32c428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32c42c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x32c42cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32c430: 0x82622820  lb          $v0, 0x2820($s3)
    ctx->pc = 0x32c430u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 10272)));
    // 0x32c434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c438: 0x0  nop
    ctx->pc = 0x32c438u;
    // NOP
    // 0x32c43c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32c43cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32c440: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32c440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32c444: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x32c444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x32c448: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x32c448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c44c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C44Cu;
    SET_GPR_U32(ctx, 31, 0x32C454u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C44Cu, 0x32C454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C454u;
label_32c454:
    // 0x32c454: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32c454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32c458: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32c458u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c45c: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x32c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x32c460: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x32c460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x32c464: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x32c464u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x32c468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c46c: 0x0  nop
    ctx->pc = 0x32c46cu;
    // NOP
    // 0x32c470: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32c470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32c474: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x32c474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c478: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x32c478u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32c47c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x32c47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x32c480: 0x82622820  lb          $v0, 0x2820($s3)
    ctx->pc = 0x32c480u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 10272)));
    // 0x32c484: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32c484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32c488: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32c488u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32c48c: 0x54082a  slt         $at, $v0, $s4
    ctx->pc = 0x32c48cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x32c490: 0x10200072  beqz        $at, . + 4 + (0x72 << 2)
    ctx->pc = 0x32C490u;
    {
        const bool branch_taken_0x32c490 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c490) {
            ctx->pc = 0x32C65Cu;
            goto label_32c65c;
        }
    }
    ctx->pc = 0x32C498u;
    // 0x32c498: 0x82622820  lb          $v0, 0x2820($s3)
    ctx->pc = 0x32c498u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 10272)));
    // 0x32c49c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x32c49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32c4a0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32c4a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32c4a4: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x32c4a4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32c4a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x32c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x32c4ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32c4acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c4b0: 0x0  nop
    ctx->pc = 0x32c4b0u;
    // NOP
    // 0x32c4b4: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x32c4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x32c4b8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x32C4B8u;
    {
        const bool branch_taken_0x32c4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c4b8) {
            ctx->pc = 0x32C65Cu;
            goto label_32c65c;
        }
    }
    ctx->pc = 0x32C4C0u;
label_32c4c0:
    // 0x32c4c0: 0x86c213a8  lh          $v0, 0x13A8($s6)
    ctx->pc = 0x32c4c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 5032)));
    // 0x32c4c4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x32c4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32c4c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32c4c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32c4cc: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x32C4CCu;
    {
        const bool branch_taken_0x32c4cc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x32c4cc) {
            ctx->pc = 0x32C530u;
            goto label_32c530;
        }
    }
    ctx->pc = 0x32C4D4u;
    // 0x32c4d4: 0x86c213a8  lh          $v0, 0x13A8($s6)
    ctx->pc = 0x32c4d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 5032)));
    // 0x32c4d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32c4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32c4dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32c4dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32c4e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c4e4: 0x0  nop
    ctx->pc = 0x32c4e4u;
    // NOP
    // 0x32c4e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32c4e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32c4ec: 0x86c213aa  lh          $v0, 0x13AA($s6)
    ctx->pc = 0x32c4ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 5034)));
    // 0x32c4f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32c4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32c4f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32c4f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32c4f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c4f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c4fc: 0x0  nop
    ctx->pc = 0x32c4fcu;
    // NOP
    // 0x32c500: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32c500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32c504: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x32c504u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32c508: 0x82622820  lb          $v0, 0x2820($s3)
    ctx->pc = 0x32c508u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 10272)));
    // 0x32c50c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x32c50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x32c510: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x32c510u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x32c514: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c518: 0x0  nop
    ctx->pc = 0x32c518u;
    // NOP
    // 0x32c51c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32c51cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32c520: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32c520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32c524: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x32c524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x32c528: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32C528u;
    {
        const bool branch_taken_0x32c528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c528) {
            ctx->pc = 0x32C53Cu;
            goto label_32c53c;
        }
    }
    ctx->pc = 0x32C530u;
label_32c530:
    // 0x32c530: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32c530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c534: 0x0  nop
    ctx->pc = 0x32c534u;
    // NOP
    // 0x32c538: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x32c538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_32c53c:
    // 0x32c53c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32c53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32c540: 0x8c221a3c  lw          $v0, 0x1A3C($at)
    ctx->pc = 0x32c540u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32c544: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x32c544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x32c548: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32c548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x32c54c: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x32C54Cu;
    {
        const bool branch_taken_0x32c54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c54c) {
            ctx->pc = 0x32C624u;
            goto label_32c624;
        }
    }
    ctx->pc = 0x32C554u;
    // 0x32c554: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x32c554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c558: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x32C558u;
    SET_GPR_U32(ctx, 31, 0x32C560u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x32C558u, 0x32C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C560u;
label_32c560:
    // 0x32c560: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x32c560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32c564: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x32c564u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32c568: 0x3c031d00  lui         $v1, 0x1D00
    ctx->pc = 0x32c568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7424 << 16));
    // 0x32c56c: 0x34660403  ori         $a2, $v1, 0x403
    ctx->pc = 0x32c56cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1027);
    // 0x32c570: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x32c570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x32c574: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32c574u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32c578: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x32c578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x32c57c: 0x24631ed8  addiu       $v1, $v1, 0x1ED8
    ctx->pc = 0x32c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7896));
    // 0x32c580: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32c580u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32c584: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x32c584u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c588: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32C588u;
    SET_GPR_U32(ctx, 31, 0x32C590u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32C588u, 0x32C590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C590u;
label_32c590:
    // 0x32c590: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x32c590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c594: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C594u;
    SET_GPR_U32(ctx, 31, 0x32C59Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C594u, 0x32C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C59Cu;
label_32c59c:
    // 0x32c59c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32c5a0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32c5a0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c5a4: 0x24040808  addiu       $a0, $zero, 0x808
    ctx->pc = 0x32c5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32c5a8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x32c5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x32c5ac: 0x3c111d00  lui         $s1, 0x1D00
    ctx->pc = 0x32c5acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)7424 << 16));
    // 0x32c5b0: 0x36230404  ori         $v1, $s1, 0x404
    ctx->pc = 0x32c5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1028);
    // 0x32c5b4: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x32c5b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c5b8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x32c5b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32c5bc: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x32c5bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x32c5c0: 0x26a21ee0  addiu       $v0, $s5, 0x1EE0
    ctx->pc = 0x32c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 7904));
    // 0x32c5c4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32c5c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c5c8: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x32c5c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x32c5cc: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32C5CCu;
    SET_GPR_U32(ctx, 31, 0x32C5D4u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32C5CCu, 0x32C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5D4u;
label_32c5d4:
    // 0x32c5d4: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x32c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x32c5d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c5dc: 0x0  nop
    ctx->pc = 0x32c5dcu;
    // NOP
    // 0x32c5e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32c5e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32c5e4: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x32c5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c5e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x32c5e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32c5ec: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x32c5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x32c5f0: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x32c5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c5f4: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x32C5F4u;
    SET_GPR_U32(ctx, 31, 0x32C5FCu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x32C5F4u, 0x32C5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5FCu;
label_32c5fc:
    // 0x32c5fc: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x32c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32c600: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x32c600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32c604: 0x3c041d00  lui         $a0, 0x1D00
    ctx->pc = 0x32c604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7424 << 16));
    // 0x32c608: 0x34830405  ori         $v1, $a0, 0x405
    ctx->pc = 0x32c608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1029);
    // 0x32c60c: 0x652025  or          $a0, $v1, $a1
    ctx->pc = 0x32c60cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x32c610: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x32c610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x32c614: 0x24651ed8  addiu       $a1, $v1, 0x1ED8
    ctx->pc = 0x32c614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 7896));
    // 0x32c618: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x32c618u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c61c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32C61Cu;
    SET_GPR_U32(ctx, 31, 0x32C624u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32C61Cu, 0x32C624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C624u;
label_32c624:
    // 0x32c624: 0x82632820  lb          $v1, 0x2820($s3)
    ctx->pc = 0x32c624u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 10272)));
    // 0x32c628: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x32c628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32c62c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32c62cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32c630: 0x54082a  slt         $at, $v0, $s4
    ctx->pc = 0x32c630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x32c634: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x32C634u;
    {
        const bool branch_taken_0x32c634 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c634) {
            ctx->pc = 0x32C65Cu;
            goto label_32c65c;
        }
    }
    ctx->pc = 0x32C63Cu;
    // 0x32c63c: 0x82622820  lb          $v0, 0x2820($s3)
    ctx->pc = 0x32c63cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 10272)));
    // 0x32c640: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32c640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32c644: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32c644u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32c648: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32c648u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c64c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x32c650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c654: 0x0  nop
    ctx->pc = 0x32c654u;
    // NOP
    // 0x32c658: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x32c658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_32c65c:
    // 0x32c65c: 0x26711420  addiu       $s1, $s3, 0x1420
    ctx->pc = 0x32c65cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 5152));
    // 0x32c660: 0x26721c20  addiu       $s2, $s3, 0x1C20
    ctx->pc = 0x32c660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 7200));
    // 0x32c664: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x32c664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x32c668: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32c668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32c66c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c670: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32C670u;
    {
        const bool branch_taken_0x32c670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32c670) {
            ctx->pc = 0x32C694u;
            goto label_32c694;
        }
    }
    ctx->pc = 0x32C678u;
    // 0x32c678: 0x8662000e  lh          $v0, 0xE($s3)
    ctx->pc = 0x32c678u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x32c67c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32c67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32c680: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32c680u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32c684: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x32c684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x32c688: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32c688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32c68c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x32c68cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x32c690: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x32c690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
label_32c694:
    // 0x32c694: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x32c694u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32c698: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x32C698u;
    {
        const bool branch_taken_0x32c698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c698) {
            ctx->pc = 0x32C8E8u;
            goto label_32c8e8;
        }
    }
    ctx->pc = 0x32C6A0u;
label_32c6a0:
    // 0x32c6a0: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x32c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x32c6a4: 0x16a2000a  bne         $s5, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32C6A4u;
    {
        const bool branch_taken_0x32c6a4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x32c6a4) {
            ctx->pc = 0x32C6D0u;
            goto label_32c6d0;
        }
    }
    ctx->pc = 0x32C6ACu;
    // 0x32c6ac: 0x8fa6012c  lw          $a2, 0x12C($sp)
    ctx->pc = 0x32c6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x32c6b0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x32c6b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c6b4: 0x0  nop
    ctx->pc = 0x32c6b4u;
    // NOP
    // 0x32c6b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32c6b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32c6bc: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x32c6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c6c0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32c6c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32c6c4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32C6C4u;
    SET_GPR_U32(ctx, 31, 0x32C6CCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32C6C4u, 0x32C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C6CCu;
label_32c6cc:
    // 0x32c6cc: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32c6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_32c6d0:
    // 0x32c6d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32c6d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32c6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32c6d8: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x32c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x32c6dc: 0x34423a14  ori         $v0, $v0, 0x3A14
    ctx->pc = 0x32c6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14868);
    // 0x32c6e0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32c6e4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x32c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32c6e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32c6ec: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x32c6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x32c6f0: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x32c6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32c6f4: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x32c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x32c6f8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x32c6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x32c6fc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32c6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32c700: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x32c700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x32c704: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x32c704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x32c708: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x32c708u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32c70c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x32c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32c710: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x32c710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x32c714: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x32c714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c718: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x32c718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x32c71c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x32c71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c720: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x32c720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x32c724: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32c724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c728: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x32c728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x32c72c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x32c72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c730: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x32c730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x32c734: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x32c734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c738: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x32c738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x32c73c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x32c73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c740: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x32c740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x32c744: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32c744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c748: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x32c748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x32c74c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x32c74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c750: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x32c750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x32c754: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x32c754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c758: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C758u;
    SET_GPR_U32(ctx, 31, 0x32C760u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C758u, 0x32C760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C760u;
label_32c760:
    // 0x32c760: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32c760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32c764: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32c764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32c768: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32c768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32c76c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x32c76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x32c770: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x32c770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c774: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C774u;
    SET_GPR_U32(ctx, 31, 0x32C77Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C774u, 0x32C77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C77Cu;
label_32c77c:
    // 0x32c77c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32c780: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32c780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32c784: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32c784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32c788: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x32c788u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32c78c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32c78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c790: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x32c790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x32c794: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x32c794u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x32c798: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x32c798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32c79c: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x32c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32c7a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32c7a4: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x32c7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c7a8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C7A8u;
    SET_GPR_U32(ctx, 31, 0x32C7B0u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C7A8u, 0x32C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C7B0u;
label_32c7b0:
    // 0x32c7b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32c7b4: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32c7b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32c7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32c7bc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x32c7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x32c7c0: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x32c7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c7c4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C7C4u;
    SET_GPR_U32(ctx, 31, 0x32C7CCu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C7C4u, 0x32C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C7CCu;
label_32c7cc:
    // 0x32c7cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32c7d0: 0x24467900  addiu       $a2, $v0, 0x7900
    ctx->pc = 0x32c7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32c7d4: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x32c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x32c7d8: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x32c7d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32c7dc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32c7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32c7e0: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x32c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x32c7e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32c7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32c7e8: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x32c7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32c7ec: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x32c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x32c7f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32c7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32c7f4: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x32c7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c7f8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C7F8u;
    SET_GPR_U32(ctx, 31, 0x32C800u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C7F8u, 0x32C800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C800u;
label_32c800:
    // 0x32c800: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x32c800u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32c804: 0x24c27000  addiu       $v0, $a2, 0x7000
    ctx->pc = 0x32c804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x32c808: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32c808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32c80c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x32c80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x32c810: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x32c810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c814: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C814u;
    SET_GPR_U32(ctx, 31, 0x32C81Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C814u, 0x32C81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C81Cu;
label_32c81c:
    // 0x32c81c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32c820: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32c820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32c824: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x32c824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32c828: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x32c828u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32c82c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32c82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32c830: 0x2602003c  addiu       $v0, $s0, 0x3C
    ctx->pc = 0x32c830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x32c834: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32c834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32c838: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x32c838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32c83c: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x32c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x32c840: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32c840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32c844: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x32c844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c848: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C848u;
    SET_GPR_U32(ctx, 31, 0x32C850u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C848u, 0x32C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C850u;
label_32c850:
    // 0x32c850: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32c850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32c854: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x32c854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32c858: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x32c858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x32c85c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x32c85cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32c860: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32c860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32c864: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x32c864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x32c868: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x32c868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c86c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C86Cu;
    SET_GPR_U32(ctx, 31, 0x32C874u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C86Cu, 0x32C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C874u;
label_32c874:
    // 0x32c874: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x32c874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32c878: 0x24677900  addiu       $a3, $v1, 0x7900
    ctx->pc = 0x32c878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x32c87c: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x32c87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x32c880: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x32c880u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32c884: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x32c884u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32c888: 0x2603004c  addiu       $v1, $s0, 0x4C
    ctx->pc = 0x32c888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x32c88c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x32c88cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x32c890: 0x3406fffc  ori         $a2, $zero, 0xFFFC
    ctx->pc = 0x32c890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32c894: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x32c894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x32c898: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x32c898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x32c89c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x32c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x32c8a0: 0x2442e870  addiu       $v0, $v0, -0x1790
    ctx->pc = 0x32c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961264));
    // 0x32c8a4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x32c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x32c8a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32c8ac: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x32c8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x32c8b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32c8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32c8b4: 0x92622830  lbu         $v0, 0x2830($s3)
    ctx->pc = 0x32c8b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10288)));
    // 0x32c8b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32C8B8u;
    {
        const bool branch_taken_0x32c8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c8b8) {
            ctx->pc = 0x32C8D8u;
            goto label_32c8d8;
        }
    }
    ctx->pc = 0x32C8C0u;
    // 0x32c8c0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32c8c4: 0x24441a14  addiu       $a0, $v0, 0x1A14
    ctx->pc = 0x32c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32c8c8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32c8c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32c8cc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32C8CCu;
    SET_GPR_U32(ctx, 31, 0x32C8D4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32C8CCu, 0x32C8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C8D4u;
label_32c8d4:
    // 0x32c8d4: 0x0  nop
    ctx->pc = 0x32c8d4u;
    // NOP
label_32c8d8:
    // 0x32c8d8: 0x26100054  addiu       $s0, $s0, 0x54
    ctx->pc = 0x32c8d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x32c8dc: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x32c8dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x32c8e0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x32c8e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32c8e4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x32c8e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_32c8e8:
    // 0x32c8e8: 0x2b4102a  slt         $v0, $s5, $s4
    ctx->pc = 0x32c8e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x32c8ec: 0x1440ff6c  bnez        $v0, . + 4 + (-0x94 << 2)
    ctx->pc = 0x32C8ECu;
    {
        const bool branch_taken_0x32c8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c8ec) {
            ctx->pc = 0x32C6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c6a0;
        }
    }
    ctx->pc = 0x32C8F4u;
    // 0x32c8f4: 0x92c213a6  lbu         $v0, 0x13A6($s6)
    ctx->pc = 0x32c8f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 5030)));
    // 0x32c8f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32c8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32c8fc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32c900: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x32C900u;
    {
        const bool branch_taken_0x32c900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c900) {
            ctx->pc = 0x32C9DCu;
            goto label_32c9dc;
        }
    }
    ctx->pc = 0x32C908u;
    // 0x32c908: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32c908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32c90c: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x32C90Cu;
    {
        const bool branch_taken_0x32c90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c90c) {
            ctx->pc = 0x32C9B4u;
            goto label_32c9b4;
        }
    }
    ctx->pc = 0x32C914u;
    // 0x32c914: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c918: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x32C918u;
    {
        const bool branch_taken_0x32c918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c918) {
            ctx->pc = 0x32C98Cu;
            goto label_32c98c;
        }
    }
    ctx->pc = 0x32C920u;
    // 0x32c920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c924: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x32C924u;
    {
        const bool branch_taken_0x32c924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c924) {
            ctx->pc = 0x32C964u;
            goto label_32c964;
        }
    }
    ctx->pc = 0x32C92Cu;
    // 0x32c92c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32C92Cu;
    {
        const bool branch_taken_0x32c92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c92c) {
            ctx->pc = 0x32C93Cu;
            goto label_32c93c;
        }
    }
    ctx->pc = 0x32C934u;
    // 0x32c934: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x32C934u;
    {
        const bool branch_taken_0x32c934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c934) {
            ctx->pc = 0x32C9FCu;
            goto label_32c9fc;
        }
    }
    ctx->pc = 0x32C93Cu;
label_32c93c:
    // 0x32c93c: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x32c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x32c940: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x32c940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x32c944: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x32c944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x32c948: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x32c948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x32c94c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c950: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32c950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32c954: 0x24160066  addiu       $s6, $zero, 0x66
    ctx->pc = 0x32c954u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x32c958: 0xafb6012c  sw          $s6, 0x12C($sp)
    ctx->pc = 0x32c958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 22));
    // 0x32c95c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x32C95Cu;
    {
        const bool branch_taken_0x32c95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c95c) {
            ctx->pc = 0x32CA1Cu;
            goto label_32ca1c;
        }
    }
    ctx->pc = 0x32C964u;
label_32c964:
    // 0x32c964: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x32c964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x32c968: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x32c968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x32c96c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x32c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x32c970: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x32c970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x32c974: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x32c974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x32c978: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32c978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32c97c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c980: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32c980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x32c984: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x32C984u;
    {
        const bool branch_taken_0x32c984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c984) {
            ctx->pc = 0x32CA1Cu;
            goto label_32ca1c;
        }
    }
    ctx->pc = 0x32C98Cu;
label_32c98c:
    // 0x32c98c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c990: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x32c990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x32c994: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x32c994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c998: 0xafa60124  sw          $a2, 0x124($sp)
    ctx->pc = 0x32c998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 6));
    // 0x32c99c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c9a0: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32c9a4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c9a8: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x32c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
    // 0x32c9ac: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x32C9ACu;
    {
        const bool branch_taken_0x32c9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c9ac) {
            ctx->pc = 0x32CA1Cu;
            goto label_32ca1c;
        }
    }
    ctx->pc = 0x32C9B4u;
label_32c9b4:
    // 0x32c9b4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c9b8: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x32c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x32c9bc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c9c0: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x32c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x32c9c4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c9c8: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32c9cc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c9d0: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x32c9d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x32C9D4u;
    {
        const bool branch_taken_0x32c9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c9d4) {
            ctx->pc = 0x32CA1Cu;
            goto label_32ca1c;
        }
    }
    ctx->pc = 0x32C9DCu;
label_32c9dc:
    // 0x32c9dc: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x32c9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x32c9e0: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x32c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
    // 0x32c9e4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x32c9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x32c9e8: 0xafa60128  sw          $a2, 0x128($sp)
    ctx->pc = 0x32c9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 6));
    // 0x32c9ec: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c9f0: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32c9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x32c9f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32C9F4u;
    {
        const bool branch_taken_0x32c9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c9f4) {
            ctx->pc = 0x32CA1Cu;
            goto label_32ca1c;
        }
    }
    ctx->pc = 0x32C9FCu;
label_32c9fc:
    // 0x32c9fc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32ca00: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x32ca00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x32ca04: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32ca08: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x32ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x32ca0c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32ca10: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32ca10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32ca14: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32ca18: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32ca18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_32ca1c:
    // 0x32ca1c: 0x26710420  addiu       $s1, $s3, 0x420
    ctx->pc = 0x32ca1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1056));
    // 0x32ca20: 0x26720c20  addiu       $s2, $s3, 0xC20
    ctx->pc = 0x32ca20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 3104));
    // 0x32ca24: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x32ca24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x32ca28: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32ca28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32ca2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ca30: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32CA30u;
    {
        const bool branch_taken_0x32ca30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32ca30) {
            ctx->pc = 0x32CA58u;
            goto label_32ca58;
        }
    }
    ctx->pc = 0x32CA38u;
    // 0x32ca38: 0x8662000e  lh          $v0, 0xE($s3)
    ctx->pc = 0x32ca38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x32ca3c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32ca3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32ca40: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32ca40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32ca44: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x32ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x32ca48: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x32ca48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32ca4c: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x32ca4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    // 0x32ca50: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x32ca50u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32ca54: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_32ca58:
    // 0x32ca58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32ca58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32ca5c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x32ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x32ca60: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x32ca60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x32ca64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32CA64u;
    {
        const bool branch_taken_0x32ca64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ca64) {
            ctx->pc = 0x32CA98u;
            goto label_32ca98;
        }
    }
    ctx->pc = 0x32CA6Cu;
    // 0x32ca6c: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x32ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x32ca70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32ca70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ca74: 0x0  nop
    ctx->pc = 0x32ca74u;
    // NOP
    // 0x32ca78: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32ca78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32ca7c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x32ca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ca80: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32ca80u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32ca84: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32CA84u;
    SET_GPR_U32(ctx, 31, 0x32CA8Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32CA84u, 0x32CA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CA8Cu;
label_32ca8c:
    // 0x32ca8c: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32ca8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x32ca90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32CA90u;
    {
        const bool branch_taken_0x32ca90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ca90) {
            ctx->pc = 0x32CAA8u;
            goto label_32caa8;
        }
    }
    ctx->pc = 0x32CA98u;
label_32ca98:
    // 0x32ca98: 0x82622820  lb          $v0, 0x2820($s3)
    ctx->pc = 0x32ca98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 10272)));
    // 0x32ca9c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32ca9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32caa0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32caa0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32caa4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32caa4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_32caa8:
    // 0x32caa8: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x32caa8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32caac: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x32CAACu;
    {
        const bool branch_taken_0x32caac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32caac) {
            ctx->pc = 0x32CCC8u;
            goto label_32ccc8;
        }
    }
    ctx->pc = 0x32CAB4u;
label_32cab4:
    // 0x32cab4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32cab8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32cabc: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x32cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x32cac0: 0x34433a14  ori         $v1, $v0, 0x3A14
    ctx->pc = 0x32cac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14868);
    // 0x32cac4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x32cac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x32cac8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x32cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32cacc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x32caccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32cad0: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x32cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x32cad4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x32cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32cad8: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x32cad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x32cadc: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x32cadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x32cae0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32cae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32cae4: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x32cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x32cae8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x32cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x32caec: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32caecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32caf0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x32caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32caf4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32caf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32caf8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x32caf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cafc: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x32cafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x32cb00: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x32cb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cb04: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x32cb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x32cb08: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32cb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cb0c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x32cb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x32cb10: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x32cb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cb14: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x32cb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x32cb18: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x32cb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cb1c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x32cb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x32cb20: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x32cb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cb24: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x32cb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x32cb28: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32cb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cb2c: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x32cb2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x32cb30: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x32cb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cb34: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x32cb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x32cb38: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x32cb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32cb3c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32CB3Cu;
    SET_GPR_U32(ctx, 31, 0x32CB44u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32CB3Cu, 0x32CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CB44u;
label_32cb44:
    // 0x32cb44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32cb48: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32cb4c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32cb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32cb50: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x32cb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x32cb54: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x32cb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32cb58: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32CB58u;
    SET_GPR_U32(ctx, 31, 0x32CB60u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32CB58u, 0x32CB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CB60u;
label_32cb60:
    // 0x32cb60: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32cb64: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32cb68: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x32cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32cb6c: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x32cb6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x32cb70: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32cb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32cb74: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x32cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x32cb78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32cb7c: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x32cb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32cb80: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x32cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32cb84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32cb84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32cb88: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x32cb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32cb8c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32CB8Cu;
    SET_GPR_U32(ctx, 31, 0x32CB94u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32CB8Cu, 0x32CB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CB94u;
label_32cb94:
    // 0x32cb94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32cb98: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32cb9c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32cb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32cba0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x32cba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x32cba4: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x32cba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32cba8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32CBA8u;
    SET_GPR_U32(ctx, 31, 0x32CBB0u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32CBA8u, 0x32CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CBB0u;
label_32cbb0:
    // 0x32cbb0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32cbb4: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32cbb8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x32cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32cbbc: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x32cbbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x32cbc0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32cbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32cbc4: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x32cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x32cbc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32cbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32cbcc: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x32cbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32cbd0: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x32cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x32cbd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32cbd8: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x32cbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32cbdc: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32CBDCu;
    SET_GPR_U32(ctx, 31, 0x32CBE4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32CBDCu, 0x32CBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CBE4u;
label_32cbe4:
    // 0x32cbe4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32cbe8: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32cbec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32cbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32cbf0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x32cbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x32cbf4: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x32cbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32cbf8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32CBF8u;
    SET_GPR_U32(ctx, 31, 0x32CC00u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32CBF8u, 0x32CC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CC00u;
label_32cc00:
    // 0x32cc00: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32cc04: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32cc08: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x32cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32cc0c: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x32cc0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x32cc10: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32cc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32cc14: 0x2602003c  addiu       $v0, $s0, 0x3C
    ctx->pc = 0x32cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x32cc18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32cc1c: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x32cc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32cc20: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x32cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x32cc24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32cc28: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x32cc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32cc2c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32CC2Cu;
    SET_GPR_U32(ctx, 31, 0x32CC34u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32CC2Cu, 0x32CC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CC34u;
label_32cc34:
    // 0x32cc34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32cc38: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32cc3c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32cc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32cc40: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x32cc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x32cc44: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x32cc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32cc48: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32CC48u;
    SET_GPR_U32(ctx, 31, 0x32CC50u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32CC48u, 0x32CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CC50u;
label_32cc50:
    // 0x32cc50: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x32cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32cc54: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x32cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x32cc58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32cc5c: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x32cc5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x32cc60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32cc60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32cc64: 0x2607004c  addiu       $a3, $s0, 0x4C
    ctx->pc = 0x32cc64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x32cc68: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x32cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x32cc6c: 0x3406fffc  ori         $a2, $zero, 0xFFFC
    ctx->pc = 0x32cc6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32cc70: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x32cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x32cc74: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x32cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x32cc78: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x32cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x32cc7c: 0x2463e870  addiu       $v1, $v1, -0x1790
    ctx->pc = 0x32cc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961264));
    // 0x32cc80: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x32cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x32cc84: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x32cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32cc88: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x32cc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x32cc8c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32cc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32cc90: 0x92622830  lbu         $v0, 0x2830($s3)
    ctx->pc = 0x32cc90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10288)));
    // 0x32cc94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32CC94u;
    {
        const bool branch_taken_0x32cc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cc94) {
            ctx->pc = 0x32CCB0u;
            goto label_32ccb0;
        }
    }
    ctx->pc = 0x32CC9Cu;
    // 0x32cc9c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32cca0: 0x24441a14  addiu       $a0, $v0, 0x1A14
    ctx->pc = 0x32cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32cca4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32cca4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32cca8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32CCA8u;
    SET_GPR_U32(ctx, 31, 0x32CCB0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32CCA8u, 0x32CCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CCB0u;
label_32ccb0:
    // 0x32ccb0: 0x26030054  addiu       $v1, $s0, 0x54
    ctx->pc = 0x32ccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x32ccb4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x32ccb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32ccb8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x32ccb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x32ccbc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x32ccbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32ccc0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x32ccc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x32ccc4: 0x0  nop
    ctx->pc = 0x32ccc4u;
    // NOP
label_32ccc8:
    // 0x32ccc8: 0x2b4102a  slt         $v0, $s5, $s4
    ctx->pc = 0x32ccc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x32cccc: 0x1440ff79  bnez        $v0, . + 4 + (-0x87 << 2)
    ctx->pc = 0x32CCCCu;
    {
        const bool branch_taken_0x32cccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32cccc) {
            ctx->pc = 0x32CAB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32cab4;
        }
    }
    ctx->pc = 0x32CCD4u;
    // 0x32ccd4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32ccd8: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x32ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x32ccdc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32cce0: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x32cce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x32cce4: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x32cce4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x32cce8: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x32cce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x32ccec: 0xfee30008  sd          $v1, 0x8($s7)
    ctx->pc = 0x32ccecu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 3));
    // 0x32ccf0: 0x92652830  lbu         $a1, 0x2830($s3)
    ctx->pc = 0x32ccf0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10288)));
    // 0x32ccf4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32CCF4u;
    {
        const bool branch_taken_0x32ccf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ccf4) {
            ctx->pc = 0x32CD14u;
            goto label_32cd14;
        }
    }
    ctx->pc = 0x32CCFCu;
    // 0x32ccfc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x32ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x32cd00: 0x24641a14  addiu       $a0, $v1, 0x1A14
    ctx->pc = 0x32cd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6676));
    // 0x32cd04: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x32cd04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x32cd08: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32CD08u;
    SET_GPR_U32(ctx, 31, 0x32CD10u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32CD08u, 0x32CD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CD10u;
label_32cd10:
    // 0x32cd10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32cd10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_32cd14:
    // 0x32cd14: 0x26e30010  addiu       $v1, $s7, 0x10
    ctx->pc = 0x32cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x32cd18: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x32cd18u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_32cd1c:
    // 0x32cd1c: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x32cd1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32cd20: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x32cd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x32cd24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32cd28: 0x1443005b  bne         $v0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x32CD28u;
    {
        const bool branch_taken_0x32cd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32cd28) {
            ctx->pc = 0x32CE98u;
            goto label_32ce98;
        }
    }
    ctx->pc = 0x32CD30u;
    // 0x32cd30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32cd30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32cd34: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x32cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x32cd38: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x32cd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x32cd3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32CD3Cu;
    {
        const bool branch_taken_0x32cd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32cd3c) {
            ctx->pc = 0x32CD58u;
            goto label_32cd58;
        }
    }
    ctx->pc = 0x32CD44u;
    // 0x32cd44: 0x92622912  lbu         $v0, 0x2912($s3)
    ctx->pc = 0x32cd44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10514)));
    // 0x32cd48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32cd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32cd4c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x32cd4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32cd50: 0x14510051  bne         $v0, $s1, . + 4 + (0x51 << 2)
    ctx->pc = 0x32CD50u;
    {
        const bool branch_taken_0x32cd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x32cd50) {
            ctx->pc = 0x32CE98u;
            goto label_32ce98;
        }
    }
    ctx->pc = 0x32CD58u;
label_32cd58:
    // 0x32cd58: 0x26721420  addiu       $s2, $s3, 0x1420
    ctx->pc = 0x32cd58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 5152));
    // 0x32cd5c: 0x7240f628  paddub      $fp, $s2, $zero
    ctx->pc = 0x32cd5cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32cd60: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x32cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x32cd64: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32cd68: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x32cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x32cd6c: 0x24421420  addiu       $v0, $v0, 0x1420
    ctx->pc = 0x32cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5152));
    // 0x32cd70: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x32cd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x32cd74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x32cd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x32cd78: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x32cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x32cd7c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x32cd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32cd80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32cd84: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x32cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32cd88: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32cd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32cd8c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x32cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32cd90: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x32cd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x32cd94: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x32cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x32cd98: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x32cd98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32cd9c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x32cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x32cda0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x32cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x32cda4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x32cda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x32cda8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x32cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x32cdac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32cdb0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x32cdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x32cdb4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x32cdb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x32cdb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32cdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32cdbc: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x32cdbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x32cdc0: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x32CDC0u;
    {
        const bool branch_taken_0x32cdc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32cdc0) {
            ctx->pc = 0x32CE98u;
            goto label_32ce98;
        }
    }
    ctx->pc = 0x32CDC8u;
    // 0x32cdc8: 0x3c0640a0  lui         $a2, 0x40A0
    ctx->pc = 0x32cdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16544 << 16));
    // 0x32cdcc: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x32cdccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32cdd0: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x32cdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cdd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32cdd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x32cdd8: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x32cdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x32cddc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x32cddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x32cde0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32cde0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32cde4: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x32cde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cde8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x32cde8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32cdec: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x32cdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x32cdf0: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x32cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x32cdf4: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x32cdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x32cdf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32cdf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32cdfc: 0x0  nop
    ctx->pc = 0x32cdfcu;
    // NOP
    // 0x32ce00: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x32ce00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x32ce04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x32ce08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32ce08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ce0c: 0x0  nop
    ctx->pc = 0x32ce0cu;
    // NOP
    // 0x32ce10: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x32ce10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x32ce14: 0x24027501  addiu       $v0, $zero, 0x7501
    ctx->pc = 0x32ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29953));
    // 0x32ce18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32ce18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ce1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x32ce1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32ce20: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x32ce20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x32ce24: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x32ce24u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32ce28: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x32CE28u;
    SET_GPR_U32(ctx, 31, 0x32CE30u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x32CE28u, 0x32CE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CE30u;
label_32ce30:
    // 0x32ce30: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x32ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x32ce34: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x32ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x32ce38: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x32ce38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ce3c: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x32ce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ce40: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32ce40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32ce44: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x32ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x32ce48: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x32ce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ce4c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x32ce4cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32ce50: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x32ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x32ce54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32ce54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ce58: 0x0  nop
    ctx->pc = 0x32ce58u;
    // NOP
    // 0x32ce5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32ce5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32ce60: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x32ce60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x32ce64: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32ce68: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32ce68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32ce6c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x32ce6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x32ce70: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x32ce70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32ce74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32ce74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32ce78: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x32ce78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ce7c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x32ce7cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32ce80: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x32ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x32ce84: 0xe4400108  swc1        $f0, 0x108($v0)
    ctx->pc = 0x32ce84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
    // 0x32ce88: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x32ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x32ce8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32ce8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ce90: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x32CE90u;
    SET_GPR_U32(ctx, 31, 0x32CE98u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x32CE90u, 0x32CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CE98u;
label_32ce98:
    // 0x32ce98: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32ce9c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x32ce9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32cea0: 0x3c021e07  lui         $v0, 0x1E07
    ctx->pc = 0x32cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7687 << 16));
    // 0x32cea4: 0x34431218  ori         $v1, $v0, 0x1218
    ctx->pc = 0x32cea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4632);
    // 0x32cea8: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x32cea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x32ceac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32ceacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ceb0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32ceb4: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x32ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
    // 0x32ceb8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32ceb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32cebc: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32CEBCu;
    SET_GPR_U32(ctx, 31, 0x32CEC4u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32CEBCu, 0x32CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CEC4u;
label_32cec4:
    // 0x32cec4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x32cec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x32cec8: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x32cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x32cecc: 0x2442b9a0  addiu       $v0, $v0, -0x4660
    ctx->pc = 0x32ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949280));
    // 0x32ced0: 0x2023023  subu        $a2, $s0, $v0
    ctx->pc = 0x32ced0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32ced4: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x32ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x32ced8: 0x3c0230c3  lui         $v0, 0x30C3
    ctx->pc = 0x32ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12483 << 16));
    // 0x32cedc: 0x34430c31  ori         $v1, $v0, 0xC31
    ctx->pc = 0x32cedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3121);
    // 0x32cee0: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x32cee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32cee4: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x32cee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x32cee8: 0x0  nop
    ctx->pc = 0x32cee8u;
    // NOP
    // 0x32ceec: 0x1010  mfhi        $v0
    ctx->pc = 0x32ceecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32cef0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x32cef0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x32cef4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x32cef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32cef8: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32cefc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32cefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32cf00: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x32cf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x32cf04: 0x3c021e07  lui         $v0, 0x1E07
    ctx->pc = 0x32cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7687 << 16));
    // 0x32cf08: 0x34421219  ori         $v0, $v0, 0x1219
    ctx->pc = 0x32cf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4633);
    // 0x32cf0c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x32cf0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32cf10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32cf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32cf14: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32cf14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32cf18: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x32cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x32cf1c: 0x24631f00  addiu       $v1, $v1, 0x1F00
    ctx->pc = 0x32cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7936));
    // 0x32cf20: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32cf20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32cf24: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32CF24u;
    SET_GPR_U32(ctx, 31, 0x32CF2Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32CF24u, 0x32CF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CF2Cu;
label_32cf2c:
    // 0x32cf2c: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x32cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
    // 0x32cf30: 0x2462c180  addiu       $v0, $v1, -0x3E80
    ctx->pc = 0x32cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951296));
    // 0x32cf34: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x32cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x32cf38: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x32cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32cf3c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x32cf3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x32cf40: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x32cf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x32cf44: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x32cf44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32cf48: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x32cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32cf4c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x32cf4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32cf50: 0x3c061e07  lui         $a2, 0x1E07
    ctx->pc = 0x32cf50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7687 << 16));
    // 0x32cf54: 0x34c3121a  ori         $v1, $a2, 0x121A
    ctx->pc = 0x32cf54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4634);
    // 0x32cf58: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x32cf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x32cf5c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32cf5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32cf60: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x32cf60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x32cf64: 0x24c31f00  addiu       $v1, $a2, 0x1F00
    ctx->pc = 0x32cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 7936));
    // 0x32cf68: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32cf68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32cf6c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x32cf6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32cf70: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32CF70u;
    SET_GPR_U32(ctx, 31, 0x32CF78u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32CF70u, 0x32CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CF78u;
label_32cf78:
    // 0x32cf78: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x32cf78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32cf7c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x32cf7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32cf80: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x32cf80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32cf84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32cf84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32cf88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32cf88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32cf8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32cf8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32cf90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32cf90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32cf94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32cf94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32cf98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32cf98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32cf9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32cf9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cfa0: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x32cfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x32cfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x32CFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CFACu;
}
