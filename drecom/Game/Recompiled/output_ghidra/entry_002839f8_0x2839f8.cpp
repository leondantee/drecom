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

// Function: entry_002839f8
// Address: 0x2839f8 - 0x283a84
void entry_002839f8_0x2839f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002839f8_0x2839f8");
#endif

    switch (ctx->pc) {
        case 0x283a20u: goto label_283a20;
        default: break;
    }

    ctx->pc = 0x2839f8u;

    // 0x2839f8: 0x8e110058  lw          $s1, 0x58($s0)
    ctx->pc = 0x2839f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2839fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2839fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283a00: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x283a00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x283a04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x283a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283a08: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x283a08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283a0c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x283a0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x283a10: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x283a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x283a14: 0x34452003  ori         $a1, $v0, 0x2003
    ctx->pc = 0x283a14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8195);
    // 0x283a18: 0xc077a5c  jal         func_1DE970
    ctx->pc = 0x283A18u;
    SET_GPR_U32(ctx, 31, 0x283A20u);
    ctx->pc = 0x1DE970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE970u, 0x283A18u, 0x283A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283A20u;
label_283a20:
    // 0x283a20: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x283a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x283a24: 0x8c30fa6c  lw          $s0, -0x594($at)
    ctx->pc = 0x283a24u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61FA6Cu));
    // 0x283a28: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x283a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283a2c: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x283a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x283a30: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x283a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x283a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283a38: 0x0  nop
    ctx->pc = 0x283a38u;
    // NOP
    // 0x283a3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x283a3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x283a40: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x283a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x283a44: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x283a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283a48: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x283a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x283a4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x283a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x283a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283a54: 0x0  nop
    ctx->pc = 0x283a54u;
    // NOP
    // 0x283a58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x283a58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283a5c: 0x0  nop
    ctx->pc = 0x283a5cu;
    // NOP
    // 0x283a60: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x283A60u;
    {
        const bool branch_taken_0x283a60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x283a60) {
            ctx->pc = 0x283A84u;
            return;
        }
    }
    ctx->pc = 0x283A68u;
    // 0x283a68: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x283a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283a6c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x283a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x283a70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x283a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x283a74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283a78: 0x0  nop
    ctx->pc = 0x283a78u;
    // NOP
    // 0x283a7c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x283a7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x283a80: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x283a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    ctx->pc = 0x283a84u;
}
