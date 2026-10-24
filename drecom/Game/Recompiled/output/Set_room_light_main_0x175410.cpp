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

// Function: Set_room_light_main
// Address: 0x175410 - 0x175b2c
void Set_room_light_main_0x175410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_room_light_main_0x175410");
#endif

    switch (ctx->pc) {
        case 0x175534u: goto label_175534;
        case 0x1755f0u: goto label_1755f0;
        case 0x175784u: goto label_175784;
        case 0x1757ecu: goto label_1757ec;
        case 0x175858u: goto label_175858;
        case 0x175924u: goto label_175924;
        case 0x1759ecu: goto label_1759ec;
        case 0x175b0cu: goto label_175b0c;
        default: break;
    }

    ctx->pc = 0x175410u;

    // 0x175410: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x175410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x175414: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x175414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x175418: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x175418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17541c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x175420: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x175424: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x175428: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x175428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x17542c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17542cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x175430: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x175430u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x175434: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x175434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x175438: 0x2453cc60  addiu       $s3, $v0, -0x33A0
    ctx->pc = 0x175438u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954080));
    // 0x17543c: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x17543cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x175440: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x175440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x175444: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x175444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175448: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17544c: 0xa422cc88  sh          $v0, -0x3378($at)
    ctx->pc = 0x17544cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC88u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC88u, _value); } while (0);
    // 0x175450: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175454: 0x9422cc88  lhu         $v0, -0x3378($at)
    ctx->pc = 0x175454u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC88u));
    // 0x175458: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x175458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17545c: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x17545Cu;
    {
        const bool branch_taken_0x17545c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17545c) {
            ctx->pc = 0x1755B8u;
            goto label_1755b8;
        }
    }
    ctx->pc = 0x175464u;
    // 0x175464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175468: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17546c: 0xa422cc90  sh          $v0, -0x3370($at)
    ctx->pc = 0x17546cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC90u, _value); } while (0);
    // 0x175470: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175474: 0xa420cc88  sh          $zero, -0x3378($at)
    ctx->pc = 0x175474u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47CC88u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC88u, _value); } while (0);
    // 0x175478: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x175478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x17547c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17547cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175480: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175484: 0xe420bd18  swc1        $f0, -0x42E8($at)
    ctx->pc = 0x175484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47BD18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD18u, _value); } while (0); }
    // 0x175488: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17548c: 0xe420bd14  swc1        $f0, -0x42EC($at)
    ctx->pc = 0x17548cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47BD14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD14u, _value); } while (0); }
    // 0x175490: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175494: 0xe420bd10  swc1        $f0, -0x42F0($at)
    ctx->pc = 0x175494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47BD10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD10u, _value); } while (0); }
    // 0x175498: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x175498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x17549c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17549cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1754a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1754a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1754a4: 0xe420bd58  swc1        $f0, -0x42A8($at)
    ctx->pc = 0x1754a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47BD58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD58u, _value); } while (0); }
    // 0x1754a8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1754a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1754ac: 0xe420bd54  swc1        $f0, -0x42AC($at)
    ctx->pc = 0x1754acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47BD54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD54u, _value); } while (0); }
    // 0x1754b0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1754b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1754b4: 0xe420bd50  swc1        $f0, -0x42B0($at)
    ctx->pc = 0x1754b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47BD50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD50u, _value); } while (0); }
    // 0x1754b8: 0x2402ff42  addiu       $v0, $zero, -0xBE
    ctx->pc = 0x1754b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967106));
    // 0x1754bc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1754bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1754c0: 0xa422cc92  sh          $v0, -0x336E($at)
    ctx->pc = 0x1754c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC92u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC92u, _value); } while (0);
    // 0x1754c4: 0x3c0247c3  lui         $v0, 0x47C3
    ctx->pc = 0x1754c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18371 << 16));
    // 0x1754c8: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x1754c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x1754cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1754ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1754d0: 0x0  nop
    ctx->pc = 0x1754d0u;
    // NOP
    // 0x1754d4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1754d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1754d8: 0x3c024843  lui         $v0, 0x4843
    ctx->pc = 0x1754d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18499 << 16));
    // 0x1754dc: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x1754dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x1754e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1754e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1754e4: 0x0  nop
    ctx->pc = 0x1754e4u;
    // NOP
    // 0x1754e8: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x1754e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1754ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1754ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1754f0: 0x0  nop
    ctx->pc = 0x1754f0u;
    // NOP
    // 0x1754f4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1754f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1754f8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1754f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1754fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1754fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175500: 0x0  nop
    ctx->pc = 0x175500u;
    // NOP
    // 0x175504: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x175504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x175508: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x175508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17550c: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x17550cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x175510: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x175510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x175514: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x175514u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x175518: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x175518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17551c: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x17551cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
    // 0x175520: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x175520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x175524: 0x2450c7b0  addiu       $s0, $v0, -0x3850
    ctx->pc = 0x175524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952880));
    // 0x175528: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x175528u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17552c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x17552Cu;
    {
        const bool branch_taken_0x17552c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17552c) {
            ctx->pc = 0x1755A0u;
            goto label_1755a0;
        }
    }
    ctx->pc = 0x175534u;
