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

// Function: entry_0036d730
// Address: 0x36d730 - 0x36d790
void entry_0036d730_0x36d730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d730_0x36d730");
#endif

    ctx->pc = 0x36d730u;

    // 0x36d730: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x36d730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x36d734: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x36d734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x36d738: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x36d738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x36d73c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x36d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x36d740: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36d740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36d744: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x36d744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x36d748: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x36d748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x36d74c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36d750: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x36d750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x36d754: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x36d754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x36d758: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x36d758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36d75c: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x36d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x36d760: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36d760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36d764: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36d764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36d768: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x36d768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d76c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x36d76cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36d770: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x36d770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x36d774: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36d774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36d778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d77c: 0x0  nop
    ctx->pc = 0x36d77cu;
    // NOP
    // 0x36d780: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d784: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36d784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x36d788: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x36D788u;
    {
        const bool branch_taken_0x36d788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d788) {
            ctx->pc = 0x36D848u;
            return;
        }
    }
    ctx->pc = 0x36D790u;
}
