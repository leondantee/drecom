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

// Function: __kernel_rem_pio2f
// Address: 0x113918 - 0x114264
void ps2___kernel_rem_pio2f_0x113918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_rem_pio2f_0x113918");
#endif

    switch (ctx->pc) {
        case 0x1139c8u: goto label_1139c8;
        case 0x113a38u: goto label_113a38;
        case 0x113a58u: goto label_113a58;
        case 0x113ab4u: goto label_113ab4;
        case 0x113ae8u: goto label_113ae8;
        case 0x113b30u: goto label_113b30;
        case 0x113b48u: goto label_113b48;
        case 0x113c18u: goto label_113c18;
        case 0x113cbcu: goto label_113cbc;
        case 0x113ce8u: goto label_113ce8;
        case 0x113d28u: goto label_113d28;
        case 0x113d70u: goto label_113d70;
        case 0x113db0u: goto label_113db0;
        case 0x113e40u: goto label_113e40;
        case 0x113e6cu: goto label_113e6c;
        case 0x113efcu: goto label_113efc;
        case 0x113f20u: goto label_113f20;
        case 0x113f58u: goto label_113f58;
        case 0x113f80u: goto label_113f80;
        case 0x114038u: goto label_114038;
        case 0x114088u: goto label_114088;
        case 0x1140d8u: goto label_1140d8;
        case 0x114128u: goto label_114128;
        case 0x114178u: goto label_114178;
        case 0x1141d0u: goto label_1141d0;
        default: break;
    }

    ctx->pc = 0x113918u;

    // 0x113918: 0x24ccfffd  addiu       $t4, $a2, -0x3
    ctx->pc = 0x113918u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x11391c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x11391cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x113920: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x113920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x113924: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x113924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x113928: 0x16c502a  slt         $t2, $t3, $t4
    ctx->pc = 0x113928u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x11392c: 0xffb601c0  sd          $s6, 0x1C0($sp)
    ctx->pc = 0x11392cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 22));
    // 0x113930: 0x18a100b  movn        $v0, $t4, $t2
    ctx->pc = 0x113930u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x113934: 0xafa80144  sw          $t0, 0x144($sp)
    ctx->pc = 0x113934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 8));
    // 0x113938: 0x2b0c3  sra         $s6, $v0, 3
    ctx->pc = 0x113938u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 3));
    // 0x11393c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x11393cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x113940: 0x2463d7e0  addiu       $v1, $v1, -0x2820
    ctx->pc = 0x113940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957024));
    // 0x113944: 0x176582a  slt         $t3, $t3, $s6
    ctx->pc = 0x113944u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x113948: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x113948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x11394c: 0xffb701d0  sd          $s7, 0x1D0($sp)
    ctx->pc = 0x11394cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 23));
    // 0x113950: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x113950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x113954: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113958: 0xffb10170  sd          $s1, 0x170($sp)
    ctx->pc = 0x113958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 17));
    // 0x11395c: 0xbb00a  movz        $s6, $zero, $t3
    ctx->pc = 0x11395cu;
    if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
    // 0x113960: 0xffbf01f0  sd          $ra, 0x1F0($sp)
    ctx->pc = 0x113960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 31));
    // 0x113964: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x113964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x113968: 0xffbe01e0  sd          $fp, 0x1E0($sp)
    ctx->pc = 0x113968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 30));
    // 0x11396c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x11396cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x113970: 0xffb501b0  sd          $s5, 0x1B0($sp)
    ctx->pc = 0x113970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 21));
    // 0x113974: 0x24f1ffff  addiu       $s1, $a3, -0x1
    ctx->pc = 0x113974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x113978: 0xffb30190  sd          $s3, 0x190($sp)
    ctx->pc = 0x113978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 19));
    // 0x11397c: 0xc39023  subu        $s2, $a2, $v1
    ctx->pc = 0x11397cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x113980: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x113980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
    // 0x113984: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x113984u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113988: 0xe7b40200  swc1        $f20, 0x200($sp)
    ctx->pc = 0x113988u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x11398c: 0x2d12823  subu        $a1, $s6, $s1
    ctx->pc = 0x11398cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x113990: 0xffb401a0  sd          $s4, 0x1A0($sp)
    ctx->pc = 0x113990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 20));
    // 0x113994: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113998: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x113998u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11399c: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x11399cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x1139a0: 0x2343821  addu        $a3, $s1, $s4
    ctx->pc = 0x1139a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1139a4: 0x4e00019  bltz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x1139A4u;
    {
        const bool branch_taken_0x1139a4 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1139A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1139A4u;
        // 0x1139a8: 0xafa90148  sw          $t1, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1139a4) {
            ctx->pc = 0x113A0Cu;
            goto label_113a0c;
        }
    }
    ctx->pc = 0x1139ACu;
    // 0x1139ac: 0x2a820000  slti        $v0, $s4, 0x0
    ctx->pc = 0x1139acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1139b0: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x1139b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1139b4: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1139b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x1139b8: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x1139b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1139bc: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x1139bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x1139c0: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x1139c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1139c4: 0x0  nop
    ctx->pc = 0x1139c4u;
    // NOP
label_1139c8:
    // 0x1139c8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1139c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1139cc: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1139CCu;
    {
        const bool branch_taken_0x1139cc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1139D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1139CCu;
        // 0x1139d0: 0x1221821  addu        $v1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1139cc) {
            ctx->pc = 0x1139F0u;
            goto label_1139f0;
        }
    }
    ctx->pc = 0x1139D4u;
    // 0x1139d4: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x1139d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1139d8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1139d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1139dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1139dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1139e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1139e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1139e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1139e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1139e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1139E8u;
    {
        const bool branch_taken_0x1139e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1139ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1139E8u;
        // 0x1139ec: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1139e8) {
            ctx->pc = 0x1139F4u;
            goto label_1139f4;
        }
    }
    ctx->pc = 0x1139F0u;
