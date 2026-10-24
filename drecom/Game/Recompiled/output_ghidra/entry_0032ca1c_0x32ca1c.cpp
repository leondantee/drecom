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

// Function: entry_0032ca1c
// Address: 0x32ca1c - 0x32ca58
void entry_0032ca1c_0x32ca1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ca1c_0x32ca1c");
#endif

    ctx->pc = 0x32ca1cu;

    // 0x32ca1c: 0x26710420  addiu       $s1, $s3, 0x420
    ctx->pc = 0x32ca1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1056));
    // 0x32ca20: 0x26720c20  addiu       $s2, $s3, 0xC20
    ctx->pc = 0x32ca20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 3104));
    // 0x32ca24: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x32ca24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x32ca28: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32ca28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32ca2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ca30: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32CA30u;
    {
        const bool branch_taken_0x32ca30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32ca30) {
            ctx->pc = 0x32CA58u;
            return;
        }
    }
    ctx->pc = 0x32CA38u;
    // 0x32ca38: 0x8662000e  lh          $v0, 0xE($s3)
    ctx->pc = 0x32ca38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x32ca3c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32ca3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32ca40: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32ca40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32ca44: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x32ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x32ca48: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x32ca48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32ca4c: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x32ca4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    // 0x32ca50: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x32ca50u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32ca54: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    ctx->pc = 0x32ca58u;
}
