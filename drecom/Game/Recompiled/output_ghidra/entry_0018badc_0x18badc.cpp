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

// Function: entry_0018badc
// Address: 0x18badc - 0x18bb10
void entry_0018badc_0x18badc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018badc_0x18badc");
#endif

    ctx->pc = 0x18badcu;

    // 0x18badc: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x18badcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x18bae0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x18bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x18bae4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18bae8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x18bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x18baec: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x18baecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18baf0: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18baf4: 0x2463e890  addiu       $v1, $v1, -0x1770
    ctx->pc = 0x18baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961296));
    // 0x18baf8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18baf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18bafc: 0x90830097  lbu         $v1, 0x97($a0)
    ctx->pc = 0x18bafcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 151)));
    // 0x18bb00: 0x306300df  andi        $v1, $v1, 0xDF
    ctx->pc = 0x18bb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)223);
    // 0x18bb04: 0xa0830097  sb          $v1, 0x97($a0)
    ctx->pc = 0x18bb04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 151), (uint8_t)GPR_U32(ctx, 3));
    // 0x18bb08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18bb08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18bb0c: 0x0  nop
    ctx->pc = 0x18bb0cu;
    // NOP
    ctx->pc = 0x18bb10u;
}
