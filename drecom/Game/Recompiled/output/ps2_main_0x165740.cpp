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

// Function: main
// Address: 0x165740 - 0x165b40
void ps2_main_0x165740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_main_0x165740");
#endif

    switch (ctx->pc) {
        case 0x165760u: goto label_165760;
        case 0x165814u: goto label_165814;
        case 0x1658a0u: goto label_1658a0;
        case 0x16593cu: goto label_16593c;
        case 0x16595cu: goto label_16595c;
        case 0x16598cu: goto label_16598c;
        case 0x1659dcu: goto label_1659dc;
        case 0x165a04u: goto label_165a04;
        case 0x165a1cu: goto label_165a1c;
        case 0x165a28u: goto label_165a28;
        case 0x165a34u: goto label_165a34;
        case 0x165a54u: goto label_165a54;
        case 0x165a60u: goto label_165a60;
        case 0x165a78u: goto label_165a78;
        case 0x165ac4u: goto label_165ac4;
        case 0x165ad0u: goto label_165ad0;
        case 0x165ad8u: goto label_165ad8;
        case 0x165ae8u: goto label_165ae8;
        case 0x165b00u: goto label_165b00;
        case 0x165b10u: goto label_165b10;
        case 0x165b20u: goto label_165b20;
        case 0x165b38u: goto label_165b38;
        default: break;
    }

    ctx->pc = 0x165740u;

    // 0x165740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165744: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x165744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x165748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16574c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16574cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x165750: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x165750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x165754: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x165754u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x165758: 0xc0596d8  jal         func_165B60
    ctx->pc = 0x165758u;
    SET_GPR_U32(ctx, 31, 0x165760u);
    ctx->pc = 0x165B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165B60u, 0x165758u, 0x165760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165760u;
label_165760:
    // 0x165760: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165764: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x165764u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x165768: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x165768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x16576c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16576cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x165770: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165774: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x165774u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x165778: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16577c: 0xac201a40  sw          $zero, 0x1A40($at)
    ctx->pc = 0x16577cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D1A40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A40u, _value); } while (0);
    // 0x165780: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165784: 0xac201a44  sw          $zero, 0x1A44($at)
    ctx->pc = 0x165784u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D1A44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A44u, _value); } while (0);
    // 0x165788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16578c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x16578cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165790: 0xac225a0c  sw          $v0, 0x5A0C($at)
    ctx->pc = 0x165790u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A0Cu, _value); } while (0);
    // 0x165794: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x165794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x165798: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x16579c: 0xac225a10  sw          $v0, 0x5A10($at)
    ctx->pc = 0x16579cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A10u, _value); } while (0);
    // 0x1657a0: 0x3c024611  lui         $v0, 0x4611
    ctx->pc = 0x1657a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17937 << 16));
    // 0x1657a4: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x1657a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x1657a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1657a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1657ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1657acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1657b0: 0xe4205a14  swc1        $f0, 0x5A14($at)
    ctx->pc = 0x1657b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F5A14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A14u, _value); } while (0); }
    // 0x1657b4: 0x3c02c55c  lui         $v0, 0xC55C
    ctx->pc = 0x1657b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50524 << 16));
    // 0x1657b8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1657b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1657bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1657bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1657c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1657c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1657c4: 0xe4205a18  swc1        $f0, 0x5A18($at)
    ctx->pc = 0x1657c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F5A18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A18u, _value); } while (0); }
    // 0x1657c8: 0x3c02452c  lui         $v0, 0x452C
    ctx->pc = 0x1657c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17708 << 16));
    // 0x1657cc: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x1657ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x1657d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1657d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1657d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1657d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1657d8: 0xe4205a1c  swc1        $f0, 0x5A1C($at)
    ctx->pc = 0x1657d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F5A1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A1Cu, _value); } while (0); }
    // 0x1657dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1657dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1657e0: 0xac205a08  sw          $zero, 0x5A08($at)
    ctx->pc = 0x1657e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F5A08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A08u, _value); } while (0);
    // 0x1657e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1657e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1657e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1657e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1657ec: 0xac225a00  sw          $v0, 0x5A00($at)
    ctx->pc = 0x1657ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A00u, _value); } while (0);
    // 0x1657f0: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1657f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1657f4: 0x34431000  ori         $v1, $v0, 0x1000
    ctx->pc = 0x1657f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1657f8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1657f8u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x1657fc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1657fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x165800: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x165800u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 2));
    // 0x165804: 0x2403008b  addiu       $v1, $zero, 0x8B
    ctx->pc = 0x165804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x165808: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x165808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x16580c: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x16580cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x165810: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x165810u;
    runtime->Store32(rdram, ctx, 0x10000810u, GPR_U32(ctx, 3)); // MMIO: 0x10000810
