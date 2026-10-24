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

// Function: entry_00115128
// Address: 0x115128 - 0x115160
void entry_00115128_0x115128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115128_0x115128");
#endif

    ctx->pc = 0x115128u;

    // 0x115128: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x115128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x11512c: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x11512cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x115130: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x115130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115134: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x115134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115138: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x115138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11513c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11513cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115140: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x115140u;
    {
        const bool branch_taken_0x115140 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x115140) {
            ctx->pc = 0x115178u;
            return;
        }
    }
    ctx->pc = 0x115148u;
    // 0x115148: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115148u;
    {
        const bool branch_taken_0x115148 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115148u;
        // 0x11514c: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115148) {
            ctx->pc = 0x115160u;
            return;
        }
    }
    ctx->pc = 0x115150u;
    // 0x115150: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x115150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x115154: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x115154u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x115158: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x115158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11515c: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x11515cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    ctx->pc = 0x115160u;
}
