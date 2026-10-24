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

// Function: entry_001b0654
// Address: 0x1b0654 - 0x1b06ac
void entry_001b0654_0x1b0654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0654_0x1b0654");
#endif

    ctx->pc = 0x1b0654u;

    // 0x1b0654: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1b0654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0658: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1b0658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b065c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b065cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b0660: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b0660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b0664: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1b0664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0668: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b0668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b066c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b066cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0670: 0x0  nop
    ctx->pc = 0x1b0670u;
    // NOP
    // 0x1b0674: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b0674u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0678: 0x0  nop
    ctx->pc = 0x1b0678u;
    // NOP
    // 0x1b067c: 0x45010051  bc1t        . + 4 + (0x51 << 2)
    ctx->pc = 0x1B067Cu;
    {
        const bool branch_taken_0x1b067c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b067c) {
            ctx->pc = 0x1B07C4u;
            return;
        }
    }
    ctx->pc = 0x1B0684u;
    // 0x1b0684: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b0684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0688: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b0688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b068c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b068cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0690: 0x0  nop
    ctx->pc = 0x1b0690u;
    // NOP
    // 0x1b0694: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b0694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b0698: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b0698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b069c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1b069cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1b06a0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1b06a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1b06a4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1B06A4u;
    {
        const bool branch_taken_0x1b06a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b06a4) {
            ctx->pc = 0x1B07C4u;
            return;
        }
    }
    ctx->pc = 0x1B06ACu;
}
