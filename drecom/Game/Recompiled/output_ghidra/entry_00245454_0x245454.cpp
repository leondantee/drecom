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

// Function: entry_00245454
// Address: 0x245454 - 0x245570
void entry_00245454_0x245454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00245454_0x245454");
#endif

    switch (ctx->pc) {
        case 0x2454d0u: goto label_2454d0;
        case 0x24552cu: goto label_24552c;
        case 0x245534u: goto label_245534;
        case 0x245568u: goto label_245568;
        default: break;
    }

    ctx->pc = 0x245454u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x245570u;
}
