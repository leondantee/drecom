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

// Function: entry_002918ec
// Address: 0x2918ec - 0x291bc8
void entry_002918ec_0x2918ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002918ec_0x2918ec");
#endif

    switch (ctx->pc) {
        case 0x291918u: goto label_291918;
        case 0x291930u: goto label_291930;
        case 0x291960u: goto label_291960;
        case 0x291978u: goto label_291978;
        case 0x2919a8u: goto label_2919a8;
        case 0x2919c0u: goto label_2919c0;
        case 0x2919f0u: goto label_2919f0;
        case 0x291a08u: goto label_291a08;
        case 0x291b1cu: goto label_291b1c;
        case 0x291b80u: goto label_291b80;
        case 0x291bb8u: goto label_291bb8;
        default: break;
    }

    ctx->pc = 0x2918ecu;

    // 0x2918ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2918ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2918f0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2918f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2918f4: 0x3c028800  lui         $v0, 0x8800
    ctx->pc = 0x2918f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34816 << 16));
    // 0x2918f8: 0x34423b14  ori         $v0, $v0, 0x3B14
    ctx->pc = 0x2918f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15124);
    // 0x2918fc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2918fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x291900: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x291900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x291904: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x291904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x291908: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x291908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x29190c: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x29190cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291910: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x291910u;
    SET_GPR_U32(ctx, 31, 0x291918u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x291910u, 0x291918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291918u;
label_291918:
    // 0x291918: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x291918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29191c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x29191cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x291920: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x291920u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291924: 0xc66c0004  lwc1        $f12, 0x4($s3)
    ctx->pc = 0x291924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291928: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x291928u;
    SET_GPR_U32(ctx, 31, 0x291930u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x291928u, 0x291930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291930u;
label_291930:
    // 0x291930: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x291930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x291934: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x291934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x291938: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x291938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x29193c: 0x2e21825  or          $v1, $s7, $v0
    ctx->pc = 0x29193cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x291940: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x291940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x291944: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291948: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x291948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29194c: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x29194cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x291950: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291954: 0xc66c0010  lwc1        $f12, 0x10($s3)
    ctx->pc = 0x291954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291958: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x291958u;
    SET_GPR_U32(ctx, 31, 0x291960u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x291958u, 0x291960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291960u;
label_291960:
    // 0x291960: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x291960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291964: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x291964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x291968: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x291968u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29196c: 0xc66c0014  lwc1        $f12, 0x14($s3)
    ctx->pc = 0x29196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291970: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x291970u;
    SET_GPR_U32(ctx, 31, 0x291978u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x291970u, 0x291978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291978u;
label_291978:
    // 0x291978: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x291978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29197c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x29197cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x291980: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x291980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x291984: 0x2e23025  or          $a2, $s7, $v0
    ctx->pc = 0x291984u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x291988: 0x26420024  addiu       $v0, $s2, 0x24
    ctx->pc = 0x291988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x29198c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29198cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x291990: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x291990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x291994: 0x26420028  addiu       $v0, $s2, 0x28
    ctx->pc = 0x291994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x291998: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29199c: 0xc66c0020  lwc1        $f12, 0x20($s3)
    ctx->pc = 0x29199cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2919a0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2919A0u;
    SET_GPR_U32(ctx, 31, 0x2919A8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2919A0u, 0x2919A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919A8u;
label_2919a8:
    // 0x2919a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2919a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2919ac: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x2919acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x2919b0: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x2919b0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2919b4: 0xc66c0024  lwc1        $f12, 0x24($s3)
    ctx->pc = 0x2919b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2919b8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2919B8u;
    SET_GPR_U32(ctx, 31, 0x2919C0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2919B8u, 0x2919C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919C0u;
label_2919c0:
    // 0x2919c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2919c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2919c4: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x2919c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x2919c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2919c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2919cc: 0x2e23025  or          $a2, $s7, $v0
    ctx->pc = 0x2919ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x2919d0: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x2919d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2919d4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2919d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2919d8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2919d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2919dc: 0x26420034  addiu       $v0, $s2, 0x34
    ctx->pc = 0x2919dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x2919e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2919e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2919e4: 0xc66c0030  lwc1        $f12, 0x30($s3)
    ctx->pc = 0x2919e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2919e8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2919E8u;
    SET_GPR_U32(ctx, 31, 0x2919F0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2919E8u, 0x2919F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919F0u;
label_2919f0:
    // 0x2919f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2919f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2919f4: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x2919f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x2919f8: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x2919f8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2919fc: 0xc66c0034  lwc1        $f12, 0x34($s3)
    ctx->pc = 0x2919fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291a00: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x291A00u;
    SET_GPR_U32(ctx, 31, 0x291A08u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x291A00u, 0x291A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291A08u;
label_291a08:
    // 0x291a08: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x291a08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x291a0c: 0x24827900  addiu       $v0, $a0, 0x7900
    ctx->pc = 0x291a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x291a10: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x291a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x291a14: 0x2e21825  or          $v1, $s7, $v0
    ctx->pc = 0x291a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x291a18: 0x2642003c  addiu       $v0, $s2, 0x3C
    ctx->pc = 0x291a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x291a1c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291a20: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x291a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x291a24: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x291a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x291a28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291a2c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x291a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x291a30: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x291a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x291a34: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x291a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x291a38: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x291a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x291a3c: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291a40: 0x94420030  lhu         $v0, 0x30($v0)
    ctx->pc = 0x291a40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x291a44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x291a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291a48: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x291a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291a4c: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291a50: 0x94420032  lhu         $v0, 0x32($v0)
    ctx->pc = 0x291a50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x291a54: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x291a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291a58: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x291a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x291a5c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x291a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x291a60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x291a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x291a64: 0x26420014  addiu       $v0, $s2, 0x14
    ctx->pc = 0x291a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x291a68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291a6c: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x291a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291a70: 0x94620034  lhu         $v0, 0x34($v1)
    ctx->pc = 0x291a70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x291a74: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x291a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291a78: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x291a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291a7c: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291a80: 0x94420032  lhu         $v0, 0x32($v0)
    ctx->pc = 0x291a80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x291a84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x291a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291a88: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x291a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291a8c: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x291a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x291a90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x291a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x291a94: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x291a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x291a98: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291a9c: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291aa0: 0x94420030  lhu         $v0, 0x30($v0)
    ctx->pc = 0x291aa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x291aa4: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x291aa4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291aa8: 0x152100  sll         $a0, $s5, 4
    ctx->pc = 0x291aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x291aac: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291ab0: 0x94430036  lhu         $v1, 0x36($v0)
    ctx->pc = 0x291ab0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x291ab4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x291ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x291ab8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x291ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291abc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x291abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x291ac0: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x291ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x291ac4: 0x2642002c  addiu       $v0, $s2, 0x2C
    ctx->pc = 0x291ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x291ac8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291acc: 0x8fb60208  lw          $s6, 0x208($sp)
    ctx->pc = 0x291accu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291ad0: 0x96c20034  lhu         $v0, 0x34($s6)
    ctx->pc = 0x291ad0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x291ad4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x291ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291ad8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x291ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291adc: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291ae0: 0x94420036  lhu         $v0, 0x36($v0)
    ctx->pc = 0x291ae0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x291ae4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x291ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291ae8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x291ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291aec: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x291aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x291af0: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x291af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x291af4: 0x26420038  addiu       $v0, $s2, 0x38
    ctx->pc = 0x291af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x291af8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291afc: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291b00: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x291b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x291b04: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x291b04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x291b08: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291b0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x291b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291b10: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x291b10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x291b14: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291B14u;
    SET_GPR_U32(ctx, 31, 0x291B1Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291B14u, 0x291B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B1Cu;
label_291b1c:
    // 0x291b1c: 0x26430044  addiu       $v1, $s2, 0x44
    ctx->pc = 0x291b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x291b20: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x291b20u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x291b24: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291b28: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x291b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x291b2c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x291b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x291b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291b34: 0x14620054  bne         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x291B34u;
    {
        const bool branch_taken_0x291b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x291b34) {
            ctx->pc = 0x291C88u;
            return;
        }
    }
    ctx->pc = 0x291B3Cu;
    // 0x291b3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291b40: 0x8c222a70  lw          $v0, 0x2A70($at)
    ctx->pc = 0x291b40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622A70u));
    // 0x291b44: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x291b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x291b48: 0x1603001f  bne         $s0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x291B48u;
    {
        const bool branch_taken_0x291b48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x291b48) {
            ctx->pc = 0x291BC8u;
            return;
        }
    }
    ctx->pc = 0x291B50u;
    // 0x291b50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x291b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x291b54: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x291b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x291b58: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x291b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x291b5c: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x291b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x291b60: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x291b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x291b64: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x291b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x291b68: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x291b68u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x291b6c: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291b70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x291b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291b74: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291b74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291b78: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291B78u;
    SET_GPR_U32(ctx, 31, 0x291B80u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291B78u, 0x291B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B80u;
label_291b80:
    // 0x291b80: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291b84: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291b84u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291b88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x291b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x291b8c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x291b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x291b90: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x291b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x291b94: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x291b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x291b98: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x291b98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x291b9c: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x291b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x291ba0: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x291ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291ba4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x291ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x291ba8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x291ba8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291bac: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291bacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291bb0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291BB0u;
    SET_GPR_U32(ctx, 31, 0x291BB8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291BB0u, 0x291BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291BB8u;
label_291bb8:
    // 0x291bb8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291bbc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291bbcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291bc0: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x291BC0u;
    {
        const bool branch_taken_0x291bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291bc0) {
            ctx->pc = 0x291EA8u;
            return;
        }
    }
    ctx->pc = 0x291BC8u;
}
