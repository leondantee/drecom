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

// Function: Em19_R1_dm_small
// Address: 0x2e6450 - 0x2e6750
void Em19_R1_dm_small_0x2e6450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_R1_dm_small_0x2e6450");
#endif

    switch (ctx->pc) {
        case 0x2e64a4u: goto label_2e64a4;
        case 0x2e64bcu: goto label_2e64bc;
        case 0x2e6578u: goto label_2e6578;
        case 0x2e6590u: goto label_2e6590;
        case 0x2e659cu: goto label_2e659c;
        case 0x2e65acu: goto label_2e65ac;
        case 0x2e65c4u: goto label_2e65c4;
        case 0x2e662cu: goto label_2e662c;
        default: break;
    }

    ctx->pc = 0x2e6450u;

    // 0x2e6450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e6450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e6454: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2e6454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2e6458: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2e6458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2e645c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e645cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6460: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2e6460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e6464: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e6464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e6468: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e6468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e646c: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2E646Cu;
    {
        const bool branch_taken_0x2e646c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e646c) {
            ctx->pc = 0x2E650Cu;
            goto label_2e650c;
        }
    }
    ctx->pc = 0x2E6474u;
    // 0x2e6474: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6474u;
    {
        const bool branch_taken_0x2e6474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6474) {
            ctx->pc = 0x2E6484u;
            goto label_2e6484;
        }
    }
    ctx->pc = 0x2E647Cu;
    // 0x2e647c: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2E647Cu;
    {
        const bool branch_taken_0x2e647c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e647c) {
            ctx->pc = 0x2E6740u;
            goto label_2e6740;
        }
    }
    ctx->pc = 0x2E6484u;
label_2e6484:
    // 0x2e6484: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6488: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e6488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e648c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e648cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e6490: 0x24060503  addiu       $a2, $zero, 0x503
    ctx->pc = 0x2e6490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x2e6494: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e6494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6498: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e6498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e649c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E649Cu;
    SET_GPR_U32(ctx, 31, 0x2E64A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E649Cu, 0x2E64A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E64A4u;
label_2e64a4:
    // 0x2e64a4: 0x3c02c14c  lui         $v0, 0xC14C
    ctx->pc = 0x2e64a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49484 << 16));
    // 0x2e64a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e64a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e64ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e64acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e64b0: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2e64b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2e64b4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E64B4u;
    SET_GPR_U32(ctx, 31, 0x2E64BCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E64B4u, 0x2E64BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E64BCu;
label_2e64bc:
    // 0x2e64bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e64bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e64c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e64c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e64c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E64C4u;
    {
        const bool branch_taken_0x2e64c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e64c4) {
            ctx->pc = 0x2E64E8u;
            goto label_2e64e8;
        }
    }
    ctx->pc = 0x2E64CCu;
    // 0x2e64cc: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x2e64ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x2e64d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e64d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e64d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e64d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e64d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e64d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e64dc: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e64dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2e64e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E64E0u;
    {
        const bool branch_taken_0x2e64e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e64e0) {
            ctx->pc = 0x2E64FCu;
            goto label_2e64fc;
        }
    }
    ctx->pc = 0x2E64E8u;
