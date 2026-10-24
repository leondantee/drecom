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

// Function: entry_001b9088
// Address: 0x1b9088 - 0x1b9114
void entry_001b9088_0x1b9088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9088_0x1b9088");
#endif

    switch (ctx->pc) {
        case 0x1b9098u: goto label_1b9098;
        default: break;
    }

    ctx->pc = 0x1b9088u;

    // 0x1b9088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b908c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b908cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9090: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1B9090u;
    SET_GPR_U32(ctx, 31, 0x1B9098u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B9090u, 0x1B9098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9098u;
label_1b9098:
    // 0x1b9098: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b9098u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b909c: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1B909Cu;
    {
        const bool branch_taken_0x1b909c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b909c) {
            ctx->pc = 0x1B9128u;
            return;
        }
    }
    ctx->pc = 0x1B90A4u;
    // 0x1b90a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b90a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b90a8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1b90a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b90ac: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1b90acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1b90b0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b90b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1b90b4: 0x106001b5  beqz        $v1, . + 4 + (0x1B5 << 2)
    ctx->pc = 0x1B90B4u;
    {
        const bool branch_taken_0x1b90b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b90b4) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B90BCu;
    // 0x1b90bc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b90bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b90c0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b90c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b90c4: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b90c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1b90c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b90c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b90cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b90ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b90d0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1b90d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1b90d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b90d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b90d8: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1b90d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1b90dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1b90dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b90e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b90e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b90e4: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B90E4u;
    {
        const bool branch_taken_0x1b90e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b90e4) {
            ctx->pc = 0x1B9114u;
            return;
        }
    }
    ctx->pc = 0x1B90ECu;
    // 0x1b90ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b90ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b90f0: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B90F0u;
    {
        const bool branch_taken_0x1b90f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b90f0) {
            ctx->pc = 0x1B9114u;
            return;
        }
    }
    ctx->pc = 0x1B90F8u;
    // 0x1b90f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b90f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b90fc: 0x108301a3  beq         $a0, $v1, . + 4 + (0x1A3 << 2)
    ctx->pc = 0x1B90FCu;
    {
        const bool branch_taken_0x1b90fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b90fc) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B9104u;
    // 0x1b9104: 0x108001a1  beqz        $a0, . + 4 + (0x1A1 << 2)
    ctx->pc = 0x1B9104u;
    {
        const bool branch_taken_0x1b9104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9104) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B910Cu;
    // 0x1b910c: 0x1000019f  b           . + 4 + (0x19F << 2)
    ctx->pc = 0x1B910Cu;
    {
        const bool branch_taken_0x1b910c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b910c) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B9114u;
}