label_1139f0:
    // 0x1139f0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1139f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1139f4:
    // 0x1139f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1139f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1139f8: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x1139f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1139fc: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1139FCu;
    {
        const bool branch_taken_0x1139fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1139FCu;
        // 0x113a00: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1139fc) {
            ctx->pc = 0x1139C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1139c8;
        }
    }
    ctx->pc = 0x113A04u;
    // 0x113a04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x113A04u;
    {
        const bool branch_taken_0x113a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A04u;
        // 0x113a08: 0x8fa80154  lw          $t0, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a04) {
            ctx->pc = 0x113A28u;
            goto label_113a28;
        }
    }
    ctx->pc = 0x113A0Cu;
label_113a0c:
    // 0x113a0c: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x113a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x113a10: 0x2a850000  slti        $a1, $s4, 0x0
    ctx->pc = 0x113a10u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x113a14: 0xafa50154  sw          $a1, 0x154($sp)
    ctx->pc = 0x113a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 5));
    // 0x113a18: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x113a18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x113a1c: 0x28c60003  slti        $a2, $a2, 0x3
    ctx->pc = 0x113a1cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x113a20: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x113a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x113a24: 0x8fa80154  lw          $t0, 0x154($sp)
    ctx->pc = 0x113a24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_113a28:
    // 0x113a28: 0x15000021  bnez        $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x113A28u;
    {
        const bool branch_taken_0x113a28 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x113A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A28u;
        // 0x113a2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a28) {
            ctx->pc = 0x113AB0u;
            goto label_113ab0;
        }
    }
    ctx->pc = 0x113A30u;
    // 0x113a30: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x113a30u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x113a34: 0x0  nop
    ctx->pc = 0x113a34u;
    // NOP
label_113a38:
    // 0x113a38: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x113a38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x113a3c: 0x15600015  bnez        $t3, . + 4 + (0x15 << 2)
    ctx->pc = 0x113A3Cu;
    {
        const bool branch_taken_0x113a3c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x113A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A3Cu;
        // 0x113a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a3c) {
            ctx->pc = 0x113A94u;
            goto label_113a94;
        }
    }
    ctx->pc = 0x113A44u;
    // 0x113a44: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x113a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x113a48: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x113a48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x113a4c: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x113a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x113a50: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x113a50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x113a54: 0x0  nop
    ctx->pc = 0x113a54u;
    // NOP
label_113a58:
    // 0x113a58: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x113a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x113a5c: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x113a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x113a60: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x113a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x113a64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113a68: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x113a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x113a6c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x113a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x113a70: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x113a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113a74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x113a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x113a78: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x113a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113a7c: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x113a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x113a80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x113a80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x113a84: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x113A84u;
    {
        const bool branch_taken_0x113a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A84u;
        // 0x113a88: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a84) {
            ctx->pc = 0x113A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113a58;
        }
    }
    ctx->pc = 0x113A8Cu;
    // 0x113a8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x113A8Cu;
    {
        const bool branch_taken_0x113a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A8Cu;
        // 0x113a90: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a8c) {
            ctx->pc = 0x113AA0u;
            goto label_113aa0;
        }
    }
    ctx->pc = 0x113A94u;
label_113a94:
    // 0x113a94: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x113a94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x113a98: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x113a98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x113a9c: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x113a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_113aa0:
    // 0x113aa0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x113aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113aa4: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x113aa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x113aa8: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x113AA8u;
    {
        const bool branch_taken_0x113aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113AA8u;
        // 0x113aac: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x113aa8) {
            ctx->pc = 0x113A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113a38;
        }
    }
    ctx->pc = 0x113AB0u;
label_113ab0:
    // 0x113ab0: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x113ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_113ab4:
    // 0x113ab4: 0x10f080  sll         $fp, $s0, 2
    ctx->pc = 0x113ab4u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x113ab8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x113ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113abc: 0x2be1021  addu        $v0, $s5, $fp
    ctx->pc = 0x113abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x113ac0: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x113AC0u;
    {
        const bool branch_taken_0x113ac0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x113AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113AC0u;
        // 0x113ac4: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ac0) {
            ctx->pc = 0x113B24u;
            goto label_113b24;
        }
    }
    ctx->pc = 0x113AC8u;
    // 0x113ac8: 0x27c2fffc  addiu       $v0, $fp, -0x4
    ctx->pc = 0x113ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
    // 0x113acc: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x113accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x113ad0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x113ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x113ad4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x113ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x113ad8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x113ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x113adc: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x113adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x113ae0: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x113ae0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ae4: 0x0  nop
    ctx->pc = 0x113ae4u;
    // NOP
label_113ae8:
    // 0x113ae8: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x113ae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x113aec: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x113aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113af0: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x113af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x113af4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x113af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x113af8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x113af8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x113afc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x113afcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x113b00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x113b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x113b04: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x113b04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x113b08: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x113b08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x113b0c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x113b0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x113b10: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x113b10u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x113b14: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x113b14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x113b18: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x113b18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x113b1c: 0x1ca0fff2  bgtz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x113B1Cu;
    {
        const bool branch_taken_0x113b1c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x113B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B1Cu;
        // 0x113b20: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b1c) {
            ctx->pc = 0x113AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113ae8;
        }
    }
    ctx->pc = 0x113B24u;
label_113b24:
    // 0x113b24: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x113b24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x113b28: 0xc04546c  jal         func_1151B0
    ctx->pc = 0x113B28u;
    SET_GPR_U32(ctx, 31, 0x113B30u);
    ctx->pc = 0x113B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B28u;
    // 0x113b2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1151B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1151B0u, 0x113B28u, 0x113B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B30u;