label_2e64e8:
    // 0x2e64e8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x2e64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x2e64ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e64ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e64f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e64f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e64f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e64f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e64f8: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e64f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_2e64fc:
    // 0x2e64fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e64fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6500: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e6500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e6504: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e6504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e6508: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e6508u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e650c:
    // 0x2e650c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e650cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6510: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2e6510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2e6514: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e6514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e6518: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2e6518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2e651c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E651Cu;
    {
        const bool branch_taken_0x2e651c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e651c) {
            ctx->pc = 0x2E6540u;
            goto label_2e6540;
        }
    }
    ctx->pc = 0x2E6524u;
    // 0x2e6524: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6528: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2e6528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e652c: 0x3c024134  lui         $v0, 0x4134
    ctx->pc = 0x2e652cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16692 << 16));
    // 0x2e6530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6534: 0x0  nop
    ctx->pc = 0x2e6534u;
    // NOP
    // 0x2e6538: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e6538u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e653c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2e653cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_2e6540:
    // 0x2e6540: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6544: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2e6544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6548: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x2e6548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x2e654c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e654cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6550: 0x0  nop
    ctx->pc = 0x2e6550u;
    // NOP
    // 0x2e6554: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e6554u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e6558: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2e6558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2e655c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6560: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2e6560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6564: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6568: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e6568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e656c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2e656cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e6570: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E6570u;
    SET_GPR_U32(ctx, 31, 0x2E6578u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E6570u, 0x2E6578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6578u;
label_2e6578:
    // 0x2e6578: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e657c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e657cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2e6580: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e6580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6584: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e6584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e6588: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E6588u;
    SET_GPR_U32(ctx, 31, 0x2E6590u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E6588u, 0x2E6590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6590u;
label_2e6590:
    // 0x2e6590: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e6590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6594: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2E6594u;
    SET_GPR_U32(ctx, 31, 0x2E659Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2E6594u, 0x2E659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E659Cu;
label_2e659c:
    // 0x2e659c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e659cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e65a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e65a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e65a4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E65A4u;
    SET_GPR_U32(ctx, 31, 0x2E65ACu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E65A4u, 0x2E65ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E65ACu;
label_2e65ac:
    // 0x2e65ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e65acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e65b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e65b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e65b4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2e65b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2e65b8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2e65b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2e65bc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2E65BCu;
    SET_GPR_U32(ctx, 31, 0x2E65C4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2E65BCu, 0x2E65C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E65C4u;
label_2e65c4:
    // 0x2e65c4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e65c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2e65c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e65c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e65cc: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2e65ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e65d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e65d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e65d4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2e65d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e65d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e65d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e65dc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2e65dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2e65e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e65e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e65e4: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x2e65e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e65e8: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e65e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e65ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e65ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e65f0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e65f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e65f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e65f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e65f8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e65f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e65fc: 0x0  nop
    ctx->pc = 0x2e65fcu;
    // NOP
    // 0x2e6600: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2E6600u;
    {
        const bool branch_taken_0x2e6600 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6600) {
            ctx->pc = 0x2E6620u;
            goto label_2e6620;
        }
    }
    ctx->pc = 0x2E6608u;
    // 0x2e6608: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e6608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e660c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e660cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e6610: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e6610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6614: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e6614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e6618: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e661c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2e661cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2e6620:
    // 0x2e6620: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e6620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6624: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E6624u;
    SET_GPR_U32(ctx, 31, 0x2E662Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E6624u, 0x2E662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E662Cu;
label_2e662c:
    // 0x2e662c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e662cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6630: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2e6630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2e6634: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2e6634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2e6638: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e6638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e663c: 0xc4801290  lwc1        $f0, 0x1290($a0)
    ctx->pc = 0x2e663cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6640: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e6640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e6644: 0xe4801290  swc1        $f0, 0x1290($a0)
    ctx->pc = 0x2e6644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4752), bits); }
    // 0x2e6648: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e664c: 0xc4611290  lwc1        $f1, 0x1290($v1)
    ctx->pc = 0x2e664cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6650: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6654: 0x0  nop
    ctx->pc = 0x2e6654u;
    // NOP
    // 0x2e6658: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e6658u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e665c: 0x0  nop
    ctx->pc = 0x2e665cu;
    // NOP
    // 0x2e6660: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x2E6660u;
    {
        const bool branch_taken_0x2e6660 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6660) {
            ctx->pc = 0x2E66A4u;
            goto label_2e66a4;
        }
    }
    ctx->pc = 0x2E6668u;
    // 0x2e6668: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e666c: 0xc4611290  lwc1        $f1, 0x1290($v1)
    ctx->pc = 0x2e666cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6670: 0x3c033bc9  lui         $v1, 0x3BC9
    ctx->pc = 0x2e6670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15305 << 16));
    // 0x2e6674: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2e6674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2e6678: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e6678u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e667c: 0x0  nop
    ctx->pc = 0x2e667cu;
    // NOP
    // 0x2e6680: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e6680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6684: 0x0  nop
    ctx->pc = 0x2e6684u;
    // NOP
    // 0x2e6688: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2E6688u;
    {
        const bool branch_taken_0x2e6688 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6688) {
            ctx->pc = 0x2E66D8u;
            goto label_2e66d8;
        }
    }
    ctx->pc = 0x2E6690u;
    // 0x2e6690: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6694: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6698: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x2e6698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x2e669c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E669Cu;
    {
        const bool branch_taken_0x2e669c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e669c) {
            ctx->pc = 0x2E66D8u;
            goto label_2e66d8;
        }
    }
    ctx->pc = 0x2E66A4u;
label_2e66a4:
    // 0x2e66a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e66a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e66a8: 0xc4611290  lwc1        $f1, 0x1290($v1)
    ctx->pc = 0x2e66a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e66ac: 0x3c03bbc9  lui         $v1, 0xBBC9
    ctx->pc = 0x2e66acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48073 << 16));
    // 0x2e66b0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2e66b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2e66b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e66b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e66b8: 0x0  nop
    ctx->pc = 0x2e66b8u;
    // NOP
    // 0x2e66bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e66bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e66c0: 0x0  nop
    ctx->pc = 0x2e66c0u;
    // NOP
    // 0x2e66c4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E66C4u;
    {
        const bool branch_taken_0x2e66c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e66c4) {
            ctx->pc = 0x2E66D8u;
            goto label_2e66d8;
        }
    }
    ctx->pc = 0x2E66CCu;
    // 0x2e66cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e66ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e66d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e66d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e66d4: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x2e66d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_2e66d8:
    // 0x2e66d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e66d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e66dc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e66dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e66e0: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E66E0u;
    {
        const bool branch_taken_0x2e66e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e66e0) {
            ctx->pc = 0x2E6740u;
            goto label_2e6740;
        }
    }
    ctx->pc = 0x2E66E8u;
    // 0x2e66e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e66e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e66ec: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2e66ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e66f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e66f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e66f4: 0x0  nop
    ctx->pc = 0x2e66f4u;
    // NOP
    // 0x2e66f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e66f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e66fc: 0x0  nop
    ctx->pc = 0x2e66fcu;
    // NOP
    // 0x2e6700: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2E6700u;
    {
        const bool branch_taken_0x2e6700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6700) {
            ctx->pc = 0x2E6740u;
            goto label_2e6740;
        }
    }
    ctx->pc = 0x2E6708u;
    // 0x2e6708: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e6708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e670c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6710: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e6710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e6714: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e6714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6718: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e671c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e671cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e6720: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6724: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e6724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6728: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e672c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e672cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6730: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6734: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e6734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e6738: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E6738u;
    {
        const bool branch_taken_0x2e6738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6738) {
            ctx->pc = 0x2E6740u;
            goto label_2e6740;
        }
    }
    ctx->pc = 0x2E6740u;
label_2e6740:
    // 0x2e6740: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2e6740u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6744: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e6744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e6748: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6750u;
}
