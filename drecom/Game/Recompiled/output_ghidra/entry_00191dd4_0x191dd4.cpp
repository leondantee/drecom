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

// Function: entry_00191dd4
// Address: 0x191dd4 - 0x191ee4
void entry_00191dd4_0x191dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191dd4_0x191dd4");
#endif

    switch (ctx->pc) {
        case 0x191e18u: goto label_191e18;
        default: break;
    }

    ctx->pc = 0x191dd4u;

    // 0x191dd4: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x191dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191dd8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x191dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191ddc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x191ddcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x191de0: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x191de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x191de4: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x191de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191de8: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x191de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191dec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x191decu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x191df0: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x191df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x191df4: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x191df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191df8: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x191df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191dfc: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x191dfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x191e00: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x191e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191e04: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x191e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191e08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x191e08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x191e0c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x191e0cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x191e10: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x191E10u;
    SET_GPR_U32(ctx, 31, 0x191E18u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x191E10u, 0x191E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191E18u;
label_191e18:
    // 0x191e18: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x191e18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x191e1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x191e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191e20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191e24: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x191e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x191e28: 0xc7a2010c  lwc1        $f2, 0x10C($sp)
    ctx->pc = 0x191e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191e2c: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x191e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191e30: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x191e30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x191e34: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x191e34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x191e38: 0xc6e101b4  lwc1        $f1, 0x1B4($s7)
    ctx->pc = 0x191e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191e3c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x191e3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x191e40: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x191e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191e44: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x191e44u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x191e48: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x191e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x191e4c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x191e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x191e50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191e54: 0x0  nop
    ctx->pc = 0x191e54u;
    // NOP
    // 0x191e58: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x191e58u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x191e5c: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x191e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x191e60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x191e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191e64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191e68: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x191e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x191e6c: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x191e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191e70: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x191e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191e74: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x191e74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x191e78: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x191e78u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x191e7c: 0xc6e001b4  lwc1        $f0, 0x1B4($s7)
    ctx->pc = 0x191e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191e80: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x191e80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x191e84: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x191e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191e88: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x191e88u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x191e8c: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x191e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x191e90: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x191e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x191e94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191e98: 0x0  nop
    ctx->pc = 0x191e98u;
    // NOP
    // 0x191e9c: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x191e9cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x191ea0: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x191ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191ea4: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x191ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x191ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191eac: 0x0  nop
    ctx->pc = 0x191eacu;
    // NOP
    // 0x191eb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x191eb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191eb4: 0x0  nop
    ctx->pc = 0x191eb4u;
    // NOP
    // 0x191eb8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x191EB8u;
    {
        const bool branch_taken_0x191eb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191eb8) {
            ctx->pc = 0x191EE4u;
            return;
        }
    }
    ctx->pc = 0x191EC0u;
    // 0x191ec0: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x191ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191ec4: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x191ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x191ec8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x191ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x191ecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191ed0: 0x0  nop
    ctx->pc = 0x191ed0u;
    // NOP
    // 0x191ed4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191ed8: 0x0  nop
    ctx->pc = 0x191ed8u;
    // NOP
    // 0x191edc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x191EDCu;
    {
        const bool branch_taken_0x191edc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191edc) {
            ctx->pc = 0x191EECu;
            return;
        }
    }
    ctx->pc = 0x191EE4u;
}