label_113b30:
    // 0x113b30: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x113b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x113b34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x113b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x113b38: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x113b38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x113b3c: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x113b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x113b40: 0xc045428  jal         func_1150A0
    ctx->pc = 0x113B40u;
    SET_GPR_U32(ctx, 31, 0x113B48u);
    ctx->pc = 0x113B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B40u;
    // 0x113b44: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1150A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1150A0u, 0x113B40u, 0x113B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B48u;
label_113b48:
    // 0x113b48: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x113b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x113b4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x113b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x113b50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x113b50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x113b54: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x113b54u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x113b58: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x113b58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x113b5c: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x113b5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x113b60: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x113b60u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113b64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113b64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113b68: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x113B68u;
    {
        const bool branch_taken_0x113b68 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x113B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B68u;
        // 0x113b6c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b68) {
            ctx->pc = 0x113BB0u;
            goto label_113bb0;
        }
    }
    ctx->pc = 0x113B70u;
    // 0x113b70: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x113b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x113b74: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x113b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x113b78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113b7c: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x113b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x113b80: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x113b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113b84: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x113b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x113b88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x113b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x113b8c: 0x922023  subu        $a0, $a0, $s2
    ctx->pc = 0x113b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x113b90: 0x623007  srav        $a2, $v0, $v1
    ctx->pc = 0x113b90u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x113b94: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x113b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x113b98: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x113b98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x113b9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x113b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113ba0: 0x822007  srav        $a0, $v0, $a0
    ctx->pc = 0x113ba0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x113ba4: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x113ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
    // 0x113ba8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x113BA8u;
    {
        const bool branch_taken_0x113ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BA8u;
        // 0x113bac: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ba8) {
            ctx->pc = 0x113BECu;
            goto label_113bec;
        }
    }
    ctx->pc = 0x113BB0u;
label_113bb0:
    // 0x113bb0: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x113BB0u;
    {
        const bool branch_taken_0x113bb0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x113BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BB0u;
        // 0x113bb4: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bb0) {
            ctx->pc = 0x113BD0u;
            goto label_113bd0;
        }
    }
    ctx->pc = 0x113BB8u;
    // 0x113bb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113bbc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x113bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113bc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x113bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113bc4: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x113bc4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x113bc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x113BC8u;
    {
        const bool branch_taken_0x113bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BC8u;
        // 0x113bcc: 0xafa4014c  sw          $a0, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bc8) {
            ctx->pc = 0x113BECu;
            goto label_113bec;
        }
    }
    ctx->pc = 0x113BD0u;
label_113bd0:
    // 0x113bd0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x113bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x113bd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x113bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113bd8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x113bd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113bdc: 0x0  nop
    ctx->pc = 0x113bdcu;
    // NOP
    // 0x113be0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x113BE0u;
    {
        const bool branch_taken_0x113be0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BE0u;
        // 0x113be4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113be0) {
            ctx->pc = 0x113BECu;
            goto label_113bec;
        }
    }
    ctx->pc = 0x113BE8u;
    // 0x113be8: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x113be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_113bec:
    // 0x113bec: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x113becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x113bf0: 0x18600033  blez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x113BF0u;
    {
        const bool branch_taken_0x113bf0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x113bf0) {
            ctx->pc = 0x113CC0u;
            goto label_113cc0;
        }
    }
    ctx->pc = 0x113BF8u;
    // 0x113bf8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x113bf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x113bfc: 0x1a000011  blez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x113BFCu;
    {
        const bool branch_taken_0x113bfc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x113C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BFCu;
        // 0x113c00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bfc) {
            ctx->pc = 0x113C44u;
            goto label_113c44;
        }
    }
    ctx->pc = 0x113C04u;
    // 0x113c04: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x113c04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x113c08: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x113c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x113c0c: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x113c0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x113c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c14: 0x0  nop
    ctx->pc = 0x113c14u;
    // NOP
label_113c18:
    // 0x113c18: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x113C18u;
    {
        const bool branch_taken_0x113c18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x113C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C18u;
        // 0x113c1c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c18) {
            ctx->pc = 0x113C30u;
            goto label_113c30;
        }
    }
    ctx->pc = 0x113C20u;
    // 0x113c20: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x113C20u;
    {
        const bool branch_taken_0x113c20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C20u;
        // 0x113c24: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c20) {
            ctx->pc = 0x113C38u;
            goto label_113c38;
        }
    }
    ctx->pc = 0x113C28u;
    // 0x113c28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x113C28u;
    {
        const bool branch_taken_0x113c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C28u;
        // 0x113c2c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c28) {
            ctx->pc = 0x113C34u;
            goto label_113c34;
        }
    }
    ctx->pc = 0x113C30u;
label_113c30:
    // 0x113c30: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x113c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_113c34:
    // 0x113c34: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x113c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_113c38:
    // 0x113c38: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x113c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x113c3c: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x113C3Cu;
    {
        const bool branch_taken_0x113c3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x113C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C3Cu;
        // 0x113c40: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c3c) {
            ctx->pc = 0x113C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113c18;
        }
    }
    ctx->pc = 0x113C44u;
label_113c44:
    // 0x113c44: 0x1a400013  blez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x113C44u;
    {
        const bool branch_taken_0x113c44 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x113C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C44u;
        // 0x113c48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c44) {
            ctx->pc = 0x113C94u;
            goto label_113c94;
        }
    }
    ctx->pc = 0x113C4Cu;
    // 0x113c4c: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113C4Cu;
    {
        const bool branch_taken_0x113c4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x113C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C4Cu;
        // 0x113c50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c4c) {
            ctx->pc = 0x113C64u;
            goto label_113c64;
        }
    }
    ctx->pc = 0x113C54u;
    // 0x113c54: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x113C54u;
    {
        const bool branch_taken_0x113c54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x113C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C54u;
        // 0x113c58: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c54) {
            ctx->pc = 0x113C7Cu;
            goto label_113c7c;
        }
    }
    ctx->pc = 0x113C5Cu;
    // 0x113c5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x113C5Cu;
    {
        const bool branch_taken_0x113c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113c5c) {
            ctx->pc = 0x113C9Cu;
            goto label_113c9c;
        }
    }
    ctx->pc = 0x113C64u;
