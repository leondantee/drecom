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

// Function: entry_00139218
// Address: 0x139218 - 0x139284
void entry_00139218_0x139218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139218_0x139218");
#endif

    ctx->pc = 0x139218u;

    // 0x139218: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x139218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x13921c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13921cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x139220: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x139220u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x139224: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x139224u;
    {
        const bool branch_taken_0x139224 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x139224) {
            ctx->pc = 0x139284u;
            return;
        }
    }
    ctx->pc = 0x13922Cu;
    // 0x13922c: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x13922cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x139230: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x139230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x139234: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x139234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x139238: 0x24644ec8  addiu       $a0, $v1, 0x4EC8
    ctx->pc = 0x139238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20168));
    // 0x13923c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x13923cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x139240: 0x90720000  lbu         $s2, 0x0($v1)
    ctx->pc = 0x139240u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139244: 0x325400ff  andi        $s4, $s2, 0xFF
    ctx->pc = 0x139244u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x139248: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x139248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x13924c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x13924cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x139250: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x139250u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x139254: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x139254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x139258: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x139258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x13925c: 0x709021  addu        $s2, $v1, $s0
    ctx->pc = 0x13925cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x139260: 0x8e550034  lw          $s5, 0x34($s2)
    ctx->pc = 0x139260u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x139264: 0x72a0a628  paddub      $s4, $s5, $zero
    ctx->pc = 0x139264u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x139268: 0x8e950024  lw          $s5, 0x24($s4)
    ctx->pc = 0x139268u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x13926c: 0x36a50002  ori         $a1, $s5, 0x2
    ctx->pc = 0x13926cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
    // 0x139270: 0xae850024  sw          $a1, 0x24($s4)
    ctx->pc = 0x139270u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 5));
    // 0x139274: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x139274u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x139278: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x139278u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x13927c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13927cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x139280: 0xa263009c  sb          $v1, 0x9C($s3)
    ctx->pc = 0x139280u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x139284u;
}
