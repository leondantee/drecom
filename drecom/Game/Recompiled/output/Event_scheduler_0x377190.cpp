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

// Function: Event_scheduler
// Address: 0x377190 - 0x377408
void Event_scheduler_0x377190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Event_scheduler_0x377190");
#endif

    switch (ctx->pc) {
        case 0x377264u: goto label_377264;
        case 0x37731cu: goto label_37731c;
        case 0x37733cu: goto label_37733c;
        case 0x377344u: goto label_377344;
        case 0x37734cu: goto label_37734c;
        case 0x377354u: goto label_377354;
        case 0x37735cu: goto label_37735c;
        case 0x377364u: goto label_377364;
        case 0x37736cu: goto label_37736c;
        case 0x377374u: goto label_377374;
        case 0x37737cu: goto label_37737c;
        case 0x377384u: goto label_377384;
        case 0x3773b4u: goto label_3773b4;
        case 0x3773f4u: goto label_3773f4;
        default: break;
    }

    ctx->pc = 0x377190u;

    // 0x377190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x377190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x377194: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x377194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x377198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x377198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37719c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x37719cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3771a0: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x3771a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x3771a4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3771a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3771a8: 0xac220398  sw          $v0, 0x398($at)
    ctx->pc = 0x3771a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x9A0398u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0398u, _value); } while (0);
    // 0x3771ac: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3771acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3771b0: 0xa0200396  sb          $zero, 0x396($at)
    ctx->pc = 0x3771b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0396u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x9A0396u, _value); } while (0);
    // 0x3771b4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3771b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3771b8: 0x8c220390  lw          $v0, 0x390($at)
    ctx->pc = 0x3771b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0390u));
    // 0x3771bc: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x3771bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3771c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3771c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3771c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3771c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3771c8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3771C8u;
    {
        const bool branch_taken_0x3771c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3771c8) {
            ctx->pc = 0x377240u;
            goto label_377240;
        }
    }
    ctx->pc = 0x3771D0u;
    // 0x3771d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3771d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3771d4: 0x8c22dbc8  lw          $v0, -0x2438($at)
    ctx->pc = 0x3771d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x3771d8: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x3771d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x3771dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3771dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3771e0: 0xac22dbc8  sw          $v0, -0x2438($at)
    ctx->pc = 0x3771e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC8u, _value); } while (0);
    // 0x3771e4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3771e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3771e8: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x3771e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x3771ec: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3771ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3771f0: 0x90220396  lbu         $v0, 0x396($at)
    ctx->pc = 0x3771f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x9A0396u));
    // 0x3771f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3771f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3771f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3771f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3771fc: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x3771fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x377200: 0x24420350  addiu       $v0, $v0, 0x350
    ctx->pc = 0x377200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    // 0x377204: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x377204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377208: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x377208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x37720c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37720cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377210: 0x90220396  lbu         $v0, 0x396($at)
    ctx->pc = 0x377210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x9A0396u));
    // 0x377214: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x377214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x377218: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37721c: 0xa0220396  sb          $v0, 0x396($at)
    ctx->pc = 0x37721cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x9A0396u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x9A0396u, _value); } while (0);
    // 0x377220: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x377220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x377224: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x377224u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x377228: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x377228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37722c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x37722cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x377230: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x377230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x377234: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x377234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x377238: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x377238u;
    {
        const bool branch_taken_0x377238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377238) {
            ctx->pc = 0x377258u;
            goto label_377258;
        }
    }
    ctx->pc = 0x377240u;
label_377240:
    // 0x377240: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x377240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x377244: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x377244u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x377248: 0x2402fff5  addiu       $v0, $zero, -0xB
    ctx->pc = 0x377248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    // 0x37724c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x37724cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x377250: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x377250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x377254: 0xac22dbc8  sw          $v0, -0x2438($at)
    ctx->pc = 0x377254u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC8u, _value); } while (0);
label_377258:
    // 0x377258: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x377258u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37725c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x37725Cu;
    {
        const bool branch_taken_0x37725c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37725c) {
            ctx->pc = 0x3772F0u;
            goto label_3772f0;
        }
    }
    ctx->pc = 0x377264u;