label_113c64:
    // 0x113c64: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x113c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x113c68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113c6c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x113c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113c70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x113c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x113c74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113C74u;
    {
        const bool branch_taken_0x113c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C74u;
        // 0x113c78: 0x3063007f  andi        $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c74) {
            ctx->pc = 0x113C90u;
            goto label_113c90;
        }
    }
    ctx->pc = 0x113C7Cu;
label_113c7c:
    // 0x113c7c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x113c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x113c80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113c84: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x113c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113c88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x113c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x113c8c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x113c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_113c90:
    // 0x113c90: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x113c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_113c94:
    // 0x113c94: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x113c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x113c98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x113c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_113c9c:
    // 0x113c9c: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x113C9Cu;
    {
        const bool branch_taken_0x113c9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x113c9c) {
            ctx->pc = 0x113CC0u;
            goto label_113cc0;
        }
    }
    ctx->pc = 0x113CA4u;
    // 0x113ca4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x113ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x113ca8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x113ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x113cac: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x113CACu;
    {
        const bool branch_taken_0x113cac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x113CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CACu;
        // 0x113cb0: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113cac) {
            ctx->pc = 0x113CC0u;
            goto label_113cc0;
        }
    }
    ctx->pc = 0x113CB4u;
    // 0x113cb4: 0xc04546c  jal         func_1151B0
    ctx->pc = 0x113CB4u;
    SET_GPR_U32(ctx, 31, 0x113CBCu);
    ctx->pc = 0x113CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113CB4u;
    // 0x113cb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1151B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1151B0u, 0x113CB4u, 0x113CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113CBCu;
label_113cbc:
    // 0x113cbc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x113cbcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_113cc0:
    // 0x113cc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x113cc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113cc4: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x113cc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113cc8: 0x0  nop
    ctx->pc = 0x113cc8u;
    // NOP
    // 0x113ccc: 0x45000053  bc1f        . + 4 + (0x53 << 2)
    ctx->pc = 0x113CCCu;
    {
        const bool branch_taken_0x113ccc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CCCu;
        // 0x113cd0: 0x2606ffff  addiu       $a2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ccc) {
            ctx->pc = 0x113E1Cu;
            goto label_113e1c;
        }
    }
    ctx->pc = 0x113CD4u;
    // 0x113cd4: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x113cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x113cd8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x113CD8u;
    {
        const bool branch_taken_0x113cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CD8u;
        // 0x113cdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113cd8) {
            ctx->pc = 0x113D04u;
            goto label_113d04;
        }
    }
    ctx->pc = 0x113CE0u;
    // 0x113ce0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x113ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x113ce4: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x113ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_113ce8:
    // 0x113ce8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x113ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x113cec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x113cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x113cf0: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x113cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x113cf4: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x113cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x113cf8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x113cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x113cfc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113CFCu;
    {
        const bool branch_taken_0x113cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113cfc) {
            ctx->pc = 0x113CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113ce8;
        }
    }
    ctx->pc = 0x113D04u;
label_113d04:
    // 0x113d04: 0x14a00042  bnez        $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x113D04u;
    {
        const bool branch_taken_0x113d04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x113D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D04u;
        // 0x113d08: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d04) {
            ctx->pc = 0x113E10u;
            goto label_113e10;
        }
    }
    ctx->pc = 0x113D0Cu;
    // 0x113d0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113d10: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x113d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113d14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x113d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113d18: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x113D18u;
    {
        const bool branch_taken_0x113d18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x113D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D18u;
        // 0x113d1c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d18) {
            ctx->pc = 0x113D4Cu;
            goto label_113d4c;
        }
    }
    ctx->pc = 0x113D20u;
    // 0x113d20: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x113d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x113d24: 0x0  nop
    ctx->pc = 0x113d24u;
    // NOP
label_113d28:
    // 0x113d28: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x113d28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x113d2c: 0x2881023  subu        $v0, $s4, $t0
    ctx->pc = 0x113d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x113d30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113d34: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x113d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113d38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x113d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113d3c: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113D3Cu;
    {
        const bool branch_taken_0x113d3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x113d3c) {
            ctx->pc = 0x113D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113d28;
        }
    }
    ctx->pc = 0x113D44u;
    // 0x113d44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x113D44u;
    {
        const bool branch_taken_0x113d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D44u;
        // 0x113d48: 0x2082021  addu        $a0, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d44) {
            ctx->pc = 0x113D54u;
            goto label_113d54;
        }
    }
    ctx->pc = 0x113D4Cu;
label_113d4c:
    // 0x113d4c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x113d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x113d50: 0x2082021  addu        $a0, $s0, $t0
    ctx->pc = 0x113d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_113d54:
    // 0x113d54: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x113d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d58: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x113d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x113d5c: 0x1440ff55  bnez        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x113D5Cu;
    {
        const bool branch_taken_0x113d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D5Cu;
        // 0x113d60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d5c) {
            ctx->pc = 0x113AB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113ab4;
        }
    }
    ctx->pc = 0x113D64u;
    // 0x113d64: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x113d64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x113d68: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x113d68u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x113d6c: 0x0  nop
    ctx->pc = 0x113d6cu;
    // NOP
