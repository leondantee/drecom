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

// Function: caseD_1
// Address: 0x1bd980 - 0x1bd9f4
void caseD_1_0x1bd980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1bd980");
#endif

    switch (ctx->pc) {
        case 0x1bd9a4u: goto label_1bd9a4;
        case 0x1bd9f0u: goto label_1bd9f0;
        default: break;
    }

    ctx->pc = 0x1bd980u;

    // 0x1bd980: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd984: 0x906409da  lbu         $a0, 0x9DA($v1)
    ctx->pc = 0x1bd984u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2522)));
    // 0x1bd988: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1bd988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1bd98c: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x1bd98cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1bd990: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1bd990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bd994: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BD994u;
    {
        const bool branch_taken_0x1bd994 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bd994) {
            ctx->pc = 0x1BD9F4u;
            return;
        }
    }
    ctx->pc = 0x1BD99Cu;
    // 0x1bd99c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1BD99Cu;
    SET_GPR_U32(ctx, 31, 0x1BD9A4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1BD99Cu, 0x1BD9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD9A4u;
label_1bd9a4:
    // 0x1bd9a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bd9a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bd9a8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bd9a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd9ac: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x1bd9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1bd9b0: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1bd9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1bd9b4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1bd9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1bd9b8: 0x246452d8  addiu       $a0, $v1, 0x52D8
    ctx->pc = 0x1bd9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 21208));
    // 0x1bd9bc: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1bd9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bd9c0: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x1bd9c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd9c4: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x1bd9c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1bd9c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd9cc: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1bd9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1bd9d0: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1bd9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1bd9d4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1bd9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1bd9d8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1bd9d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd9dc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1bd9dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1bd9e0: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1bd9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1bd9e4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1bd9e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bd9e8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1BD9E8u;
    SET_GPR_U32(ctx, 31, 0x1BD9F0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1BD9E8u, 0x1BD9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD9F0u;
label_1bd9f0:
    // 0x1bd9f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bd9f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1bd9f4u;
}
