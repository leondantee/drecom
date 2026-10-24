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

// Function: caseD_3
// Address: 0x1b5b10 - 0x1b5b84
void caseD_3_0x1b5b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1b5b10");
#endif

    switch (ctx->pc) {
        case 0x1b5b34u: goto label_1b5b34;
        case 0x1b5b80u: goto label_1b5b80;
        default: break;
    }

    ctx->pc = 0x1b5b10u;

    // 0x1b5b10: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5b14: 0x908509da  lbu         $a1, 0x9DA($a0)
    ctx->pc = 0x1b5b14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2522)));
    // 0x1b5b18: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1b5b18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1b5b1c: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x1b5b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x1b5b20: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1b5b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1b5b24: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B5B24u;
    {
        const bool branch_taken_0x1b5b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b5b24) {
            ctx->pc = 0x1B5B84u;
            return;
        }
    }
    ctx->pc = 0x1B5B2Cu;
    // 0x1b5b2c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1B5B2Cu;
    SET_GPR_U32(ctx, 31, 0x1B5B34u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1B5B2Cu, 0x1B5B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B34u;
label_1b5b34:
    // 0x1b5b34: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b5b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b5b38: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1b5b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1b5b3c: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1b5b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b5b40: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1b5b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1b5b44: 0x248352d8  addiu       $v1, $a0, 0x52D8
    ctx->pc = 0x1b5b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 21208));
    // 0x1b5b48: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b5b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b5b4c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1b5b4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b5b50: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x1b5b50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b5b54: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x1b5b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x1b5b58: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x1b5b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1b5b5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b5b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b5b60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5b64: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x1b5b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1b5b68: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1b5b68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b5b6c: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x1b5b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1b5b70: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1b5b70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1b5b74: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1b5b74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b5b78: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1B5B78u;
    SET_GPR_U32(ctx, 31, 0x1B5B80u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1B5B78u, 0x1B5B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B80u;
label_1b5b80:
    // 0x1b5b80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b5b80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b5b84u;
}