label_175534:
    // 0x175534: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175538: 0x0  nop
    ctx->pc = 0x175538u;
    // NOP
    // 0x17553c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x17553cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x175540: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x175540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x175544: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x175544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x175548: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x175548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x17554c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x17554cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x175550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175554: 0x0  nop
    ctx->pc = 0x175554u;
    // NOP
    // 0x175558: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x175558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x17555c: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x17555cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x175560: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x175560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x175564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175568: 0x0  nop
    ctx->pc = 0x175568u;
    // NOP
    // 0x17556c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x17556cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x175570: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x175570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x175574: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x175574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x175578: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17557c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17557cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175580: 0x0  nop
    ctx->pc = 0x175580u;
    // NOP
    // 0x175584: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x175584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x175588: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x175588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x17558c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x17558cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x175590: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x175590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x175594: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x175594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x175598: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x175598u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17559c: 0x0  nop
    ctx->pc = 0x17559cu;
    // NOP
label_1755a0:
    // 0x1755a0: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1755a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1755a4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1755a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1755a8: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1755A8u;
    {
        const bool branch_taken_0x1755a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1755a8) {
            ctx->pc = 0x175534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175534;
        }
    }
    ctx->pc = 0x1755B0u;
    // 0x1755b0: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x1755B0u;
    {
        const bool branch_taken_0x1755b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1755b0) {
            ctx->pc = 0x175A80u;
            goto label_175a80;
        }
    }
    ctx->pc = 0x1755B8u;
label_1755b8:
    // 0x1755b8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1755b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1755bc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1755bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1755c0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1755c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1755c4: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x1755c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x1755c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1755c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1755cc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1755ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1755d0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1755d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1755d4: 0x0  nop
    ctx->pc = 0x1755d4u;
    // NOP
    // 0x1755d8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1755D8u;
    {
        const bool branch_taken_0x1755d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1755d8) {
            ctx->pc = 0x1755F0u;
            goto label_1755f0;
        }
    }
    ctx->pc = 0x1755E0u;
    // 0x1755e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1755e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1755e4: 0x2444ec00  addiu       $a0, $v0, -0x1400
    ctx->pc = 0x1755e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962176));
    // 0x1755e8: 0xc046760  jal         func_119D80
    ctx->pc = 0x1755E8u;
    SET_GPR_U32(ctx, 31, 0x1755F0u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x1755F0u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1755F0u) { return; }
    ctx->pc = 0x1755F0u;
label_1755f0:
    // 0x1755f0: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1755f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1755f4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1755f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1755f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1755f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1755fc: 0x0  nop
    ctx->pc = 0x1755fcu;
    // NOP
    // 0x175600: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x175600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175604: 0x0  nop
    ctx->pc = 0x175604u;
    // NOP
    // 0x175608: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x175608u;
    {
        const bool branch_taken_0x175608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x175608) {
            ctx->pc = 0x175624u;
            goto label_175624;
        }
    }
    ctx->pc = 0x175610u;
    // 0x175610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175614: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175618: 0xa422cc90  sh          $v0, -0x3370($at)
    ctx->pc = 0x175618u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC90u, _value); } while (0);
    // 0x17561c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17561Cu;
    {
        const bool branch_taken_0x17561c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17561c) {
            ctx->pc = 0x175638u;
            goto label_175638;
        }
    }
    ctx->pc = 0x175624u;