label_377264:
    // 0x377264: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x377264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x377268: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x377268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x37726c: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x37726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x377270: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x377270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377274: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x377274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x377278: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x377278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x37727c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37727cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x377280: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x377280u;
    {
        const bool branch_taken_0x377280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x377280) {
            ctx->pc = 0x3772E8u;
            goto label_3772e8;
        }
    }
    ctx->pc = 0x377288u;
    // 0x377288: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x377288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x37728c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x37728cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x377290: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x377290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x377294: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x377294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377298: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x377298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x37729c: 0xac401304  sw          $zero, 0x1304($v0)
    ctx->pc = 0x37729cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4868), GPR_U32(ctx, 0));
    // 0x3772a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3772a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3772a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3772a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3772a8: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x3772a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x3772ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3772acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3772b0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3772b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3772b4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3772b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3772b8: 0x90220396  lbu         $v0, 0x396($at)
    ctx->pc = 0x3772b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x9A0396u));
    // 0x3772bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3772bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3772c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3772c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3772c4: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x3772c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x3772c8: 0x24420350  addiu       $v0, $v0, 0x350
    ctx->pc = 0x3772c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    // 0x3772cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3772ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3772d0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3772d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3772d4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3772d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3772d8: 0x90220396  lbu         $v0, 0x396($at)
    ctx->pc = 0x3772d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x9A0396u));
    // 0x3772dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3772dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3772e0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3772e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3772e4: 0xa0220396  sb          $v0, 0x396($at)
    ctx->pc = 0x3772e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x9A0396u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x9A0396u, _value); } while (0);
label_3772e8:
    // 0x3772e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3772e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3772ec: 0x0  nop
    ctx->pc = 0x3772ecu;
    // NOP
label_3772f0:
    // 0x3772f0: 0x2e02000f  sltiu       $v0, $s0, 0xF
    ctx->pc = 0x3772f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x3772f4: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3772F4u;
    {
        const bool branch_taken_0x3772f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3772f4) {
            ctx->pc = 0x377264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377264;
        }
    }
    ctx->pc = 0x3772FCu;
    // 0x3772fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3772fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x377300: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x377300u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x377304: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x377304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x377308: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x377308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37730c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x37730cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x377310: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x377310u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x377314: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377318: 0xa4200394  sh          $zero, 0x394($at)
    ctx->pc = 0x377318u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0394u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x9A0394u, _value); } while (0);
label_37731c:
    // 0x37731c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x37731cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x377320: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x377320u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x377324: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x377324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x377328: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x377328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x37732c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x37732Cu;
    {
        const bool branch_taken_0x37732c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37732c) {
            ctx->pc = 0x3773A8u;
            goto label_3773a8;
        }
    }
    ctx->pc = 0x377334u;
    // 0x377334: 0xc0ddd2c  jal         func_3774B0
    ctx->pc = 0x377334u;
    SET_GPR_U32(ctx, 31, 0x37733Cu);
    ctx->pc = 0x3774B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3774B0u, 0x377334u, 0x37733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37733Cu;
label_37733c:
    // 0x37733c: 0xc0ddd5c  jal         func_377570
    ctx->pc = 0x37733Cu;
    SET_GPR_U32(ctx, 31, 0x377344u);
    ctx->pc = 0x377570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377570u, 0x37733Cu, 0x377344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377344u;
label_377344:
    // 0x377344: 0xc0ddda4  jal         func_377690
    ctx->pc = 0x377344u;
    SET_GPR_U32(ctx, 31, 0x37734Cu);
    ctx->pc = 0x377690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377690u, 0x377344u, 0x37734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37734Cu;
label_37734c:
    // 0x37734c: 0xc0dddfc  jal         func_3777F0
    ctx->pc = 0x37734Cu;
    SET_GPR_U32(ctx, 31, 0x377354u);
    ctx->pc = 0x3777F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3777F0u, 0x37734Cu, 0x377354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377354u;
