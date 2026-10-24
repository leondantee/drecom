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

// Function: entry_00259a9c
// Address: 0x259a9c - 0x259b28
void entry_00259a9c_0x259a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00259a9c_0x259a9c");
#endif

    ctx->pc = 0x259a9cu;

    // 0x259a9c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259aa0: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x259aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x259aa4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x259aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x259aa8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x259aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x259aac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x259aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259ab0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x259ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259ab4: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x259ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x259ab8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x259ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x259abc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259ac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259ac4: 0xac440370  sw          $a0, 0x370($v0)
    ctx->pc = 0x259ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 4));
    // 0x259ac8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x259ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x259acc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x259accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x259ad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259ad4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x259ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x259ad8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259adc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259ae0: 0xa440060c  sh          $zero, 0x60C($v0)
    ctx->pc = 0x259ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1548), (uint16_t)GPR_U32(ctx, 0));
    // 0x259ae4: 0x3004ffff  andi        $a0, $zero, 0xFFFF
    ctx->pc = 0x259ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x259ae8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x259ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x259aec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x259aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x259af0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259af4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x259af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x259af8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259afc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259b00: 0xa444060a  sh          $a0, 0x60A($v0)
    ctx->pc = 0x259b00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1546), (uint16_t)GPR_U32(ctx, 4));
    // 0x259b04: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x259b04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x259b08: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x259b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x259b0c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x259b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x259b10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259b14: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x259b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x259b18: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259b1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259b20: 0xa4440608  sh          $a0, 0x608($v0)
    ctx->pc = 0x259b20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1544), (uint16_t)GPR_U32(ctx, 4));
    // 0x259b24: 0x0  nop
    ctx->pc = 0x259b24u;
    // NOP
    ctx->pc = 0x259b28u;
}
