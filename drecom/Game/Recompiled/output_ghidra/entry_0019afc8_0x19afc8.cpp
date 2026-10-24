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

// Function: entry_0019afc8
// Address: 0x19afc8 - 0x19b08c
void entry_0019afc8_0x19afc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019afc8_0x19afc8");
#endif

    switch (ctx->pc) {
        case 0x19b020u: goto label_19b020;
        case 0x19b040u: goto label_19b040;
        default: break;
    }

    ctx->pc = 0x19afc8u;

    // 0x19afc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19afcc: 0x8c641340  lw          $a0, 0x1340($v1)
    ctx->pc = 0x19afccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4928)));
    // 0x19afd0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19afd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19afd4: 0x1483004e  bne         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x19AFD4u;
    {
        const bool branch_taken_0x19afd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19afd4) {
            ctx->pc = 0x19B110u;
            return;
        }
    }
    ctx->pc = 0x19AFDCu;
    // 0x19afdc: 0x24020511  addiu       $v0, $zero, 0x511
    ctx->pc = 0x19afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x19afe0: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x19afe0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19afe4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x19afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19afe8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19afec: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19afecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19aff0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19aff0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19aff4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x19aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19aff8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x19aff8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x19affc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x19affcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x19b000: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x19b000u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x19b004: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x19b004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x19b008: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19b008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19b00c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x19b00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19b010: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x19b010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19b014: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x19b014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x19b018: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x19B018u;
    SET_GPR_U32(ctx, 31, 0x19B020u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x19B020u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19B020u) { return; }
    ctx->pc = 0x19B020u;
label_19b020:
    // 0x19b020: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x19b020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x19b024: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x19b024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x19b028: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19b028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19b02c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x19b02cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x19b030: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x19b030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19b034: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x19b034u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19b038: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x19B038u;
    SET_GPR_U32(ctx, 31, 0x19B040u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x19B038u, 0x19B040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B040u;
label_19b040:
    // 0x19b040: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b044: 0xac601340  sw          $zero, 0x1340($v1)
    ctx->pc = 0x19b044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4928), GPR_U32(ctx, 0));
    // 0x19b048: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b04c: 0x906411ef  lbu         $a0, 0x11EF($v1)
    ctx->pc = 0x19b04cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4591)));
    // 0x19b050: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b054: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x19b054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x19b058: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b05c: 0x8c631344  lw          $v1, 0x1344($v1)
    ctx->pc = 0x19b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4932)));
    // 0x19b060: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19b060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19b064: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x19B064u;
    {
        const bool branch_taken_0x19b064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b064) {
            ctx->pc = 0x19B0C4u;
            return;
        }
    }
    ctx->pc = 0x19B06Cu;
    // 0x19b06c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b070: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x19b070u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x19b074: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19b074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19b078: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b07c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B07Cu;
    {
        const bool branch_taken_0x19b07c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b07c) {
            ctx->pc = 0x19B08Cu;
            return;
        }
    }
    ctx->pc = 0x19B084u;
    // 0x19b084: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x19B084u;
    {
        const bool branch_taken_0x19b084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b084) {
            ctx->pc = 0x19B08Cu;
            return;
        }
    }
    ctx->pc = 0x19B08Cu;
}
