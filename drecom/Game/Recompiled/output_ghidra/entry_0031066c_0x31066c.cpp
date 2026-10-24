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

// Function: entry_0031066c
// Address: 0x31066c - 0x3106c4
void entry_0031066c_0x31066c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031066c_0x31066c");
#endif

    ctx->pc = 0x31066cu;

    // 0x31066c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31066cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310670: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x310670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x310674: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x310674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x310678: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x310678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x31067c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x31067Cu;
    {
        const bool branch_taken_0x31067c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31067c) {
            ctx->pc = 0x3106C4u;
            return;
        }
    }
    ctx->pc = 0x310684u;
    // 0x310684: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x310684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310688: 0x8c831368  lw          $v1, 0x1368($a0)
    ctx->pc = 0x310688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4968)));
    // 0x31068c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x31068cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x310690: 0xac831368  sw          $v1, 0x1368($a0)
    ctx->pc = 0x310690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4968), GPR_U32(ctx, 3));
    // 0x310694: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x310694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310698: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x31069c: 0x247013b0  addiu       $s0, $v1, 0x13B0
    ctx->pc = 0x31069cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5040));
    // 0x3106a0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3106a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3106a4: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x3106a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x3106a8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3106a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3106ac: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3106acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3106b0: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x3106b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x3106b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3106b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3106b8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3106b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3106bc: 0x247003f0  addiu       $s0, $v1, 0x3F0
    ctx->pc = 0x3106bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1008));
    // 0x3106c0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3106c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x3106c4u;
}
