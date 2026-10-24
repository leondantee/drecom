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

// Function: entry_003551f0
// Address: 0x3551f0 - 0x355220
void entry_003551f0_0x3551f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003551f0_0x3551f0");
#endif

    ctx->pc = 0x3551f0u;

    // 0x3551f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3551f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3551f4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3551f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3551f8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3551f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3551fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3551fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355200: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x355200u;
    {
        const bool branch_taken_0x355200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x355200) {
            ctx->pc = 0x355220u;
            return;
        }
    }
    ctx->pc = 0x355208u;
    // 0x355208: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x355208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35520c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x35520cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x355210: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x355210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x355214: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x355214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x355218: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x355218u;
    {
        const bool branch_taken_0x355218 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x355218) {
            ctx->pc = 0x3552F8u;
            return;
        }
    }
    ctx->pc = 0x355220u;
}
