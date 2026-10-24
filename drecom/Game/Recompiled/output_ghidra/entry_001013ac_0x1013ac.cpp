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

// Function: entry_001013ac
// Address: 0x1013ac - 0x101410
void entry_001013ac_0x1013ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001013ac_0x1013ac");
#endif

    switch (ctx->pc) {
        case 0x1013b4u: goto label_1013b4;
        case 0x1013c0u: goto label_1013c0;
        default: break;
    }

    ctx->pc = 0x1013acu;

    // 0x1013ac: 0xc084b50  jal         func_212D40
    ctx->pc = 0x1013ACu;
    SET_GPR_U32(ctx, 31, 0x1013B4u);
    ctx->pc = 0x212D40u;
    {
        ctx->pc = 0x1013B4u;
        ps2_syscalls::GsGetIMR(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1013B4u) { return; }
    ctx->pc = 0x1013B4u;
label_1013b4:
    // 0x1013b4: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x1013b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1013b8: 0xc084b58  jal         func_212D60
    ctx->pc = 0x1013B8u;
    SET_GPR_U32(ctx, 31, 0x1013C0u);
    ctx->pc = 0x1013BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1013B8u;
    // 0x1013bc: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212D60u;
    {
        ctx->pc = 0x1013C0u;
        ps2_syscalls::GsPutIMR(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1013C0u) { return; }
    ctx->pc = 0x1013C0u;
label_1013c0:
    // 0x1013c0: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1013c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1013c4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1013c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1013c8: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1013c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1013cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1013ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1013d0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1013d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1013d4: 0x34639020  ori         $v1, $v1, 0x9020
    ctx->pc = 0x1013d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36896);
    // 0x1013d8: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x1013d8u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x1013dc: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1013dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1013e0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1013e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1013e4: 0x2851024  and         $v0, $s4, $a1
    ctx->pc = 0x1013e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
    // 0x1013e8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1013e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1013ec: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1013ECu;
    {
        const bool branch_taken_0x1013ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1013F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013ECu;
        // 0x1013f0: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1013ec) {
            ctx->pc = 0x101410u;
            return;
        }
    }
    ctx->pc = 0x1013F4u;
    // 0x1013f4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1013f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1013f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1013f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1013fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1013fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x101400: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x101400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x101404: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x101404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x101408: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x101408u;
    {
        const bool branch_taken_0x101408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101408u;
        // 0x10140c: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101408) {
            ctx->pc = 0x101420u;
            return;
        }
    }
    ctx->pc = 0x101410u;
}
