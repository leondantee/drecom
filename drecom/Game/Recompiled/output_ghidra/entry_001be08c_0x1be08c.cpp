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

// Function: entry_001be08c
// Address: 0x1be08c - 0x1be114
void entry_001be08c_0x1be08c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be08c_0x1be08c");
#endif

    switch (ctx->pc) {
        case 0x1be098u: goto label_1be098;
        default: break;
    }

    ctx->pc = 0x1be08cu;

    // 0x1be08c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1be08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be090: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BE090u;
    SET_GPR_U32(ctx, 31, 0x1BE098u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BE090u, 0x1BE098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE098u;
label_1be098:
    // 0x1be098: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1be098u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1be09c: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1BE09Cu;
    {
        const bool branch_taken_0x1be09c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be09c) {
            ctx->pc = 0x1BE124u;
            return;
        }
    }
    ctx->pc = 0x1BE0A4u;
    // 0x1be0a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be0a8: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1be0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1be0ac: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1be0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1be0b0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1be0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1be0b4: 0x10600195  beqz        $v1, . + 4 + (0x195 << 2)
    ctx->pc = 0x1BE0B4u;
    {
        const bool branch_taken_0x1be0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be0b4) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BE0BCu;
    // 0x1be0bc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be0c0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1be0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1be0c4: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1be0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1be0c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1be0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1be0cc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1be0ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1be0d0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1be0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1be0d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be0d8: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1be0d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1be0dc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1be0dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1be0e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1be0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be0e4: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BE0E4u;
    {
        const bool branch_taken_0x1be0e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be0e4) {
            ctx->pc = 0x1BE114u;
            return;
        }
    }
    ctx->pc = 0x1BE0ECu;
    // 0x1be0ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be0f0: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE0F0u;
    {
        const bool branch_taken_0x1be0f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be0f0) {
            ctx->pc = 0x1BE114u;
            return;
        }
    }
    ctx->pc = 0x1BE0F8u;
    // 0x1be0f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1be0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be0fc: 0x10a40183  beq         $a1, $a0, . + 4 + (0x183 << 2)
    ctx->pc = 0x1BE0FCu;
    {
        const bool branch_taken_0x1be0fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1be0fc) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BE104u;
    // 0x1be104: 0x10a00181  beqz        $a1, . + 4 + (0x181 << 2)
    ctx->pc = 0x1BE104u;
    {
        const bool branch_taken_0x1be104 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be104) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BE10Cu;
    // 0x1be10c: 0x1000017f  b           . + 4 + (0x17F << 2)
    ctx->pc = 0x1BE10Cu;
    {
        const bool branch_taken_0x1be10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be10c) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BE114u;
}
