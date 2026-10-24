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

// Function: entry_0033d718
// Address: 0x33d718 - 0x33d794
void entry_0033d718_0x33d718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d718_0x33d718");
#endif

    ctx->pc = 0x33d718u;

    // 0x33d718: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x33d718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x33d71c: 0x34420e56  ori         $v0, $v0, 0xE56
    ctx->pc = 0x33d71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3670);
    // 0x33d720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d724: 0x0  nop
    ctx->pc = 0x33d724u;
    // NOP
    // 0x33d728: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x33d728u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x33d72c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x33d72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x33d730: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33d730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33d734: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33d734u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33d738: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33d738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33d73c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33d740: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d744: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33d744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33d748: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x33d748u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33d74c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33d74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33d750: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33d750u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33d754: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33d754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33d758: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33d758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33d75c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d760: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x33d760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x33d764: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33d764u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33d768: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33d768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33d76c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33d76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33d770: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x33d770u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x33d774: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33d774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33d778: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33D778u;
    {
        const bool branch_taken_0x33d778 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x33d778) {
            ctx->pc = 0x33D794u;
            return;
        }
    }
    ctx->pc = 0x33D780u;
    // 0x33d780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d784: 0x0  nop
    ctx->pc = 0x33d784u;
    // NOP
    // 0x33d788: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33d788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33d78c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33D78Cu;
    {
        const bool branch_taken_0x33d78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d78c) {
            ctx->pc = 0x33D7B0u;
            return;
        }
    }
    ctx->pc = 0x33D794u;
}
