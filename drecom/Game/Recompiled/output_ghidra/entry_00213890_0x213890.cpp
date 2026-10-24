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

// Function: entry_00213890
// Address: 0x213890 - 0x21390c
void entry_00213890_0x213890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213890_0x213890");
#endif

    switch (ctx->pc) {
        case 0x2138b8u: goto label_2138b8;
        case 0x2138fcu: goto label_2138fc;
        default: break;
    }

    ctx->pc = 0x213890u;

    // 0x213890: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x213890u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x213894: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x213894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x213898: 0x8e02aac8  lw          $v0, -0x5538($s0)
    ctx->pc = 0x213898u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x38AAC8u));
    // 0x21389c: 0x1c40001b  bgtz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21389Cu;
    {
        const bool branch_taken_0x21389c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2138A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21389Cu;
        // 0x2138a0: 0xffb10060  sd          $s1, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21389c) {
            ctx->pc = 0x21390Cu;
            return;
        }
    }
    ctx->pc = 0x2138A4u;
    // 0x2138a4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2138a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2138a8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2138a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2138ac: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x2138acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x2138b0: 0xc084a88  jal         func_212A20
    ctx->pc = 0x2138B0u;
    SET_GPR_U32(ctx, 31, 0x2138B8u);
    ctx->pc = 0x2138B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2138B0u;
    // 0x2138b4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A20u;
    {
        ctx->pc = 0x2138B8u;
        ps2_syscalls::CreateSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2138B8u) { return; }
    ctx->pc = 0x2138B8u;
label_2138b8:
    // 0x2138b8: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x2138b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    // 0x2138bc: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2138BCu;
    {
        const bool branch_taken_0x2138bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2138C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138BCu;
        // 0x2138c0: 0xae229ce8  sw          $v0, -0x6318($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294941928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2138bc) {
            ctx->pc = 0x21390Cu;
            return;
        }
    }
    ctx->pc = 0x2138C4u;
    // 0x2138c4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x2138c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x2138c8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2138c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2138cc: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2138ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2138d0: 0x244237d8  addiu       $v0, $v0, 0x37D8
    ctx->pc = 0x2138d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14296));
    // 0x2138d4: 0x246398e0  addiu       $v1, $v1, -0x6720
    ctx->pc = 0x2138d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940896));
    // 0x2138d8: 0x24a5ac70  addiu       $a1, $a1, -0x5390
    ctx->pc = 0x2138d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945904));
    // 0x2138dc: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x2138dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2138e0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2138e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2138e4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2138e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2138e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2138e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2138ec: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x2138ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x2138f0: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2138f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2138f4: 0xc084a08  jal         func_212820
    ctx->pc = 0x2138F4u;
    SET_GPR_U32(ctx, 31, 0x2138FCu);
    ctx->pc = 0x2138F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2138F4u;
    // 0x2138f8: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212820u;
    {
        ctx->pc = 0x2138FCu;
        ps2_syscalls::CreateThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2138FCu) { return; }
    ctx->pc = 0x2138FCu;
label_2138fc:
    // 0x2138fc: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2138FCu;
    {
        const bool branch_taken_0x2138fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x213900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138FCu;
        // 0x213900: 0xae02aac8  sw          $v0, -0x5538($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294945480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2138fc) {
            ctx->pc = 0x213914u;
            return;
        }
    }
    ctx->pc = 0x213904u;
    // 0x213904: 0xc084a8c  jal         func_212A30
    ctx->pc = 0x213904u;
    SET_GPR_U32(ctx, 31, 0x21390Cu);
    ctx->pc = 0x213908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213904u;
    // 0x213908: 0x8e249ce8  lw          $a0, -0x6318($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941928)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A30u;
    {
        ctx->pc = 0x21390Cu;
        ps2_syscalls::DeleteSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21390Cu) { return; }
    ctx->pc = 0x21390Cu;
}
