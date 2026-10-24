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

// Function: entry_002ff6b0
// Address: 0x2ff6b0 - 0x2ff73c
void entry_002ff6b0_0x2ff6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ff6b0_0x2ff6b0");
#endif

    ctx->pc = 0x2ff6b0u;

    // 0x2ff6b0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2ff6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff6b4: 0x8ca300d4  lw          $v1, 0xD4($a1)
    ctx->pc = 0x2ff6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x2ff6b8: 0x28610046  slti        $at, $v1, 0x46
    ctx->pc = 0x2ff6b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
    // 0x2ff6bc: 0x10200162  beqz        $at, . + 4 + (0x162 << 2)
    ctx->pc = 0x2FF6BCu;
    {
        const bool branch_taken_0x2ff6bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff6bc) {
            ctx->pc = 0x2FFC48u;
            return;
        }
    }
    ctx->pc = 0x2FF6C4u;
    // 0x2ff6c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff6c8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ff6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ff6cc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ff6ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ff6d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ff6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ff6d4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2ff6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ff6d8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2ff6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ff6dc: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2ff6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ff6e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff6e4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ff6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ff6e8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ff6e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ff6ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ff6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ff6f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ff6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ff6f4: 0x3067ff00  andi        $a3, $v1, 0xFF00
    ctx->pc = 0x2ff6f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ff6f8: 0x71a02  srl         $v1, $a3, 8
    ctx->pc = 0x2ff6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x2ff6fc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2ff6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ff700: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff704: 0xac267508  sw          $a2, 0x7508($at)
    ctx->pc = 0x2ff704u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ff708: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x2ff708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2ff70c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2ff70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ff710: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2ff710u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2ff714: 0x0  nop
    ctx->pc = 0x2ff714u;
    // NOP
    // 0x2ff718: 0x0  nop
    ctx->pc = 0x2ff718u;
    // NOP
    // 0x2ff71c: 0x1810  mfhi        $v1
    ctx->pc = 0x2ff71cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ff720: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF720u;
    {
        const bool branch_taken_0x2ff720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff720) {
            ctx->pc = 0x2FF73Cu;
            return;
        }
    }
    ctx->pc = 0x2FF728u;
    // 0x2ff728: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ff728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff72c: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2ff72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2ff730: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x2ff730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2ff734: 0x14830093  bne         $a0, $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x2FF734u;
    {
        const bool branch_taken_0x2ff734 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ff734) {
            ctx->pc = 0x2FF984u;
            return;
        }
    }
    ctx->pc = 0x2FF73Cu;
}
