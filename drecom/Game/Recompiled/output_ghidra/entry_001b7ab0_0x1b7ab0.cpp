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

// Function: entry_001b7ab0
// Address: 0x1b7ab0 - 0x1b7b38
void entry_001b7ab0_0x1b7ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7ab0_0x1b7ab0");
#endif

    switch (ctx->pc) {
        case 0x1b7abcu: goto label_1b7abc;
        default: break;
    }

    ctx->pc = 0x1b7ab0u;

    // 0x1b7ab0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b7ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7ab4: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1B7AB4u;
    SET_GPR_U32(ctx, 31, 0x1B7ABCu);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B7AB4u, 0x1B7ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7ABCu;
label_1b7abc:
    // 0x1b7abc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b7abcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7ac0: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1B7AC0u;
    {
        const bool branch_taken_0x1b7ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ac0) {
            ctx->pc = 0x1B7B4Cu;
            return;
        }
    }
    ctx->pc = 0x1B7AC8u;
    // 0x1b7ac8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7acc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b7accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b7ad0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b7ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1b7ad4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b7ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b7ad8: 0x10600217  beqz        $v1, . + 4 + (0x217 << 2)
    ctx->pc = 0x1B7AD8u;
    {
        const bool branch_taken_0x1b7ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ad8) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7AE0u;
    // 0x1b7ae0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b7ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7ae4: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1b7ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b7ae8: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1b7ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
    // 0x1b7aec: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1b7aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1b7af0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1b7af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1b7af4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1b7af4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1b7af8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7afc: 0x906413a6  lbu         $a0, 0x13A6($v1)
    ctx->pc = 0x1b7afcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1b7b00: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1b7b00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b7b04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b7b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b7b08: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B7B08u;
    {
        const bool branch_taken_0x1b7b08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7b08) {
            ctx->pc = 0x1B7B38u;
            return;
        }
    }
    ctx->pc = 0x1B7B10u;
    // 0x1b7b10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b7b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7b14: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7B14u;
    {
        const bool branch_taken_0x1b7b14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b7b14) {
            ctx->pc = 0x1B7B38u;
            return;
        }
    }
    ctx->pc = 0x1B7B1Cu;
    // 0x1b7b1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b7b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b7b20: 0x10a30205  beq         $a1, $v1, . + 4 + (0x205 << 2)
    ctx->pc = 0x1B7B20u;
    {
        const bool branch_taken_0x1b7b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7b20) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7B28u;
    // 0x1b7b28: 0x10a00203  beqz        $a1, . + 4 + (0x203 << 2)
    ctx->pc = 0x1B7B28u;
    {
        const bool branch_taken_0x1b7b28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b28) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7B30u;
    // 0x1b7b30: 0x10000201  b           . + 4 + (0x201 << 2)
    ctx->pc = 0x1B7B30u;
    {
        const bool branch_taken_0x1b7b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b30) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7B38u;
}
