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

// Function: Em0e_R1_mv04
// Address: 0x245420 - 0x2457bc
void Em0e_R1_mv04_0x245420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R1_mv04_0x245420");
#endif

    switch (ctx->pc) {
        case 0x2454d0u: goto label_2454d0;
        case 0x24552cu: goto label_24552c;
        case 0x245534u: goto label_245534;
        case 0x245568u: goto label_245568;
        case 0x245594u: goto label_245594;
        case 0x2455c0u: goto label_2455c0;
        case 0x2455dcu: goto label_2455dc;
        case 0x2455f4u: goto label_2455f4;
        case 0x245600u: goto label_245600;
        case 0x245648u: goto label_245648;
        case 0x24566cu: goto label_24566c;
        default: break;
    }

    ctx->pc = 0x245420u;

    // 0x245420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x245420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x245424: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x245424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x245428: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x245428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x24542c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24542cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245430: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x245430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x245434: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x245434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x245438: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x245438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24543c: 0x10830055  beq         $a0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x24543Cu;
    {
        const bool branch_taken_0x24543c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24543c) {
            ctx->pc = 0x245594u;
            goto label_245594;
        }
    }
    ctx->pc = 0x245444u;
    // 0x245444: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x245444u;
    {
        const bool branch_taken_0x245444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x245444) {
            ctx->pc = 0x245454u;
            goto label_245454;
        }
    }
    ctx->pc = 0x24544Cu;
    // 0x24544c: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x24544Cu;
    {
        const bool branch_taken_0x24544c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24544c) {
            ctx->pc = 0x2456ACu;
            goto label_2456ac;
        }
    }
    ctx->pc = 0x245454u;
