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

// Function: caseD_7
// Address: 0x138110 - 0x138180
void caseD_7_0x138110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x138110");
#endif

    ctx->pc = 0x138110u;

    // 0x138110: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x138110u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x138114: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x138114u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x138118: 0x2a01000b  slti        $at, $s0, 0xB
    ctx->pc = 0x138118u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x13811c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x13811Cu;
    {
        const bool branch_taken_0x13811c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13811c) {
            ctx->pc = 0x138180u;
            return;
        }
    }
    ctx->pc = 0x138124u;
    // 0x138124: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x138124u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x138128: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x138128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13812c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x13812cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x138130: 0x24634ec8  addiu       $v1, $v1, 0x4EC8
    ctx->pc = 0x138130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20168));
    // 0x138134: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x138134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x138138: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x138138u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13813c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x13813cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x138140: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x138140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x138144: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x138144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x138148: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x138148u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13814c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x13814cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x138150: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x138150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x138154: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x138154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x138158: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x138158u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x13815c: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x13815cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x138160: 0x70a0a628  paddub      $s4, $a1, $zero
    ctx->pc = 0x138160u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x138164: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x138164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x138168: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x138168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x13816c: 0xae830024  sw          $v1, 0x24($s4)
    ctx->pc = 0x13816cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
    // 0x138170: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x138170u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x138174: 0x9264009c  lbu         $a0, 0x9C($s3)
    ctx->pc = 0x138174u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x138178: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x138178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13817c: 0xa263009c  sb          $v1, 0x9C($s3)
    ctx->pc = 0x13817cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x138180u;
}
