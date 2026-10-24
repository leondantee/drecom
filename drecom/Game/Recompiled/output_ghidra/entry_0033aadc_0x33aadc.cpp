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

// Function: entry_0033aadc
// Address: 0x33aadc - 0x33ab20
void entry_0033aadc_0x33aadc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033aadc_0x33aadc");
#endif

    ctx->pc = 0x33aadcu;

    // 0x33aadc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33aae0: 0x2021006  srlv        $v0, $v0, $s0
    ctx->pc = 0x33aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x33aae4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33aae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33aae8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x33aae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33aaec: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33aaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33aaf0: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33aaf4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x33aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33aaf8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33aaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33aafc: 0xac225440  sw          $v0, 0x5440($at)
    ctx->pc = 0x33aafcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x33ab00: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33ab04: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33ab08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ab0c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33ab0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33ab10: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x33ab10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x33ab14: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x33ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33ab18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33ab1c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x33ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x33ab20u;
}