label_245454:
    // 0x245454: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245458: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x245458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x24545c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24545cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x245460: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x245460u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x245464: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245468: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24546c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245470: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x245470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x245474: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x245474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x245478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x245478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24547c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245480: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x245480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245484: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x245484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x245488: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x245488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x24548c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24548cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245490: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245494: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x245494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245498: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x245498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x24549c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x24549cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2454a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2454a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2454a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2454a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2454a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2454a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2454ac: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2454acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2454b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2454b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2454b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2454b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2454b8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2454b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2454bc: 0x24065a15  addiu       $a2, $zero, 0x5A15
    ctx->pc = 0x2454bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23061));
    // 0x2454c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2454c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2454c4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2454c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2454c8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2454C8u;
    SET_GPR_U32(ctx, 31, 0x2454D0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2454C8u, 0x2454D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2454D0u;
label_2454d0:
    // 0x2454d0: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x2454d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x2454d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2454d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2454d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2454d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2454dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2454dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2454e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2454e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2454e4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2454e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2454e8: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2454e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2454ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2454ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2454f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2454f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2454f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2454f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2454f8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2454f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2454fc: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2454fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x245500: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245504: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x245504u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x245508: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x245508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x24550c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x24550cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x245510: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x245510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x245514: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245518: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x245518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x24551c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x24551cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x245520: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x245520u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x245524: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x245524u;
    SET_GPR_U32(ctx, 31, 0x24552Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x245524u, 0x24552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24552Cu;
label_24552c:
    // 0x24552c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x24552Cu;
    SET_GPR_U32(ctx, 31, 0x245534u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x24552Cu, 0x245534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245534u;
label_245534:
    // 0x245534: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x245534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x245538: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x245538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24553c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24553Cu;
    {
        const bool branch_taken_0x24553c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24553c) {
            ctx->pc = 0x245570u;
            goto label_245570;
        }
    }
    ctx->pc = 0x245544u;
    // 0x245544: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x245544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x245548: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x245548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x24554c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24554cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x245550: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245554: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x245554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x245558: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x245558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x24555c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24555cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x245560: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x245560u;
    SET_GPR_U32(ctx, 31, 0x245568u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x245560u, 0x245568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245568u;
label_245568:
    // 0x245568: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x245568u;
    {
        const bool branch_taken_0x245568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245568) {
            ctx->pc = 0x245594u;
            goto label_245594;
        }
    }
    ctx->pc = 0x245570u;
label_245570:
    // 0x245570: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x245570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x245574: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x245574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x245578: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x245578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24557c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24557cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245580: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x245580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x245584: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x245584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x245588: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x245588u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24558c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x24558Cu;
    SET_GPR_U32(ctx, 31, 0x245594u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x24558Cu, 0x245594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245594u;
label_245594:
    // 0x245594: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x245594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245598: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x245598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24559c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24559cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2455a0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2455a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2455a4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2455a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2455a8: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2455a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2455ac: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2455acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2455b0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2455b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2455b4: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x2455b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2455b8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2455B8u;
    SET_GPR_U32(ctx, 31, 0x2455C0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2455B8u, 0x2455C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2455C0u;
label_2455c0:
    // 0x2455c0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2455c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2455c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2455c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2455c8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2455c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2455cc: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2455ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2455d0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2455d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2455d4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2455D4u;
    SET_GPR_U32(ctx, 31, 0x2455DCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2455D4u, 0x2455DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2455DCu;
label_2455dc:
    // 0x2455dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2455dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2455e0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2455e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2455e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2455e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2455e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2455e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2455ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2455ECu;
    SET_GPR_U32(ctx, 31, 0x2455F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2455ECu, 0x2455F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2455F4u;
label_2455f4:
    // 0x2455f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2455f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2455f8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2455F8u;
    SET_GPR_U32(ctx, 31, 0x245600u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2455F8u, 0x245600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245600u;
label_245600:
    // 0x245600: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245604: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x245604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x245608: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x245608u;
    {
        const bool branch_taken_0x245608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245608) {
            ctx->pc = 0x2456ACu;
            goto label_2456ac;
        }
    }
    ctx->pc = 0x245610u;
    // 0x245610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x245610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245614: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245618: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x245618u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x24561c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24561cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x245620: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245624: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x245624u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x245628: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24562c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x24562cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x245630: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245634: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x245634u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x245638: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24563c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x24563cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x245640: 0xc067694  jal         func_19DA50
    ctx->pc = 0x245640u;
    SET_GPR_U32(ctx, 31, 0x245648u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x245640u, 0x245648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245648u;
label_245648:
    // 0x245648: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x245648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24564c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x24564cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x245650: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x245650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x245654: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x245654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x245658: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x245658u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x24565c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245660: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x245660u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x245664: 0xc067694  jal         func_19DA50
    ctx->pc = 0x245664u;
    SET_GPR_U32(ctx, 31, 0x24566Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x245664u, 0x24566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24566Cu;
label_24566c:
    // 0x24566c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24566cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x245670: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x245670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x245674: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x245674u;
    {
        const bool branch_taken_0x245674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245674) {
            ctx->pc = 0x2456ACu;
            goto label_2456ac;
        }
    }
    ctx->pc = 0x24567Cu;
    // 0x24567c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24567cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245680: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245684: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x245684u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x245688: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x245688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24568c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24568cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245690: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x245690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x245694: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245698: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x245698u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x24569c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24569cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2456a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2456a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2456a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2456a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2456a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2456a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2456ac:
    // 0x2456ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2456acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2456b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2456b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2456b4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2456b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2456b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2456b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2456bc: 0x0  nop
    ctx->pc = 0x2456bcu;
    // NOP
    // 0x2456c0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2456c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2456c4: 0x0  nop
    ctx->pc = 0x2456c4u;
    // NOP
    // 0x2456c8: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x2456C8u;
    {
        const bool branch_taken_0x2456c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2456c8) {
            ctx->pc = 0x2457ACu;
            goto label_2457ac;
        }
    }
    ctx->pc = 0x2456D0u;
    // 0x2456d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2456d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2456d4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2456d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2456d8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2456d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2456dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2456dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2456e0: 0x0  nop
    ctx->pc = 0x2456e0u;
    // NOP
    // 0x2456e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2456e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2456e8: 0x0  nop
    ctx->pc = 0x2456e8u;
    // NOP
    // 0x2456ec: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2456ECu;
    {
        const bool branch_taken_0x2456ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2456ec) {
            ctx->pc = 0x245754u;
            goto label_245754;
        }
    }
    ctx->pc = 0x2456F4u;
    // 0x2456f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2456f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2456f8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2456f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2456fc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2456fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245700: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x245700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x245704: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x245704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x245708: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24570c: 0x0  nop
    ctx->pc = 0x24570cu;
    // NOP
    // 0x245710: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x245710u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x245714: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x245714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x245718: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24571c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x24571cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245720: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x245720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245724: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245728: 0x0  nop
    ctx->pc = 0x245728u;
    // NOP
    // 0x24572c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24572cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245730: 0x0  nop
    ctx->pc = 0x245730u;
    // NOP
    // 0x245734: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x245734u;
    {
        const bool branch_taken_0x245734 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x245734) {
            ctx->pc = 0x2457ACu;
            goto label_2457ac;
        }
    }
    ctx->pc = 0x24573Cu;
    // 0x24573c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24573cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245740: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245744: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245748: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x245748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x24574c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x24574Cu;
    {
        const bool branch_taken_0x24574c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24574c) {
            ctx->pc = 0x2457ACu;
            goto label_2457ac;
        }
    }
    ctx->pc = 0x245754u;
label_245754:
    // 0x245754: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245758: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x245758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24575c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x24575cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245760: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x245760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x245764: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x245764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x245768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24576c: 0x0  nop
    ctx->pc = 0x24576cu;
    // NOP
    // 0x245770: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x245770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x245774: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x245774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x245778: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24577c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x24577cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245780: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x245780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245784: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245788: 0x0  nop
    ctx->pc = 0x245788u;
    // NOP
    // 0x24578c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24578cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245790: 0x0  nop
    ctx->pc = 0x245790u;
    // NOP
    // 0x245794: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x245794u;
    {
        const bool branch_taken_0x245794 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x245794) {
            ctx->pc = 0x2457ACu;
            goto label_2457ac;
        }
    }
    ctx->pc = 0x24579Cu;
    // 0x24579c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24579cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2457a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2457a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2457a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2457a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2457a8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2457a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2457ac:
    // 0x2457ac: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2457acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2457b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2457b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2457b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2457B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2457B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2457BCu;
}
