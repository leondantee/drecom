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

// Function: entry_001bc8b8
// Address: 0x1bc8b8 - 0x1bc940
void entry_001bc8b8_0x1bc8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc8b8_0x1bc8b8");
#endif

    switch (ctx->pc) {
        case 0x1bc8c4u: goto label_1bc8c4;
        default: break;
    }

    ctx->pc = 0x1bc8b8u;

    // 0x1bc8b8: 0x24040081  addiu       $a0, $zero, 0x81
    ctx->pc = 0x1bc8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x1bc8bc: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BC8BCu;
    SET_GPR_U32(ctx, 31, 0x1BC8C4u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BC8BCu, 0x1BC8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8C4u;
label_1bc8c4:
    // 0x1bc8c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bc8c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bc8c8: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1BC8C8u;
    {
        const bool branch_taken_0x1bc8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc8c8) {
            ctx->pc = 0x1BC954u;
            return;
        }
    }
    ctx->pc = 0x1BC8D0u;
    // 0x1bc8d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc8d4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bc8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bc8d8: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1bc8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1bc8dc: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1bc8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1bc8e0: 0x10600212  beqz        $v1, . + 4 + (0x212 << 2)
    ctx->pc = 0x1BC8E0u;
    {
        const bool branch_taken_0x1bc8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc8e0) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC8E8u;
    // 0x1bc8e8: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1bc8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc8ec: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1bc8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1bc8f0: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1bc8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1bc8f4: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x1bc8f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bc8f8: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x1bc8f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1bc8fc: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x1bc8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
    // 0x1bc900: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc904: 0x908313a6  lbu         $v1, 0x13A6($a0)
    ctx->pc = 0x1bc904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
    // 0x1bc908: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1bc908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bc90c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bc90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bc910: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC910u;
    {
        const bool branch_taken_0x1bc910 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bc910) {
            ctx->pc = 0x1BC940u;
            return;
        }
    }
    ctx->pc = 0x1BC918u;
    // 0x1bc918: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bc918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc91c: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC91Cu;
    {
        const bool branch_taken_0x1bc91c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bc91c) {
            ctx->pc = 0x1BC940u;
            return;
        }
    }
    ctx->pc = 0x1BC924u;
    // 0x1bc924: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bc924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc928: 0x10a30200  beq         $a1, $v1, . + 4 + (0x200 << 2)
    ctx->pc = 0x1BC928u;
    {
        const bool branch_taken_0x1bc928 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bc928) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC930u;
    // 0x1bc930: 0x10a001fe  beqz        $a1, . + 4 + (0x1FE << 2)
    ctx->pc = 0x1BC930u;
    {
        const bool branch_taken_0x1bc930 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc930) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC938u;
    // 0x1bc938: 0x100001fc  b           . + 4 + (0x1FC << 2)
    ctx->pc = 0x1BC938u;
    {
        const bool branch_taken_0x1bc938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc938) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC940u;
}
