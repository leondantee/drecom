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

// Function: entry_001b5fa8
// Address: 0x1b5fa8 - 0x1b604c
void entry_001b5fa8_0x1b5fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5fa8_0x1b5fa8");
#endif

    switch (ctx->pc) {
        case 0x1b5fd4u: goto label_1b5fd4;
        default: break;
    }

    ctx->pc = 0x1b5fa8u;

    // 0x1b5fa8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b5fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5fac: 0x910209df  lbu         $v0, 0x9DF($t0)
    ctx->pc = 0x1b5facu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2527)));
    // 0x1b5fb0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1b5fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b5fb4: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x1b5fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1b5fb8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1B5FB8u;
    {
        const bool branch_taken_0x1b5fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5fb8) {
            ctx->pc = 0x1B605Cu;
            return;
        }
    }
    ctx->pc = 0x1B5FC0u;
    // 0x1b5fc0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5fc4: 0x8c821b68  lw          $v0, 0x1B68($a0)
    ctx->pc = 0x1b5fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7016)));
    // 0x1b5fc8: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x1b5fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1b5fcc: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1B5FCCu;
    SET_GPR_U32(ctx, 31, 0x1B5FD4u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B5FCCu, 0x1B5FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5FD4u;
label_1b5fd4:
    // 0x1b5fd4: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1B5FD4u;
    {
        const bool branch_taken_0x1b5fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5fd4) {
            ctx->pc = 0x1B6114u;
            return;
        }
    }
    ctx->pc = 0x1B5FDCu;
    // 0x1b5fdc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5fe0: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1b5fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b5fe4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b5fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1b5fe8: 0xa33024  and         $a2, $a1, $v1
    ctx->pc = 0x1b5fe8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1b5fec: 0x10c0033c  beqz        $a2, . + 4 + (0x33C << 2)
    ctx->pc = 0x1B5FECu;
    {
        const bool branch_taken_0x1b5fec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5fec) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B5FF4u;
    // 0x1b5ff4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5ff8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b5ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b5ffc: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b5ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1b6000: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b6000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b6004: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1b6004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b6008: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1b6008u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1b600c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b600cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6010: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1b6010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1b6014: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1b6014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b6018: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b6018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b601c: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B601Cu;
    {
        const bool branch_taken_0x1b601c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b601c) {
            ctx->pc = 0x1B604Cu;
            return;
        }
    }
    ctx->pc = 0x1B6024u;
    // 0x1b6024: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b6024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6028: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6028u;
    {
        const bool branch_taken_0x1b6028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b6028) {
            ctx->pc = 0x1B604Cu;
            return;
        }
    }
    ctx->pc = 0x1B6030u;
    // 0x1b6030: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b6030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b6034: 0x10a3032a  beq         $a1, $v1, . + 4 + (0x32A << 2)
    ctx->pc = 0x1B6034u;
    {
        const bool branch_taken_0x1b6034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b6034) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B603Cu;
    // 0x1b603c: 0x10a00328  beqz        $a1, . + 4 + (0x328 << 2)
    ctx->pc = 0x1B603Cu;
    {
        const bool branch_taken_0x1b603c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b603c) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B6044u;
    // 0x1b6044: 0x10000326  b           . + 4 + (0x326 << 2)
    ctx->pc = 0x1B6044u;
    {
        const bool branch_taken_0x1b6044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6044) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B604Cu;
}
