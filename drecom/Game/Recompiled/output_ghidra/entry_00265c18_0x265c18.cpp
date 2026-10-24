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

// Function: entry_00265c18
// Address: 0x265c18 - 0x265cb4
void entry_00265c18_0x265c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265c18_0x265c18");
#endif

    switch (ctx->pc) {
        case 0x265c60u: goto label_265c60;
        case 0x265c6cu: goto label_265c6c;
        default: break;
    }

    ctx->pc = 0x265c18u;

    // 0x265c18: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x265c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x265c1c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x265c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x265c20: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x265c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
    // 0x265c24: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x265c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x265c28: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x265c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x265c2c: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x265c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
    // 0x265c30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x265c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265c34: 0x2e3f021  addu        $fp, $s7, $v1
    ctx->pc = 0x265c34u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x265c38: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x265c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x265c3c: 0x107e003c  beq         $v1, $fp, . + 4 + (0x3C << 2)
    ctx->pc = 0x265C3Cu;
    {
        const bool branch_taken_0x265c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        if (branch_taken_0x265c3c) {
            ctx->pc = 0x265D30u;
            return;
        }
    }
    ctx->pc = 0x265C44u;
    // 0x265c44: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x265c44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x265c48: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x265c48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x265c4c: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x265c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x265c50: 0x72a03e28  paddub      $a3, $s5, $zero
    ctx->pc = 0x265c50u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x265c54: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x265c54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x265c58: 0xc05e858  jal         func_17A160
    ctx->pc = 0x265C58u;
    SET_GPR_U32(ctx, 31, 0x265C60u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x265C58u, 0x265C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265C60u;
label_265c60:
    // 0x265c60: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x265c60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x265c64: 0xc05e964  jal         func_17A590
    ctx->pc = 0x265C64u;
    SET_GPR_U32(ctx, 31, 0x265C6Cu);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x265C64u, 0x265C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265C6Cu;
label_265c6c:
    // 0x265c6c: 0xafb400d4  sw          $s4, 0xD4($sp)
    ctx->pc = 0x265c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 20));
    // 0x265c70: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x265c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x265c74: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x265c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x265c78: 0xafb500c4  sw          $s5, 0xC4($sp)
    ctx->pc = 0x265c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 21));
    // 0x265c7c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x265c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x265c80: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x265c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x265c84: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x265c84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x265c88: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x265c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x265c8c: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x265c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x265c90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x265c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x265c94: 0x94630012  lhu         $v1, 0x12($v1)
    ctx->pc = 0x265c94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x265c98: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x265c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x265c9c: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x265c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x265ca0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x265ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x265ca4: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x265ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x265ca8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x265ca8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x265cac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x265CACu;
    {
        const bool branch_taken_0x265cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265cac) {
            ctx->pc = 0x265CE0u;
            return;
        }
    }
    ctx->pc = 0x265CB4u;
}
