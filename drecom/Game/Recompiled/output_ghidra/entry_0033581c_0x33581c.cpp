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

// Function: entry_0033581c
// Address: 0x33581c - 0x335898
void entry_0033581c_0x33581c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033581c_0x33581c");
#endif

    ctx->pc = 0x33581cu;

    // 0x33581c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33581cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x335820: 0xa2025e04  sb          $v0, 0x5E04($s0)
    ctx->pc = 0x335820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 2));
    // 0x335824: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x335824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x335828: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x335828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33582c: 0x0  nop
    ctx->pc = 0x33582cu;
    // NOP
    // 0x335830: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x335830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x335834: 0x2602663e  addiu       $v0, $s0, 0x663E
    ctx->pc = 0x335834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 26174));
    // 0x335838: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x335838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x33583c: 0x9203683f  lbu         $v1, 0x683F($s0)
    ctx->pc = 0x33583cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x335840: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x335840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x335844: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x335844u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x335848: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x335848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33584c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x33584cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x335850: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x335850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x335854: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x335854u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x335858: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x335858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x33585c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33585cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x335860: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x335860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x335864: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x335864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x335868: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x335868u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x33586c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x33586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x335870: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x335870u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x335874: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x335874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x335878: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x335878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x33587c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x33587cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x335880: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x335880u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x335884: 0x1c800004  bgtz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x335884u;
    {
        const bool branch_taken_0x335884 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x335884) {
            ctx->pc = 0x335898u;
            return;
        }
    }
    ctx->pc = 0x33588Cu;
    // 0x33588c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x33588cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x335890: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x335890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x335894: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x335894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x335898u;
}
