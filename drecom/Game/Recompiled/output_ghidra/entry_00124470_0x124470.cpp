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

// Function: entry_00124470
// Address: 0x124470 - 0x1244b8
void entry_00124470_0x124470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124470_0x124470");
#endif

    ctx->pc = 0x124470u;

    // 0x124470: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124474: 0x90440012  lbu         $a0, 0x12($v0)
    ctx->pc = 0x124474u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x124478: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x124478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x12447c: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x12447cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x124480: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x124480u;
    {
        const bool branch_taken_0x124480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124480) {
            ctx->pc = 0x1244B8u;
            return;
        }
    }
    ctx->pc = 0x124488u;
    // 0x124488: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12448c: 0x90510012  lbu         $s1, 0x12($v0)
    ctx->pc = 0x12448cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x124490: 0x323200ff  andi        $s2, $s1, 0xFF
    ctx->pc = 0x124490u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x124494: 0x2a410014  slti        $at, $s2, 0x14
    ctx->pc = 0x124494u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x124498: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x124498u;
    {
        const bool branch_taken_0x124498 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x124498) {
            ctx->pc = 0x1244B8u;
            return;
        }
    }
    ctx->pc = 0x1244A0u;
    // 0x1244a0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1244a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1244a4: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1244a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1244a8: 0xa0400c60  sb          $zero, 0xC60($v0)
    ctx->pc = 0x1244a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3168), (uint8_t)GPR_U32(ctx, 0));
    // 0x1244ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1244acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1244b0: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1244b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1244b4: 0xa0400cf0  sb          $zero, 0xCF0($v0)
    ctx->pc = 0x1244b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3312), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1244b8u;
}
