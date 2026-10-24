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

// Function: entry_00377e80
// Address: 0x377e80 - 0x377ec0
void entry_00377e80_0x377e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377e80_0x377e80");
#endif

    ctx->pc = 0x377e80u;

    // 0x377e80: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x377e80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x377e84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x377e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x377e88: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x377e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x377e8c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x377E8Cu;
    {
        const bool branch_taken_0x377e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377e8c) {
            ctx->pc = 0x377EC0u;
            return;
        }
    }
    ctx->pc = 0x377E94u;
    // 0x377e94: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x377e94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x377e98: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x377e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x377e9c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x377e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x377ea0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x377EA0u;
    {
        const bool branch_taken_0x377ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x377ea0) {
            ctx->pc = 0x377EC0u;
            return;
        }
    }
    ctx->pc = 0x377EA8u;
    // 0x377ea8: 0x26450038  addiu       $a1, $s2, 0x38
    ctx->pc = 0x377ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x377eac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x377eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377eb0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x377eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377eb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377eb8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x377eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x377ebc: 0x0  nop
    ctx->pc = 0x377ebcu;
    // NOP
    ctx->pc = 0x377ec0u;
}