label_165814:
    // 0x165814: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165818: 0x8c235a04  lw          $v1, 0x5A04($at)
    ctx->pc = 0x165818u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F5A04u));
    // 0x16581c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16581cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165820: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x165820u;
    {
        const bool branch_taken_0x165820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x165820) {
            ctx->pc = 0x16587Cu;
            goto label_16587c;
        }
    }
    ctx->pc = 0x165828u;
    // 0x165828: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x165828u;
    {
        const bool branch_taken_0x165828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165828) {
            ctx->pc = 0x165838u;
            goto label_165838;
        }
    }
    ctx->pc = 0x165830u;
    // 0x165830: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x165830u;
    {
        const bool branch_taken_0x165830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165830) {
            ctx->pc = 0x1658A0u;
            goto label_1658a0;
        }
    }
    ctx->pc = 0x165838u;
label_165838:
    // 0x165838: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16583c: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x16583cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x165840: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x165840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x165844: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165848: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x165848u;
    {
        const bool branch_taken_0x165848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165848) {
            ctx->pc = 0x1658A0u;
            goto label_1658a0;
        }
    }
    ctx->pc = 0x165850u;
    // 0x165850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165854: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x165854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    // 0x165858: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x165858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x16585c: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x16585cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x165860: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165864: 0x8c225a04  lw          $v0, 0x5A04($at)
    ctx->pc = 0x165864u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5A04u));
    // 0x165868: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x165868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16586c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x16586cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165870: 0xac225a04  sw          $v0, 0x5A04($at)
    ctx->pc = 0x165870u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A04u, _value); } while (0);
    // 0x165874: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x165874u;
    {
        const bool branch_taken_0x165874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165874) {
            ctx->pc = 0x1658A0u;
            goto label_1658a0;
        }
    }
    ctx->pc = 0x16587Cu;
label_16587c:
    // 0x16587c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16587cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165880: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x165880u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x165884: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x165884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x165888: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16588c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16588Cu;
    {
        const bool branch_taken_0x16588c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16588c) {
            ctx->pc = 0x1658A0u;
            goto label_1658a0;
        }
    }
    ctx->pc = 0x165894u;
    // 0x165894: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165898: 0xac205a04  sw          $zero, 0x5A04($at)
    ctx->pc = 0x165898u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F5A04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A04u, _value); } while (0);
    // 0x16589c: 0x0  nop
    ctx->pc = 0x16589cu;
    // NOP
label_1658a0:
    // 0x1658a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1658a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1658a4: 0x8c235890  lw          $v1, 0x5890($at)
    ctx->pc = 0x1658a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F5890u));
    // 0x1658a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1658a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1658ac: 0x8c225a00  lw          $v0, 0x5A00($at)
    ctx->pc = 0x1658acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5A00u));
    // 0x1658b0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1658b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1658b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1658B4u;
    {
        const bool branch_taken_0x1658b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1658b4) {
            ctx->pc = 0x1658A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1658a0;
        }
    }
    ctx->pc = 0x1658BCu;
    // 0x1658bc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1658bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1658c0: 0x8c225a04  lw          $v0, 0x5A04($at)
    ctx->pc = 0x1658c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5A04u));
    // 0x1658c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1658C4u;
    {
        const bool branch_taken_0x1658c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1658c4) {
            ctx->pc = 0x1658E0u;
            goto label_1658e0;
        }
    }
    ctx->pc = 0x1658CCu;
    // 0x1658cc: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1658ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1658d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1658d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1658d4: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x1658d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    // 0x1658d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1658D8u;
    {
        const bool branch_taken_0x1658d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1658d8) {
            ctx->pc = 0x165900u;
            goto label_165900;
        }
    }
    ctx->pc = 0x1658E0u;
