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

// Function: entry_001f9c48
// Address: 0x1f9c48 - 0x1f9d04
void entry_001f9c48_0x1f9c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9c48_0x1f9c48");
#endif

    ctx->pc = 0x1f9c48u;

    // 0x1f9c48: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9c4c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9c50: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x1f9c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
    // 0x1f9c54: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1f9c54u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f9c58: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x1f9c58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1f9c5c: 0xde0400e8  ld          $a0, 0xE8($s0)
    ctx->pc = 0x1f9c5cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1f9c60: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f9c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f9c64: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1f9c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1f9c68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f9c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f9c6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f9c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f9c70: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1f9c70u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
    // 0x1f9c74: 0xde0300e8  ld          $v1, 0xE8($s0)
    ctx->pc = 0x1f9c74u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1f9c78: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x1f9c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1f9c7c: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1f9c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
    // 0x1f9c80: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9c84: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9c88: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x1f9c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f9c8c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1f9c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1f9c90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f9c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f9c94: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1F9C94u;
    {
        const bool branch_taken_0x1f9c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9c94) {
            ctx->pc = 0x1F9D78u;
            return;
        }
    }
    ctx->pc = 0x1F9C9Cu;
    // 0x1f9c9c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9ca0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1f9ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f9ca4: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1f9ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x1f9ca8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9ca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9cac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f9cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f9cb0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f9cb0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9cb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f9cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f9cb8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f9cb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9cbc: 0x0  nop
    ctx->pc = 0x1f9cbcu;
    // NOP
    // 0x1f9cc0: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x1F9CC0u;
    {
        const bool branch_taken_0x1f9cc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9cc0) {
            ctx->pc = 0x1F9D04u;
            return;
        }
    }
    ctx->pc = 0x1F9CC8u;
    // 0x1f9cc8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9ccc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9cd0: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x1f9cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9cd4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9cd8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f9cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9cdc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f9cdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f9ce0: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f9ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1f9ce4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9ce8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9cec: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x1f9cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x1f9cf0: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1f9cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1f9cf4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9cf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9cf8: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x1f9cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9cfc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9cfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9d00: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x1f9d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    ctx->pc = 0x1f9d04u;
}