label_113d70:
    // 0x113d70: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x113d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x113d74: 0x2c61021  addu        $v0, $s6, $a2
    ctx->pc = 0x113d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x113d78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113d7c: 0x2265021  addu        $t2, $s1, $a2
    ctx->pc = 0x113d7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x113d80: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x113d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x113d84: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x113d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x113d88: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x113d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113d8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113d8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113d90: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x113d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x113d94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d98: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x113d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x113d9c: 0x15600013  bnez        $t3, . + 4 + (0x13 << 2)
    ctx->pc = 0x113D9Cu;
    {
        const bool branch_taken_0x113d9c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x113DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D9Cu;
        // 0x113da0: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d9c) {
            ctx->pc = 0x113DECu;
            goto label_113dec;
        }
    }
    ctx->pc = 0x113DA4u;
    // 0x113da4: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x113da4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x113da8: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x113da8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x113dac: 0x0  nop
    ctx->pc = 0x113dacu;
    // NOP
label_113db0:
    // 0x113db0: 0x1451023  subu        $v0, $t2, $a1
    ctx->pc = 0x113db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x113db4: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x113db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x113db8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x113db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x113dbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113dc0: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x113dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x113dc4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x113dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x113dc8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x113dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113dcc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x113dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x113dd0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x113dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113dd4: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x113dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x113dd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x113dd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x113ddc: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x113DDCu;
    {
        const bool branch_taken_0x113ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DDCu;
        // 0x113de0: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ddc) {
            ctx->pc = 0x113DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113db0;
        }
    }
    ctx->pc = 0x113DE4u;
    // 0x113de4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x113DE4u;
    {
        const bool branch_taken_0x113de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DE4u;
        // 0x113de8: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113de4) {
            ctx->pc = 0x113DF8u;
            goto label_113df8;
        }
    }
    ctx->pc = 0x113DECu;
label_113dec:
    // 0x113dec: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x113decu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x113df0: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x113df0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x113df4: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x113df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_113df8:
    // 0x113df8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x113df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113dfc: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x113dfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x113e00: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x113E00u;
    {
        const bool branch_taken_0x113e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E00u;
        // 0x113e04: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e00) {
            ctx->pc = 0x113D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113d70;
        }
    }
    ctx->pc = 0x113E08u;
    // 0x113e08: 0x1000ff2a  b           . + 4 + (-0xD6 << 2)
    ctx->pc = 0x113E08u;
    {
        const bool branch_taken_0x113e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E08u;
        // 0x113e0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e08) {
            ctx->pc = 0x113AB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113ab4;
        }
    }
    ctx->pc = 0x113E10u;
label_113e10:
    // 0x113e10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x113e10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113e14: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x113e14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113e18: 0x0  nop
    ctx->pc = 0x113e18u;
    // NOP
label_113e1c:
    // 0x113e1c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x113E1Cu;
    {
        const bool branch_taken_0x113e1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E1Cu;
        // 0x113e20: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e1c) {
            ctx->pc = 0x113E64u;
            goto label_113e64;
        }
    }
    ctx->pc = 0x113E24u;
    // 0x113e24: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x113e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x113e28: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x113e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x113e2c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x113e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113e30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x113e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113e34: 0x1480002c  bnez        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x113E34u;
    {
        const bool branch_taken_0x113e34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x113E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E34u;
        // 0x113e38: 0x2652fff8  addiu       $s2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e34) {
            ctx->pc = 0x113EE8u;
            goto label_113ee8;
        }
    }
    ctx->pc = 0x113E3Cu;
    // 0x113e3c: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x113e3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
label_113e40:
    // 0x113e40: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x113e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x113e44: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x113e44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x113e48: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x113e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x113e4c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x113e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113e50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x113e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113e54: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113E54u;
    {
        const bool branch_taken_0x113e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x113e54) {
            ctx->pc = 0x113E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113e40;
        }
    }
    ctx->pc = 0x113E5Cu;
    // 0x113e5c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x113E5Cu;
    {
        const bool branch_taken_0x113e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113e5c) {
            ctx->pc = 0x113EECu;
            goto label_113eec;
        }
    }
    ctx->pc = 0x113E64u;
label_113e64:
    // 0x113e64: 0xc04546c  jal         func_1151B0
    ctx->pc = 0x113E64u;
    SET_GPR_U32(ctx, 31, 0x113E6Cu);
    ctx->pc = 0x113E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E64u;
    // 0x113e68: 0x122023  negu        $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1151B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1151B0u, 0x113E64u, 0x113E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E6Cu;
label_113e6c:
    // 0x113e6c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x113e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x113e70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x113e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x113e74: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x113e74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x113e78: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x113e78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113e7c: 0x0  nop
    ctx->pc = 0x113e7cu;
    // NOP
    // 0x113e80: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x113E80u;
    {
        const bool branch_taken_0x113e80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E80u;
        // 0x113e84: 0x3be2021  addu        $a0, $sp, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e80) {
            ctx->pc = 0x113ED4u;
            goto label_113ed4;
        }
    }
    ctx->pc = 0x113E88u;
    // 0x113e88: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x113e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x113e8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x113e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113e90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x113e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x113e94: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x113e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x113e98: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x113e98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x113e9c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x113e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113ea0: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x113ea0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x113ea4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x113ea4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x113ea8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x113ea8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x113eac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x113eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x113eb0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x113eb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x113eb4: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x113eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x113eb8: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x113eb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x113ebc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x113ebcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x113ec0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x113ec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x113ec4: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x113ec4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x113ec8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x113ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x113ecc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x113ECCu;
    {
        const bool branch_taken_0x113ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113ECCu;
        // 0x113ed0: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ecc) {
            ctx->pc = 0x113EECu;
            goto label_113eec;
        }
    }
    ctx->pc = 0x113ED4u;
label_113ed4:
    // 0x113ed4: 0x3be1021  addu        $v0, $sp, $fp
    ctx->pc = 0x113ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
    // 0x113ed8: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x113ed8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x113edc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x113edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x113ee0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x113EE0u;
    {
        const bool branch_taken_0x113ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EE0u;
        // 0x113ee4: 0x32710007  andi        $s1, $s3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ee0) {
            ctx->pc = 0x113EECu;
            goto label_113eec;
        }
    }
    ctx->pc = 0x113EE8u;
