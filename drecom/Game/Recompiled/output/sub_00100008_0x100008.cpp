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

// Function: sub_00100008
// Address: 0x100008 - 0x1000b8
void sub_00100008_0x100008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100008_0x100008");
#endif

    switch (ctx->pc) {
        case 0x100018u: goto label_100018;
        case 0x100028u: goto label_100028;
        case 0x100064u: goto label_100064;
        case 0x100080u: goto label_100080;
        case 0x100088u: goto label_100088;
        case 0x100090u: goto label_100090;
        case 0x1000a8u: goto label_1000a8;
        default: break;
    }

    ctx->pc = 0x100008u;

    // 0x100008: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x100008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10000c: 0x3c0301f0  lui         $v1, 0x1F0
    ctx->pc = 0x10000cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)496 << 16));
    // 0x100010: 0x24422d00  addiu       $v0, $v0, 0x2D00
    ctx->pc = 0x100010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11520));
    // 0x100014: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x100014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_100018:
    // 0x100018: 0x0  nop
    ctx->pc = 0x100018u;
    // NOP
    // 0x10001c: 0x0  nop
    ctx->pc = 0x10001cu;
    // NOP
    // 0x100020: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x100020u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x100024: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x100024u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_100028:
    // 0x100028: 0x1420fffb  bnez        $at, . + 4 + (-0x5 << 2)
    ctx->pc = 0x100028u;
    {
        const bool branch_taken_0x100028 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x10002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100028u;
        // 0x10002c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100028) {
            ctx->pc = 0x100018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100018;
        }
    }
    ctx->pc = 0x100030u;
    // 0x100030: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x100030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x100034: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x100034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x100038: 0x3c060000  lui         $a2, 0x0
    ctx->pc = 0x100038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)0 << 16));
    // 0x10003c: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x10003cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
    // 0x100040: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x100040u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x100044: 0x2484ac70  addiu       $a0, $a0, -0x5390
    ctx->pc = 0x100044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945904));
    // 0x100048: 0x24a5e000  addiu       $a1, $a1, -0x2000
    ctx->pc = 0x100048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959104));
    // 0x10004c: 0x24c62000  addiu       $a2, $a2, 0x2000
    ctx->pc = 0x10004cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8192));
    // 0x100050: 0x24e72d80  addiu       $a3, $a3, 0x2D80
    ctx->pc = 0x100050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11648));
    // 0x100054: 0x250800b8  addiu       $t0, $t0, 0xB8
    ctx->pc = 0x100054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 184));
    // 0x100058: 0x80e025  move        $gp, $a0
    ctx->pc = 0x100058u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 4) | GPR_U64(ctx, 0));
    // 0x10005c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x10005cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x100060: 0xc  syscall     0
    ctx->pc = 0x100060u;
    ctx->pc = 0x100064u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_100064:
    // 0x100064: 0x40e825  move        $sp, $v0
    ctx->pc = 0x100064u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) | GPR_U64(ctx, 0));
    // 0x100068: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x100068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x10006c: 0x3c050000  lui         $a1, 0x0
    ctx->pc = 0x10006cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)0 << 16));
    // 0x100070: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x100070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x100074: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x100074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x100078: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x100078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x10007c: 0xc  syscall     0
    ctx->pc = 0x10007cu;
    ctx->pc = 0x100080u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_100080:
    // 0x100080: 0xc084e22  jal         func_213888
    ctx->pc = 0x100080u;
    SET_GPR_U32(ctx, 31, 0x100088u);
    ctx->pc = 0x213888u;
    {
        ctx->pc = 0x100088u;
        ps2_syscalls::InitThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x100088u) { return; }
    ctx->pc = 0x100088u;
label_100088:
    // 0x100088: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x100088u;
    SET_GPR_U32(ctx, 31, 0x100090u);
    ctx->pc = 0x10008Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100088u;
    // 0x10008c: 0x2025  move        $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x100090u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x100090u) { return; }
    ctx->pc = 0x100090u;
label_100090:
    // 0x100090: 0x42000038  ei
    ctx->pc = 0x100090u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x100094: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x100094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x100098: 0x24422d80  addiu       $v0, $v0, 0x2D80
    ctx->pc = 0x100098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11648));
    // 0x10009c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10009cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B2D80u));
    // 0x1000a0: 0xc0595d0  jal         func_165740
    ctx->pc = 0x1000A0u;
    SET_GPR_U32(ctx, 31, 0x1000A8u);
    ctx->pc = 0x1000A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1000A0u;
    // 0x1000a4: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165740u, 0x1000A0u, 0x1000A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1000A8u;
label_1000a8:
    // 0x1000a8: 0x8084990  j           func_212640
    ctx->pc = 0x1000A8u;
    ctx->pc = 0x1000ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1000A8u;
    // 0x1000ac: 0x402025  move        $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    Exit_0x212640(rdram, ctx, runtime); return;
    ctx->pc = 0x1000B0u;
    // 0x1000b0: 0x8084990  j           func_212640
    ctx->pc = 0x1000B0u;
    ctx->pc = 0x1000B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1000B0u;
    // 0x1000b4: 0x2025  move        $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    Exit_0x212640(rdram, ctx, runtime); return;
    ctx->pc = 0x1000B8u;
}
