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

// Function: entry_001001b0
// Address: 0x1001b0 - 0x10021c
void entry_001001b0_0x1001b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001001b0_0x1001b0");
#endif

    switch (ctx->pc) {
        case 0x1001b8u: goto label_1001b8;
        case 0x1001f0u: goto label_1001f0;
        case 0x100208u: goto label_100208;
        case 0x100214u: goto label_100214;
        default: break;
    }

    ctx->pc = 0x1001b0u;

    // 0x1001b0: 0xc04009c  jal         func_100270
    ctx->pc = 0x1001B0u;
    SET_GPR_U32(ctx, 31, 0x1001B8u);
    ctx->pc = 0x100270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100270u, 0x1001B0u, 0x1001B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1001B8u;
label_1001b8:
    // 0x1001b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1001b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1001bc: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1001bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1001c0: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1001c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x1001c4: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1001c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1001c8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1001c8u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 2));
    // 0x1001cc: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x1001ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1001d0: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x1001d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x1001d4: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1001d4u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x1001d8: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x1001d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x1001dc: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x1001dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x1001e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1001e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1001e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1001e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1001e8: 0xc084b58  jal         func_212D60
    ctx->pc = 0x1001E8u;
    SET_GPR_U32(ctx, 31, 0x1001F0u);
    ctx->pc = 0x1001ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1001E8u;
    // 0x1001ec: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212D60u;
    {
        ctx->pc = 0x1001F0u;
        ps2_syscalls::GsPutIMR(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1001F0u) { return; }
    ctx->pc = 0x1001F0u;
label_1001f0:
    // 0x1001f0: 0x13182b  sltu        $v1, $zero, $s3
    ctx->pc = 0x1001f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1001f4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1001f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1001f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1001F8u;
    {
        const bool branch_taken_0x1001f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1001FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1001F8u;
        // 0x1001fc: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1001f8) {
            ctx->pc = 0x10021Cu;
            return;
        }
    }
    ctx->pc = 0x100200u;
    // 0x100200: 0xc084d28  jal         func_2134A0
    ctx->pc = 0x100200u;
    SET_GPR_U32(ctx, 31, 0x100208u);
    ctx->pc = 0x100204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100200u;
    // 0x100204: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2134A0u;
    {
        ctx->pc = 0x100208u;
        ps2_syscalls::DisableIntc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x100208u) { return; }
    ctx->pc = 0x100208u;
label_100208:
    // 0x100208: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x100208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10020c: 0xc0849c8  jal         func_212720
    ctx->pc = 0x10020Cu;
    SET_GPR_U32(ctx, 31, 0x100214u);
    ctx->pc = 0x100210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10020Cu;
    // 0x100210: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212720u;
    {
        ctx->pc = 0x100214u;
        ps2_syscalls::RemoveIntcHandler(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x100214u) { return; }
    ctx->pc = 0x100214u;
label_100214:
    // 0x100214: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x100214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x100218: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x100218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x10021cu;
}