label_1658e0:
    // 0x1658e0: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1658e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1658e4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1658e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1658e8: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1658e8u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x1658ec: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x1658ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
    // 0x1658f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1658f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1658f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1658f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1658f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1658f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1658fc: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x1658fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_165900:
    // 0x165900: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165904: 0xac205890  sw          $zero, 0x5890($at)
    ctx->pc = 0x165904u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F5890u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5890u, _value); } while (0);
    // 0x165908: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16590c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x16590cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x165910: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x165910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x165914: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165918: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x165918u;
    {
        const bool branch_taken_0x165918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165918) {
            ctx->pc = 0x165944u;
            goto label_165944;
        }
    }
    ctx->pc = 0x165920u;
    // 0x165920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165924: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165928: 0xac225a08  sw          $v0, 0x5A08($at)
    ctx->pc = 0x165928u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A08u, _value); } while (0);
    // 0x16592c: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x16592cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x165930: 0x26040590  addiu       $a0, $s0, 0x590
    ctx->pc = 0x165930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x165934: 0xc0598c0  jal         func_166300
    ctx->pc = 0x165934u;
    SET_GPR_U32(ctx, 31, 0x16593Cu);
    ctx->pc = 0x166300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166300u, 0x165934u, 0x16593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16593Cu;
label_16593c:
    // 0x16593c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16593Cu;
    {
        const bool branch_taken_0x16593c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16593c) {
            ctx->pc = 0x165960u;
            goto label_165960;
        }
    }
    ctx->pc = 0x165944u;
label_165944:
    // 0x165944: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165948: 0xac205a08  sw          $zero, 0x5A08($at)
    ctx->pc = 0x165948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F5A08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A08u, _value); } while (0);
    // 0x16594c: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x16594cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x165950: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x165950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x165954: 0xc0598c0  jal         func_166300
    ctx->pc = 0x165954u;
    SET_GPR_U32(ctx, 31, 0x16595Cu);
    ctx->pc = 0x166300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166300u, 0x165954u, 0x16595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16595Cu;
label_16595c:
    // 0x16595c: 0x0  nop
    ctx->pc = 0x16595cu;
    // NOP
label_165960:
    // 0x165960: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x165960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x165964: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x165964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x165968: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x165968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x16596c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x16596cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x165970: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x165970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x165974: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x165974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x165978: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x165978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x16597c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x16597cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x165980: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x165980u;
    runtime->Store32(rdram, ctx, 0x10000800u, GPR_U32(ctx, 0)); // MMIO: 0x10000800
    // 0x165984: 0xc059830  jal         func_1660C0
    ctx->pc = 0x165984u;
    SET_GPR_U32(ctx, 31, 0x16598Cu);
    ctx->pc = 0x1660C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1660C0u, 0x165984u, 0x16598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16598Cu;
label_16598c:
    // 0x16598c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16598cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165990: 0x8c231a90  lw          $v1, 0x1A90($at)
    ctx->pc = 0x165990u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A90u));
    // 0x165994: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165998: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x165998u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x16599c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x16599cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1659a0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1659a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1659a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1659a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1659a8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1659A8u;
    {
        const bool branch_taken_0x1659a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1659a8) {
            ctx->pc = 0x165A20u;
            goto label_165a20;
        }
    }
    ctx->pc = 0x1659B0u;
    // 0x1659b0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1659b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1659b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1659b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1659b8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1659b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1659bc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1659bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1659c0: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x1659c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x1659c4: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x1659c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1659c8: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x1659c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x1659cc: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x1659ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1659d0: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x1659d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1659d4: 0xc059190  jal         func_164640
    ctx->pc = 0x1659D4u;
    SET_GPR_U32(ctx, 31, 0x1659DCu);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1659D4u, 0x1659DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1659DCu;
