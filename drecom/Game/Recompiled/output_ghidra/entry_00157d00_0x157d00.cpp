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

// Function: entry_00157d00
// Address: 0x157d00 - 0x157df4
void entry_00157d00_0x157d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157d00_0x157d00");
#endif

    switch (ctx->pc) {
        case 0x157d08u: goto label_157d08;
        default: break;
    }

    ctx->pc = 0x157d00u;

    // 0x157d00: 0xc06765c  jal         func_19D970
    ctx->pc = 0x157D00u;
    SET_GPR_U32(ctx, 31, 0x157D08u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x157D00u, 0x157D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D08u;
label_157d08:
    // 0x157d08: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x157d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x157d0c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x157d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x157d10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157d14: 0x0  nop
    ctx->pc = 0x157d14u;
    // NOP
    // 0x157d18: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x157d18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157d1c: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157d20: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157d24: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x157d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x157d28: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x157d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157d2c: 0x3c164370  lui         $s6, 0x4370
    ctx->pc = 0x157d2cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)17264 << 16));
    // 0x157d30: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x157d30u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157d34: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x157d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157d38: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x157d38u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157d3c: 0x3c043ecc  lui         $a0, 0x3ECC
    ctx->pc = 0x157d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16076 << 16));
    // 0x157d40: 0x3485cccd  ori         $a1, $a0, 0xCCCD
    ctx->pc = 0x157d40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x157d44: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x157d44u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157d48: 0x0  nop
    ctx->pc = 0x157d48u;
    // NOP
    // 0x157d4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157d4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157d50: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x157d50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157d54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x157d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x157d58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x157d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157d5c: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x157d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157d60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x157d60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157d64: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x157d64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x157d68: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x157d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157d6c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x157d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x157d70: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x157d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157d74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157d74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157d78: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x157d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x157d7c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157d80: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157d84: 0x2444f7d0  addiu       $a0, $v0, -0x830
    ctx->pc = 0x157d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157d88: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x157d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x157d8c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x157d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157d90: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157d94: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x157d94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157d98: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157d9c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x157d9cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157da0: 0x0  nop
    ctx->pc = 0x157da0u;
    // NOP
    // 0x157da4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157da8: 0x0  nop
    ctx->pc = 0x157da8u;
    // NOP
    // 0x157dac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x157dacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157db0: 0x0  nop
    ctx->pc = 0x157db0u;
    // NOP
    // 0x157db4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x157DB4u;
    {
        const bool branch_taken_0x157db4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x157db4) {
            ctx->pc = 0x157DF4u;
            return;
        }
    }
    ctx->pc = 0x157DBCu;
    // 0x157dbc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157dc0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157dc4: 0x2456f7d0  addiu       $s6, $v0, -0x830
    ctx->pc = 0x157dc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157dc8: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x157dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x157dcc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x157dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157dd0: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157dd4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x157dd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157dd8: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157ddc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x157ddcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157de0: 0x0  nop
    ctx->pc = 0x157de0u;
    // NOP
    // 0x157de4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x157de4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x157de8: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x157de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x157dec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x157DECu;
    {
        const bool branch_taken_0x157dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157dec) {
            ctx->pc = 0x157E20u;
            return;
        }
    }
    ctx->pc = 0x157DF4u;
}