label_113ee8:
    // 0x113ee8: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x113ee8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
label_113eec:
    // 0x113eec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x113eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x113ef0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x113ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x113ef4: 0xc04546c  jal         func_1151B0
    ctx->pc = 0x113EF4u;
    SET_GPR_U32(ctx, 31, 0x113EFCu);
    ctx->pc = 0x113EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113EF4u;
    // 0x113ef8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1151B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1151B0u, 0x113EF4u, 0x113EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113EFCu;
label_113efc:
    // 0x113efc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x113efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f00: 0x4c00011  bltz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x113F00u;
    {
        const bool branch_taken_0x113f00 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x113F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F00u;
        // 0x113f04: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f00) {
            ctx->pc = 0x113F48u;
            goto label_113f48;
        }
    }
    ctx->pc = 0x113F08u;
    // 0x113f08: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x113f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x113f0c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x113f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x113f10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x113f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x113f14: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x113f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x113f18: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x113f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x113f1c: 0x0  nop
    ctx->pc = 0x113f1cu;
    // NOP
label_113f20:
    // 0x113f20: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x113f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113f24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113f28: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x113f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x113f2c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x113f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x113f30: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x113f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x113f34: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x113f34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x113f38: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x113f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x113f3c: 0x4c1fff8  bgez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x113F3Cu;
    {
        const bool branch_taken_0x113f3c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x113F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F3Cu;
        // 0x113f40: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f3c) {
            ctx->pc = 0x113F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113f20;
        }
    }
    ctx->pc = 0x113F44u;
    // 0x113f44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x113f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113f48:
    // 0x113f48: 0x4c20027  bltzl       $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x113F48u;
    {
        const bool branch_taken_0x113f48 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x113f48) {
            ctx->pc = 0x113F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113F48u;
            // 0x113f4c: 0x8fa30150  lw          $v1, 0x150($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113FE8u;
            goto label_113fe8;
        }
    }
    ctx->pc = 0x113F50u;
    // 0x113f50: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x113f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x113f54: 0x0  nop
    ctx->pc = 0x113f54u;
    // NOP
label_113f58:
    // 0x113f58: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x113f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x113f5c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x113f5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x113f60: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x113F60u;
    {
        const bool branch_taken_0x113f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F60u;
        // 0x113f64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f60) {
            ctx->pc = 0x113FC8u;
            goto label_113fc8;
        }
    }
    ctx->pc = 0x113F68u;
    // 0x113f68: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x113f68u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x113f6c: 0x5200017  bltz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x113F6Cu;
    {
        const bool branch_taken_0x113f6c = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x113F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F6Cu;
        // 0x113f70: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f6c) {
            ctx->pc = 0x113FCCu;
            goto label_113fcc;
        }
    }
    ctx->pc = 0x113F74u;
    // 0x113f74: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x113f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x113f78: 0x3c0b003b  lui         $t3, 0x3B
    ctx->pc = 0x113f78u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)59 << 16));
    // 0x113f7c: 0x0  nop
    ctx->pc = 0x113f7cu;
    // NOP
label_113f80:
    // 0x113f80: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x113f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x113f84: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x113f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x113f88: 0x2562d7f0  addiu       $v0, $t3, -0x2810
    ctx->pc = 0x113f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294957040));
    // 0x113f8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x113f90: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x113f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x113f94: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x113f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x113f98: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x113f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113f9c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x113f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x113fa0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x113fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113fa4: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x113fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x113fa8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x113fa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x113fac: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x113FACu;
    {
        const bool branch_taken_0x113fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FACu;
        // 0x113fb0: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fac) {
            ctx->pc = 0x113FD0u;
            goto label_113fd0;
        }
    }
    ctx->pc = 0x113FB4u;
    // 0x113fb4: 0x148102a  slt         $v0, $t2, $t0
    ctx->pc = 0x113fb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x113fb8: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x113FB8u;
    {
        const bool branch_taken_0x113fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FB8u;
        // 0x113fbc: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fb8) {
            ctx->pc = 0x113F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113f80;
        }
    }
    ctx->pc = 0x113FC0u;
    // 0x113fc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x113FC0u;
    {
        const bool branch_taken_0x113fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FC0u;
        // 0x113fc4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fc0) {
            ctx->pc = 0x113FD8u;
            goto label_113fd8;
        }
    }
    ctx->pc = 0x113FC8u;
label_113fc8:
    // 0x113fc8: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x113fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_113fcc:
    // 0x113fcc: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x113fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_113fd0:
    // 0x113fd0: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x113fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x113fd4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x113fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_113fd8:
    // 0x113fd8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x113fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x113fdc: 0x4c1ffde  bgez        $a2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x113FDCu;
    {
        const bool branch_taken_0x113fdc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x113FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FDCu;
        // 0x113fe0: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fdc) {
            ctx->pc = 0x113F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113f58;
        }
    }
    ctx->pc = 0x113FE4u;
    // 0x113fe4: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x113fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_113fe8:
    // 0x113fe8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x113FE8u;
    {
        const bool branch_taken_0x113fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FE8u;
        // 0x113fec: 0x8fa40144  lw          $a0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fe8) {
            ctx->pc = 0x114008u;
            goto label_114008;
        }
    }
    ctx->pc = 0x113FF0u;
    // 0x113ff0: 0x5c80001f  bgtzl       $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x113FF0u;
    {
        const bool branch_taken_0x113ff0 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x113ff0) {
            ctx->pc = 0x113FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113FF0u;
            // 0x113ff4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114070u;
            goto label_114070;
        }
    }
    ctx->pc = 0x113FF8u;
    // 0x113ff8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x113FF8u;
    {
        const bool branch_taken_0x113ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FF8u;
        // 0x113ffc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ff8) {
            ctx->pc = 0x114020u;
            goto label_114020;
        }
    }
    ctx->pc = 0x114000u;
    // 0x114000: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x114000u;
    {
        const bool branch_taken_0x114000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114000u;
        // 0x114004: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114000) {
            ctx->pc = 0x114234u;
            goto label_114234;
        }
    }
    ctx->pc = 0x114008u;
