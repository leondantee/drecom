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

// Function: entry_00101780
// Address: 0x101780 - 0x1017cc
void entry_00101780_0x101780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101780_0x101780");
#endif

    switch (ctx->pc) {
        case 0x1017a0u: goto label_1017a0;
        default: break;
    }

    ctx->pc = 0x101780u;

    // 0x101780: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x101780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101784: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x101784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x101788: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x101788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x10178c: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x10178cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
    // 0x101790: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x101790u;
    runtime->Store32(rdram, ctx, 0x10003C00u, GPR_U32(ctx, 0));
    // 0x101794: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x101794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101798: 0xc084b58  jal         func_212D60
    ctx->pc = 0x101798u;
    SET_GPR_U32(ctx, 31, 0x1017A0u);
    ctx->pc = 0x10179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101798u;
    // 0x10179c: 0xfc600000  sd          $zero, 0x0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212D60u;
    {
        ctx->pc = 0x1017A0u;
        ps2_syscalls::GsPutIMR(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1017A0u) { return; }
    ctx->pc = 0x1017A0u;
label_1017a0:
    // 0x1017a0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1017a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1017a4: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1017a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1017a8: 0x24633940  addiu       $v1, $v1, 0x3940
    ctx->pc = 0x1017a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14656));
    // 0x1017ac: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1017acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1017b0: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1017b0u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x383940u));
    // 0x1017b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1017b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1017b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1017b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1017bc: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x1017bcu;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x1017c0: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x1017c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x1017c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1017c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017c8: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1017c8u;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 5));
    ctx->pc = 0x1017ccu;
}
