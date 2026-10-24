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

// Function: entry_001ba8f4
// Address: 0x1ba8f4 - 0x1ba980
void entry_001ba8f4_0x1ba8f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba8f4_0x1ba8f4");
#endif

    switch (ctx->pc) {
        case 0x1ba904u: goto label_1ba904;
        default: break;
    }

    ctx->pc = 0x1ba8f4u;

    // 0x1ba8f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba8f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ba8f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ba8fc: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BA8FCu;
    SET_GPR_U32(ctx, 31, 0x1BA904u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BA8FCu, 0x1BA904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA904u;
label_1ba904:
    // 0x1ba904: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ba904u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ba908: 0x108000d2  beqz        $a0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x1BA908u;
    {
        const bool branch_taken_0x1ba908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba908) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA910u;
    // 0x1ba910: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba914: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1ba914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ba918: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1ba918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1ba91c: 0xa32024  and         $a0, $a1, $v1
    ctx->pc = 0x1ba91cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1ba920: 0x108000cc  beqz        $a0, . + 4 + (0xCC << 2)
    ctx->pc = 0x1BA920u;
    {
        const bool branch_taken_0x1ba920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba920) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA928u;
    // 0x1ba928: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1ba928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba92c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1ba92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ba930: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1ba930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
    // 0x1ba934: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x1ba934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1ba938: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1ba938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1ba93c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1ba93cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1ba940: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba944: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1ba944u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1ba948: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ba948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ba94c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ba94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ba950: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BA950u;
    {
        const bool branch_taken_0x1ba950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ba950) {
            ctx->pc = 0x1BA980u;
            return;
        }
    }
    ctx->pc = 0x1BA958u;
    // 0x1ba958: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ba958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba95c: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA95Cu;
    {
        const bool branch_taken_0x1ba95c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1ba95c) {
            ctx->pc = 0x1BA980u;
            return;
        }
    }
    ctx->pc = 0x1BA964u;
    // 0x1ba964: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ba964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ba968: 0x106400ba  beq         $v1, $a0, . + 4 + (0xBA << 2)
    ctx->pc = 0x1BA968u;
    {
        const bool branch_taken_0x1ba968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ba968) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA970u;
    // 0x1ba970: 0x106000b8  beqz        $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x1BA970u;
    {
        const bool branch_taken_0x1ba970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba970) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA978u;
    // 0x1ba978: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x1BA978u;
    {
        const bool branch_taken_0x1ba978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba978) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA980u;
}
