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

// Function: entry_001764c0
// Address: 0x1764c0 - 0x17656c
void entry_001764c0_0x1764c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001764c0_0x1764c0");
#endif

    switch (ctx->pc) {
        case 0x17652cu: goto label_17652c;
        default: break;
    }

    ctx->pc = 0x1764c0u;

    // 0x1764c0: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1764c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1764c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1764c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1764c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1764c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1764cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1764ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1764d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1764d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1764d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1764d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1764d8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1764d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1764dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1764dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1764e0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1764e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1764e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1764e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1764e8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1764e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1764ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1764ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1764f0: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1764f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1764f4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1764f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1764f8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1764f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1764fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1764fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176500: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x176500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176504: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x176504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x176508: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x176508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x17650c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17650cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176510: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x176510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176514: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x176514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x176518: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x176518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17651c: 0x244400e0  addiu       $a0, $v0, 0xE0
    ctx->pc = 0x17651cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x176520: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x176520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x176524: 0xc05da44  jal         func_176910
    ctx->pc = 0x176524u;
    SET_GPR_U32(ctx, 31, 0x17652Cu);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x176524u, 0x17652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17652Cu;
label_17652c:
    // 0x17652c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x17652cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x176530: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x176530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x176534: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x176534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x176538: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x176538u;
    {
        const bool branch_taken_0x176538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x176538) {
            ctx->pc = 0x1765FCu;
            return;
        }
    }
    ctx->pc = 0x176540u;
    // 0x176540: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x176540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x176544: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x176544u;
    {
        const bool branch_taken_0x176544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x176544) {
            ctx->pc = 0x1765CCu;
            return;
        }
    }
    ctx->pc = 0x17654Cu;
    // 0x17654c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17654cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176550: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x176550u;
    {
        const bool branch_taken_0x176550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x176550) {
            ctx->pc = 0x17659Cu;
            return;
        }
    }
    ctx->pc = 0x176558u;
    // 0x176558: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17655c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17655Cu;
    {
        const bool branch_taken_0x17655c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17655c) {
            ctx->pc = 0x17656Cu;
            return;
        }
    }
    ctx->pc = 0x176564u;
    // 0x176564: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x176564u;
    {
        const bool branch_taken_0x176564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176564) {
            ctx->pc = 0x176628u;
            return;
        }
    }
    ctx->pc = 0x17656Cu;
}