label_114008:
    // 0x114008: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x114008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x11400c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x114010: 0x10a20040  beq         $a1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x114010u;
    {
        const bool branch_taken_0x114010 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x114014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114010u;
        // 0x114014: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114010) {
            ctx->pc = 0x114114u;
            goto label_114114;
        }
    }
    ctx->pc = 0x114018u;
    // 0x114018: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x114018u;
    {
        const bool branch_taken_0x114018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114018u;
        // 0x11401c: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114018) {
            ctx->pc = 0x114234u;
            goto label_114234;
        }
    }
    ctx->pc = 0x114020u;
label_114020:
    // 0x114020: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x114020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114024: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x114024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114028: 0x4c2000b  bltzl       $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x114028u;
    {
        const bool branch_taken_0x114028 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x114028) {
            ctx->pc = 0x11402Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114028u;
            // 0x11402c: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x114058u;
            goto label_114058;
        }
    }
    ctx->pc = 0x114030u;
    // 0x114030: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x114030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x114034: 0x0  nop
    ctx->pc = 0x114034u;
    // NOP
label_114038:
    // 0x114038: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x114038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11403c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x11403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x114040: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x114040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x114044: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x114044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114048: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x114048u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11404c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11404Cu;
    {
        const bool branch_taken_0x11404c = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x11404c) {
            ctx->pc = 0x114038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114038;
        }
    }
    ctx->pc = 0x114054u;
    // 0x114054: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x114054u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_114058:
    // 0x114058: 0x8fa6014c  lw          $a2, 0x14C($sp)
    ctx->pc = 0x114058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x11405c: 0x10c00074  beqz        $a2, . + 4 + (0x74 << 2)
    ctx->pc = 0x11405Cu;
    {
        const bool branch_taken_0x11405c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x114060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11405Cu;
        // 0x114060: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11405c) {
            ctx->pc = 0x114230u;
            goto label_114230;
        }
    }
    ctx->pc = 0x114064u;
    // 0x114064: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x114064u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x114068: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x114068u;
    {
        const bool branch_taken_0x114068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114068u;
        // 0x11406c: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x114068) {
            ctx->pc = 0x114230u;
            goto label_114230;
        }
    }
    ctx->pc = 0x114070u;
label_114070:
    // 0x114070: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x114070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114074: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x114074u;
    {
        const bool branch_taken_0x114074 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x114078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114074u;
        // 0x114078: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x114074) {
            ctx->pc = 0x1140ACu;
            goto label_1140ac;
        }
    }
    ctx->pc = 0x11407Cu;
    // 0x11407c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x11407cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x114080: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x114080u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x114084: 0x0  nop
    ctx->pc = 0x114084u;
    // NOP
label_114088:
    // 0x114088: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x114088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11408c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x11408cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x114090: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x114090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x114094: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x114094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114098: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x114098u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11409c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11409Cu;
    {
        const bool branch_taken_0x11409c = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x11409c) {
            ctx->pc = 0x114088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114088;
        }
    }
    ctx->pc = 0x1140A4u;
    // 0x1140a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1140A4u;
    {
        const bool branch_taken_0x1140a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1140A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140A4u;
        // 0x1140a8: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140a4) {
            ctx->pc = 0x1140B4u;
            goto label_1140b4;
        }
    }
    ctx->pc = 0x1140ACu;
label_1140ac:
    // 0x1140ac: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x1140acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x1140b0: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x1140b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_1140b4:
    // 0x1140b4: 0x8fa8014c  lw          $t0, 0x14C($sp)
    ctx->pc = 0x1140b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1140b8: 0x51000004  beql        $t0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1140B8u;
    {
        const bool branch_taken_0x1140b8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1140b8) {
            ctx->pc = 0x1140BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1140B8u;
            // 0x1140bc: 0x46021881  sub.s       $f2, $f3, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1140CCu;
            goto label_1140cc;
        }
    }
    ctx->pc = 0x1140C0u;
    // 0x1140c0: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1140c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x1140c4: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x1140c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x1140c8: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1140c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1140cc:
    // 0x1140cc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1140CCu;
    {
        const bool branch_taken_0x1140cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1140D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140CCu;
        // 0x1140d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140cc) {
            ctx->pc = 0x1140F8u;
            goto label_1140f8;
        }
    }
    ctx->pc = 0x1140D4u;
    // 0x1140d4: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1140d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1140d8:
    // 0x1140d8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1140d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1140dc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1140dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1140e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1140e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1140e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1140e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1140e8: 0x206182a  slt         $v1, $s0, $a2
    ctx->pc = 0x1140e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1140ec: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1140ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1140f0: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1140F0u;
    {
        const bool branch_taken_0x1140f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1140f0) {
            ctx->pc = 0x1140D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1140d8;
        }
    }
    ctx->pc = 0x1140F8u;
label_1140f8:
    // 0x1140f8: 0xe6e20004  swc1        $f2, 0x4($s7)
    ctx->pc = 0x1140f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x1140fc: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x1140fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x114100: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x114100u;
    {
        const bool branch_taken_0x114100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114100u;
        // 0x114104: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114100) {
            ctx->pc = 0x114230u;
            goto label_114230;
        }
    }
    ctx->pc = 0x114108u;
    // 0x114108: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x114108u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x11410c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x11410Cu;
    {
        const bool branch_taken_0x11410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11410Cu;
        // 0x114110: 0xe6e00004  swc1        $f0, 0x4($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11410c) {
            ctx->pc = 0x114230u;
            goto label_114230;
        }
    }
    ctx->pc = 0x114114u;
