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

// Function: entry_002ceeb0
// Address: 0x2ceeb0 - 0x2cef08
void entry_002ceeb0_0x2ceeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ceeb0_0x2ceeb0");
#endif

    ctx->pc = 0x2ceeb0u;

    // 0x2ceeb0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ceeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ceeb4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ceeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ceeb8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ceeb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ceebc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ceebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ceec0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2ceec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ceec4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2ceec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ceec8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ceec8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ceecc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ceeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ceed0: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2ceed0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2ceed4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2ceed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2ceed8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ceed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ceedc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ceedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ceee0: 0x3070ff00  andi        $s0, $v1, 0xFF00
    ctx->pc = 0x2ceee0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ceee4: 0x101a02  srl         $v1, $s0, 8
    ctx->pc = 0x2ceee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x2ceee8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ceee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ceeec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ceeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ceef0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ceef0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ceef4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ceef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ceef8: 0x30a3003f  andi        $v1, $a1, 0x3F
    ctx->pc = 0x2ceef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x2ceefc: 0x2464003c  addiu       $a0, $v1, 0x3C
    ctx->pc = 0x2ceefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x2cef00: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cef00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cef04: 0xac641354  sw          $a0, 0x1354($v1)
    ctx->pc = 0x2cef04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4948), GPR_U32(ctx, 4));
    ctx->pc = 0x2cef08u;
}