label_377354:
    // 0x377354: 0xc0dde58  jal         func_377960
    ctx->pc = 0x377354u;
    SET_GPR_U32(ctx, 31, 0x37735Cu);
    ctx->pc = 0x377960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377960u, 0x377354u, 0x37735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37735Cu;
label_37735c:
    // 0x37735c: 0xc0dde80  jal         func_377A00
    ctx->pc = 0x37735Cu;
    SET_GPR_U32(ctx, 31, 0x377364u);
    ctx->pc = 0x377A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377A00u, 0x37735Cu, 0x377364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377364u;
label_377364:
    // 0x377364: 0xc0ddeb0  jal         func_377AC0
    ctx->pc = 0x377364u;
    SET_GPR_U32(ctx, 31, 0x37736Cu);
    ctx->pc = 0x377AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377AC0u, 0x377364u, 0x37736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37736Cu;
label_37736c:
    // 0x37736c: 0xc0dded4  jal         func_377B50
    ctx->pc = 0x37736Cu;
    SET_GPR_U32(ctx, 31, 0x377374u);
    ctx->pc = 0x377B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377B50u, 0x37736Cu, 0x377374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377374u;
label_377374:
    // 0x377374: 0xc0ddf1c  jal         func_377C70
    ctx->pc = 0x377374u;
    SET_GPR_U32(ctx, 31, 0x37737Cu);
    ctx->pc = 0x377C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377C70u, 0x377374u, 0x37737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37737Cu;
label_37737c:
    // 0x37737c: 0xc0ddf44  jal         func_377D10
    ctx->pc = 0x37737Cu;
    SET_GPR_U32(ctx, 31, 0x377384u);
    ctx->pc = 0x377D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377D10u, 0x37737Cu, 0x377384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377384u;
label_377384:
    // 0x377384: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377388: 0x90220397  lbu         $v0, 0x397($at)
    ctx->pc = 0x377388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x9A0397u));
    // 0x37738c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x37738Cu;
    {
        const bool branch_taken_0x37738c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37738c) {
            ctx->pc = 0x3773BCu;
            goto label_3773bc;
        }
    }
    ctx->pc = 0x377394u;
    // 0x377394: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377398: 0x94220394  lhu         $v0, 0x394($at)
    ctx->pc = 0x377398u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x9A0394u));
    // 0x37739c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3773a0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3773a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3773a4: 0xa4220394  sh          $v0, 0x394($at)
    ctx->pc = 0x3773a4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x9A0394u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x9A0394u, _value); } while (0);
label_3773a8:
    // 0x3773a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3773a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3773ac: 0xc06750c  jal         func_19D430
    ctx->pc = 0x3773ACu;
    SET_GPR_U32(ctx, 31, 0x3773B4u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x3773ACu, 0x3773B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3773B4u;
label_3773b4:
    // 0x3773b4: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x3773B4u;
    {
        const bool branch_taken_0x3773b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3773b4) {
            ctx->pc = 0x37731Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37731c;
        }
    }
    ctx->pc = 0x3773BCu;
label_3773bc:
    // 0x3773bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3773bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3773c0: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x3773c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x3773c4: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x3773c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x3773c8: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x3773c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x3773cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3773ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3773d0: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x3773d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x3773d4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3773d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3773d8: 0x8c220398  lw          $v0, 0x398($at)
    ctx->pc = 0x3773d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0398u));
    // 0x3773dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3773dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3773e0: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x3773e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x3773e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3773e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3773e8: 0xac20efb4  sw          $zero, -0x104C($at)
    ctx->pc = 0x3773e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEFB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEFB4u, _value); } while (0);
    // 0x3773ec: 0xc0674dc  jal         func_19D370
    ctx->pc = 0x3773ECu;
    SET_GPR_U32(ctx, 31, 0x3773F4u);
    ctx->pc = 0x19D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D370u, 0x3773ECu, 0x3773F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3773F4u;
label_3773f4:
    // 0x3773f4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3773f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3773f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3773f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3773fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3773fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x377400: 0x3e00008  jr          $ra
    ctx->pc = 0x377400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377408u;
}
