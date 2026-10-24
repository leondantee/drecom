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

// Function: entry_002cec40
// Address: 0x2cec40 - 0x2cec98
void entry_002cec40_0x2cec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cec40_0x2cec40");
#endif

    ctx->pc = 0x2cec40u;

    // 0x2cec40: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cec40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2cec44: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2cec44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2cec48: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x2cec48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2cec4c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x2cec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2cec50: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x2cec50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2cec54: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2cec54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2cec58: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2cec58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2cec5c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cec5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2cec60: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2cec60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2cec64: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2cec64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2cec68: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cec68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cec6c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2cec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cec70: 0x30a3ff00  andi        $v1, $a1, 0xFF00
    ctx->pc = 0x2cec70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x2cec74: 0x32202  srl         $a0, $v1, 8
    ctx->pc = 0x2cec74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2cec78: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2cec78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2cec7c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cec7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2cec80: 0xac247508  sw          $a0, 0x7508($at)
    ctx->pc = 0x2cec80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2cec84: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2cec84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2cec88: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2cec88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2cec8c: 0x2465003c  addiu       $a1, $v1, 0x3C
    ctx->pc = 0x2cec8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x2cec90: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cec90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cec94: 0xac851350  sw          $a1, 0x1350($a0)
    ctx->pc = 0x2cec94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4944), GPR_U32(ctx, 5));
    ctx->pc = 0x2cec98u;
}
