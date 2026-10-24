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

// Function: entry_002153a8
// Address: 0x2153a8 - 0x2154c0
void entry_002153a8_0x2153a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002153a8_0x2153a8");
#endif

    switch (ctx->pc) {
        case 0x215438u: goto label_215438;
        case 0x215450u: goto label_215450;
        case 0x215468u: goto label_215468;
        case 0x215480u: goto label_215480;
        case 0x215490u: goto label_215490;
        case 0x2154bcu: goto label_2154bc;
        default: break;
    }

    ctx->pc = 0x2153a8u;

label_2153a8:
    // 0x2153a8: 0x42000039  di
    ctx->pc = 0x2153a8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2153ac: 0x40f  sync.p
    ctx->pc = 0x2153acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2153b0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x2153b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x2153b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2153b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2153b8: 0x0  nop
    ctx->pc = 0x2153b8u;
    // NOP
    // 0x2153bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2153BCu;
    {
        const bool branch_taken_0x2153bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2153bc) {
            ctx->pc = 0x2153A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2153a8;
        }
    }
    ctx->pc = 0x2153C4u;
    // 0x2153c4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2153c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2153c8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2153c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2153cc: 0x2452a400  addiu       $s2, $v0, -0x5C00
    ctx->pc = 0x2153ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943744));
    // 0x2153d0: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x2153d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x2153d4: 0x2510bc00  addiu       $s0, $t0, -0x4400
    ctx->pc = 0x2153d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949888));
    // 0x2153d8: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2153d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2153dc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2153dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2153e0: 0x2463ac00  addiu       $v1, $v1, -0x5400
    ctx->pc = 0x2153e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945792));
    // 0x2153e4: 0x24c6b400  addiu       $a2, $a2, -0x4C00
    ctx->pc = 0x2153e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947840));
    // 0x2153e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2153e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2153ec: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2153ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2153f0: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x2153f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x2153f4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2153f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2153f8: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x2153f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x2153fc: 0xad11bc00  sw          $s1, -0x4400($t0)
    ctx->pc = 0x2153fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294949888), GPR_U32(ctx, 17));
    // 0x215400: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x215400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x215404: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x215404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x215408: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x215408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x21540c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x21540cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x215410: 0x24a55668  addiu       $a1, $a1, 0x5668
    ctx->pc = 0x215410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22120));
    // 0x215414: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x215414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x215418: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x215418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21541c: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x21541cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x215420: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x215420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x215424: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x215424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x215428: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x215428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x21542c: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x21542cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    // 0x215430: 0xc0853da  jal         func_214F68
    ctx->pc = 0x215430u;
    SET_GPR_U32(ctx, 31, 0x215438u);
    ctx->pc = 0x215434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215430u;
    // 0x215434: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214F68u;
    {
        ctx->pc = 0x215438u;
        ps2_stubs::sceSifAddCmdHandler(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215438u) { return; }
    ctx->pc = 0x215438u;
label_215438:
    // 0x215438: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x215438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x21543c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x21543cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x215440: 0x24a55928  addiu       $a1, $a1, 0x5928
    ctx->pc = 0x215440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22824));
    // 0x215444: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x215444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215448: 0xc0853da  jal         func_214F68
    ctx->pc = 0x215448u;
    SET_GPR_U32(ctx, 31, 0x215450u);
    ctx->pc = 0x21544Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215448u;
    // 0x21544c: 0x34840009  ori         $a0, $a0, 0x9 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214F68u;
    {
        ctx->pc = 0x215450u;
        ps2_stubs::sceSifAddCmdHandler(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215450u) { return; }
    ctx->pc = 0x215450u;
label_215450:
    // 0x215450: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x215450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x215454: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x215454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x215458: 0x24a55b18  addiu       $a1, $a1, 0x5B18
    ctx->pc = 0x215458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23320));
    // 0x21545c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21545cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215460: 0xc0853da  jal         func_214F68
    ctx->pc = 0x215460u;
    SET_GPR_U32(ctx, 31, 0x215468u);
    ctx->pc = 0x215464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215460u;
    // 0x215464: 0x3484000a  ori         $a0, $a0, 0xA (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214F68u;
    {
        ctx->pc = 0x215468u;
        ps2_stubs::sceSifAddCmdHandler(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215468u) { return; }
    ctx->pc = 0x215468u;
label_215468:
    // 0x215468: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x215468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x21546c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x21546cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x215470: 0x24a55720  addiu       $a1, $a1, 0x5720
    ctx->pc = 0x215470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22304));
    // 0x215474: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x215474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215478: 0xc0853da  jal         func_214F68
    ctx->pc = 0x215478u;
    SET_GPR_U32(ctx, 31, 0x215480u);
    ctx->pc = 0x21547Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215478u;
    // 0x21547c: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214F68u;
    {
        ctx->pc = 0x215480u;
        ps2_stubs::sceSifAddCmdHandler(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215480u) { return; }
    ctx->pc = 0x215480u;
label_215480:
    // 0x215480: 0x42000038  ei
    ctx->pc = 0x215480u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x215484: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x215484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x215488: 0xc084b8c  jal         func_212E30
    ctx->pc = 0x215488u;
    SET_GPR_U32(ctx, 31, 0x215490u);
    ctx->pc = 0x21548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215488u;
    // 0x21548c: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E30u;
    {
        ctx->pc = 0x215490u;
        ps2_stubs::sceSifGetReg(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215490u) { return; }
    ctx->pc = 0x215490u;
label_215490:
    // 0x215490: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x215490u;
    {
        const bool branch_taken_0x215490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215490u;
        // 0x215494: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215490) {
            ctx->pc = 0x2154F0u;
            return;
        }
    }
    ctx->pc = 0x215498u;
    // 0x215498: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x215498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x21549c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x21549cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2154a0: 0xacb1000c  sw          $s1, 0xC($a1)
    ctx->pc = 0x2154a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 17));
    // 0x2154a4: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x2154a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x2154a8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2154a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2154ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2154acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2154b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2154b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2154b4: 0xc08543e  jal         func_2150F8
    ctx->pc = 0x2154B4u;
    SET_GPR_U32(ctx, 31, 0x2154BCu);
    ctx->pc = 0x2154B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2154B4u;
    // 0x2154b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2150F8u;
    {
        ctx->pc = 0x2154BCu;
        ps2_syscalls::sceSifSendCmd(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2154BCu) { return; }
    ctx->pc = 0x2154BCu;
label_2154bc:
    // 0x2154bc: 0x0  nop
    ctx->pc = 0x2154bcu;
    // NOP
    ctx->pc = 0x2154c0u;
}
