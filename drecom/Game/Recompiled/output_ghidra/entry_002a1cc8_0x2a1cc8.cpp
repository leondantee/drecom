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

// Function: entry_002a1cc8
// Address: 0x2a1cc8 - 0x2a1d84
void entry_002a1cc8_0x2a1cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a1cc8_0x2a1cc8");
#endif

    switch (ctx->pc) {
        case 0x2a1d08u: goto label_2a1d08;
        case 0x2a1d3cu: goto label_2a1d3c;
        default: break;
    }

    ctx->pc = 0x2a1cc8u;

    // 0x2a1cc8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2a1cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1ccc: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x2a1cccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x2a1cd0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2a1cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a1cd4: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x2a1cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a1cd8: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x2a1cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2a1cdc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a1cdcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a1ce0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2a1ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2a1ce4: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2A1CE4u;
    {
        const bool branch_taken_0x2a1ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1ce4) {
            ctx->pc = 0x2A1D84u;
            return;
        }
    }
    ctx->pc = 0x2A1CECu;
    // 0x2a1cec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1cf0: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2a1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2a1cf4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2a1cf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1cf8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2a1cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a1cfc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2a1cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2a1d00: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A1D00u;
    SET_GPR_U32(ctx, 31, 0x2A1D08u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A1D00u, 0x2A1D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D08u;
label_2a1d08:
    // 0x2a1d08: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2a1d0c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a1d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a1d10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a1d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a1d14: 0x0  nop
    ctx->pc = 0x2a1d14u;
    // NOP
    // 0x2a1d18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a1d18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a1d1c: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x2a1d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x2a1d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1d24: 0x0  nop
    ctx->pc = 0x2a1d24u;
    // NOP
    // 0x2a1d28: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a1d28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a1d2c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2a1d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1d30: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a1d30u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a1d34: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A1D34u;
    SET_GPR_U32(ctx, 31, 0x2A1D3Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A1D34u, 0x2A1D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D3Cu;
label_2a1d3c:
    // 0x2a1d3c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2a1d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2a1d40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1d44: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a1d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a1d48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a1d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a1d4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a1d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a1d50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a1d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a1d54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a1d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a1d58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a1d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a1d5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a1d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a1d60: 0x34440108  ori         $a0, $v0, 0x108
    ctx->pc = 0x2a1d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)264);
    // 0x2a1d64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1d68: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a1d6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a1d6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a1d70: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a1d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a1d74: 0x244700c0  addiu       $a3, $v0, 0xC0
    ctx->pc = 0x2a1d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2a1d78: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a1d78u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a1d7c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A1D7Cu;
    SET_GPR_U32(ctx, 31, 0x2A1D84u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A1D7Cu, 0x2A1D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D84u;
}
