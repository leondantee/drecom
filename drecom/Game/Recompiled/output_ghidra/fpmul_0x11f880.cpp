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

// Function: fpmul
// Address: 0x11f880 - 0x11fa74
void fpmul_0x11f880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpmul_0x11f880");
#endif

    switch (ctx->pc) {
        case 0x11f8a0u: goto label_11f8a0;
        case 0x11f8b0u: goto label_11f8b0;
        case 0x11f9b8u: goto label_11f9b8;
        case 0x11fa00u: goto label_11fa00;
        case 0x11fa64u: goto label_11fa64;
        default: break;
    }

    ctx->pc = 0x11f880u;

    // 0x11f880: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11f880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11f884: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x11f884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11f888: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11f888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11f88c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11f88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11f890: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11f890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f894: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x11f894u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x11f898: 0xc047d3e  jal         func_11F4F8
    ctx->pc = 0x11F898u;
    SET_GPR_U32(ctx, 31, 0x11F8A0u);
    ctx->pc = 0x11F89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F898u;
    // 0x11f89c: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F4F8u, 0x11F898u, 0x11F8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8A0u;
label_11f8a0:
    // 0x11f8a0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x11f8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11f8a4: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x11f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x11f8a8: 0xc047d3e  jal         func_11F4F8
    ctx->pc = 0x11F8A8u;
    SET_GPR_U32(ctx, 31, 0x11F8B0u);
    ctx->pc = 0x11F8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F8A8u;
    // 0x11f8ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F4F8u, 0x11F8A8u, 0x11F8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8B0u;
label_11f8b0:
    // 0x11f8b0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x11f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f8b4: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x11f8b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11f8b8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11F8B8u;
    {
        const bool branch_taken_0x11f8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8B8u;
        // 0x11f8bc: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8b8) {
            ctx->pc = 0x11F914u;
            goto label_11f914;
        }
    }
    ctx->pc = 0x11F8C0u;
    // 0x11f8c0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f8c4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x11f8c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11f8c8: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x11F8C8u;
    {
        const bool branch_taken_0x11f8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f8c8) {
            ctx->pc = 0x11F8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F8C8u;
            // 0x11f8cc: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F93Cu;
            goto label_11f93c;
        }
    }
    ctx->pc = 0x11F8D0u;
    // 0x11f8d0: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x11f8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x11f8d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F8D4u;
    {
        const bool branch_taken_0x11f8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8D4u;
        // 0x11f8d8: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8d4) {
            ctx->pc = 0x11F8F0u;
            goto label_11f8f0;
        }
    }
    ctx->pc = 0x11F8DCu;
    // 0x11f8dc: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x11f8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x11f8e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11F8E0u;
    {
        const bool branch_taken_0x11f8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8E0u;
        // 0x11f8e4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8e0) {
            ctx->pc = 0x11F900u;
            goto label_11f900;
        }
    }
    ctx->pc = 0x11F8E8u;
    // 0x11f8e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11F8E8u;
    {
        const bool branch_taken_0x11f8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8E8u;
        // 0x11f8ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8e8) {
            ctx->pc = 0x11F91Cu;
            goto label_11f91c;
        }
    }
    ctx->pc = 0x11F8F0u;
label_11f8f0:
    // 0x11f8f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F8F0u;
    {
        const bool branch_taken_0x11f8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8F0u;
        // 0x11f8f4: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8f0) {
            ctx->pc = 0x11F90Cu;
            goto label_11f90c;
        }
    }
    ctx->pc = 0x11F8F8u;
    // 0x11f8f8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11F8F8u;
    {
        const bool branch_taken_0x11f8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8F8u;
        // 0x11f8fc: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8f8) {
            ctx->pc = 0x11F93Cu;
            goto label_11f93c;
        }
    }
    ctx->pc = 0x11F900u;
label_11f900:
    // 0x11f900: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11f900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11f904: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x11F904u;
    {
        const bool branch_taken_0x11f904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F904u;
        // 0x11f908: 0x24446818  addiu       $a0, $v0, 0x6818 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f904) {
            ctx->pc = 0x11FA5Cu;
            goto label_11fa5c;
        }
    }
    ctx->pc = 0x11F90Cu;
label_11f90c:
    // 0x11f90c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F90Cu;
    {
        const bool branch_taken_0x11f90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F90Cu;
        // 0x11f910: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f90c) {
            ctx->pc = 0x11F930u;
            goto label_11f930;
        }
    }
    ctx->pc = 0x11F914u;
label_11f914:
    // 0x11f914: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x11f914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11f918: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11f918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11f91c:
    // 0x11f91c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11f920: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x11f920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x11f924: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11f924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11f928: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x11F928u;
    {
        const bool branch_taken_0x11f928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F928u;
        // 0x11f92c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f928) {
            ctx->pc = 0x11FA5Cu;
            goto label_11fa5c;
        }
    }
    ctx->pc = 0x11F930u;
label_11f930:
    // 0x11f930: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F930u;
    {
        const bool branch_taken_0x11f930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F930u;
        // 0x11f934: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f930) {
            ctx->pc = 0x11F954u;
            goto label_11f954;
        }
    }
    ctx->pc = 0x11F938u;
    // 0x11f938: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11f938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_11f93c:
    // 0x11f93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f940: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x11f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11f944: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x11f944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x11f948: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11f948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11f94c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x11F94Cu;
    {
        const bool branch_taken_0x11f94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F94Cu;
        // 0x11f950: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f94c) {
            ctx->pc = 0x11FA5Cu;
            goto label_11fa5c;
        }
    }
    ctx->pc = 0x11F954u;
