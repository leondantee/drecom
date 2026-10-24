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

// Function: entry_00187a54
// Address: 0x187a54 - 0x187ab4
void entry_00187a54_0x187a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187a54_0x187a54");
#endif

    ctx->pc = 0x187a54u;

    // 0x187a54: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x187a58: 0xc421ef48  lwc1        $f1, -0x10B8($at)
    ctx->pc = 0x187a58u;
    { uint32_t bits = FAST_READ32(0x3EEF48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187a5c: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x187a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x187a60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x187a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x187a64: 0x0  nop
    ctx->pc = 0x187a64u;
    // NOP
    // 0x187a68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x187a68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x187a6c: 0x0  nop
    ctx->pc = 0x187a6cu;
    // NOP
    // 0x187a70: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x187A70u;
    {
        const bool branch_taken_0x187a70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x187a70) {
            ctx->pc = 0x187AB4u;
            return;
        }
    }
    ctx->pc = 0x187A78u;
    // 0x187a78: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187a7c: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x187a7cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x187a80: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x187a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x187a84: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x187a84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x187a88: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x187a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x187a8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187a90: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x187a90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x187a94: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x187a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x187a98: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x187a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x187a9c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x187a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187aa0: 0x8ca40158  lw          $a0, 0x158($a1)
    ctx->pc = 0x187aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 344)));
    // 0x187aa4: 0x3c03f2ff  lui         $v1, 0xF2FF
    ctx->pc = 0x187aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62207 << 16));
    // 0x187aa8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x187aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x187aac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x187aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x187ab0: 0xaca30158  sw          $v1, 0x158($a1)
    ctx->pc = 0x187ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 344), GPR_U32(ctx, 3));
    ctx->pc = 0x187ab4u;
}