label_175624:
    // 0x175624: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x175624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x175628: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x175628u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17562c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17562cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175630: 0xa422cc90  sh          $v0, -0x3370($at)
    ctx->pc = 0x175630u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC90u, _value); } while (0);
    // 0x175634: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x175634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_175638:
    // 0x175638: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x175638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x17563c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17563cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x175640: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x175640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175644: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x175644u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175648: 0x0  nop
    ctx->pc = 0x175648u;
    // NOP
    // 0x17564c: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x17564Cu;
    {
        const bool branch_taken_0x17564c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17564c) {
            ctx->pc = 0x1756C0u;
            goto label_1756c0;
        }
    }
    ctx->pc = 0x175654u;
    // 0x175654: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x175654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175658: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x175658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x17565c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17565cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175660: 0x0  nop
    ctx->pc = 0x175660u;
    // NOP
    // 0x175664: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x175664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175668: 0x0  nop
    ctx->pc = 0x175668u;
    // NOP
    // 0x17566c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x17566Cu;
    {
        const bool branch_taken_0x17566c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17566c) {
            ctx->pc = 0x175690u;
            goto label_175690;
        }
    }
    ctx->pc = 0x175674u;
    // 0x175674: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175678: 0xa020cc95  sb          $zero, -0x336B($at)
    ctx->pc = 0x175678u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47CC95u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47CC95u, _value); } while (0);
    // 0x17567c: 0x2402ff42  addiu       $v0, $zero, -0xBE
    ctx->pc = 0x17567cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967106));
    // 0x175680: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175684: 0xa422cc92  sh          $v0, -0x336E($at)
    ctx->pc = 0x175684u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC92u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC92u, _value); } while (0);
    // 0x175688: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x175688u;
    {
        const bool branch_taken_0x175688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175688) {
            ctx->pc = 0x1756ACu;
            goto label_1756ac;
        }
    }
    ctx->pc = 0x175690u;
label_175690:
    // 0x175690: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x175690u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x175694: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x175694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175698: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17569c: 0xa022cc95  sb          $v0, -0x336B($at)
    ctx->pc = 0x17569cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC95u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47CC95u, _value); } while (0);
    // 0x1756a0: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x1756a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1756a4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1756a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1756a8: 0xa422cc92  sh          $v0, -0x336E($at)
    ctx->pc = 0x1756a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC92u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC92u, _value); } while (0);
label_1756ac:
    // 0x1756ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1756acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1756b0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1756b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1756b4: 0xa022cc94  sb          $v0, -0x336C($at)
    ctx->pc = 0x1756b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC94u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47CC94u, _value); } while (0);
    // 0x1756b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1756B8u;
    {
        const bool branch_taken_0x1756b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1756b8) {
            ctx->pc = 0x1756E4u;
            goto label_1756e4;
        }
    }
    ctx->pc = 0x1756C0u;
label_1756c0:
    // 0x1756c0: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x1756c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1756c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1756c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1756c8: 0xa022cc94  sb          $v0, -0x336C($at)
    ctx->pc = 0x1756c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC94u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47CC94u, _value); } while (0);
    // 0x1756cc: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x1756ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x1756d0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1756d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1756d4: 0xa022cc95  sb          $v0, -0x336B($at)
    ctx->pc = 0x1756d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC95u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47CC95u, _value); } while (0);
    // 0x1756d8: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x1756d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1756dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1756dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1756e0: 0xa422cc92  sh          $v0, -0x336E($at)
    ctx->pc = 0x1756e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC92u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC92u, _value); } while (0);
label_1756e4:
    // 0x1756e4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1756e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1756e8: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1756e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1756ec: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1756ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1756f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1756f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1756f4: 0x0  nop
    ctx->pc = 0x1756f4u;
    // NOP
    // 0x1756f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1756f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1756fc: 0x0  nop
    ctx->pc = 0x1756fcu;
    // NOP
    // 0x175700: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x175700u;
    {
        const bool branch_taken_0x175700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x175700) {
            ctx->pc = 0x17571Cu;
            goto label_17571c;
        }
    }
    ctx->pc = 0x175708u;
    // 0x175708: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x175708u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17570c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17570cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x175710: 0x2442bd50  addiu       $v0, $v0, -0x42B0
    ctx->pc = 0x175710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950224));
    // 0x175714: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x175714u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47BD50u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47BD50u, _value); } while (0);
    // 0x175718: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x175718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_17571c:
    // 0x17571c: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x17571cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175720: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x175720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x175724: 0x2442bd10  addiu       $v0, $v0, -0x42F0
    ctx->pc = 0x175724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950160));
    // 0x175728: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x175728u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47BD10u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47BD10u, _value); } while (0);
    // 0x17572c: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x17572cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175730: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x175730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x175734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175738: 0x0  nop
    ctx->pc = 0x175738u;
    // NOP
    // 0x17573c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17573cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175740: 0x0  nop
    ctx->pc = 0x175740u;
    // NOP
    // 0x175744: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x175744u;
    {
        const bool branch_taken_0x175744 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x175744) {
            ctx->pc = 0x17575Cu;
            goto label_17575c;
        }
    }
    ctx->pc = 0x17574Cu;
    // 0x17574c: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x17574cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175750: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x175750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x175754: 0x2442bd50  addiu       $v0, $v0, -0x42B0
    ctx->pc = 0x175754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950224));
    // 0x175758: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x175758u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47BD50u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47BD50u, _value); } while (0);