label_114114:
    // 0x114114: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x114114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114118: 0x18c00013  blez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x114118u;
    {
        const bool branch_taken_0x114118 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x11411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114118u;
        // 0x11411c: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114118) {
            ctx->pc = 0x114168u;
            goto label_114168;
        }
    }
    ctx->pc = 0x114120u;
    // 0x114120: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x114120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x114124: 0x0  nop
    ctx->pc = 0x114124u;
    // NOP
label_114128:
    // 0x114128: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x114128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11412c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11412cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x114130: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x114130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x114134: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x114134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x114138: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x114138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11413c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x11413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x114140: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x114140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114144: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x114144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114148: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x114148u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11414c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11414cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x114150: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x114150u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x114154: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x114154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x114158: 0x1cc0fff3  bgtz        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x114158u;
    {
        const bool branch_taken_0x114158 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x11415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114158u;
        // 0x11415c: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x114158) {
            ctx->pc = 0x114128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114128;
        }
    }
    ctx->pc = 0x114160u;
    // 0x114160: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x114160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114164: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x114164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_114168:
    // 0x114168: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x114168u;
    {
        const bool branch_taken_0x114168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114168) {
            ctx->pc = 0x11416Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114168u;
            // 0x11416c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1141B8u;
            goto label_1141b8;
        }
    }
    ctx->pc = 0x114170u;
    // 0x114170: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x114170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x114174: 0x0  nop
    ctx->pc = 0x114174u;
    // NOP
label_114178:
    // 0x114178: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x114178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11417c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11417cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x114180: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x114180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x114184: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x114184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x114188: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x114188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11418c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x11418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x114190: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x114190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114194: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x114194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114198: 0x28c50002  slti        $a1, $a2, 0x2
    ctx->pc = 0x114198u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11419c: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x11419cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1141a0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1141a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1141a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1141a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1141a8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1141a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1141ac: 0x10a0fff2  beqz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1141ACu;
    {
        const bool branch_taken_0x1141ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1141B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1141ACu;
        // 0x1141b0: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1141ac) {
            ctx->pc = 0x114178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114178;
        }
    }
    ctx->pc = 0x1141B4u;
    // 0x1141b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1141b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1141b8:
    // 0x1141b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1141b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1141bc: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1141bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1141c0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1141C0u;
    {
        const bool branch_taken_0x1141c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1141C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1141C0u;
        // 0x1141c4: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1141c0) {
            ctx->pc = 0x1141F8u;
            goto label_1141f8;
        }
    }
    ctx->pc = 0x1141C8u;
    // 0x1141c8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1141c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1141cc: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1141ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1141d0:
    // 0x1141d0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1141d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1141d4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1141d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1141d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1141d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1141dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1141dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1141e0: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x1141e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1141e4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1141e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1141e8: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1141E8u;
    {
        const bool branch_taken_0x1141e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1141e8) {
            ctx->pc = 0x1141D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1141d0;
        }
    }
    ctx->pc = 0x1141F0u;
    // 0x1141f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1141F0u;
    {
        const bool branch_taken_0x1141f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1141F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1141F0u;
        // 0x1141f4: 0x8fa3014c  lw          $v1, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1141f0) {
            ctx->pc = 0x114200u;
            goto label_114200;
        }
    }
    ctx->pc = 0x1141F8u;
label_1141f8:
    // 0x1141f8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1141f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1141fc: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x1141fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_114200:
    // 0x114200: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x114200u;
    {
        const bool branch_taken_0x114200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114200) {
            ctx->pc = 0x114204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114200u;
            // 0x114204: 0x46001807  neg.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x114218u;
            goto label_114218;
        }
    }
    ctx->pc = 0x114208u;
    // 0x114208: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x114208u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x11420c: 0xe6e30000  swc1        $f3, 0x0($s7)
    ctx->pc = 0x11420cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x114210: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114210u;
    {
        const bool branch_taken_0x114210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114210u;
        // 0x114214: 0xe6e10004  swc1        $f1, 0x4($s7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x114210) {
            ctx->pc = 0x11422Cu;
            goto label_11422c;
        }
    }
    ctx->pc = 0x114218u;
label_114218:
    // 0x114218: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x114218u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x11421c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x11421cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x114220: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x114220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x114224: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x114224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x114228: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x114228u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_11422c:
    // 0x11422c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11422cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114230:
    // 0x114230: 0xdfbf01f0  ld          $ra, 0x1F0($sp)
    ctx->pc = 0x114230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
label_114234:
    // 0x114234: 0xdfbe01e0  ld          $fp, 0x1E0($sp)
    ctx->pc = 0x114234u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x114238: 0xdfb701d0  ld          $s7, 0x1D0($sp)
    ctx->pc = 0x114238u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x11423c: 0xdfb601c0  ld          $s6, 0x1C0($sp)
    ctx->pc = 0x11423cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x114240: 0xdfb501b0  ld          $s5, 0x1B0($sp)
    ctx->pc = 0x114240u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x114244: 0xdfb401a0  ld          $s4, 0x1A0($sp)
    ctx->pc = 0x114244u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x114248: 0xdfb30190  ld          $s3, 0x190($sp)
    ctx->pc = 0x114248u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x11424c: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x11424cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x114250: 0xdfb10170  ld          $s1, 0x170($sp)
    ctx->pc = 0x114250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x114254: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x114254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x114258: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x114258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11425c: 0x3e00008  jr          $ra
    ctx->pc = 0x11425Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11425Cu;
        // 0x114260: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11425Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114264u;
}
