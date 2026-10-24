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

// Function: entry_0020c688
// Address: 0x20c688 - 0x20c728
void entry_0020c688_0x20c688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c688_0x20c688");
#endif

    ctx->pc = 0x20c688u;

    // 0x20c688: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20c688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20c68c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x20c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x20c690: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x20c690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20c694: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20c694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20c698: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20c698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20c69c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x20c69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20c6a0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x20c6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x20c6a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20c6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20c6a8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x20c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x20c6ac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x20c6acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20c6b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20c6b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20c6b8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x20c6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x20c6bc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x20c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x20c6c0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x20c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x20c6c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20c6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20c6c8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x20c6c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x20c6cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x20c6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20c6d0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x20c6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x20c6d4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x20C6D4u;
    {
        const bool branch_taken_0x20c6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c6d4) {
            ctx->pc = 0x20C728u;
            return;
        }
    }
    ctx->pc = 0x20C6DCu;
    // 0x20c6dc: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x20c6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x20c6e0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x20c6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x20c6e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c6e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c6e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c6ec: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x20c6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x20c6f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c6f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c6f8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20c6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20c6fc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20c6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20c700: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c704: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20c704u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20c708: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c70c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20c70cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c710: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c714: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20c714u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c718: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c71c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x20c720: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20C720u;
    {
        const bool branch_taken_0x20c720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c720) {
            ctx->pc = 0x20C76Cu;
            return;
        }
    }
    ctx->pc = 0x20C728u;
}