label_17575c:
    // 0x17575c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x17575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x175760: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x175760u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175764: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x175764u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x175768: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x175768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x17576c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17576cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175770: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x175770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x175774: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x175774u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x175778: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x175778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x17577c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17577cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x175780: 0x2450bd60  addiu       $s0, $v0, -0x42A0
    ctx->pc = 0x175780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950240));
label_175784:
    // 0x175784: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x175784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175788: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x175788u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x17578c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x17578cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x175790: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x175790u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175794: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x175794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x175798: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x175798u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17579c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x17579cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1757a0: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1757a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1757a4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1757a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1757a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1757a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1757ac: 0x0  nop
    ctx->pc = 0x1757acu;
    // NOP
    // 0x1757b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1757b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1757b4: 0x0  nop
    ctx->pc = 0x1757b4u;
    // NOP
    // 0x1757b8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1757B8u;
    {
        const bool branch_taken_0x1757b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1757b8) {
            ctx->pc = 0x1757FCu;
            goto label_1757fc;
        }
    }
    ctx->pc = 0x1757C0u;
    // 0x1757c0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1757c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1757c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1757c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1757c8: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1757c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1757cc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1757ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1757d0: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x1757d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x1757d4: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x1757d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
    // 0x1757d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1757d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1757dc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1757dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1757e0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1757e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1757e4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1757E4u;
    SET_GPR_U32(ctx, 31, 0x1757ECu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1757ECu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1757ECu) { return; }
    ctx->pc = 0x1757ECu;
label_1757ec:
    // 0x1757ec: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1757ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1757f0: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1757f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1757f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1757F4u;
    {
        const bool branch_taken_0x1757f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1757f4) {
            ctx->pc = 0x175810u;
            goto label_175810;
        }
    }
    ctx->pc = 0x1757FCu;
label_1757fc:
    // 0x1757fc: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x1757fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175800: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x175800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x175804: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x175804u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x175808: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x175808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x17580c: 0x0  nop
    ctx->pc = 0x17580cu;
    // NOP
label_175810:
    // 0x175810: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x175810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x175814: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x175814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x175818: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x175818u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17581c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17581cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x175820: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x175820u;
    {
        const bool branch_taken_0x175820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175820) {
            ctx->pc = 0x175784u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175784;
        }
    }
    ctx->pc = 0x175828u;
    // 0x175828: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x175828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x17582c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17582cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x175830: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x175830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175834: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x175834u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175838: 0x0  nop
    ctx->pc = 0x175838u;
    // NOP
    // 0x17583c: 0x4500005e  bc1f        . + 4 + (0x5E << 2)
    ctx->pc = 0x17583Cu;
    {
        const bool branch_taken_0x17583c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17583c) {
            ctx->pc = 0x1759B8u;
            goto label_1759b8;
        }
    }
    ctx->pc = 0x175844u;
    // 0x175844: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x175844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x175848: 0x2450c7b0  addiu       $s0, $v0, -0x3850
    ctx->pc = 0x175848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952880));
    // 0x17584c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x17584cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x175850: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x175850u;
    {
        const bool branch_taken_0x175850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175850) {
            ctx->pc = 0x175908u;
            goto label_175908;
        }
    }
    ctx->pc = 0x175858u;
