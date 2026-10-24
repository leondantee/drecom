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

// Function: Om09_R0_init
// Address: 0x37c4c0 - 0x37c748
void Om09_R0_init_0x37c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om09_R0_init_0x37c4c0");
#endif

    switch (ctx->pc) {
        case 0x37c550u: goto label_37c550;
        case 0x37c5e4u: goto label_37c5e4;
        case 0x37c5f0u: goto label_37c5f0;
        case 0x37c678u: goto label_37c678;
        case 0x37c6f8u: goto label_37c6f8;
        case 0x37c704u: goto label_37c704;
        default: break;
    }

    ctx->pc = 0x37c4c0u;

    // 0x37c4c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37c4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37c4c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x37c4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x37c4c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37c4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37c4cc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x37c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x37c4d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c4d4: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x37c4d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x37c4d8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x37c4d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x37c4dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c4e0: 0x10830050  beq         $a0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x37C4E0u;
    {
        const bool branch_taken_0x37c4e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37c4e0) {
            ctx->pc = 0x37C624u;
            goto label_37c624;
        }
    }
    ctx->pc = 0x37C4E8u;
    // 0x37c4e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37c4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c4ec: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37C4ECu;
    {
        const bool branch_taken_0x37c4ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37c4ec) {
            ctx->pc = 0x37C4FCu;
            goto label_37c4fc;
        }
    }
    ctx->pc = 0x37C4F4u;
    // 0x37c4f4: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x37C4F4u;
    {
        const bool branch_taken_0x37c4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c4f4) {
            ctx->pc = 0x37C734u;
            goto label_37c734;
        }
    }
    ctx->pc = 0x37C4FCu;
label_37c4fc:
    // 0x37c4fc: 0x3c02c7c3  lui         $v0, 0xC7C3
    ctx->pc = 0x37c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
    // 0x37c500: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x37c500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x37c504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c508: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c50c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x37c50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x37c510: 0x3c02c7c3  lui         $v0, 0xC7C3
    ctx->pc = 0x37c510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
    // 0x37c514: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x37c514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x37c518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c51c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c520: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x37c520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x37c524: 0x3c02c7c3  lui         $v0, 0xC7C3
    ctx->pc = 0x37c524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
    // 0x37c528: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x37c528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x37c52c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c530: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c534: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x37c534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x37c538: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x37c538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x37c53c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37c53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37c540: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x37c540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c544: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x37c544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x37c548: 0xc077e7c  jal         func_1DF9F0
    ctx->pc = 0x37C548u;
    SET_GPR_U32(ctx, 31, 0x37C550u);
    ctx->pc = 0x1DF9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF9F0u, 0x37C548u, 0x37C550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C550u;
label_37c550:
    // 0x37c550: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c554: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x37c554u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x37c558: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x37c558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x37c55c: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x37c55cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c560: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x37c560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c564: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x37c564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37c568: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x37c568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x37c56c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x37c56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x37c570: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37c570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x37c574: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c578: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x37c578u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x37c57c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x37c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37c580: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x37c580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x37c584: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x37c584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x37c588: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x37c588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x37c58c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x37c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x37c590: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x37c590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x37c594: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c598: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x37c598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x37c59c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x37c59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x37c5a0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x37c5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x37c5a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37c5a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c5ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c5b0: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x37c5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x37c5b4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x37c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x37c5b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c5bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c5c0: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x37c5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x37c5c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37c5c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c5cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c5d0: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x37c5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x37c5d4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x37c5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c5d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37c5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37c5dc: 0xc077e1c  jal         func_1DF870
    ctx->pc = 0x37C5DCu;
    SET_GPR_U32(ctx, 31, 0x37C5E4u);
    ctx->pc = 0x1DF870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF870u, 0x37C5DCu, 0x37C5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C5E4u;
label_37c5e4:
    // 0x37c5e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x37c5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c5e8: 0xc075e9c  jal         func_1D7A70
    ctx->pc = 0x37C5E8u;
    SET_GPR_U32(ctx, 31, 0x37C5F0u);
    ctx->pc = 0x1D7A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7A70u, 0x37C5E8u, 0x37C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C5F0u;
label_37c5f0:
    // 0x37c5f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37c5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c5f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c5f8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x37c5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x37c5fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c600: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x37c600u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x37c604: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c608: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x37c608u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x37c60c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c610: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x37c610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x37c614: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c618: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x37c618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x37c61c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x37C61Cu;
    {
        const bool branch_taken_0x37c61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c61c) {
            ctx->pc = 0x37C734u;
            goto label_37c734;
        }
    }
    ctx->pc = 0x37C624u;
label_37c624:
    // 0x37c624: 0x3c02c7c3  lui         $v0, 0xC7C3
    ctx->pc = 0x37c624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
    // 0x37c628: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x37c628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x37c62c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c630: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c634: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x37c634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x37c638: 0x3c02c7c3  lui         $v0, 0xC7C3
    ctx->pc = 0x37c638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
    // 0x37c63c: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x37c63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x37c640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c644: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c648: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x37c648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x37c64c: 0x3c02c7c3  lui         $v0, 0xC7C3
    ctx->pc = 0x37c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
    // 0x37c650: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x37c650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x37c654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c658: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c65c: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x37c65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x37c660: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x37c660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x37c664: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37c664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37c668: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x37c668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c66c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x37c66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x37c670: 0xc077e7c  jal         func_1DF9F0
    ctx->pc = 0x37C670u;
    SET_GPR_U32(ctx, 31, 0x37C678u);
    ctx->pc = 0x1DF9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF9F0u, 0x37C670u, 0x37C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C678u;
label_37c678:
    // 0x37c678: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c67c: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x37c67cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x37c680: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x37c680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x37c684: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x37c684u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c688: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c68c: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x37c68cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x37c690: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x37c690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x37c694: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x37c694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x37c698: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x37c698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x37c69c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x37c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x37c6a0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x37c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37c6a4: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x37c6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x37c6a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c6ac: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x37c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x37c6b0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x37c6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x37c6b4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x37c6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x37c6b8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x37c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x37c6bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c6bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c6c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c6c4: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x37c6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x37c6c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37c6cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c6d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c6d4: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x37c6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x37c6d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37c6dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c6e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c6e4: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x37c6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x37c6e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x37c6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c6ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37c6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37c6f0: 0xc077e1c  jal         func_1DF870
    ctx->pc = 0x37C6F0u;
    SET_GPR_U32(ctx, 31, 0x37C6F8u);
    ctx->pc = 0x1DF870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF870u, 0x37C6F0u, 0x37C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C6F8u;
label_37c6f8:
    // 0x37c6f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x37c6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c6fc: 0xc075e9c  jal         func_1D7A70
    ctx->pc = 0x37C6FCu;
    SET_GPR_U32(ctx, 31, 0x37C704u);
    ctx->pc = 0x1D7A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7A70u, 0x37C6FCu, 0x37C704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C704u;
label_37c704:
    // 0x37c704: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x37c704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c708: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c70c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x37c70cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x37c710: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37c710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c714: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c718: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x37c718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x37c71c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c720: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x37c720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x37c724: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c728: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x37c728u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x37c72c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c730: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x37c730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_37c734:
    // 0x37c734: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x37c734u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37c738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c73c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x37c73cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37c740: 0x3e00008  jr          $ra
    ctx->pc = 0x37C740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C748u;
}
