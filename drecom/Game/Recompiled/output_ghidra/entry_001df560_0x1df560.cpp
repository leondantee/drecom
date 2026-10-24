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

// Function: entry_001df560
// Address: 0x1df560 - 0x1df5b0
void entry_001df560_0x1df560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df560_0x1df560");
#endif

    ctx->pc = 0x1df560u;

label_1df560:
    // 0x1df560: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x1df560u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1df564: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x1df564u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x1df568: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x1df568u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1df56c: 0x92630003  lbu         $v1, 0x3($s3)
    ctx->pc = 0x1df56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x1df570: 0xa2060000  sb          $a2, 0x0($s0)
    ctx->pc = 0x1df570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1df574: 0xa2050001  sb          $a1, 0x1($s0)
    ctx->pc = 0x1df574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1df578: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x1df578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1df57c: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x1df57cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1df580: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1df580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1df584: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1df584u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1df588: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1df588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1df58c: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DF58Cu;
    {
        const bool branch_taken_0x1df58c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df58c) {
            ctx->pc = 0x1DF560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df560;
        }
    }
    ctx->pc = 0x1DF594u;
    // 0x1df594: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df598: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df59c: 0x8c740018  lw          $s4, 0x18($v1)
    ctx->pc = 0x1df59cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1df5a0: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x1df5a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1df5a4: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df5a8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df5ac: 0xac720050  sw          $s2, 0x50($v1)
    ctx->pc = 0x1df5acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 18));
    ctx->pc = 0x1df5b0u;
}