label_175858:
    // 0x175858: 0x260200c0  addiu       $v0, $s0, 0xC0
    ctx->pc = 0x175858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x17585c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x17585cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175860: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x175860u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x175864: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x175864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175868: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17586c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17586cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175870: 0x0  nop
    ctx->pc = 0x175870u;
    // NOP
    // 0x175874: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x175874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175878: 0x0  nop
    ctx->pc = 0x175878u;
    // NOP
    // 0x17587c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x17587Cu;
    {
        const bool branch_taken_0x17587c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17587c) {
            ctx->pc = 0x1758F8u;
            goto label_1758f8;
        }
    }
    ctx->pc = 0x175884u;
    // 0x175884: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175888: 0x0  nop
    ctx->pc = 0x175888u;
    // NOP
    // 0x17588c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x17588cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x175890: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x175890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x175894: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x175894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x175898: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x175898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x17589c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17589cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1758a0: 0x0  nop
    ctx->pc = 0x1758a0u;
    // NOP
    // 0x1758a4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1758a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1758a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1758a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1758ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1758acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1758b0: 0x0  nop
    ctx->pc = 0x1758b0u;
    // NOP
    // 0x1758b4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1758b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1758b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1758b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1758bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1758bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1758c0: 0x0  nop
    ctx->pc = 0x1758c0u;
    // NOP
    // 0x1758c4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1758c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1758c8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1758c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1758cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1758ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1758d0: 0x0  nop
    ctx->pc = 0x1758d0u;
    // NOP
    // 0x1758d4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1758d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1758d8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1758d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1758dc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1758dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1758e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1758e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1758e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1758e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1758e8: 0x0  nop
    ctx->pc = 0x1758e8u;
    // NOP
    // 0x1758ec: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1758ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1758f0: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1758f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1758f4: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1758f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1758f8:
    // 0x1758f8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1758f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1758fc: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1758fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x175900: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x175900u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x175904: 0x0  nop
    ctx->pc = 0x175904u;
    // NOP
label_175908:
    // 0x175908: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x175908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x17590c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x17590cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x175910: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x175910u;
    {
        const bool branch_taken_0x175910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175910) {
            ctx->pc = 0x175858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175858;
        }
    }
    ctx->pc = 0x175918u;
    // 0x175918: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x175918u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17591c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x17591Cu;
    {
        const bool branch_taken_0x17591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17591c) {
            ctx->pc = 0x1759A8u;
            goto label_1759a8;
        }
    }
    ctx->pc = 0x175924u;
label_175924:
    // 0x175924: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175928: 0x0  nop
    ctx->pc = 0x175928u;
    // NOP
    // 0x17592c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x17592cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x175930: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x175930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x175934: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x175934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x175938: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x175938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x17593c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17593cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175940: 0x0  nop
    ctx->pc = 0x175940u;
    // NOP
    // 0x175944: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x175944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x175948: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17594c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17594cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175950: 0x0  nop
    ctx->pc = 0x175950u;
    // NOP
    // 0x175954: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x175954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x175958: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17595c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17595cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175960: 0x0  nop
    ctx->pc = 0x175960u;
    // NOP
    // 0x175964: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x175964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x175968: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x175968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x17596c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17596cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175970: 0x0  nop
    ctx->pc = 0x175970u;
    // NOP
    // 0x175974: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x175974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x175978: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x175978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x17597c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x17597cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x175980: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175988: 0x0  nop
    ctx->pc = 0x175988u;
    // NOP
    // 0x17598c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x17598cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x175990: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x175990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x175994: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x175994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x175998: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x175998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x17599c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x17599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1759a0: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1759a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1759a4: 0x0  nop
    ctx->pc = 0x1759a4u;
    // NOP
label_1759a8:
    // 0x1759a8: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1759a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1759ac: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1759acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1759b0: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1759B0u;
    {
        const bool branch_taken_0x1759b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1759b0) {
            ctx->pc = 0x175924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175924;
        }
    }
    ctx->pc = 0x1759B8u;
label_1759b8:
    // 0x1759b8: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1759b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1759bc: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1759bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1759c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1759c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1759c4: 0x0  nop
    ctx->pc = 0x1759c4u;
    // NOP
    // 0x1759c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1759c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1759cc: 0x0  nop
    ctx->pc = 0x1759ccu;
    // NOP
    // 0x1759d0: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x1759D0u;
    {
        const bool branch_taken_0x1759d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1759d0) {
            ctx->pc = 0x175A80u;
            goto label_175a80;
        }
    }
    ctx->pc = 0x1759D8u;
    // 0x1759d8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1759d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1759dc: 0x2450c7b0  addiu       $s0, $v0, -0x3850
    ctx->pc = 0x1759dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952880));
    // 0x1759e0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1759e0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1759e4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1759E4u;
    {
        const bool branch_taken_0x1759e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1759e4) {
            ctx->pc = 0x175A70u;
            goto label_175a70;
        }
    }
    ctx->pc = 0x1759ECu;
