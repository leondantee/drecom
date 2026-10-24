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

// Function: entry_00150764
// Address: 0x150764 - 0x1507d4
void entry_00150764_0x150764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150764_0x150764");
#endif

    ctx->pc = 0x150764u;

    // 0x150764: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x150764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x150768: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x150768u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15076c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15076cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x150770: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x150770u;
    {
        const bool branch_taken_0x150770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150770) {
            ctx->pc = 0x1507D4u;
            return;
        }
    }
    ctx->pc = 0x150778u;
    // 0x150778: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x15077c: 0x904213a7  lbu         $v0, 0x13A7($v0)
    ctx->pc = 0x15077cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5031)));
    // 0x150780: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x150780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x150784: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x150784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x150788: 0x14440012  bne         $v0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x150788u;
    {
        const bool branch_taken_0x150788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x150788) {
            ctx->pc = 0x1507D4u;
            return;
        }
    }
    ctx->pc = 0x150790u;
    // 0x150790: 0x3c05c1a0  lui         $a1, 0xC1A0
    ctx->pc = 0x150790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49568 << 16));
    // 0x150794: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x150794u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150798: 0x0  nop
    ctx->pc = 0x150798u;
    // NOP
    // 0x15079c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x15079cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1507a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1507a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1507a4: 0x0  nop
    ctx->pc = 0x1507a4u;
    // NOP
    // 0x1507a8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1507a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1507ac: 0x3c06447a  lui         $a2, 0x447A
    ctx->pc = 0x1507acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17530 << 16));
    // 0x1507b0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1507b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1507b4: 0x0  nop
    ctx->pc = 0x1507b4u;
    // NOP
    // 0x1507b8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1507b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1507bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1507bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1507c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1507c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1507c4: 0x0  nop
    ctx->pc = 0x1507c4u;
    // NOP
    // 0x1507c8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1507c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1507cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1507CCu;
    {
        const bool branch_taken_0x1507cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1507cc) {
            ctx->pc = 0x150810u;
            return;
        }
    }
    ctx->pc = 0x1507D4u;
}
