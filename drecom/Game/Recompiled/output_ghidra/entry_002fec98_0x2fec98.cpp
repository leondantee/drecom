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

// Function: entry_002fec98
// Address: 0x2fec98 - 0x2fece8
void entry_002fec98_0x2fec98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fec98_0x2fec98");
#endif

    ctx->pc = 0x2fec98u;

    // 0x2fec98: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fec98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fec9c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2feca0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x2feca0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2feca4: 0x14200084  bnez        $at, . + 4 + (0x84 << 2)
    ctx->pc = 0x2FECA4u;
    {
        const bool branch_taken_0x2feca4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2feca4) {
            ctx->pc = 0x2FEEB8u;
            return;
        }
    }
    ctx->pc = 0x2FECACu;
    // 0x2fecac: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fecacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fecb0: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fecb4: 0x286100c8  slti        $at, $v1, 0xC8
    ctx->pc = 0x2fecb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x2fecb8: 0x1020007f  beqz        $at, . + 4 + (0x7F << 2)
    ctx->pc = 0x2FECB8u;
    {
        const bool branch_taken_0x2fecb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fecb8) {
            ctx->pc = 0x2FEEB8u;
            return;
        }
    }
    ctx->pc = 0x2FECC0u;
    // 0x2fecc0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fecc4: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fecc8: 0x28610050  slti        $at, $v1, 0x50
    ctx->pc = 0x2fecc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x2feccc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FECCCu;
    {
        const bool branch_taken_0x2feccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2feccc) {
            ctx->pc = 0x2FECE8u;
            return;
        }
    }
    ctx->pc = 0x2FECD4u;
    // 0x2fecd4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fecd8: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fecdc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2fecdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2fece0: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x2FECE0u;
    {
        const bool branch_taken_0x2fece0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fece0) {
            ctx->pc = 0x2FEEB8u;
            return;
        }
    }
    ctx->pc = 0x2FECE8u;
}