label_11f954:
    // 0x11f954: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x11f954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x11f958: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x11f958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11f95c: 0x820019  multu       $a0, $v0
    ctx->pc = 0x11f95cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11f960: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x11f960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11f964: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x11f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11f968: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x11f968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x11f96c: 0x2812  mflo        $a1
    ctx->pc = 0x11f96cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x11f970: 0x2010  mfhi        $a0
    ctx->pc = 0x11f970u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x11f974: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11f974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11f978: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x11f978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11f97c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x11f97cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11f980: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11f980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11f984: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x11f984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x11f988: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x11f988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x11f98c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x11f98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11f990: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11f990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11f994: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x11f994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x11f998: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x11f998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11f99c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x11f99cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11f9a0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x11f9a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11f9a4: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x11F9A4u;
    {
        const bool branch_taken_0x11f9a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9A4u;
        // 0x11f9a8: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9a4) {
            ctx->pc = 0x11F9D8u;
            goto label_11f9d8;
        }
    }
    ctx->pc = 0x11F9ACu;
    // 0x11f9ac: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x11f9acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x11f9b0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x11f9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x11f9b4: 0x0  nop
    ctx->pc = 0x11f9b4u;
    // NOP
label_11f9b8:
    // 0x11f9b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F9B8u;
    {
        const bool branch_taken_0x11f9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9B8u;
        // 0x11f9bc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9b8) {
            ctx->pc = 0x11F9C8u;
            goto label_11f9c8;
        }
    }
    ctx->pc = 0x11F9C0u;
    // 0x11f9c0: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x11f9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x11f9c4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x11f9c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_11f9c8:
    // 0x11f9c8: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x11f9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x11f9cc: 0x480fffa  bltz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F9CCu;
    {
        const bool branch_taken_0x11f9cc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9CCu;
        // 0x11f9d0: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9cc) {
            ctx->pc = 0x11F9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f9b8;
        }
    }
    ctx->pc = 0x11F9D4u;
    // 0x11f9d4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x11f9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_11f9d8:
    // 0x11f9d8: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x11f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x11f9dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11f9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11f9e0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x11f9e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11f9e4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11F9E4u;
    {
        const bool branch_taken_0x11f9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9E4u;
        // 0x11f9e8: 0x3083007f  andi        $v1, $a0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9e4) {
            ctx->pc = 0x11FA28u;
            goto label_11fa28;
        }
    }
    ctx->pc = 0x11F9ECu;
    // 0x11f9ec: 0x3c073fff  lui         $a3, 0x3FFF
    ctx->pc = 0x11f9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16383 << 16));
    // 0x11f9f0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x11f9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11f9f4: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x11f9f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x11f9f8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x11f9f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x11f9fc: 0x0  nop
    ctx->pc = 0x11f9fcu;
    // NOP
label_11fa00:
    // 0x11fa00: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x11fa00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x11fa04: 0xa81824  and         $v1, $a1, $t0
    ctx->pc = 0x11fa04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x11fa08: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x11fa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x11fa0c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11fa0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11fa10: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x11fa10u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x11fa14: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x11fa14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11fa18: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11FA18u;
    {
        const bool branch_taken_0x11fa18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA18u;
        // 0x11fa1c: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa18) {
            ctx->pc = 0x11FA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fa00;
        }
    }
    ctx->pc = 0x11FA20u;
    // 0x11fa20: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x11fa20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x11fa24: 0x3083007f  andi        $v1, $a0, 0x7F
    ctx->pc = 0x11fa24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
label_11fa28:
    // 0x11fa28: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11fa2c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FA2Cu;
    {
        const bool branch_taken_0x11fa2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fa2c) {
            ctx->pc = 0x11FA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FA2Cu;
            // 0x11fa30: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FA50u;
            goto label_11fa50;
        }
    }
    ctx->pc = 0x11FA34u;
    // 0x11fa34: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x11fa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x11fa38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FA38u;
    {
        const bool branch_taken_0x11fa38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA38u;
        // 0x11fa3c: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa38) {
            ctx->pc = 0x11FA48u;
            goto label_11fa48;
        }
    }
    ctx->pc = 0x11FA40u;
    // 0x11fa40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11FA40u;
    {
        const bool branch_taken_0x11fa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA40u;
        // 0x11fa44: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa40) {
            ctx->pc = 0x11FA4Cu;
            goto label_11fa4c;
        }
    }
    ctx->pc = 0x11FA48u;
label_11fa48:
    // 0x11fa48: 0x45200b  movn        $a0, $v0, $a1
    ctx->pc = 0x11fa48u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_11fa4c:
    // 0x11fa4c: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x11fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
label_11fa50:
    // 0x11fa50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11fa54: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x11fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x11fa58: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x11fa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_11fa5c:
    // 0x11fa5c: 0xc047cfa  jal         func_11F3E8
    ctx->pc = 0x11FA5Cu;
    SET_GPR_U32(ctx, 31, 0x11FA64u);
    ctx->pc = 0x11F3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F3E8u, 0x11FA5Cu, 0x11FA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FA64u;
label_11fa64:
    // 0x11fa64: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11fa64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11fa68: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11fa68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11fa6c: 0x3e00008  jr          $ra
    ctx->pc = 0x11FA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA6Cu;
        // 0x11fa70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FA74u;
}
