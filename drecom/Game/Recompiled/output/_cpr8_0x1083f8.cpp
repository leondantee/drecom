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

// Function: _cpr8
// Address: 0x1083f8 - 0x1085e4
void _cpr8_0x1083f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_cpr8_0x1083f8");
#endif

    switch (ctx->pc) {
        case 0x1084a8u: goto label_1084a8;
        case 0x1084b8u: goto label_1084b8;
        case 0x108500u: goto label_108500;
        case 0x108560u: goto label_108560;
        case 0x108588u: goto label_108588;
        default: break;
    }

    ctx->pc = 0x1083f8u;

    // 0x1083f8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1083f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1083fc: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x1083fcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108400: 0x8c643bf4  lw          $a0, 0x3BF4($v1)
    ctx->pc = 0x108400u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383BF4u));
    // 0x108404: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x108404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x108408: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x108408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10840c: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x10840cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x108410: 0x8c980040  lw          $t8, 0x40($a0)
    ctx->pc = 0x108410u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x108414: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x108414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x108418: 0x8c663dac  lw          $a2, 0x3DAC($v1)
    ctx->pc = 0x108418u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x383DACu));
    // 0x10841c: 0xa24824  and         $t1, $a1, $v0
    ctx->pc = 0x10841cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x108420: 0x8f0300d8  lw          $v1, 0xD8($t8)
    ctx->pc = 0x108420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 216)));
    // 0x108424: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x108424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108428: 0x10c40006  beq         $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108428u;
    {
        const bool branch_taken_0x108428 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x10842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108428u;
        // 0x10842c: 0x627824  and         $t7, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108428) {
            ctx->pc = 0x108444u;
            goto label_108444;
        }
    }
    ctx->pc = 0x108430u;
    // 0x108430: 0x8f0400e0  lw          $a0, 0xE0($t8)
    ctx->pc = 0x108430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 224)));
    // 0x108434: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x108434u;
    {
        const bool branch_taken_0x108434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x108438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108434u;
        // 0x108438: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108434) {
            ctx->pc = 0x108474u;
            goto label_108474;
        }
    }
    ctx->pc = 0x10843Cu;
    // 0x10843c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10843Cu;
    {
        const bool branch_taken_0x10843c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10843Cu;
        // 0x108440: 0x8d820010  lw          $v0, 0x10($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10843c) {
            ctx->pc = 0x10844Cu;
            goto label_10844c;
        }
    }
    ctx->pc = 0x108444u;
label_108444:
    // 0x108444: 0x8f0300e0  lw          $v1, 0xE0($t8)
    ctx->pc = 0x108444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 224)));
    // 0x108448: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x108448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
label_10844c:
    // 0x10844c: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x10844cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x108450: 0x445818  mult        $t3, $v0, $a0
    ctx->pc = 0x108450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x108454: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x108454u;
    {
        const bool branch_taken_0x108454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108454u;
        // 0x108458: 0xb5103  sra         $t2, $t3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108454) {
            ctx->pc = 0x108468u;
            goto label_108468;
        }
    }
    ctx->pc = 0x10845Cu;
    // 0x10845c: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x10845cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x108460: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108460u;
    {
        const bool branch_taken_0x108460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108460u;
        // 0x108464: 0x447018  mult        $t6, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108460) {
            ctx->pc = 0x10846Cu;
            goto label_10846c;
        }
    }
    ctx->pc = 0x108468u;
label_108468:
    // 0x108468: 0x160702d  daddu       $t6, $t3, $zero
    ctx->pc = 0x108468u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_10846c:
    // 0x10846c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10846Cu;
    {
        const bool branch_taken_0x10846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10846Cu;
        // 0x108470: 0x24190001  addiu       $t9, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10846c) {
            ctx->pc = 0x108498u;
            goto label_108498;
        }
    }
    ctx->pc = 0x108474u;
label_108474:
    // 0x108474: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x108474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x108478: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x108478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x10847c: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x10847cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x108480: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x108480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x108484: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x108484u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x108488: 0x837018  mult        $t6, $a0, $v1
    ctx->pc = 0x108488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x10848c: 0x70455818  mult1       $t3, $v0, $a1
    ctx->pc = 0x10848cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x108490: 0x24190002  addiu       $t9, $zero, 0x2
    ctx->pc = 0x108490u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108494: 0xb5103  sra         $t2, $t3, 4
    ctx->pc = 0x108494u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 4));
label_108498:
    // 0x108498: 0x13200050  beqz        $t9, . + 4 + (0x50 << 2)
    ctx->pc = 0x108498u;
    {
        const bool branch_taken_0x108498 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x10849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108498u;
        // 0x10849c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108498) {
            ctx->pc = 0x1085DCu;
            goto label_1085dc;
        }
    }
    ctx->pc = 0x1084A0u;
    // 0x1084a0: 0x8d87000c  lw          $a3, 0xC($t4)
    ctx->pc = 0x1084a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x1084a4: 0x0  nop
    ctx->pc = 0x1084a4u;
    // NOP