label_1659dc:
    // 0x1659dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1659dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1659e0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1659e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1659e4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1659e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1659e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1659e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1659ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1659ECu;
    {
        const bool branch_taken_0x1659ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1659ec) {
            ctx->pc = 0x165A0Cu;
            goto label_165a0c;
        }
    }
    ctx->pc = 0x1659F4u;
    // 0x1659f4: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x1659f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1659f8: 0x26040590  addiu       $a0, $s0, 0x590
    ctx->pc = 0x1659f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x1659fc: 0xc0599ac  jal         func_1666B0
    ctx->pc = 0x1659FCu;
    SET_GPR_U32(ctx, 31, 0x165A04u);
    ctx->pc = 0x1666B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1666B0u, 0x1659FCu, 0x165A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A04u;
label_165a04:
    // 0x165a04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x165A04u;
    {
        const bool branch_taken_0x165a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a04) {
            ctx->pc = 0x165A20u;
            goto label_165a20;
        }
    }
    ctx->pc = 0x165A0Cu;
label_165a0c:
    // 0x165a0c: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x165a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x165a10: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x165a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x165a14: 0xc0599ac  jal         func_1666B0
    ctx->pc = 0x165A14u;
    SET_GPR_U32(ctx, 31, 0x165A1Cu);
    ctx->pc = 0x1666B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1666B0u, 0x165A14u, 0x165A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A1Cu;
label_165a1c:
    // 0x165a1c: 0x0  nop
    ctx->pc = 0x165a1cu;
    // NOP
label_165a20:
    // 0x165a20: 0xc0762e4  jal         func_1D8B90
    ctx->pc = 0x165A20u;
    SET_GPR_U32(ctx, 31, 0x165A28u);
    ctx->pc = 0x1D8B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B90u, 0x165A20u, 0x165A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A28u;
label_165a28:
    // 0x165a28: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x165a28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x165a2c: 0xc068164  jal         func_1A0590
    ctx->pc = 0x165A2Cu;
    SET_GPR_U32(ctx, 31, 0x165A34u);
    ctx->pc = 0x1A0590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0590u, 0x165A2Cu, 0x165A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A34u;
label_165a34:
    // 0x165a34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165a38: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x165a38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x165a3c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x165a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x165a40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165a44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165A44u;
    {
        const bool branch_taken_0x165a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a44) {
            ctx->pc = 0x165A58u;
            goto label_165a58;
        }
    }
    ctx->pc = 0x165A4Cu;
    // 0x165a4c: 0xc059080  jal         func_164200
    ctx->pc = 0x165A4Cu;
    SET_GPR_U32(ctx, 31, 0x165A54u);
    ctx->pc = 0x164200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164200u, 0x165A4Cu, 0x165A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A54u;
label_165a54:
    // 0x165a54: 0x0  nop
    ctx->pc = 0x165a54u;
    // NOP
label_165a58:
    // 0x165a58: 0xc059330  jal         func_164CC0
    ctx->pc = 0x165A58u;
    SET_GPR_U32(ctx, 31, 0x165A60u);
    ctx->pc = 0x164CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164CC0u, 0x165A58u, 0x165A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A60u;
label_165a60:
    // 0x165a60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165a64: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x165a64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x165a68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165a6c: 0xac221a90  sw          $v0, 0x1A90($at)
    ctx->pc = 0x165a6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A90u, _value); } while (0);
    // 0x165a70: 0xc067434  jal         func_19D0D0
    ctx->pc = 0x165A70u;
    SET_GPR_U32(ctx, 31, 0x165A78u);
    ctx->pc = 0x19D0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D0D0u, 0x165A70u, 0x165A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A78u;
label_165a78:
    // 0x165a78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165a7c: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x165a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x165a80: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x165a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x165a84: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x165A84u;
    {
        const bool branch_taken_0x165a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165a84) {
            ctx->pc = 0x165AC8u;
            goto label_165ac8;
        }
    }
    ctx->pc = 0x165A8Cu;
    // 0x165a8c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165a90: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x165a90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x165a94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x165a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x165a98: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165a9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x165A9Cu;
    {
        const bool branch_taken_0x165a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a9c) {
            ctx->pc = 0x165AC8u;
            goto label_165ac8;
        }
    }
    ctx->pc = 0x165AA4u;
    // 0x165aa4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165aa8: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x165aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x165aac: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x165aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x165ab0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165ab4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165AB4u;
    {
        const bool branch_taken_0x165ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165ab4) {
            ctx->pc = 0x165AC8u;
            goto label_165ac8;
        }
    }
    ctx->pc = 0x165ABCu;
    // 0x165abc: 0xc0557f8  jal         func_155FE0
    ctx->pc = 0x165ABCu;
    SET_GPR_U32(ctx, 31, 0x165AC4u);
    ctx->pc = 0x155FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FE0u, 0x165ABCu, 0x165AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165AC4u;