label_1759ec:
    // 0x1759ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1759ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1759f0: 0x0  nop
    ctx->pc = 0x1759f0u;
    // NOP
    // 0x1759f4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1759f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1759f8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1759f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1759fc: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x1759fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x175a00: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x175a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x175a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175a08: 0x0  nop
    ctx->pc = 0x175a08u;
    // NOP
    // 0x175a0c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x175a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x175a10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175a14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175a18: 0x0  nop
    ctx->pc = 0x175a18u;
    // NOP
    // 0x175a1c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x175a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x175a20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175a28: 0x0  nop
    ctx->pc = 0x175a28u;
    // NOP
    // 0x175a2c: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x175a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x175a30: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x175a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x175a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175a38: 0x0  nop
    ctx->pc = 0x175a38u;
    // NOP
    // 0x175a3c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x175a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x175a40: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x175a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x175a44: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x175a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x175a48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175a50: 0x0  nop
    ctx->pc = 0x175a50u;
    // NOP
    // 0x175a54: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x175a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x175a58: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x175a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x175a5c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x175a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x175a60: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x175a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x175a64: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x175a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x175a68: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x175a68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x175a6c: 0x0  nop
    ctx->pc = 0x175a6cu;
    // NOP
label_175a70:
    // 0x175a70: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x175a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x175a74: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x175a74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x175a78: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x175A78u;
    {
        const bool branch_taken_0x175a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175a78) {
            ctx->pc = 0x1759ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1759ec;
        }
    }
    ctx->pc = 0x175A80u;
label_175a80:
    // 0x175a80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175a84: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175a88: 0xe420c938  swc1        $f0, -0x36C8($at)
    ctx->pc = 0x175a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C938u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C938u, _value); } while (0); }
    // 0x175a8c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175a90: 0xe420c934  swc1        $f0, -0x36CC($at)
    ctx->pc = 0x175a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C934u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C934u, _value); } while (0); }
    // 0x175a94: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175a98: 0xe420c930  swc1        $f0, -0x36D0($at)
    ctx->pc = 0x175a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C930u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C930u, _value); } while (0); }
    // 0x175a9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175aa4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175aa8: 0xe420c93c  swc1        $f0, -0x36C4($at)
    ctx->pc = 0x175aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C93Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C93Cu, _value); } while (0); }
    // 0x175aac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175ab4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175ab8: 0xe420c95c  swc1        $f0, -0x36A4($at)
    ctx->pc = 0x175ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C95Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C95Cu, _value); } while (0); }
    // 0x175abc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175abcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175ac0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175ac4: 0xe420c948  swc1        $f0, -0x36B8($at)
    ctx->pc = 0x175ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C948u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C948u, _value); } while (0); }
    // 0x175ac8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175acc: 0xe420c944  swc1        $f0, -0x36BC($at)
    ctx->pc = 0x175accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C944u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C944u, _value); } while (0); }
    // 0x175ad0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175ad4: 0xe420c940  swc1        $f0, -0x36C0($at)
    ctx->pc = 0x175ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C940u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C940u, _value); } while (0); }
    // 0x175ad8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175ad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175adc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175ae0: 0xe420c958  swc1        $f0, -0x36A8($at)
    ctx->pc = 0x175ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C958u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C958u, _value); } while (0); }
    // 0x175ae4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175ae8: 0xe420c954  swc1        $f0, -0x36AC($at)
    ctx->pc = 0x175ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C954u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C954u, _value); } while (0); }
    // 0x175aec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175af0: 0xe420c950  swc1        $f0, -0x36B0($at)
    ctx->pc = 0x175af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47C950u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47C950u, _value); } while (0); }
    // 0x175af4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175af8: 0x9022cc95  lbu         $v0, -0x336B($at)
    ctx->pc = 0x175af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x47CC95u));
    // 0x175afc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x175afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175b00: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x175b00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x175b04: 0xc05d4a0  jal         func_175280
    ctx->pc = 0x175B04u;
    SET_GPR_U32(ctx, 31, 0x175B0Cu);
    ctx->pc = 0x175280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175280u, 0x175B04u, 0x175B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B0Cu;
label_175b0c:
    // 0x175b0c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x175b0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175b10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x175b10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175b14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x175b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175b18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175b20: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x175b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x175b24: 0x3e00008  jr          $ra
    ctx->pc = 0x175B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175B2Cu;
}