label_1084a8:
    // 0x1084a8: 0x1e0402d  daddu       $t0, $t7, $zero
    ctx->pc = 0x1084a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1084ac: 0x18e00043  blez        $a3, . + 4 + (0x43 << 2)
    ctx->pc = 0x1084ACu;
    {
        const bool branch_taken_0x1084ac = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1084B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084ACu;
        // 0x1084b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084ac) {
            ctx->pc = 0x1085BCu;
            goto label_1085bc;
        }
    }
    ctx->pc = 0x1084B4u;
    // 0x1084b4: 0x24ad0001  addiu       $t5, $a1, 0x1
    ctx->pc = 0x1084b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1084b8:
    // 0x1084b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1084b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1084bc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1084bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1084c0: 0x3442d480  ori         $v0, $v0, 0xD480
    ctx->pc = 0x1084c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54400);
    // 0x1084c4: 0x3484d410  ori         $a0, $a0, 0xD410
    ctx->pc = 0x1084c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54288);
    // 0x1084c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1084c8u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x1000d480
    // 0x1084cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1084ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1084d0: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1084d0u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 9)); // MMIO: 0x1000d410
    // 0x1084d4: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x1084d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x1084d8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1084d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1084dc: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x1084dcu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 10)); // MMIO: 0x1000d420
    // 0x1084e0: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x1084e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x1084e4: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x1084e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1084e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1084e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1084ec: 0x12b2821  addu        $a1, $t1, $t3
    ctx->pc = 0x1084ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1084f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1084f0u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x1084f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1084f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1084f8: 0x10e4821  addu        $t1, $t0, $t6
    ctx->pc = 0x1084f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1084fc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x1084fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_108500:
    // 0x108500: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108500u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x108504: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x108504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x108508: 0x0  nop
    ctx->pc = 0x108508u;
    // NOP
    // 0x10850c: 0x0  nop
    ctx->pc = 0x10850cu;
    // NOP
    // 0x108510: 0x0  nop
    ctx->pc = 0x108510u;
    // NOP
    // 0x108514: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108514u;
    {
        const bool branch_taken_0x108514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108514) {
            ctx->pc = 0x108500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108500;
        }
    }
    ctx->pc = 0x10851Cu;
    // 0x10851c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10851cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108520: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x108520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x108524: 0x3442d080  ori         $v0, $v0, 0xD080
    ctx->pc = 0x108524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53376);
    // 0x108528: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x108528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x10852c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10852cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0)); // MMIO: 0x1000d080
    // 0x108530: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108534: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x108534u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 8)); // MMIO: 0x1000d010
    // 0x108538: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x108538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x10853c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10853cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x108540: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x108540u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 10)); // MMIO: 0x1000d020
    // 0x108544: 0x3484d000  ori         $a0, $a0, 0xD000
    ctx->pc = 0x108544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    // 0x108548: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x108548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10854c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x10854cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 2)); // MMIO: 0x1000d000
    // 0x108550: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108554: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x108554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x108558: 0x8d87000c  lw          $a3, 0xC($t4)
    ctx->pc = 0x108558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x10855c: 0x0  nop
    ctx->pc = 0x10855cu;
    // NOP
label_108560:
    // 0x108560: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108560u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d000
    // 0x108564: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x108564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x108568: 0x0  nop
    ctx->pc = 0x108568u;
    // NOP
    // 0x10856c: 0x0  nop
    ctx->pc = 0x10856cu;
    // NOP
    // 0x108570: 0x0  nop
    ctx->pc = 0x108570u;
    // NOP
    // 0x108574: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108574u;
    {
        const bool branch_taken_0x108574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108574) {
            ctx->pc = 0x108560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108560;
        }
    }
    ctx->pc = 0x10857Cu;
    // 0x10857c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10857cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108580: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x108580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x108584: 0x0  nop
    ctx->pc = 0x108584u;
    // NOP
label_108588:
    // 0x108588: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108588u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d020
    // 0x10858c: 0x0  nop
    ctx->pc = 0x10858cu;
    // NOP
    // 0x108590: 0x0  nop
    ctx->pc = 0x108590u;
    // NOP
    // 0x108594: 0x0  nop
    ctx->pc = 0x108594u;
    // NOP
    // 0x108598: 0x0  nop
    ctx->pc = 0x108598u;
    // NOP
    // 0x10859c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10859Cu;
    {
        const bool branch_taken_0x10859c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10859c) {
            ctx->pc = 0x108588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108588;
        }
    }
    ctx->pc = 0x1085A4u;
    // 0x1085a4: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x1085a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085a8: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x1085a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1085ac: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1085ACu;
    {
        const bool branch_taken_0x1085ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1085B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085ACu;
        // 0x1085b0: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085ac) {
            ctx->pc = 0x1084B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1084b8;
        }
    }
    ctx->pc = 0x1085B4u;
    // 0x1085b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1085B4u;
    {
        const bool branch_taken_0x1085b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1085B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085B4u;
        // 0x1085b8: 0x8f0200e4  lw          $v0, 0xE4($t8) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085b4) {
            ctx->pc = 0x1085C4u;
            goto label_1085c4;
        }
    }
    ctx->pc = 0x1085BCu;
label_1085bc:
    // 0x1085bc: 0x24ad0001  addiu       $t5, $a1, 0x1
    ctx->pc = 0x1085bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1085c0: 0x8f0200e4  lw          $v0, 0xE4($t8)
    ctx->pc = 0x1085c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 228)));
label_1085c4:
    // 0x1085c4: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1085c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1085c8: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x1085c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085cc: 0x433018  mult        $a2, $v0, $v1
    ctx->pc = 0x1085ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1085d0: 0xb9202a  slt         $a0, $a1, $t9
    ctx->pc = 0x1085d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x1085d4: 0x1480ffb4  bnez        $a0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1085D4u;
    {
        const bool branch_taken_0x1085d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1085D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085D4u;
        // 0x1085d8: 0xcf7821  addu        $t7, $a2, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085d4) {
            ctx->pc = 0x1084A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1084a8;
        }
    }
    ctx->pc = 0x1085DCu;
label_1085dc:
    // 0x1085dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1085DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1085DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1085E4u;
}