label_165ac4:
    // 0x165ac4: 0x0  nop
    ctx->pc = 0x165ac4u;
    // NOP
label_165ac8:
    // 0x165ac8: 0xc06793c  jal         func_19E4F0
    ctx->pc = 0x165AC8u;
    SET_GPR_U32(ctx, 31, 0x165AD0u);
    ctx->pc = 0x19E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E4F0u, 0x165AC8u, 0x165AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165AD0u;
label_165ad0:
    // 0x165ad0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x165AD0u;
    SET_GPR_U32(ctx, 31, 0x165AD8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x165AD0u, 0x165AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165AD8u;
label_165ad8:
    // 0x165ad8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x165ad8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165adc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x165adcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165ae0: 0xc04026a  jal         func_1009A8
    ctx->pc = 0x165AE0u;
    SET_GPR_U32(ctx, 31, 0x165AE8u);
    ctx->pc = 0x1009A8u;
    {
        ctx->pc = 0x165AE8u;
        ps2_stubs::sceGsSyncPath(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165AE8u) { return; }
    ctx->pc = 0x165AE8u;
label_165ae8:
    // 0x165ae8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165aec: 0x8c225a08  lw          $v0, 0x5A08($at)
    ctx->pc = 0x165aecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5A08u));
    // 0x165af0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x165AF0u;
    {
        const bool branch_taken_0x165af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165af0) {
            ctx->pc = 0x165B08u;
            goto label_165b08;
        }
    }
    ctx->pc = 0x165AF8u;
    // 0x165af8: 0xc0591e0  jal         func_164780
    ctx->pc = 0x165AF8u;
    SET_GPR_U32(ctx, 31, 0x165B00u);
    ctx->pc = 0x164780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164780u, 0x165AF8u, 0x165B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B00u;
label_165b00:
    // 0x165b00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x165B00u;
    {
        const bool branch_taken_0x165b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165b00) {
            ctx->pc = 0x165B10u;
            goto label_165b10;
        }
    }
    ctx->pc = 0x165B08u;
label_165b08:
    // 0x165b08: 0xc059850  jal         func_166140
    ctx->pc = 0x165B08u;
    SET_GPR_U32(ctx, 31, 0x165B10u);
    ctx->pc = 0x166140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166140u, 0x165B08u, 0x165B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B10u;
label_165b10:
    // 0x165b10: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x165b10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165b14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x165b14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165b18: 0xc04026a  jal         func_1009A8
    ctx->pc = 0x165B18u;
    SET_GPR_U32(ctx, 31, 0x165B20u);
    ctx->pc = 0x1009A8u;
    {
        ctx->pc = 0x165B20u;
        ps2_stubs::sceGsSyncPath(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165B20u) { return; }
    ctx->pc = 0x165B20u;
label_165b20:
    // 0x165b20: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165b24: 0x8c225a04  lw          $v0, 0x5A04($at)
    ctx->pc = 0x165b24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5A04u));
    // 0x165b28: 0x1040ff3a  beqz        $v0, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x165B28u;
    {
        const bool branch_taken_0x165b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165b28) {
            ctx->pc = 0x165814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165814;
        }
    }
    ctx->pc = 0x165B30u;
    // 0x165b30: 0xc05949c  jal         func_165270
    ctx->pc = 0x165B30u;
    SET_GPR_U32(ctx, 31, 0x165B38u);
    ctx->pc = 0x165270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165270u, 0x165B30u, 0x165B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B38u;
label_165b38:
    // 0x165b38: 0x1000ff36  b           . + 4 + (-0xCA << 2)
    ctx->pc = 0x165B38u;
    {
        const bool branch_taken_0x165b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165b38) {
            ctx->pc = 0x165814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165814;
        }
    }
    ctx->pc = 0x165B40u;
}
