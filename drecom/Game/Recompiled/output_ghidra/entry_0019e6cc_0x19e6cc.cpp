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

// Function: entry_0019e6cc
// Address: 0x19e6cc - 0x19e760
void entry_0019e6cc_0x19e6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e6cc_0x19e6cc");
#endif

    ctx->pc = 0x19e6ccu;

    // 0x19e6cc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e6d0: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e6d4: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x19e6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x19e6d8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e6dc: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e6e0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19e6e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e6e4: 0x304300df  andi        $v1, $v0, 0xDF
    ctx->pc = 0x19e6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x19e6e8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e6ec: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e6f0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x19e6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19e6f4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e6f8: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e6fc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19e6fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e700: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x19e700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x19e704: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e708: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e708u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e70c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x19e70cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19e710: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e714: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e714u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e718: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x19e718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19e71c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19e71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e720: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x19e720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19e724: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x19e724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x19e728: 0x3c02b60b  lui         $v0, 0xB60B
    ctx->pc = 0x19e728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46603 << 16));
    // 0x19e72c: 0x344260b7  ori         $v0, $v0, 0x60B7
    ctx->pc = 0x19e72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24759);
    // 0x19e730: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x19e730u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19e734: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x19e734u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x19e738: 0x0  nop
    ctx->pc = 0x19e738u;
    // NOP
    // 0x19e73c: 0x1010  mfhi        $v0
    ctx->pc = 0x19e73cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19e740: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19e740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19e744: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x19e744u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x19e748: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19e748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e74c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e750: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e750u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e754: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x19e754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x19e758: 0xa38080bc  sb          $zero, -0x7F44($gp)
    ctx->pc = 0x19e758u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934716), (uint8_t)GPR_U32(ctx, 0));
    // 0x19e75c: 0xa38080c4  sb          $zero, -0x7F3C($gp)
    ctx->pc = 0x19e75cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934724), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x19e760u;
}
