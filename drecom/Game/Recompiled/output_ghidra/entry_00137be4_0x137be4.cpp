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

// Function: entry_00137be4
// Address: 0x137be4 - 0x137c18
void entry_00137be4_0x137be4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137be4_0x137be4");
#endif

    ctx->pc = 0x137be4u;

    // 0x137be4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x137be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137be8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x137be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x137bec: 0x24424eb0  addiu       $v0, $v0, 0x4EB0
    ctx->pc = 0x137becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20144));
    // 0x137bf0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x137bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x137bf4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x137bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137bf8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x137bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x137bfc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x137bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x137c00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x137c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137c04: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x137c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x137c08: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x137c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x137c0c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x137c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137c10: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x137c10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x137c14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x137c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x137c18u;
}
