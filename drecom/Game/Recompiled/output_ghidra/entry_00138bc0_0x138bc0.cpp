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

// Function: entry_00138bc0
// Address: 0x138bc0 - 0x138c08
void entry_00138bc0_0x138bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138bc0_0x138bc0");
#endif

    ctx->pc = 0x138bc0u;

    // 0x138bc0: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x138bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138bc4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x138bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x138bc8: 0x24634ed8  addiu       $v1, $v1, 0x4ED8
    ctx->pc = 0x138bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20184));
    // 0x138bcc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x138bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x138bd0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x138bd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138bd4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x138bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x138bd8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x138bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x138bdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x138bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x138be0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x138be0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x138be4: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x138be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x138be8: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x138be8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x138bec: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x138becu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x138bf0: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x138bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x138bf4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x138bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x138bf8: 0xae830024  sw          $v1, 0x24($s4)
    ctx->pc = 0x138bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
    // 0x138bfc: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x138bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x138c00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x138c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138c04: 0x0  nop
    ctx->pc = 0x138c04u;
    // NOP
    ctx->pc = 0x138c08u;
}
